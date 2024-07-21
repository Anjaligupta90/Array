#include<iostream>
using namespace std;
void minimum(int arr[],int n)
{
  int min=INT_MAX;
  int max=INT_MIN;
  for(int i=0;i<n;i++)
  {
  	if(arr[i]<min)
  	{
  	min=arr[i];
	  }	
	  if(arr[i]>max)
	  {
	  	max=arr[i];
	  }
}
 cout<<"minimum no."<<min<<endl;
 cout<<"maximum no."<<max<<endl;
}

int main()
{
	int arr[8]={3,6,8,4,9,2,6,9};
	int n=8;
	minimum(arr,n);
	
	return 0;
}
	
