/*実践式練習ソースコード　No28 練習問題2
制作者：厳　盛曄　製作開始日：4/27 オーストラリア留学95日目*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef char string[1024];

int main(void)
{
    srand((unsigned)time(NULL));
    int answer = rand()%10; //変数の名前はめんどくさがらずに書くこと！書略して勘違いされるな！！
    int input;
    string inputstr;
    printf("***数あてゲーム（レベル１）***\n改行のチャンスは四回までです。\n一桁の数字を決めてください。\n");
    
    for(int i = 0; i <=3; i++)
    {
        
        scanf("%s",inputstr);
        input =atoi(inputstr);

        if (answer==input){
            printf("正解！大当たり！回答回数は%d回!\n",i);
            break;
        }else if(answer<input){ //回答が正解より小さい時
            printf("正解はもう少し小さい。\n");
        }else{ //回答が正解より大きい時
            printf("正解はもう少し大きい。\n");
        }

    }
    if(answer != input){
        printf("残念！チャレンジ失敗！正解は%dでした!\n",answer);
    }
    return 0;
}
