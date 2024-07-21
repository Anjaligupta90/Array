#include<iostream>
using namespace std;
void printarray(int arr[],int size)
{
	for(int i=0;i<size;i++)
	{
		cout<<arr[i]<<" ";
	}
}
int main()
{
	int arr[7]={2,3,4,5,6,7,8};
	int size=7;
	
	printarray(arr,size);
	return 0;
}
