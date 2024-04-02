/*練習ソースコード　No8　命令実行文 文字列・乱数
制作者：厳　盛曄　製作日：2/4 オーストラリア留学12日目*/

#include <stdio.h>
#include <stdlib.h>
#include <stdlib.h>
#include <time.h>

typedef char string[1024];


int main(void)
{
    printf("printfは画面出力の命令実行文\n");
    /*上記のようなコマンドでデバイスに命令を出せる。
    また（）の中に記述するものを引数やパラメーターと呼ぶ
    命令によって記述すべき引数の数や形が変わる*/

    printf("%d\n",123); //変数でなくても数字なら入る
    printf("%5d\n",123);//%の後に数字を入れてからDを書くとその数字の桁数に調整される
    printf("%05d\n",123);//0が先に入ると0が何もないとスペースが流し込まれる
    //上記の命令文の一文の最初の""で囲まれた場所は書式文字列と呼ぶ
    printf("---------------------\n");

    int age=17;
    string job="学生";
    printf("齢%d歳の%sです\n",age,job);  //プレースホルダの正式名は「変換指定子」
    /*printf分の書式命令文は複数のプレースホルダを指定することが可能
    その場合書式命令文の後の変数は順番に代入される*/

    printf("----------------------\n");

/*文字列として認識されている数字はatoi(変数名)で数に変換することが可能だが
プログラムの頭に#include <stdlib.h>と書き足す必要がある*/

    string sage="29";
    int a=atoi(sage);
    printf("%d\n",a);
    

    printf("----------------------\n");

    /*以下からは乱数を制作する命令文
    制作する乱数は0以上指定した数未満の数であり、指定する数は1以上の整数である必要がある
    ソースコードの文頭に
    #include <stdlib.h>
    #include <time.h>
    ボックスの中に
    srad((unsigned)time(NULL));
    を加える必要あり*/

    srand((unsigned)time(NULL));
    int r=rand()%100;  
    printf("%d",r);
    return 0;





    

  


}