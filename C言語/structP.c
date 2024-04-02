/*実践式練習ソースコード　No28 応用構文:構造体　
制作者：厳　盛曄　製作開始日：5/15 オーストラリア留学113日目*/

/*誕生日だぞい！！
ちなみに昨日ゼル伝の最新作体験回いってきた！*/

#include <stdio.h>
#include <stdbool.h>

typedef char string[1024];

int main(void)
{
    typedef struct{
        string title; //件名
        string from; //送信元メールアドレス
        string datetime; //送信日時
        int size; //サイズ(KB)
        bool attached; //添付画像の有無
        string body; //本文
    }Mail;

    Mail m={"あけましておめでとうございます","sugawara@gmail.com","2022/01/01 10:10:58", 302,false};

    printf("%sさんから,%sにメールです。サイズは%dKB,添付は%s.\n",m.from,m.datetime,m.size,
    m.attached?"あり":"なし"); //true ならひだりfalseなら右の条件構文

    return 0;
}