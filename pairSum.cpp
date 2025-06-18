#include<iostream>
#include<vector>
using namespace std;

int main(){
   cout<< "check pair sum"<< endl;
 vector< int > arr={1,2,3,4,5,6};
   int n=arr.size();
    int target = 11;
   int i=0;
   int j=n-1;
   while( i<=j){
    int sum= arr[i]+ arr[j];
    if(sum<target ){
      i++;
    }
    else if(sum>target){
      j--;
    } else {
      cout<<arr[i]<<" and "<<arr[j]<< " sum is "<< sum<<endl;

      
      return 0;
   }
  }
   return 0;
 }

  
  




    