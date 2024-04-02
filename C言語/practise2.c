/*実践式練習ソースコード　No28 練習問題2
制作者：厳　盛曄　製作開始日：4/27 オーストラリア留学95日目*/

#include <stdio.h>

int main(void)
{
    const int money = 3000;
    int wolet = money;

    printf("りんご\n");
    while(wolet >= 120)
    {
        printf("*");
        wolet -=120;
    }    
    printf("余り%d円\n",wolet);

    printf("ミカン\n");
    wolet = money;
    while(wolet >=400)
    {
        for(int i=1; i<=6; i++){
        printf("*");
        }
        wolet -=400;

    }
    printf("余り%d円\n",wolet);

return 0;
}