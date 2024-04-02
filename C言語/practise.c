/*実践式練習ソースコード　No27 練習問題
制作者：厳　盛曄　製作開始日：4/26 オーストラリア留学94日目*/

#include <stdio.h>
#include <stdlib.h>

typedef char String[1024];

int main(void)
{
    String numb;
    printf("1から9の数字をどれか入力してください\n");
    fflush(stdout);
    scanf("%s",numb);
    int position=atoi(numb); //文字から数字への変更忘れずに
    switch(position){
        case 1: case 2:
        printf("バッテリー\n");
        break;
        case 3: case 4: case 5: case 6:
        printf("内野手\n");
        break;
        case 7: case 8: case 9: 
        printf("外野手\n");
        break;
        default:
        printf("入力された守備位置はありません\n");

    }
    
return 0;

}