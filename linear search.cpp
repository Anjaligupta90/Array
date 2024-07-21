#include<iostream>
using namespace std;
int main()
{
	int arr[7]={2,4,6,8,9,1,3};
	int n=7;
	int target=8;
	bool flag=0;
	
   for(int i=0;i<n;i++)
   {
   	if(arr[i]==target)
   	{
      flag=1;
      break;
   }
}
    if(flag==1)
    {
    cout<<"found";
   }
    else{
    	cout<<"not found";
	}
   return 0;
}
