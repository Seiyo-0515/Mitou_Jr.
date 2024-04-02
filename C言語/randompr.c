/*実践式練習ソースコード　No29 応用構文:構造体　
制作者：厳　盛曄　製作開始日：5/26 オーストラリア留学124日目*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    srand((unsigned)time(NULL));
    enum{fire,water,wind,earth};

    for (int i = 0; i<10; ++i){
        int gemtype = rand()%4;
        
        switch (gemtype){
            case fire:
            printf("$");
            break;
            case water:
            printf("*");
            break;
            case wind:
            printf("@");
            break;
            case earth:
            printf("#");
            break;
        }
        printf(" ");
    
    }
    return 0;


}