#include<iostream>
using namespace std;
int main()
{
	int arr[10];
	int n=10;
	int sum=0;
	for(int i=0;i<n;i++)
	{
	cin>>arr[i];
    }
   cout<<endl;
   cout<<"sum of arry"<<endl;
     for(int i=0;i<n;i++)
     {
      sum=sum+arr[i];
    
	 }
	  cout<<endl<<sum;
	
	return 0;
}
