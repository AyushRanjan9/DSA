#include <iostream>
#include <vector>
#include <algorithm> 
using namespace std;

void rotateArry(vector<int> &nums, int k)
{
    int n = nums.size();
    k = k % n;

    reverse(nums.begin(), nums.begin()+(n - k));
    reverse(nums.begin() + (n - k), nums.end());
    reverse(nums.begin(), nums.end());
}
int main()
{
  
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7};
    int k = 3;

    cout << "Before rotate: ";
    for (int num : nums)
    {
        cout << num << " ";
    }
    cout << endl;

    rotateArry(nums, k);

    cout << "After rotate: ";
    for (int num : nums)
    {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}