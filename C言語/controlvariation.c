/*実践式練習ソースコード　No19 制御構文のバリエーション　ifとwhileをもっと便利に
制作者：厳　盛曄　製作開始日：3/5 オーストラリア留学42日目*/

/*If else if else構文　
一つのif elseだけでなく　複数のルートで構成し、一つの文で三つ以上のルートに分岐を処理できる。
文の数に制限はない
制限上、最後のelseの内容は中身がからの場合省略できるが、想定外の自体をさけるため、きちんと設定しておくこと。
またブロックの中に；とだけ書くと何もしないという命令になる。デフォルト動作で誤認を防ぐためにコメントを残しておこう*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(void)
{
    printf("あなたの運勢を占います。\n");
    srand((unsigned)time(NULL));
    int fortune = rand()%4+1; //４から１の乱数

    if(fortune==1){
        printf("大吉\n");
    }else if(fortune==2){
        printf("中吉\n");
    }else if(fortune==3){
        printf("小吉\n");
    }else{
        printf("凶\n");
    }
    
    return 0;
}
/*上記のようにif else文は二つ以上の条件分岐を行うことができるが見た目がすこし見にくくなる。
今回のコードに注目するとすべてが同一の変数と整数の比較であることがわかる。
この場合、よりスマートなswitch文に書き換えることができる。*/