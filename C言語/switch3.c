/*実践式練習ソースコード　No20 switch構文　応用2
制作者：厳　盛曄　製作開始日：3/22 オーストラリア留学59日目*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    printf("あなたの運勢を占います。\n");
    srand((unsigned)time(NULL));
    int fortune =rand()%5+1;

    switch(fortune){
        case 1: //変数が１か２だったら
        case 2: /*FALL THROUGH*/
            printf("結構いいね！！\n");
        break;
        
        case 3: //変数が３だったら
            printf("普通　以上\n");
        break;

        case 4:　//変数が４か５だったら
        case 5:/*FALL THROUGH*/
            printf("ちょっと悪いね夜道に気を付けて\n");
        

//といった風にcaseブロックのbreak文を抜くことで変数の範囲を分けることができる
    }
return 0;

}
/*break文がなければ次のcaseブロックも続けて実行されるswich文での動作を "fall through"と呼ぶ
故意にfall throughする場合はコードにコメントを残しておくのがおすすめ*/
//下みたいな
/*FALL THROUGH*/