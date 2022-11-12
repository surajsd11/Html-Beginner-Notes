#include <iostream>
#include <string>
using namespace std;

class game
{

public:
    int sum(int a, int b);
    int multi(int a, int b);
};
int game::sum(int a, int b)
{
    int sum1;
    sum1 = a + b;
    cout << sum1 << endl;
    return 0;
}

int game::multi(int a, int b)
{

    int multi1;
    multi1 = a * b;
    cout << multi1 << endl;
    return 0;
}
int main(int argc, char const *argv[])
{
    game suraj;
    suraj.sum(5, 8);
    suraj.multi(7, 8);
    return 0;
}
