package frc.robot;

import com.revrobotics.CANSparkMax;
import com.revrobotics.CANSparkLowLevel.MotorType;
import edu.wpi.first.wpilibj.Timer;
import edu.wpi.first.util.sendable.SendableRegistry;
import edu.wpi.first.wpilibj.TimedRobot;
import edu.wpi.first.wpilibj.XboxController;
import edu.wpi.first.wpilibj.drive.DifferentialDrive;

/**
 * This is a demo program showing the use of the DifferentialDrive class. Runs the motors with split
 * arcade steering and an Xbox controller.
 */
public class Robot extends TimedRobot {

  private XboxController xboxcontroller = new XboxController(0); // IS this number the number of PDP? Or the number of the joystick? And don't use final with this line. 
  
  private static final int kLeftFrontChannel = 1; // You set this number through SparkMax.
  private static final int kLeftBackChannel = 2;
  private static final int kRightFrontChannel = 3;
  private static final int kRightBackChannel = 4;
  private static final int kShooterUpperID = 5;// For the shooter. 
  private static final int kShooterLowerID = 6;
  private static final int kLoaderID = 7;
  
  private CANSparkMax leftFrontMotor = new CANSparkMax(kLeftFrontChannel, MotorType.kBrushless); // (device ID(is not a port number of PDP), motor type)
  private CANSparkMax leftBackMotor = new CANSparkMax(kLeftBackChannel, MotorType.kBrushless);
  private CANSparkMax rightFrontMotor = new CANSparkMax(kRightFrontChannel, MotorType.kBrushless);
  private CANSparkMax rightBackMotor = new CANSparkMax(kRightBackChannel, MotorType.kBrushless);
  private CANSparkMax ShooterUpper = new CANSparkMax(kShooterUpperID, MotorType.kBrushless);// For the shooter.
  private CANSparkMax ShooterLower = new CANSparkMax(kShooterLowerID, MotorType.kBrushless);
  private CANSparkMax Loader = new CANSparkMax(kLoaderID, MotorType.kBrushless);


  private final DifferentialDrive differentialDrive = new DifferentialDrive(leftFrontMotor, rightFrontMotor);
  
  public Robot() {
    SendableRegistry.addChild(differentialDrive, leftFrontMotor);// You don't really need this. 
    SendableRegistry.addChild(differentialDrive, leftBackMotor);
    SendableRegistry.addChild(differentialDrive, rightFrontMotor);
    SendableRegistry.addChild(differentialDrive, rightBackMotor);
  }

  private final Timer m_timer=new Timer();
 
  @Override
  public void robotInit() {
    //leftFrontMotor.setInverted(true); <- Ignore this one we didn't need it. 
    //rightBackMotor.setInverted(true);
    leftBackMotor.follow(leftFrontMotor); // This makes those motors to follow the leading motor.
    rightBackMotor.follow(rightFrontMotor);
  }

  @Override 
  public void autonomousInit(){ 
    m_timer.restart();
    m_timer.reset();

  }

  @Override
  public void autonomousPeriodic(){
    if (m_timer.get()<5.0){
      differentialDrive.arcadeDrive(0.5,0.0,false);  
        
    } else{
      differentialDrive.arcadeDrive(0,0,false);
      //differentialDrive.arcadeDrive(0,0, false);
    }
  }


  @Override
  public void teleopPeriodic() {
    // Drive with split arcade drive.
    // That means that the Y axis of the left stick moves forward
    // and backward, and the X of the right stick turns left and right.
    //rightFrontMotor.setInverted(true);
    differentialDrive.arcadeDrive(-xboxcontroller.getLeftY(), -xboxcontroller.getLeftX());
    
    ShooterUpper.set(-xboxcontroller.getRightY()); // For the shooter. 
    ShooterLower.set(-xboxcontroller.getRightY());

    if(xboxcontroller.getRightBumper() == true && xboxcontroller.getLeftBumper() == true){ // If the rightbumper is pressed, the loader will take in the note inside. 
      Loader.set(0.5);
      }else if (xboxcontroller.getRightBumper() == true && xboxcontroller.getLeftBumper() == false ){
        Loader.set(-0.5);
      }
      else {
      Loader.set(0);
      }
    
    
  }
}