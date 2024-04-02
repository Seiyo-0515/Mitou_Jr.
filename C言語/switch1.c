/*実践式練習ソースコード　No20 switch構文　基礎
制作者：厳　盛曄　製作開始日：3/19 オーストラリア留学56日目*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    printf("あなたの運勢を占います。\n");
    srand((unsigned)time(NULL));
    int fortune = rand()%4+1;

    switch(fortune){    //switch構文はcaseの数字と変数の数字を比較して評価する。
        case 1: //fortune変数が1の時case1　case値の記述をラベルという　caseラベルは定数のみ指定可能　最期は:(コロン)
            printf("大吉\n");
            break; //ラベルの各処理が終わった時必ず記入する。
        case 2:
            printf("中吉\n");
            break;
        case 3:
            printf("小吉\n");
            break;
        default: //デフォルトは合致するラベルがないときに行う処理のことを指す。 is-else is-else構文と同じく省略可能だがおすすめしない。
            printf("凶\n");
        

    }

return 0;

}