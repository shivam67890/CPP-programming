// ciel is used for rounding of value --⭐

// // Finding Sqrt of a number using Binary Search
// #include <bits/stdc++.h>
// using namespace std;
// int binary(int ans)
// {
//     int low = 0;
//     int high = ans;
//     int ret;
//      if(ans==1) return ans;
//     while (low <= high)
//     {
//         long long  mid = low + (high - low) / 2;
//         long long mult=(mid*mid);
//         if(mult==ans) return mid;
//         if (mult > ans)
//         {
//             high = mid - 1;
//             ret = high;
//         }
//         else
//         {
//             low = mid + 1;
//             ret = high;
//         }
//     }

//     return ret;
// }
// int main()
// {
//     int squareRoot = 9;
//     int ans = binary(squareRoot);
//     cout << ans;
//     return 0;
// }

// // Nth Root of a Number using Binary Search
// #include <bits/stdc++.h>
// using namespace std;
// long long mult(int n, int x,int m)
// {
//     long long ret = 1;
//     for (int i = 0; i < n; i++)
//     {
//         ret *= x;
//         if(ret>m) return 2;
//     }
//       if (ret == m)
//             return 1;
//     return -1;
// }
// int binary(int n, int m)
// {
//     int low = 0;
//     long long ret;
//     long long high = m;
//     while (low <= high)
//     {
//         int mid = low + (high - low) / 2;
//         long long x = mult(n, mid,m);
//         if(x==1){
//             return mid;        }
//         if (x==2)
//         {
//             high = mid - 1;
//         }
//         else
//         {
//             low = mid + 1;
//         }
//     }
//     return -1;
// }
// int main()
// {
//     int n = 6;
//     int m = 4096;
//     int ans = binary(n, m);
//     cout << ans;
//     return 0;
// }

// Problem Statement: A monkey is given ‘n’ piles of bananas, whereas the 'ith' pile has ‘a[i]’ bananas. An integer
//  ‘h’ is also given, which denotes the time (in hours) for all the bananas to be eaten.
// brute force
// #include <bits/stdc++.h>
// using namespace std;
// int koko(vector<int> &arr, int h)
// {
//     int maxx = *std::max_element(arr.begin(), arr.end());
//     vector<int> k;
//     int z;
//     for (int i = 1; i <= h; i++)
//     {
//             int sum = 0;
//         for (int j = 0; j < arr.size(); j++)
//         {
//             sum += ceil(static_cast<double>(arr[j]) / i);
// // In this case, arr[j] / i performs integer division. For example, if arr[j] is 7 and i is 3, the result would be 2 (not 2.33333).
// // Then ceil(2) is still 2, which is not the correct result we want.
//         }
//         if (sum == h)
//         {
//             k.push_back(i);
//         }
//     }
//     z = *std::min_element(k.begin(), k.end());

//     return z;
// }
// int main()
// {
//     vector<int> arr = {7, 15, 6, 3};
//     int h = 8;
//     int ans = koko(arr, h);
//     cout << ans;
//     return 0;
// }

// // optimal soln
// #include <bits/stdc++.h>
// using namespace std;
// int solve(const vector <int> &arr, int x)
// {
//         int sum = 0;
//     for (int i = 0; i < arr.size(); i++)
//     {
//         sum += ceil(static_cast<double>(arr[i]) / x);
//         // sum += (arr[i] + x - 1) / x;  // Equivalent to ceil(arr[i] / x), but faster
//     }
//     return sum;
// }
// int koko(const vector <int> &arr, int h)
// {
//     int left = 1;
//     int right = *max_element(arr.begin(),arr.end());
//     while (left < right)
//     {
//         int mid = left + (right - left) / 2;
//         int find=solve(arr, mid);
//         if(find<=h){
//             right=mid;
//         }
//         else{
//             left=mid+1;
//         }
//     }
//     return left;
// }
// int main()
// {
//     vector<int> arr = {1,1,1,999999999};
//     int h = 10;
//     int ans = koko(arr, h);
//     cout << ans;
//     return 0;
// }

// brute force-Minimum days to make M bouquets
// #include <bits/stdc++.h>
// #include <set>
// using namespace std;
// int binary(vector<int> &flower, int m, int k)
// {
//     if (m * k > flower.size())
//         return -1;
//     int count = 0;
//     int sum=0;
//     int minn = *min_element(flower.begin(), flower.end());
//     int max = *max_element(flower.begin(), flower.end());
//     int l = 0;
//     for (int i = minn; i <= max; i++)
//     {   sum = 0;
//         count = 0;
//         for (int j = 0; j < flower.size(); j++)
//         {
//             if (flower[j] <= i)
//             {
//                 count++;
//                 l=i;
//             }
//             else
//             {
//                 sum+=count/k;
//                 count = 0;
//                 l=i;
//             }
//         }
//         sum+= count / k;
//         if(sum==m){
//             return l;
//         }
//     }
//     return -1;
// }
// int main()
// {
//     vector<int> flower = {7, 7, 7, 7, 13, 11, 12, 7};
//     int m = 2;
//     int k = 3;
//     int ans = binary(flower, m, k);
//     cout << ans;
//     return 0;
// }

