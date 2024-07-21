#include<iostream>
#include<vector>
using namespace std;
 vector<int> rearrangeArray(vector<int>& nums) {
        // Method 2. Two pointer
        vector<int>ans(nums.size(), -1);
        int odd = 1, even = 0;
        for(int i=0;i<nums.size();++i){
            int num = nums[i];
            if(num > 0){
                ans[even] = num;
                even += 2;
            }
            else{
                ans[odd] = num;
                odd+=2;
            }
        }
        return ans;

//	void reversebysign(vector<int> arr)
//	{
//		vector<int> pos,neg;
//		for(int i=0;i<arr.size();i++)
//		{
//			if(arr[i]<0)
//			neg.push_back(arr[i]);
//			else
//				pos.push_back(arr[i]);
//
//		}
//		vector<int> ans;
//		for(int i=0;i<ans.size();i++)
//		{
//			pos.push_back(ans[i]);
//			neg.push_back(ans[i]);
//			cout<<"reversing"<<ans[i];
//		}
//	}
//


int main()
 {
	vector<int> nums;
	for(int i=0;i<nums.size();i++)
	cin>>arr[i];

     rearrangeArray(nums);
    
	
	return 0;
}
