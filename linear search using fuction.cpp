#include<iostream>
using namespace std;
bool linearsearch(int arr[],int n,int target)
{
	for(int i=0;i<n;i++)
	{
		if(arr[i]==target)
		return true;
	}
	return false;
}
int main()
{
	int arr[5]={2,3,4,5,6};
	int n=5;
	int target=4;
	
	bool ans= linearsearch(arr,n,target);
	if(ans==true)
	cout<<"found";
	else
	cout<<"not found";
	
	return 0;
}
