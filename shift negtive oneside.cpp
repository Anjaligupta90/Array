#include<iostream>
using namespace std;
void shiftnegtiveoneside(int arr[],int n)
{
	int j=0;
	for(int i=0;i<n;i++)
	{
		if(arr[i]<0)
		{
			swap(arr[i],arr[j]);
			j++;
		}
	}
	
}
int main()
{
int arr[]={-23,-7,12,-19,11,40,-9};
int n=7;

shiftnegtiveoneside(arr,n);

for(int i=0;i<n;i++)
{
	cout<<arr[i]<<" ";
}

	
	return 0;
}
