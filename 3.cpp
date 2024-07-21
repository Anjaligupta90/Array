#include<iostream>
using namespace std;

int main()
{
	int arr[3][4];
		
	//size of array
	int row=3;
	int colum=4; 
	
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<colum;j++)
		{
			cout<<"enter the element"<<i<<j;
			cin>>arr[i][j];
		}
	}


    
	return 0;
}
