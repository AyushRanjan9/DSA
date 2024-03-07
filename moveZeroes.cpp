#include<iostream>
#include<vector>
#include <algorithm> 
using namespace std;
void moveZeroes(vector<int>& arr){
    int n= arr.size();
    int j=0;
    for(int i=0;i<n;i++){
        if(arr[i]!=0){
            swap(arr[i],arr[j]);
            j++;

        }
    }
}

 int main(){
     vector<int> arr1={1,0,4,5,0,3,0,7};
     int n=7;
     cout<<" befor moving ...."<< endl;
     for(int  nums :arr1){
        cout<<  nums;
     }
      cout<< endl;
      cout<<" after  moving ...."<< endl;

     moveZeroes(arr1);
     for(int nums: arr1){
        cout<< nums ;
     }


 }