#include <iostream>
#include <string>
using namespace std;
int main()
{
int a=2;
int &b=a;
int *c=&b;
cout << "value of a :" << a << endl;
cout << "address of b is :" << &b <<  endl;
cout << "value of c is :" << *c << endl;
return 0;
}

