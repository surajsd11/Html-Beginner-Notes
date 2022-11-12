#include <iostream>
#include <cstdlib>
using namespace std;

class myarray{
    public:
    int totalsize;
    int usedsize;
    int *ptr;

};

class getvalue : public myarray{
       
       public :
       void getvalue1( myarray*a ,int total,int used ){
           a->totalsize=total;
           a->usedsize=used;
           a->ptr=(int *)malloc(total*sizeof(int));

       }

       void value(myarray*a){
           int n;
           for (int i = 0; i < a->usedsize; i++)
           {
               cout<<"enter the element"<<" "<<i<<" ";
               cin>>n;
               (a->ptr)[i]=n;
           }
           
       }
       
       
       void show(myarray*a){
             cout<<"the value"<<endl;
           for ( int i = 0; i < a->usedsize ; i++){
               cout<<(a->ptr)[i];
           cout<<endl;
           }
       }

};

int main(){
    getvalue s1;
    s1.getvalue1(&s1,10,2);
    s1.value(&s1);
    s1.show(&s1);
    return 0;

}
