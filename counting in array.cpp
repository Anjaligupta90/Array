#include<iostream>
using namespace std;
void counting(int arr[],int n)
{
	int zero=0;
	int one=0;
	for(int i=0;i<n;i++)
	{
		if(arr[i]==0)
		{
			zero=zero+1;
		}
		if(arr[i]==1)
		one=one+1;
	}
	cout<<"couting of zero is:"<<zero<<endl;
		cout<<"couting of one is:"<<one<<endl;
}

int main()
{
	int arr[8]={0,1,1,1,0,0,1,1};
	int n=8;
	  
	  counting(arr,n);
	  return 0;
}
	
