#include<bits/stdc++.h>
 using namespace std;
  string replacecharater(string str , char ch1, char ch2){
    string result = str;
    for(int i=0 ; i<result.length(); i++){
        if( result[i] == ch1){
            result [i]= ch2;

        }
         else if( result[i]==ch2){
            result [i]=ch1;

         }
    }
     return result;
  }
    int main(){
         string str = "append";
         char ch1='a';
         char ch2='p';
         cout<< replacecharater( str , ch1, ch2)<< endl;

    }