#include <iostream>
using namespace std;
int sum(int &x, int &y){
    int sum;
    sum=x;
    x=y;
    y=sum;
    return 0;
}
int main(int argc, char const *argv[])
{
    int a=4,b=5;
    sum(a,b);
    cout<<"the value of a is"<<a<<"the value of b is "<<b;

    return 0;
}
