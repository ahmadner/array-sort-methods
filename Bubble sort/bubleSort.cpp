// bubble sorting array with flag
// gcc version 10.2.1 20210110 (Debian 10.2.1-6)
// github: @ahmadner
#include <iostream>
using namespace std;
void insertVal(int arr[],int size);
void swapvalue(int arr[],int val1,int val2);
void printArray(int arr[],int size);
int orderNumFunc(int);
void ascendingOrderFunc(int arr[] ,int size);
void descendingOrderFunc(int arr[] ,int size);
int main(){

int size;
cout<<"[*] enter array size : ";cin>>size;
int arr[size];
insertVal(arr,size);
int orderNum;
cout<<"\n[*] orderNum:\n[1] Ascending orderNum\n[2] Descending orderNum\n\n=> ";
cin>>orderNum;

if (orderNumFunc(orderNum) == 1)
	ascendingOrderFunc(arr,size);
else
	descendingOrderFunc(arr,size);
return 0;
}

void insertVal(int arr[],int size){
	// insert data
	cout<<endl;
	for (int i=0;i<size;i++){
		cout<<i+1<<" => ";
		cin>>arr[i];
	}
}
void swapvalue(int arr[],int val1,int val2){
// swapvalue(array name , value1 ,value2)
	int tmp=arr[val1];
	arr[val1]=arr[val2];
	arr[val2]=tmp;
}
void printArray(int arr[],int size){
	cout<<"\n[*]ordered array: ";
	for (int i=0;i<size;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}
int orderNumFunc(int orderNum){
	if (orderNum == 1 || orderNum == 2)
		return orderNum;
	else{
		cout<<"[!] Choose between 1 or 2 only\n";
		cout<<"\n=> ";
		cin>>orderNum;
		return orderNumFunc(orderNum);
	}
}
void ascendingOrderFunc(int arr[],int size){

	int flag;
	flag =size;
	for (int i=0;i<size;i++){
		flag-=1;

		for (int j=0;j<flag;j++)
			if (arr[j] > arr[j+1])
				swapvalue(arr,j,j+1);
	}
	printArray(arr,size);
}
void descendingOrderFunc(int arr[],int size){

	int flag;
	flag =size;
	for (int i=0;i<size;i++){
		flag-=1;

		for (int j=0;j<flag;j++)
			if (arr[j] < arr[j+1])
				swapvalue(arr,j,j+1);
	}
	printArray(arr,size);
}
