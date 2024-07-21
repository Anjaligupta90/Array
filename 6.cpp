#include<iostream>
using namespace std;
void printarray(int arr[4][4],int row,int colum)
{
 	for(int i=0;i<row;i++){
 		for(int j=0;j<colum;j++)
 		{
 			cout<<arr[i][j]<<" ";
		 }
		 cout<<endl;
	 }
}
void transpose(int arr[4][4],int row,int colum)
{
for(int i=0;i<row;i++)
{
	for(int j=i;j<colum;j++)
    {
  	 swap(arr[i][j],arr[j][i]);
   } 
 }	
}
int main()
{
	int arr[4][4]={
	{5,6,8,3},
	{1,2,3,4},
	{9,8,2,5},
	{8,3,6,1}
	};
	//size of array
	int row=4;
	int colum=4;
	
	cout<<"before swapping"<<endl;
	printarray(arr,row,colum);

	cout<<"doing swapping"<<endl;
	transpose(arr,row,colum);
	
	cout<<"after swapping"<<endl;
	printarray(arr,row,colum);


	return 0;
}

