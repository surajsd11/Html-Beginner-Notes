#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{int a,i=1,multi;
cout<<"enter the number :";
cin>>a;
do{
    multi=i*a;
    cout<<"multiplication number : "<<i<<"*"<<a<<":"<<multi<<"\n";
    i++;
}while(i<=10);
return 0;}
