//add the library
#include<iostream>
using namespace std;

//main
int main(){
	//declaring the variables
	int a, b;
	
	//declaring the pointer variable
	int *p;
	
	cout<<"enter a = ";
	cin>>a;
	cout<<"enter b = ";
	cin>>b;
	
	//pointing p to a
	p=&a;
	
	//storing the value pointed by p in b
	b=*p;
	
	//printing the values of a, b, *p
	cout<<"a = "<<a<<endl;
	cout<<"b = "<<b<<endl;
	cout<<"*p = "<<*p<<endl;
	return 7;
}
