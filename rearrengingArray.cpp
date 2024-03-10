#include<iostream>
 #include<vector>
using namespace std;

vector< int> rearrenge(vector<int> &nums){
     int n = nums.size();
     vector<int>ans(n, 0 );
     int positive=0;
     int negative= 1;
     for( int i=0;i<n;i++){
         if(nums[i]<0){
             ans[negative]= nums[i];
              negative+=2;

         } else{
            ans[positive]= nums[i];
             positive+=2;

         }
     }
      return ans; 

}

 int main(){

    vector<int>nums1={1,2,-4,6,-7,-2,9};
    int n=7;
     vector<int> rearranged_nums = rearrenge(nums1);

    cout << "Rearranged array: ";
    for (int num : rearranged_nums) {
        cout << num << ", ";
    }
    cout << endl;
 return 0;
 

 }