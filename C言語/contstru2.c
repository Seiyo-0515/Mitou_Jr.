/*練習ソースコード　No11 プログラム制御構造　繰り返し
制作者：厳　盛曄　製作日：2/7 オーストラリア留学15日目*/

#include <stdio.h>
#include <stdbool.h>

//繰り返しはループともいう

int main(void)
{
    bool doorclosed=true;
    while (doorclosed==true); //whileの後に繰り返す間の条件を書く。今回はtureの間繰り返す
    {
        printf("ドアをノックした\n");
        printf("一分待った\n");
    }
    
    return 0;


}