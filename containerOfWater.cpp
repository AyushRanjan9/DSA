#include <iostream>
using namespace std;
// int main(){
//  int arr[]={1,8,6,2,5,4,8,3,7};
//   int maxwater=0;
//   int n=9;
//   for( int i=0;i<n;i++){
//     for(int j=i+1;j<n;j++)
// {
//     int width= j-i;
//     int height=min(arr[i],arr[j]);
//     int area=width*height;
//     maxwater=max(maxwater,area);

// }

// }
//  cout<< "water container"<<maxwater<< endl;
//   return 0;

// }

// optimal approach ---
int main()
{
    int arr[] = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    int maxwater = 0;
    int n = 9;
    int lp = 0;
    int rp = n - 1;
    while (lp < rp)
    {
        int width = rp-lp;
        int height = min(arr[lp], arr[rp]);
        int area = width * height;
        maxwater = max(maxwater, area); 
         arr[lp]<arr[rp]?lp++:rp--;
    }

    cout<<"maximum water containt "<< maxwater<<endl;
     return 0;
}



