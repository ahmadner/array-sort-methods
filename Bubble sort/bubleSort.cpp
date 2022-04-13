#include <iostream>
using namespace std;
void insertVal(int arr[],int size);
void switchVal(int arr[],int val1,int val2);
void printArr(int arr[],int size);
int main(){

int size;
cout<<"enter array size : ";cin>>size;
int arr[size];
insertVal(arr,size);

int flag;
flag =size;
for (int i=0;i<size;i++){
	flag-=1;

	for (int j=0;j<flag;j++){
		if (arr[j]<arr[j+1])
			switchVal(arr,j,j+1);
	}
}

printArr(arr,size);

}


void insertVal(int arr[],int len){
	// insert data
	for (int i=0;i<len;i++){
		cout<<i+1<<" => ";
		cin>>arr[i];
	}

}

void switchVal(int arr[],int val1,int val2){
// switchVal(array name , value1 ,value2)
	int tmp=arr[val1];
	arr[val1]=arr[val2];
	arr[val2]=tmp;

}

void printArr(int arr[],int len){
	for (int i=0;i<len;i++){
		cout<<arr[i]<<" ";
	}
}
