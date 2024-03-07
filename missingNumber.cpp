#include<iostream>
#include<vector>

using namespace std;
 
 int missingNumber(vector<int>& nums) {
        int sum=0;
        int n=nums.size();

        for(int i=0;i<n;i++){
            sum+=nums[i];
        }
        int ans = n*(n+1)/2 - sum;
        return ans;
        
    }

int main() { 
    vector<int> nums1 = {1, 2, 3, 4, 6, 7, 8};
    cout << "The missing number is: " << missingNumber(nums1) << endl;

    return 0;
}
