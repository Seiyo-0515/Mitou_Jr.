/*実践式練習ソースコード　No21 switch構文　応用2
制作者：厳　盛曄　製作開始日：3/27 オーストラリア留学64日目*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*今までのような整数リテラルでの評価は少しcase文の内容が一目で分かりにくいのが難点である。
それを解決するために評価に整数リテラルではなく定数を使用する方法がある*/

int main(void)
{
    const int DAIKICHI = 1; //constで書き換え不能な定数にする。
    const int TYUKICHI = 2;
    const int KICHI = 3;
    const int KYO = 4;

    printf("これからあなたの運勢を占います。\n");
    srand((unsigned)time(NULL));
    int fortune = rand()%4 + 1;
    
    switch(fortune){
        case DAIKICHI: //case大吉（fortuneが１）の時　というように定数を用いて処理内容を分かりやすくする
         printf("大吉\n");
        break;

        case TYUKICHI:
         printf("中吉\n");
        break;

        case KICHI:
         printf("吉\n");
        break;

        default:
         printf("凶");
      
    

    }

return 0;
}
/*この使い方は一部のコンパイラではエラーや警告などで動かないときがあるので大人しくコメントで整理するべし*/