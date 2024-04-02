/*実践式練習ソースコード　No34 配列宣言 宝石をランダムに並べる　p233
制作者：厳　盛曄　製作開始日：7/26 オーストラリア留学185日目*/

/*添え字の利用方法として添え字に対応した情報を取り出すパターンは欠かせない
まずは添え字を使わない方法のコード*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    srand((unsigned)time(NULL));
    enum{FIRE,WATER,WIND,EARTH};
    int gems[10];

    for(int i=0; i<10; i++){
        int gemType =rand()%4;
        gems[i] = gemType;

    }
    
    for(int i=0; i<10; i++){
        switch (gems[i]){
            case FIRE:
                printf("F");
                break;

            case WATER:
                printf("Wa");
                break;

            case WIND:
                printf("Wi");
                break;

            case EARTH:
                printf("E");
                break;
    
        }

        printf(" ");

    }
    

return 0;
}