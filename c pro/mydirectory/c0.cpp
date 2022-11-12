#include <iostream>
#include <vector>
using namespace std;



int main(){
    vector<int> s1;
    int no,i;
    int size;
    cout<<"enter the size";
    cin>>size;
    for(i=0;i<size;i++){
        cout<<"enter the element"<<" ";
        cin>>no;
        s1.push_back(no);

    } 
    cout<<"displaying elment"<<endl;
    for(i=0;i<size;i++){
        cout<<s1[i]<<" ";
    }cout<<endl;
    vector<int> :: iterator itr= s1.end();
    s1.insert(itr,5);
    for(i=0;i<s1.size();i++){
        cout<<s1[i]<<" ";
    }cout<<endl;

    cout<<"size"<<" "<<s1.size()<<endl;
    cout<<"max size"<<" "<<s1.max_size();
    return 0;
}