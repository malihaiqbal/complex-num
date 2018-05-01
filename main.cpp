#include<iostream>
#include"Header.h"

using namespace std;

int main()
{
	ComplexNumber Z1(9, 9);
	ComplexNumber Z2(Z1);
	ComplexNumber Z3(0, 0);
	ComplexNumber  Z4(Z3);
	ComplexNumber Z5;
	ComplexNumber Z6;

	cout<<"z1="<<endl;
  Z1.display();
  cout<<"z2="<<endl;
	Z2.display();
  cout<<"z3="<<endl;
	Z3.display();
cout<<"addition="<<endl;
	Z3= Z1 + Z2;
  
	Z4 = Z1 - Z2;
 
	Z5 = Z1*Z2;
 
	Z6 = Z1 / Z2;
	cout << Z3;
  cout<<"subtraction="<<endl;
	cout << Z4;
   cout<<"multiplication"<<endl;
	cout << Z5;
   cout<<"division"<<endl;
	cout << Z6;

	getchar();
}