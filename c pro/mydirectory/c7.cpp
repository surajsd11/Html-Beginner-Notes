#include <iostream>
using namespace std;
class game
{
    int a;
    int b;

public:
    void su(int a1, int b2)
    {
        a = a1;
        b = b2;
    }
       friend game sur(game o1,game o2);
       
    void sura()
    {
        cout << "the value :" << a << "+" << b;
    }
};
game sur(game o1,game o2){
    game o3;
    o3.su((o1.a +o2.a) , ((o1.b + o2.b)));
    return o3;
}
 
int main(int argc, char const *argv[])
{
    game c1, c2,c, sum;
    c1.su(1, 2);
    c2.su(2, 3);
    sum=sur(c1, c2);
    
    sum.sura();
    return 0;
}
