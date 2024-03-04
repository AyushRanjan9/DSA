#include<iostream>
using namespace std;

int largestNum( int arr[],int n){
//   here i intialize the max with 0 
 int max= 0;
//   now i start for loop for traverse the all element 
for(  int i=0; i<n; i++){
     if( max< arr[i]){
         max= arr[i];
     }
}
 return max;

}
int main(){
     int arr1[]= { 3,6,9,4,6,7,4,2,1,1};
      int n = 10;
       int  max = largestNum(arr1,10);
        cout<< "the lagest number is :- "<< max;
       return 0;


}