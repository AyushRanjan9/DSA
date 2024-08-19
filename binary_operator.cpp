#include<bits/stdc++.h>
using namespace std;
 string binary_AND(string s1, string s2){
    string result= "";
    for( int i=0;i<s1.length();i++){
        if(s1[i]=='1' && s2[i]=='1'){
            result+= '1';
        }
         else{
            result+='0';

         }
    }
     return result;

 }
 string binary_OR(string s1, string s2){
    string result= "";
    for( int i=0;i<s1.length();i++){
        if(s1[i]=='1' || s2[i]=='1'){
            result+= '1';
        }
         else{
            result+='0';

         }
    }
     return result;
     
 }
 string binary_XOR(string s1, string s2){
    string result= "";
    for( int i=0;i<s1.length();i++){
        if(s1[i]==s2[i]){
            result+= '0';
        }
         else{
            result+='1';

         }
    }
     return result;
     
 }
  int main(){
 
 string s1= "1101";
string s2= "1011";
cout<< binary_AND(s1,s2)<< endl;

cout<< binary_OR(s1,s2)<< endl;
cout<< binary_XOR(s1,s2)<< endl;
 return 0;
 

  }