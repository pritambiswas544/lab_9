//add the library
#include<iostream>
using namespace std;

//main
int main(){
	//Declaring the array
	int arr[10];
	
	//Taking input of the elements of array
	for(int i=0;i<10;i++){
		int x;
		cout<<"enter "<<i+1<<"th element : ";
		cin>>x;
		arr[i]=x;
	}
	cout<<endl<<"Display by index method "<<endl<<endl;
	
	//Display by index method
	for (int i=0;i<10;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl<<"Display by pointer method "<<endl<<endl;
	
	//Display by pointer method
	int *p1=arr;
	for (int i=0;i<10;i++){
		cout<<*(p1+i)<<" ";
	}
	return 7;
}
