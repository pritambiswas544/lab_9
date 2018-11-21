//add the library
#include<iostream>
using namespace std;

//main
int main(){
	//declaring the character array
	char arr[13]="Diprupa Saha";
	
	//Display the whole array
	cout<<arr<<endl<<endl;
	
	cout<<"Display by index method"<<endl;
	
	//Display by index method
	for (int i=0;i<13;i++){
		cout<<arr[i]<<endl;
	}
	
	cout<<endl<<"Display by pointer method"<<endl;
	
	//Display by pointer method
	char *p = &arr[0];
	for (int i=0;i<13;i++){
		cout<<*(p+i)<<endl;	
	}
	return 7;
}
