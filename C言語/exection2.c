/*練習ソースコード　No9 文字列入力
制作者：厳　盛曄　製作日：2/5 オーストラリア留学13日目*/

#include <stdio.h>
#include <stdlib.h>

typedef char string[1024];


/*scanfをしようすることによりプログラム起動後にキーボードで打ち込んだものを変数に組み込める*/
int main(void)
{
    string name;
    printf("あなたの名前を入力してください\n");
    fflush(stdout); //バッファに溜まっている指令を吐き出す命令なのでscanfの前のものを強制的に映す感じ
    scanf("%s\n",name); //この形は何度も使うと意図しない動作する可能性あり

    string agstr;
    printf("あなたの年齢を入力してください\n");
    fflush(stdout);
    scanf("%1023s%*[^\n]%*c",agstr);  //この形はめんどくさいけど上記のような不具合の可能性はない

    int age=atoi(agstr);
    printf("ようこそ、%d歳の%sさん\n",age,name);


    return 0;

//今回は紹介のために別々の形のscanfを使用したが実際に使うときはどちらか一つに統一すること
//でないとfflush(stdout);を使用してもprintfの順番が変わる
}