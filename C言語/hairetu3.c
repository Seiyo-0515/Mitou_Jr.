/*実践式練習ソースコード　No32 配列宣言 呼び出し時の要素を変数にする
制作者：厳　盛曄　製作開始日：7/11 オーストラリア留学170日目*/
//p225～

//配列は呼び出し時の数字を変数にすることによって真価を発揮します。

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    //ループを使用することによって配列の中身を集計することが可能です。

    int gems[5]={0};
    srand((unsigned)time(NULL));

    int count = 0;
    for(int i = 0; i < 4; i++){

        gems[i]=rand()%5; //ループの度に設定先の要素が変わる
        
        if (gems[i] == 3){
        count++;
        }
    }

    printf("配列gems要素の内容：%d・%d・%d・%d・%d\n",gems[0],gems[1],gems[2],gems[3],gems[4]);

    printf("3の数は%d\n",count);

    return 0;

}

/* int集計結果の変数=0;
    for(int i=0;i<配列要素数;i++){
        配列変数名[i]を調べて集計結果の変数を書き換える処理 
    }*/