// // optimal solution -Minimum days to make M bouquets
// #include <bits/stdc++.h>
// #include <set>
// using namespace std;
// bool posible(vector<int> &flower, int m, int k,int mid)
// {
//     int count = 0;
//     int sum = 0;
//         for (int j = 0; j < flower.size(); j++)
//         {
//             if (flower[j] <= mid)
//             {
//                 count++;
//             }
//             else
//             {
//                 sum += count / k;
//                 count = 0;
//             }
//         }
//         sum += count / k;

//     return sum>=m;
// }
// int binary(vector<int> &flower, int m, int k)
// {
//         if (m * k > flower.size())
//         return -1;
//     int minn = *min_element(flower.begin(), flower.end());
//     int maxx = *max_element(flower.begin(), flower.end());
//     int left=minn;
//     int right=maxx;
//     while (left<=right)
//     {
//         int mid=left+(right-left)/2;

//         if(posible(flower,m,k,mid)){
//             right=mid-1;
//         }
//         else{
//             left=mid+1;
//         }
//     }
//     return left;
// }
// int main()
// {
//     vector<int> flower = {7, 7, 7, 7, 13, 11, 12, 7};
//     int m = 2;
//     int k = 3;
//     int ans = binary(flower, m, k);
//     cout << ans;
//     return 0;
// }

// // optimal solution -Find the Smallest Divisor Given a Threshold
// #include<bits/stdc++.h>
// using namespace std;
// bool possible(vector<int> &arr,int limit,int x){
//     int sum=0;
//     for (int i = 0; i < arr.size(); i++)
//     {
//         sum+=ceil((double)arr[i]/(double)x);
//     }
//     return sum<=limit;
// }
// int binary(vector<int> &arr,int n,int limit){
//     int mxx=*max_element(arr.begin(),arr.end());
//     int low=0;
//     int high=mxx;
//     while(low<=high){
//         int mid=low+(high-low)/2;
//         if(possible(arr,limit,mid)){
//             high=mid-1;
//         }
//         else{
//             low=mid+1;
//         }
//     }
//     return low;
// }
// int main(){
//     vector <int> arr={1,2,3,4,5};
//     int n=5;
//     int limit=8;
//     int ans=binary(arr,n,limit);
//     cout<<ans;
//  return 0;
// }

// // Capacity to Ship Packages within D Days -brute force
// #include <bits/stdc++.h>
// using namespace std;
// int binary(vector<int> &arr, int x)
// {
//     int day = 1;
//     int load = 0;
//     for (int i = 0; i < arr.size(); i++)
//     {
//         if (load + arr[i] > x)
//         {
//             day++;
//             load = arr[i]; // ⭐⭐⭐⭐
//         }
//         else
//         {
//             load += arr[i];
//         }
//     }
//     return day;
// }
// int main()
// {
//     vector<int> arr = {5, 4, 5, 2, 3, 4, 5, 6};
//     int d = 5;
//     int sum = 0;
//     int maxelement = INT_MIN;
//     for (int i = 0; i < arr.size(); i++)
//     {
//         sum += arr[i];
//         maxelement = max(maxelement, arr[i]);
//     }
//     for (int i = maxelement; i <= sum; i++)
//     {
//         if (binary(arr, i) <= d)
//         {
//             cout << i;
//             break;
//         }
//     }
//     return 0;
// }

// // Capacity to Ship Packages within D Days - optimal force
// #include <bits/stdc++.h>
// using namespace std;
// int possible(vector<int> &arr, int x)
// {
//     int day = 1;
//     int load = 0;
//     for (int i = 0; i < arr.size(); i++)
//     {
//         if (load + arr[i] > x)
//         {
//             day++;
//             load = arr[i]; // ⭐⭐⭐⭐
//         }
//         else
//         {
//             load += arr[i];
//         }
//     }
//     return day;
// }
// int binary(vector<int> &arr, int d)
// {
//     int sum = 0;
//     int maxelement = INT_MIN;
//     for (int i = 0; i < arr.size(); i++)
//     {
//         sum += arr[i];
//         maxelement = max(maxelement, arr[i]);
//     }
//     int low = maxelement;
//     int high = sum;
//     while (low <= high)
//     {
//         int mid = low + (high - low) / 2;
//         int poss = possible(arr, mid);
//         if (poss <= d)
//         {
//             high = mid - 1;
//         }
//         else
//         {
//             low = mid + 1;
//         }
//     }
//     return low;
// }
// int main()
// {
//     vector<int> arr = {5, 4, 5, 2, 3, 4, 5, 6};
//     int d = 5;
//     int ans = binary(arr, d);
//     cout<<ans;
//     return 0;
// }

// // Problem Statement: You are given a strictly increasing array ‘vec’ and a positive integer 'k'. Find the 'kth' positive integer missing from 'vec'.
// //tricky one
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     vector<int> arr={2,3,4,7,11};
//     int k=5;

