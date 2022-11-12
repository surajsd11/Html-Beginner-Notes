#include <iostream>
#include <string>
using namespace std;
class store
{
    char product[100];
    char price[100];
    int number = 1;

public:
    void product1(void)
    {
        cout << "product number :" << number << endl;
        cout << "enter product name :";
        cin >> product;
        cout << "enter product price :";
        cin >> price;

        number++;
    }
};
int main(int argc, char const *argv[])
{
    int a;
    cout << "enter how many product do you want to enter :";
    cin >> a;
    store suraj;
    for (int i = 0; i < a; i++)
    {  
        suraj.product1();
    }

    return 0;
}
