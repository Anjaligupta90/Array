#include<iostream>
using namespace std;
int main()
{
  int arr[10];
  for(int i=0;i<10;i++)
  {
  	cin>>arr[i];
  }
   for(int i=0;i<10;i++)
   cout<<arr[i]<<" ";
   
   cout<<endl;
   
	cout<<"after doubling"<<endl;
	
	 for(int i=0;i<10;i++){
	 	arr[i]=2*arr[i];
	 }
	  for(int i=0;i<10;i++)
	  cout<<arr[i]<<" ";
	return 0;
}
