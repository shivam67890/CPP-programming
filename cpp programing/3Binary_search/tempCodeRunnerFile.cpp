
// higher bound
#include <bits/stdc++.h>
using namespace std;
int binary(int x, vector<int> &arr, int n)
{
    int left = 0;
    int right = arr.size() - 1;
    int ans = n + 1;
    while (left <= right)
    {
        int mid = (left + right) / 2;
         if (arr[mid] > x)
        {
            ans = mid;
            right = mid - 1;
        }

        else
        {
            left = mid + 1;
        }
    }
    return ans;
}
int main()
{
    vector<int> arr = {1, 2, 3, 3, 5, 8, 8, 10, 10, 11};
    int n = 9;
    int x = 3;
    int ans = binary(x, arr, n);
    cout << "index => " << ans;
    return 0;
}

