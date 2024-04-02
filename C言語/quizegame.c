/*実践式練習ソースコード　No15 ランダムクイズ　
制作者：厳　盛曄　製作開始日：2/9 オーストラリア留学17日目*/

//今どきの女子高生とのお昼ってどこ行けばいい？？

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef char string[1024];

int main(void)
{
    int coll=0; //正答個数カウンター

    printf("これから常識クイズを始めます\n");
    while (coll<3)
    {
    
    srand((unsigned)time(NULL));
    int quizeno=rand()%4;
    

    if(quizeno==1)
    {
        string ans;
        printf("一の画数は何だ？\n");
        fflush(stdout);
        scanf("%1023s%*[^\n]%*c",ans);
        int anc=atoi(ans);
        if(anc==1)
        {
            coll++;
            if(coll!=3)
            {
            printf("正解！残り%d問!次の問題です!\n",3-coll);
            }

        }else{
            printf("不正解!小学校からやり直せ!\n");
            if(coll>0)
            {
                coll--;
                printf("ついでに一問追加だ！\n");
            }
        }
    }

    if(quizeno==2)
    {
        string ans;
        printf("二の画数は何だ？\n");
        fflush(stdout);
        scanf("%1023s%*[^\n]%*c",ans);
        int anc=atoi(ans);
        if(anc==2)
        {
            coll++;
            if(coll!=3)
            {
            printf("正解！残り%d問!次の問題です!\n",3-coll);
            }

        }else{
            printf("不正解!小学校からやり直せ!\n");
            if(coll>0)
            {
                coll--;
                printf("ついでに一問追加だ！\n");
            }
        }
    }

    if(quizeno==3)
    {
        string ans;
        printf("三の画数は何だ？\n");
        fflush(stdout);
        scanf("%1023s%*[^\n]%*c",ans);
        int anc=atoi(ans);
         if(anc==3)
        {
            coll++;
            if(coll!=3)
            {
            printf("正解！残り%d問!次の問題です!\n",3-coll);
            }
            
        }else{
            printf("不正解!小学校からやり直せ!\n");
            if(coll>0)
            {
                coll--;
                printf("ついでに一問追加だ！\n");
            }
        }
    }

    }
    printf("終わり\n");
    return 0;
    
    //こんだけコーディングしてできたのしょっぼ そらプログラマーブラックやわ
}