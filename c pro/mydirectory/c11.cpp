#include <iostream>
#include <cmath>
using namespace std;
class dist{
    int x;
    int y;
    
    friend int point(dist o1,dist o2);
    public:
    dist(int a,int b){
         x=a;
         y=b;
    }
    
   
};int point(dist o1, dist o2){
      float t;
     t=sqrt((o1.x - o2.x)*(o1.x - o2.x) + (o1.y - o2.y)*(o1.y - o2.y));
     
    return t;
}
int main()
{
    dist c1(1,2);
    dist c2(4,4);
    
     int run=point(c1,c2);
    cout<<"the answer of this question is :"<<run;

    return 0;
}



