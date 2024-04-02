/*練習ソースコード　No14 プログラム制御構造　応用クイズ
制作者：厳　盛曄　製作日：2/8 オーストラリア留学16日目*/

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

typedef char string[1024];

int main(void)
{
    string anw;
    printf("漢数字一の画数は何画？\n");
    scanf("%s",anw);
    int n=atoi(anw);
    if(n==1) //数字なら演算子が使用できるのでＯＫしかし文字列のまんまだとエラーになるし警告がない
    {
        printf("馬鹿でもわかる大正解\n");

    }else{
        printf("プログラミングやる前に小学生やり直せ\n");


    }

return 0;
}