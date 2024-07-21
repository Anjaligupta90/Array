#include<iostream>
using namespace std;
bool findtarget(int arr[3][4],int row,int colum,int target)
{
 	for(int j=0;j<colum;j ++){
 		for(int i=0;i<row;i++)
 		{
 			if(arr[i][j]=target)
 			cout<<"true";
 			{
 				
			 }
		 }
		 
	 } 
	 cout<<"false";
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
	int colum=4;
  int target=3;
  cout<<"found or not:"<<  findtarget(arr,row,colum,target)<<endl;

	return 0;
}
