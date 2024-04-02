/*練習ソースコード　No.0 ほぼ自由ノート
制作者：厳　盛曄　制作日：2/1　オーストラリア留学10日目*/

#include <stdio.h>
#include <stdlib.h>
#include <stdlib.h>
#include <time.h>

typedef char string[1024];


int main(void)
{
    printf("printfは画面出力の命令実行文\n");
 
    printf("%d\n",123); 
    printf("%5d\n",123);
    printf("%05d\n",123);
    
    printf("---------------------\n");

    int age=17;
    string job="学生";
    printf("齢%d歳の%sです\n",age,job);  
    
   

    printf("----------------------\n");



    string sage="29";
    int a=atoi(sage);
    printf("%d\n",a);
    return 0;

    printf("----------------------\n");

 

    unsigned int seed;
    seed =(unsigned int)time(NULL);
    srand(seed);

    int r=rand()%100; 
    printf("%d",r);
    return 0;





    

  


}