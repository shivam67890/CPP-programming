// // Merge two Sorted Arrays Without Extra Space
// #include<bits/stdc++.h>
// using namespace std;

// vector<int> merge(int n,int m,vector<int>arr1,vector<int>store){
//         for (int i = 0; i < n; i++)
//     {
//         arr1[i]=(store[i]);
//     }
//     return arr1;
// }

// vector<int> merge2(int n,int m,vector<int>arr2,vector<int>store){
//     int t=0;
//         for (int i = n; i < n+m; i++)
//     {
//         // store.push_back(arr2[i]);
//         arr2[t]=(store[i]);
//         t++;
//     }

//     return arr2;
// }
// int main(){
// int n=4;
// int m=3;
// vector<int> arr1={1,4,8,10};
// vector<int> arr2={2,3,9};
// vector<int> store;
//     int maxx=max(n,m);
//     for (int i = 0; i < n; i++)
//     {
//         store.push_back(arr1[i]);
//     }
//         for (int i = 0; i < m; i++)
//     {
//         store.push_back(arr2[i]);
//     }
//     sort(store.begin(),store.end());

// vector<int> ans=merge(n,m,arr1,store);
// vector<int> ans2=merge2(n,m,arr2,store);
// for(auto it:ans){
//     cout<<it<<" ";
// }
// cout<<"\n";
// for(auto it:ans2){
//     cout<<it<<" ";
// }
//  return 0;
// }

// // optimal solution1️⃣ for Merge two Sorted Arrays Without Extra Space
// #include<iostream>
// #include <bits/stdc++.h>
// using namespace std;
// void merge(vector<int> &arr1, vector<int> &arr2, int n, int m)
// {
//     int left=n-1;
//     int right=0;
//     while (left>=0 && right<m)
//     {
//         if(arr1[left]>arr2[right]){
//             swap(arr1[left],arr2[right]);
//             left--;
//             right++;
//         }
//         else{
//             break;
//         }
//     }
//     sort(arr1.begin(),arr1.end());
//     sort(arr2.begin(),arr2.end());

// }
// int main()
// {
//     int n = 3;
//     int m = 3;
//     vector<int> arr1 = {1, 2, 3};
//     vector<int> arr2 = {2, 5, 6};
//     merge(arr1,arr2,n,m);
//     for(auto it:arr1){
//         cout<<it<<" ";
//     }
//     cout<<"\n";
//     for(auto it:arr2){
//         cout<<it<<" ";
//     }

//     return 0;
// }

// // optimal solution2️⃣ for Merge two Sorted Arrays Without Extra Space
// /// gap => 9/2=5
// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// void mergemax(vector<int> &arr1, vector<int> &arr2, int n, int m)
// {
//     if (arr1[n] > arr2[m])
//     {
//         swap(arr1[n], arr2[m]);
//     }
// }
// void merge(vector<int> &arr1, vector<int> &arr2, int n, int m)
// {
//     int s = (n + m) % 2;
//     int gap = s + (n + m) % 2;

//     while (gap > 0)
//     {
//         int left = 0;
//         int right = n+m;
//         while (right>(n+m))
//         {
//             if(left>n && right>=n) mergemax(arr1,arr2,left,right-n);
//             else if(left>=n) mergemax(arr1,arr2,left-n,right-n);
//             else mergemax(arr1,arr2,left,right);
//         }

//     }
// }
// int main()
// {
//     int n = 3;
//     int m = 3;
//     vector<int> arr1 = {1, 2, 3};
//     vector<int> arr2 = {2, 5, 6};
//     merge(arr1, arr2, n, m);
//     for (auto it : arr1)
//     {
//         cout << it << " ";
//     }
//     cout << "\n";
//     for (auto it : arr2)
//     {
//         cout << it << " ";
//     }

//     return 0;
// }

// // the repeating and missing numbers--first try.
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     vector<int> arr = {1, 2, 3, 3, 5};
//     int sum=0;
//     int arrsum=0;
//     set<int>uni;
//     int unisum=0;
//     for (int i = 0; i < arr.size(); i++)
//     {
//         uni.insert(arr[i]);
//         arrsum+=arr[i];
//         sum+=i+1;
//         // unisum+=uni[i];
//     }

//     for (int num : uni) {
//         unisum += num;
//     }
//     int a=arrsum-unisum;
//     int b=sum-unisum;

