//add the library
#include<iostream>
using namespace std;

//finding the length of string
int strlen(char arr[]){
	int len=0;
	while ((arr[len])!='\0'){
		len++;
	}
	return len;
}

//copying a string strcpy
void strcpy(char arr[], char arrcopy[]){
	for (int i=0; i<strlen(arr)+1; i++){
		arrcopy[i]=arr[i];
	}
}

//concatenating two strings
void strcat(char arr1[], char arr2[], char arr3[]){
	for (int i=0;i<strlen(arr1);i++){
		arr3[i]=arr1[i];
	}
	for (int i=0;i<strlen(arr2)+1;i++){
		arr3[strlen(arr1)+i]=arr2[i];
	}
}

//comparing two strings
void strcmp(char arr1[], char arr2[]){
	int flag=1;
	if (strlen(arr1)==strlen(arr2)){
		for (int i=0;i<strlen(arr1);i++){
			if (arr1[i]==arr2[i]){
				flag=0;
			}
			else{
				flag=1;
			}
		}
	}
	if (flag==0){
		cout<<"The two strings are same!"<<endl;
	}
	else{
		cout<<"The two strings "<<arr1<<" and "<<arr2<<" are not same!"<<endl;
	}
	cout<<endl;
}

//finding all occurences of a character in a string
void strchr(char arr1[], char a){
	int flag=0;
	for (int i = 0;i<strlen(arr1);i++){
		if(arr1[i]==a){
			flag=1;
			cout<<"The character "<<a<<" is found at position "<<i+1<<endl;
		}
	}
	if (flag==0){
		cout<<"The character "<<a<<" is not found in the string!"<<endl;
	}
	cout<<endl;
}

//finding the first occurence of a string in another string
void strstr(char arr1[],char arr2[]){
	if (strlen(arr1)>=strlen(arr2)){
		for (int i=0;i<strlen(arr1)-strlen(arr2);i++){
			for (int j=0;j<strlen(arr2);j++){
				if (arr1[i+j]==arr2[j]){
					cout<<"The string "<<arr2<<" is found first at position "<<i+1<<endl;
				}
				break;
			}
		}
	}
	
	else{
		cout<<"The length of string to find is greater than the original string! Not possible!"<<endl;
	}
	cout<<endl;
}
//main
int main(){
	char str[100],str1[100],str2[100],str3[100];
	char strcopy[100];
	char strcate[100];
	
	//strcpy()
	cout<<"Enter a string of less than 100 characters: ";
	cin>>str;
	strcpy(str,strcopy);
	cout<<str<<endl;
	cout<<"The copied string is: "<<strcopy<<endl<<endl;
	
	//strcate()
	cout<<"Enter the first string for concatenation: ";
	cin>>str1;
	cout<<"Enter the second string for concatenation: ";
	cin>>str2;
	strcat(str1,str2,strcate);
	cout<<"The concatenated string is: "<<strcate<<endl<<endl;
	
	//strcmp()
	strcmp(str1,str2);
	cout<<"Enter a string of less than 100 characters: ";
	cin>>str3;
	cout<<"The length of the string is: "<<strlen(str3)<<endl<<endl;
	
	//strchr()
	char inp;
	cout<<"Enter the character to find in the string : ";
	cin>>inp;
	strchr(str3,inp);
	
	//strstr()
	char strfind[100];
	cout<<"Enter the string to find in the string : ";
	cin>>strfind;
	strstr(str3,strfind);
	
	return 7;
}
