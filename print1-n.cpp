#include<iostream>
using namespace std;

void printNumber(int i, int n){
         if(i>n){
            return;

         }
         cout<< i<< " ";
         printNumber(i+1, n);
     }
 int main(){
    cout<< " enter ur number:- "<< endl;
     int n ;
      cin>> n;

    
     printNumber(1, n);
      return 0;


     
 }
  
