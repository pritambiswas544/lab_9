//add the library
#include<iostream>
using namespace std;

//main
int main(){
	//declaring variables
	
	int a;
	int *p1=&a;  //pointer for a
	float b;
	float *p2=&b;  //pointer for b
	char c;
	char *p3=&c;  //pointer for c
	bool d;
	bool *p4=&d;  //pointer for d
	
	//printing the values of each of them
	
	cout<<sizeof(a)<<endl;
	cout<<sizeof(p1)<<endl;
	
	cout<<sizeof(b)<<endl;
	cout<<sizeof(p2)<<endl;
	
	cout<<sizeof(c)<<endl;
	cout<<sizeof(p3)<<endl;
	
	cout<<sizeof(d)<<endl;
	cout<<sizeof(p4)<<endl;
	
	return 7;
}

