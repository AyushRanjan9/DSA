#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int MaxSumArr(vector< int> &arr, int n){

     int currntsum=0;
    int maxsum=INT_MIN;
    for(int i=0;i<n;i++){
    currntsum+=arr[i];
    maxsum=max( currntsum,maxsum);
    if( currntsum<0){
        currntsum=0;
    }

    }
   return maxsum;

}

 int main(){
    
     
vector<int> arr = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
int n=arr.size();
    int result= MaxSumArr(arr,n);
    cout<< result<<endl;

   
 }