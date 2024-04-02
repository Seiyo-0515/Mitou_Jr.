/*実践式練習ソースコード　No20 switch構文　応用1
制作者：厳　盛曄　製作開始日：3/20 オーストラリア留学57日目*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//ではswitch構文でbreakを外すとどうなるでしょう？

int main(void)
{
    printf("あなたの運勢を占います。\n");
    srand((unsigned)time(NULL));
    int fortune = rand()%4+1;

    switch(fortune){
        case 1:
            printf("大吉\n");
        case 2: //ここでbreak文を忘れている。
            printf("中吉\n");
            break;
        case 3:
            printf("小吉\n");
            break;
        default:
            printf("凶\n");

    }

return 0;

}
/*case文はあくまで数字が対応するラベルまで処理をスキップする命令にすぎないため
caseブロックではbreak文という処理を中断すてswtch文を抜ける明示的な支持がない限り
制御構文の一つである順次に従って次の行へ処理が進むためcase１が起きた場合case2も処理される。
しかしこれは応用し利用することができる。 応用２へ続く*/