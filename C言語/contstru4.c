/*練習ソースコード　No13 プログラム制御構造　if式の詳細
制作者：厳　盛曄　製作日：2/8 オーストラリア留学16日目*/

#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    bool a=true;
    if (a) //bool変数の場合tureなら何も書かなくてもよし
    {
        printf("変数aはtureです\n");
    } //elseはなくてもよし

    int co=10;
    if (co) //C言語では0は偽0以外は真という性質を持つためbool関数でなくても使用可能
    {
        printf("coはture判定です\n");

    }


return 0;
}