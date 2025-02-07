#include<bits/stdc++.h>
#include<set>
using namespace std;
vector<int> repeatelem(int arr[], int n){
     vector<int > unique;
    unordered_set<int>seen;
    for(int i=0;i<n;i++){
        if(seen.find(arr[i])== seen.end()){
          seen.insert(arr[i]);
           unique.push_back(arr[i]);
        }
    }
     return unique;
}
 int main(){
    int array[]={5,7,2,3,4,5,5,6,7};
    for(int value:repeatelem(array,9)){
        cout<< value << " ";
    }
    return 0;
 }