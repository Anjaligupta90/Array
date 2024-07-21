#include<iostream>
#include<limits.h>
using namespace std;
int findmax(int arr[3][4],int row,int col)
{
	int maxans=INT_MIN;
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			if(arr[i][j]>maxans)
			{
				maxans=arr[i][j];
			}
		}
	}
	return maxans;
}
int main()
{
		int arr[3][4]={
	{5,6,8,3},
	{1,2,3,4},
	{9,8,2,5}
	};
	//size of array
	int row=3;
	int col=4;
  cout<<"maximum ans is:"<<findmax(arr,row,col)<<endl;
	
	
	return 0;
	
}
