#include <iostream>
using namespace std;
int x=10;
void myfun()
{
cout << " the value of x is " << x;
}
main()
{
    myfun();
    int x=30;
    cout << "the value of x is "<< x;
    myfun();
}