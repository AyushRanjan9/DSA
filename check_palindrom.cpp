#include<bits/stdc++.h>
using namespace std;

bool ispalindrome(string str){
     int start= 0;
      int end = str.length()-1;
       while( start< end){
        if(str[start]== str[end]){
          start ++;
           end--;

        }
         return true;

       }
        return false;


}

 int main(){

     string ayu= "abbbaa";
    if(  ispalindrome(ayu)){
        cout<<" yes this word is palindrome " << endl;

    }
    else {
        cout<<" no this not palindrome "<< endl;

    }
 }