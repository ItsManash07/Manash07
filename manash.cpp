#include <iostream>
using namespace std;

int
main ()
{
  //int a;
  //cout<<"PLEASE ENTER THE VALUE HERE"<<endl;
  //cin>>a;
  int a;

  cin >> a;
  cout << a;
  cout << "ADDRESS OF YOUR ENTERED NUMBER IS:" << &a;
  cout << "SIZE OF YOUR ENTERED NUMBER IS:" << sizeof (a);
  cout << ++a;
  cout << a;

  return 0;
}