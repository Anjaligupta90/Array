#include<iostream>
using namespace std;
void reversearray(int arr[],int n)
{
 int left=0;
 int right=n-1;
 while(left<=right)
 {
   swap(arr[left],arr[right]);
   left++;
   right--;	
 }
 cout<<"after reversing:";
 for(int i=0;i<n;i++)
 cout<<arr[i]<<" ";
}       
int main()
{
	int arr[8]={3,6,8,4,9,2,6,9};
	int n=8;
	cout<<"before reversing:";
	for(int i=0;i<n;i++)
	cout<<arr[i]<<" ";
	cout<<endl;
	
	reversearray(arr,n);
	 return 0; 
}