//     for (int i = 0; i < arr.size(); i++)
//     {
//         if(arr[i]<=k){
//             k++;
//         }
//         else{
//             break;
//         }
//     }
//     cout<<k;
//  return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int binary(vector<int> &arr, int k)
// {
//     int low = 1;
//     int high = arr.size();
//     int cnt = k;
//     while (low <= high)
//     {
//         int mid = low + (high - low) / 2;
//         if (arr[mid] <= cnt)
//         {
//             cnt = k;
//             cnt += mid; // 9
//             low = mid + 1;
//         }
//         else
//         {
//             high = mid - 1;
//         }
//     }
//     return cnt;
// }
// int main()
// {
//     vector<int> arr = {2, 3, 4, 7, 11};
//     int k = 5;
//     int ans = binary(arr, k);
//     cout << ans;
//     return 0;
// }

// // Problem Statement: You are given an array 'arr' of size 'n' which denotes the position of stalls.
// // You are also given an integer 'k' which denotes the number of aggressive cows.
// // You are given the task of assigning stalls to 'k' cows such that the minimum distance between any two of them is the maximum possible.
// // Find the maximum possible minimum distance.
// // brute force
// #include <bits/stdc++.h>
// using namespace std;
// bool possible(vector<int>&arr,int x,int k){
//     int last=arr[0];
//     int cnt=1;
//     for (int i = 1; i < arr.size(); i++)
//     {
//         if(arr[i]-last>=x){
//             cnt+=1;
//             last =arr[i];
//             if(cnt>=k){
//                 return true;
//             }
//         }
//     }
//     return false;

// }
// int main()
// {
//     vector<int> arr = {0, 3, 4, 7, 10, 9};
//     int n = 6;
//     int k = 4;
//     sort(arr.begin(), arr.end());
//     int max=0;
//     int limit = arr[n - 1] - arr[0];
//     for (int i = 1; i <= limit; i++)
//     {
//         if (possible(arr, i, k)==true)
//         {
//            max=i;
//         }
//     }
//     cout<<max;
//     return 0;
// }

// // Problem Statement: You are given an array 'arr' of size 'n' which denotes the position of stalls.
// // You are also given an integer 'k' which denotes the number of aggressive cows.
// // You are given the task of assigning stalls to 'k' cows such that the minimum distance between any two of them is the maximum possible.
// // Find the maximum possible minimum distance.
// // optimal sol
// #include <bits/stdc++.h>
// using namespace std;

// bool canWePlace(vector<int> &stalls, int dist, int cows) {
//     int n = stalls.size(); //size of array
//     int cntCows = 1; //no. of cows placed
//     int last = stalls[0]; //position of last placed cow.
//     for (int i = 1; i < n; i++) {
//         if (stalls[i] - last >= dist) {
//             cntCows++; //place next cow.
//             last = stalls[i]; //update the last location.
//         }
//         if (cntCows >= cows) return true;
//     }
//     return false;
// }
// int aggressiveCows(vector<int> &stalls, int k) {
//     int n = stalls.size(); //size of array
//     //sort the stalls[]:
//     sort(stalls.begin(), stalls.end());

//     int low = 1, high = stalls[n - 1] - stalls[0];
//     //apply binary search:
//     while (low <= high) {
//         int mid = (low + high) / 2;
//         if (canWePlace(stalls, mid, k) == true) {
//             low = mid + 1;
//         }
//         else high = mid - 1;
//     }
//     return high;
// }

// int main()
// {
//     vector<int> stalls = {0, 3, 4, 7, 10, 9};
//     int k = 4;
//     int ans = aggressiveCows(stalls, k);
//     cout << "The maximum possible minimum distance is: " << ans << "\n";
//     return 0;
// }




// // Allocate Minimum Number of Pages -optimal soln
// #include <bits/stdc++.h>
// using namespace std;
// bool possible(vector<int> &arr, int m, int mid)
// {
//     int last = 0;
//     int count = 1;
//     for (int i = 0; i < arr.size(); i++)
//     {
//         if (arr[i] + last <= mid)
//         {
//             last += arr[i];
//         }
//         else
//         {
//             count++;
//             last = arr[i];
//         }

//     if (count > m)
//     {
//         return false;
//     }
//     }
//     return count<=m;
// }
// int binary(vector<int> &arr, int m)
// {
//     int ret=INT_MAX;
//     if (m > arr.size())
//         return -1; // book allocation impossible:
//     int low = *max_element(arr.begin(), arr.end());
//     int high = accumulate(arr.begin(), arr.end(), 0);
//     while (low <= high)
//     {
//         int mid = low + (high - low) / 2;
//         if (possible(arr, m, mid) == true)
//         {
//             if (mid < ret)
//             {
//                 ret = mid;
//             }
//             high = mid - 1;
//         }
//         else
//         {
//             low = mid + 1;
//         }
//     }
//     return ret;
// }
// int main()
// {
//     vector<int> arr = {25, 46, 28, 49, 24};
//     int m = 4;
//     int ans = binary(arr, m);
//     cout << ans;
//     return 0;
// }



