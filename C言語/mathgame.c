/*実践式練習ソースコード　No17 数字当てクイズ　
制作者：厳　盛曄　製作開始日：2/20 オーストラリア留学28日目*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef char string[1024];


//引っ越した後のやる気の回復に約11日かかるという、もうそろ留学一か月やぞ
int main(void)
{
    srand((unsigned)time(NULL));
    int corect=rand()%101; //問題の答え
    int check=2; //whileの条件
    int try=0; //解答回数
    printf("これから数字当てクイズを行います\n1から100の数字どれかが答えになります。\n自分が答えた数字が正当よい大きいか小さいか出るのでそれを参考に\nなるべく少ない回数で当てましょう!!\n");
    while(check==2)
    {

    if(check==2)
    {
        string answer;
        printf("%d回目の解答をどうぞ\n",try++);
        fflush(stdout);
        scanf("%1023s%*[^\n]%*c",answer);

        if(answer>corect)
        {
            
            if(answer>corect+10)
            {
                printf("少なくとも10以上は");
            }
        printf("あなたの解答は正答より大きいです\n");
        }

        if(answer<corect);
        {
            
            if(answer<corect-10)
            {
                printf("少なくとも10以上は");
            }
        printf("あなたの解答は正答より小さいです\n");
        }

        if(answer==corect)
        {
            
            check+=3;
        }

    }

   


    }
    printf("正解！おめでとう！！君がチャレンジした回数は%d回だよ!!\n",try);

    return 0;
}