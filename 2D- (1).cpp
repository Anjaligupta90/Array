#include<iostream>
using namespace std;
void printarray(int arr[3][4],int row,int colum)
{
 	for(int i=0;i<row;i++){
 		for(int j=0;j<colum;j++)
 		{
 			cout<<arr[i][j]<<" ";
		 }
		 cout<<endl;
	 }
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
  printarray(arr,row,colum)	;

	return 0;
}
