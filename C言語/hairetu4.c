/*実践式練習ソースコード　No33 配列宣言 配列の合計と平均を求める
制作者：厳　盛曄　製作開始日：7/12 オーストラリア留学171日目*/

#include <stdio.h>

int main(void)
{
    int subject[]={75,57,90,46,82};
    int sum = 0;
    int subnum=0;

    for(int i = 0; i<5; i++)
    {
        sum +=subject[i];
        subnum++;

    }

    int avg =sum/subnum;

    printf("合計点:%d\n",sum);
    printf("平均点:%d\n",avg);
    
    return 0;

}