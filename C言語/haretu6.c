/*実践式練習ソースコード　No35 配列宣言 宝石をランダムに並べる　p234-5
制作者：厳　盛曄　製作開始日：7/26 オーストラリア留学185日目*/

/*続いて添え字をより利用した場合*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    srand((unsigned)time(NULL));
    enum{FIRE,WATER,WIND,EARTH}; //正直いらない子
    const char GEM_CHARS[]={'$','*','@','#'};
    int gems[10];

    for (int i=0; i < 10; i++){
        int gemtype = rand()%4;
        gems[i] = gemtype;
    }

    for (int i=0; i < 10; i++){
        printf("%c",GEM_CHARS[gems[i]]);
    }


return 0;

}