// cout<<a<<" "<<b;
//     return 0;
// }

// // count inversion{count pair in which first ele > second ele :: dont itrate} -brute force
// //also we learnt about pair in arr;
// #include <bits/stdc++.h>
// #include <iostream>
// using namespace std;

// int main()
// {
//     vector<int> arr = {5, 3, 2, 4, 1};
//     vector<pair<int,int>>arr2;
//     for (int i = 0; i < arr.size(); i++)
//         for (int j = i+1; j < arr.size(); j++)
//         {
//             {
//                 if (arr[i]>arr[j]){
//                     arr2.push_back(make_pair(arr[i],arr[j]));
//                 }
//             }
//         }
//     for(auto it:arr2){
//         cout<<it.first<<" "<<it.second<<endl;
//     }
//     return 0;
// }

// // count inversion{count pair in which first ele > second ele :: dont itrate} -optimal {merge-sort}
// // this is used for count
// #include <bits/stdc++.h>
// using namespace std;

// int merge(vector<int> &arr, int low, int mid, int high) {
//     int left = low;      // starting index of left half of arr
//     int right = mid + 1;   // starting index of right half of arr

//     //Modification 1: cnt variable to count the pairs:
//     int cnt = 0;

//     //storing elements in the temporary array in a sorted manner//

//     while (left <= mid && right <= high) {
//         if (arr[left] <= arr[right]) {
//             left++;
//         }
//         else {
//             cnt += (mid - left + 1); //Modification 2
//             right++;
//         }
//     }

//     // if elements on the left half are still left //

//     while (left <= mid) {
//         left++;
//     }

//     //  if elements on the right half are still left //
//     while (right <= high) {
//         right++;
//     }

//     return cnt; // Modification 3
// }

// int mergeSort(vector<int> &arr, int low, int high) {
//     int cnt = 0;
//     if (low >= high) return cnt;
//     int mid = (low + high) / 2 ;
//     cnt += mergeSort(arr, low, mid);  // left half
//     cnt += mergeSort(arr, mid + 1, high); // right half
//     cnt += merge(arr, low, mid, high);  // merging sorted halves
//     return cnt;
// }
// int main()
// {
//     vector<int> a = {5, 4, 3, 2, 1};
//     int n = 5;
//     int cnt = mergeSort(a,0, n-1);
//     cout << "The number of inversions are: "
//          << cnt << endl;
//     return 0;
// }

// // count inversion{count pair in which first ele > second ele :: dont itrate} -optimal {merge-sort}
// // this is used for printing pairs..
// #include <vector>
// #include <iostream>
// #include <utility>

// using namespace std;

// pair<int, vector<pair<int, int>>> merge(vector<int> &arr, int low, int mid, int high) {
//     vector<int> temp;
//     int left = low;
//     int right = mid + 1;
//     int cnt = 0;
//     vector<pair<int, int>> inversions;

//     while (left <= mid && right <= high) {
//         if (arr[left] <= arr[right]) {
//             temp.push_back(arr[left]);
//             left++;
//         }
//         else {
//             temp.push_back(arr[right]);
//             for (int i = left; i <= mid; i++) {
//                 inversions.push_back({arr[i], arr[right]});
//             }
//             cnt += (mid - left + 1);
//             right++;
//         }
//     }

//     while (left <= mid) {
//         temp.push_back(arr[left]);
//         left++;
//     }

//     while (right <= high) {
//         temp.push_back(arr[right]);
//         right++;
//     }

//     for (int i = low; i <= high; i++) {
//         arr[i] = temp[i - low];
//     }

//     return {cnt, inversions};
// }

// pair<int, vector<pair<int, int>>> mergeSort(vector<int> &arr, int low, int high) {
//     vector<pair<int, int>> inversions;
//     int cnt = 0;
//     if (low >= high) return {cnt, inversions};

//     int mid = (low + high) / 2 ;
//     auto left = mergeSort(arr, low, mid);
//     auto right = mergeSort(arr, mid + 1, high);
//     auto merged = merge(arr, low, mid, high);

//     cnt = left.first + right.first + merged.first;
//     inversions = left.second;
//     inversions.insert(inversions.end(), right.second.begin(), right.second.end());
//     inversions.insert(inversions.end(), merged.second.begin(), merged.second.end());

//     return {cnt, inversions};
// }

