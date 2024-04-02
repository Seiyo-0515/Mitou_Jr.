/*実践式練習ソースコード　No37 構造体配列 p240
制作者：厳　盛曄　製作開始日：8/1 オーストラリア留学191日目*/

/*今まで基本型を要素とする配列を題材として学習したが*/

#include <stdio.h>

typedef char String[1024];

int main(void){
    typedef struct{
        String name;
        int hp;
        int attack;
    }Monster;

    Monster seiryu={"青龍",80,15};
    Monster suzaku={"朱雀",100,30};
    Monster byakko={"白虎",100,20};
    Monster genbu={"玄武",120,10};

    Monster monsters[]={suzaku,genbu,seiryu,byakko};

    const String TEMPLATE = "%s : HP = %3d 攻撃力=%2d\n";
    for (int i = 0; i<4; i++){
        printf(TEMPLATE, monsters[i].name,monsters[i].hp,monsters[i].attack);

    }
    return 0;
}