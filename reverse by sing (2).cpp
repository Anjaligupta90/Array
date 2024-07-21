#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<int> nums;
    	nums.push_back(2);
    		nums.push_back(3);
    			nums.push_back(8);
    				nums.push_back(-1);
    					nums.push_back(-4);
    						nums.push_back(-6);
    						
    	for(int i=0;i<nums.size();i++)					
    	cout<<nums[i]<<" ";
    	cout<<endl;

 vector<int>pos, neg;
 
         for(int i=0;i<nums.size();i++){
             if(nums[i] > 0)
                 pos.push_back(nums[i]);
             else if(nums[i]<0)
                 neg.push_back(nums[i]);
         }
         
         vector<int>ans;
         int i=0;
         while( i<nums.size())
         {
         	ans.push_back(pos[i]);
         	ans.push_back(neg[i]);
         	i++;
         	cout<<ans[i]<<" ";
		 }
         return 0;
    }