// pair<int, vector<pair<int, int>>> numberOfInversions(vector<int>&a, int n) {
//     return mergeSort(a, 0, n - 1);
// }

// int main() {
//     vector<int> a = {5, 4, 3, 2, 1};
//     int n = 5;
//     auto result = numberOfInversions(a, n);
//     cout << "The number of inversions are: " << result.first << endl;
//     cout << "The inversion pairs are:" << endl;
//     for (const auto& pair : result.second) {
//         cout << "(" << pair.first << ", " << pair.second << ")" << endl;
//     }
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     vector<int>  arr = {3,2,1,4,5,2};//{1,2,2,4,3,5}

//  return 0;
// }

// // count inversion{count pair in which first ele > second ele :: dont itrate} -optimal {merge-sort}
// // this is used for count

// #include <bits/stdc++.h>
// using namespace std;

// void merge(vector<int> &arr, int low, int mid, int high) {
//     vector<int> temp; // temporary array
//     int left = low;      // starting index of left half of arr
//     int right = mid + 1;   // starting index of right half of arr

//     //storing elements in the temporary array in a sorted manner//

//     while (left <= mid && right <= high) {
//         if (arr[left] <= arr[right]) {
//             temp.push_back(arr[left]);
//             left++;
//         }
//         else {
//             temp.push_back(arr[right]);
//             right++;
//         }
//     }

//     // if elements on the left half are still left //

//     while (left <= mid) {
//         temp.push_back(arr[left]);
//         left++;
//     }

//     //  if elements on the right half are still left //
//     while (right <= high) {
//         temp.push_back(arr[right]);
//         right++;
//     }

//     // transfering all elements from temporary to arr //
//     for (int i = low; i <= high; i++) {
//         arr[i] = temp[i - low];
//     }
// }

// int countPairs(vector<int> &arr, int low, int mid, int high) {
//     int right = mid + 1;
//     int cnt = 0;
//     for (int i = low; i <= mid; i++) {
//         while (right <= high && arr[i] > 2 * arr[right]) right++;
//         cnt += (right - (mid + 1));
//     }
//     return cnt;
// }

// int mergeSort(vector<int> &arr, int low, int high) {
//     int cnt = 0;
//     if (low >= high) return cnt;
//     int mid = (low + high) / 2 ;
//     cnt += mergeSort(arr, low, mid);  // left half
//     cnt += mergeSort(arr, mid + 1, high); // right half
//     cnt += countPairs(arr, low, mid, high); //Modification
//     merge(arr, low, mid, high);  // merging sorted halves
//     return cnt;
// }

// int team(vector <int> & skill, int n)
// {
//     return mergeSort(skill, 0, n - 1);
// }

// int main()
// {
//     vector<int> a = {4, 1, 2, 3, 1};
//     int n = 5;
//     int cnt = team(a, n);
//     cout << "The number of reverse pair is: "
//          << cnt << endl;
//     return 0;
// }

// // Maximum Product Subarray in an Array-better approach..
// #include <bits/stdc++.h>
// using namespace std;
// int product(vector<int> &arr)
// {
// int ans = INT_MIN;
// for (int i = 0; i < arr.size(); i++)
// {
//     int pro = arr[i];
//     for (int j =i+1; j < arr.size(); j++)
//     {
//         pro = pro * arr[j];
//         ans = max(pro, ans);

//     }
// }
// return ans;
// }
// int main()
// {
//     vector<int> arr = {1, 2, -3, 0, -4, -5};
//     int ans = product(arr);
//     cout<<ans;
//     return 0;
// }

// // Maximum Product Subarray in an Array-{optimal}
// #include <bits/stdc++.h>
// using namespace std;
// int product(vector<int> &arr)
// {
//     double pro1 = 1;
//     double pro2 = 1;
//     double ans = LONG_MIN;
//     for (int i = 0; i < arr.size(); i++)
//     {

//         pro1 *= arr[i];
//         pro2 *= arr[arr.size() - i - 1];
//         double maxi = max(pro1, pro2);
//         ans = max(maxi, ans);
//         if (pro1 == 0)
//             pro1 = 1;
//         if (pro2 == 0)
//             pro2 = 1;
//     }

//     return ans;
// }
// int main()
// {
//     vector<int> arr = {1, 2, -3, 0, -4, -5};
//     int ans = product(arr);
//     cout << ans;
//     return 0;
// }



