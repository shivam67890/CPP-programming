
#include <bits/stdc++.h>
using namespace std;

int missingK(vector < int > vec, int n, int k) {
    for (int i = 0; i < n; i++) {
        if (vec[i] <= k) k++; //shifting k
        else break;
    }
    return k;
}


int main()
{
    vector<int> vec = {1,2,3,4};
    int n = 4, k = 2;
    int ans = missingK(vec, n, k);
    cout << "The missing number is: " << ans << "\n";
    return 0;
}

