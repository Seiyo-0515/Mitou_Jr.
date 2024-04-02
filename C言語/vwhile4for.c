/*実践式練習ソースコード　No25 while構文　応用4
制作者：厳　盛曄　製作開始日：4/17 オーストラリア留学85日目*/

/*処理によっては繰り返しを最後まで行わずに途中で中断したい場合
break文とcontinue文という二種類の方法によって中断が可能。
break文はそれが入っている繰り返しの文事態を中断し
continue文はその繰り返しの回だけを中断して次の回に入る。*/

#include <stdio.h>

int main(void)
{
    for (int i=1; i<10; i++){
        if(i==3){
            break;
        }
        printf("%d\n",i);

    }

printf("----------------------------\n");
    for (int i = 1; i<10; i++){
        if(i==3){
            continue;
        }
        printf("%d\n",i);

    }
    return 0;
}