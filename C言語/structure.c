/*実践式練習ソースコード　No28 応用構文:構造体　p195
制作者：厳　盛曄　製作開始日：5/14 オーストラリア留学112日目*/

/*今まで習ってきた三つの制御構文で理論上どんなプログラムでも制作かのうである。しかしこれから問題になってくるのは
肥大化したコードの複雑性という課題です。複雑性はとても難しい問題ですが、多くのプログラミング言語は
コードが複雑になりすぎないように整理しながら記述できるしくみがあります。*/

/*構造体とは一つの変数の中に異なる形のデータを収納することができる形の一種。
構造体では変数の箱の中にさらに各データを収める箱が用意されます。
構造体の内側の箱をメンバとよびそれぞれに名前をつけて利用する。
ようは一人のプロフィールをまとめて一つの箱に入れる感じ
詳しくは教科書！

構造体の定義　自分で新しい型を作れる
struct タグ名{
    型　メンバ名
    型　メンバ名
    :
};
*/

#include <stdio.h>

typedef char string[1024];

int main(void)
{
    //tpedef struct MOMSTER Monster; ←Struct MONSTER型の変数にMonsterという別名をつけるという宣言
    //typedef 型名　型につける別名　で可能
    /*以上をstructと同時に使うことでstructを使い安くできる
    typedef struct{
        型名　メンバ名
        ：
    }構造体名;*/

    typedef struct{
        string name;
        int hp;
        int attack;
    }Monster;

//ここで構造体宣言したからと言ってそのまんま代入してはいけない。特にstring。だから初期化しながら入れていく
//struct Monster ーーー; 構造体宣言 (上でtypedef宣言をしてるからstructは必要なし)
//呼び出し方は基本的に構造体変数名.メンバ名

   Monster seiryu={
   .name= "青龍",
   .hp=80,
   .attack=15
   }; //初期化で登場させる
    
    Monster suzaku={"朱雀",100,30}; //近代ではこのような形でも可能、メンバに順次代入
    Monster byakko={"白虎",100,30};
    Monster genbu={"玄武",120,10};
    Monster suzaku2;
    suzaku2 = suzaku; //このようにすれば構造体まるごとコピーが可能

    const string TEMPLATE = "%s : HP=%3d 攻撃力%2d\n";
    printf(TEMPLATE,seiryu.name,seiryu.hp,seiryu.attack);
    printf(TEMPLATE,suzaku.name,suzaku.hp,suzaku.attack);
    printf(TEMPLATE,byakko.name,byakko.hp,byakko.attack);
    printf(TEMPLATE,genbu.name,genbu.hp,genbu.attack);
    printf(TEMPLATE,suzaku2.name,suzaku2.hp,suzaku2.attack);
return 0;
}
