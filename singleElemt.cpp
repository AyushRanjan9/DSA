#include<iostream>
using namespace std;
int single_elem( int n){
     int st=0;
    int end =n-1;
    int arr[]={1,1,2,3,3,4,4,5,5};
         while(st <end){
        int mid = st+(end-st)/2;
        
           // Handle boundary case first
        if ((mid == 0 || arr[mid] != arr[mid - 1]) &&
            (mid == n - 1 || arr[mid] != arr[mid + 1])) {
            return arr[mid];
        }
         bool leftside;
        if(mid%2==0){
            leftside=arr[mid]==arr[mid+1];
        }else{
            leftside= arr[mid]==arr[mid-1];
        }
         

         if(leftside){
             st= mid+1;

         }else
        
         end=mid-1;
         
        }
    

        
         return -1;
         
}
 int main(){

int result= single_elem(9);
 cout<< "the number is:-  "<< result<< endl;

     
    return 0;

 }