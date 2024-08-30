// binary search-real life example we take a dictionary {search:"raj"}and split it half to check left side contain
// 's' and right side contain 't' :: so its obvious we will search in left side of the dictionary and split continue

// IMP+++----prevent overfleft by using long long or mid=left+(high+left)/2;

// // find ele index in array using Binary Search
// #include<bits/stdc++.h>
// using namespace std;
// int binary(int find,vector<int> &arr){
//     int left=0;   int right=arr.size()-1;
//     while (left<=right)
//     {
//         int mid=(left+right)/2;
//         if(arr[mid]==find) return mid;
//         else if(arr[mid]<find) left=mid+1;
//         else right=mid-1;
//     }
//     return -1;
// }
// int main(){
//     vector<int> arr={1,2,3,4,5,6,7};
//     int find=4;
//     int ans=binary(find,arr);
//     cout<<"index => "<<ans;
//  return 0;
// }

// // find ele index in array using Binary Search{recursion}
// #include <bits/stdc++.h>
// using namespace std;
// int rec(int left, int right, int find, vector<int> &arr)
// {
//     int mid = (left + right) / 2;
//     if (arr[mid] == find)
//         return mid;
//     else if (arr[mid] < find)
//     {
//         left = mid + 1;
//         return rec(left, right,find, arr);
//     }
//     else
//     {
//         right = mid - 1;
//         return rec(left, right,find, arr);
//     }
//     return -1;
// }

// int binary(int find, vector<int> &arr)
// {
//     int left = 0;
//     int right = arr.size() - 1;

//     int ans = rec(left, right, find, arr);
//     return ans;
// }
// int main()
// {
//     vector<int> arr = {1, 2, 3, 4, 5, 6, 7};
//     int find = 4;
//     int ans = binary(find, arr);
//     cout << "index => " << ans;
//     return 0;
// }

// // lefter bound -smallest index that meets the condition
// #include <bits/stdc++.h>
// using namespace std;
// int binary(int x, vector<int> &arr, int n)
// {
//     int left = 0;
//     int right = arr.size() - 1;
//     int ans = n + 1;
//     while (left <= right)
//     {
//         int mid = (left + right) / 2;
//         if (arr[mid] == x)
//         {
//             ans = mid;
//             return ans;
//         }
//         else if (arr[mid] > x)
//         {
//             ans = mid;
//             right = mid - 1;
//         }

//         else
//         {
//             left = mid + 1;
//         }
//     }
//     return ans;
// }
// int main()
// {
//     vector<int> arr = {1, 2, 3, 3, 5, 8, 8, 10, 10, 11};
//     int n = 9;
//     int x = 3;
//     int ans = binary(x, arr, n);
//     cout << "index => " << ans;
//     return 0;
// }

// // higher bound
// #include <bits/stdc++.h>
// using namespace std;
// int binary(int x, vector<int> &arr, int n)
// {
//     int left = 0;
//     int right = arr.size() - 1;
//     int ans = n + 1;
//     while (left <= right)
//     {
//         int mid = (left + right) / 2;
//          if (arr[mid] > x)
//         {
//             ans = mid;
//             right = mid - 1;
//         }

//         else
//         {
//             left = mid + 1;
//         }
//     }
//     return ans;
// }
// int main()
// {
//     vector<int> arr = {1, 2, 3, 3, 5, 8, 8, 10, 10, 11};
//     int n = 9;
//     int x = 3;
//     int ans = binary(x, arr, n);
//     cout << "index => " << ans;
//     return 0;
// }

// // first and last element of a given occurence..
// #include <bits/stdc++.h>
// using namespace std;

// pair<int, int> binary(int x, vector<int>& arr, int n) {
//     int first = -1, last = -1;

//     // Binary search for first occurrence
//     int left = 0, right = n - 1;
//     while (left <= right) {
//         int mid = left + (right - left) / 2;
//         if (arr[mid] == x) {
//             first = mid;
//             right = mid - 1;  // Continue searching in the left half
//         } else if (arr[mid] < x) {
//             left = mid + 1;
//         } else {
//             right = mid - 1;
//         }
//     }
//     // Binary search for last occurrence
//     left = 0, right = n - 1;
//     while (left <= right) {
//         int mid = left + (right - left) / 2;
//         if (arr[mid] == x) {
//             last = mid;
//             left = mid + 1;  // Continue searching in the right half
//         } else if (arr[mid] < x) {
//             left = mid + 1;
//         } else {
//             right = mid - 1;
//         }
//     }
//     return {first, last};
// }

// int main() {
//     vector<int> arr = {1, 2, 3, 3, 5, 8, 8, 10, 10, 11};
//     int n = arr.size();
//     int x = 3;
//     pair<int,int> ans = binary(x, arr, n);
//     cout << "First occurrence index: " << ans.first << ", Last occurrence index: " << ans.second;
//     return 0;
// }

// // Count Occurrences in Sorted Array
// #include <bits/stdc++.h>
// using namespace std;

// int countOccurrences(int x, vector<int>& arr, int n) {
//     int first = -1, last = -1;

//     // Binary search for first occurrence
//     int left = 0, right = n - 1;
//     while (left <= right) {
//         int mid = left + (right - left) / 2;
//         if (arr[mid] == x) {
//             first = mid;
//             right = mid - 1;  // Continue searching in the left half
//         } else if (arr[mid] < x) {
//             left = mid + 1;
//         } else {
//             right = mid - 1;
//         }
//     }

//     // If the element is not found, return 0
//     if (first == -1) return 0;

//     // Binary search for last occurrence
//     left = 0, right = n - 1;
//     while (left <= right) {
//         int mid = left + (right - left) / 2;
//         if (arr[mid] == x) {
//             last = mid;
//             left = mid + 1;  // Continue searching in the right half
//         } else if (arr[mid] < x) {
//             left = mid + 1;
//         } else {
//             right = mid - 1;
//         }
//     }

//     return last - first + 1;
// }

// int main() {
//     vector<int> arr = {1, 2, 3, 3, 5, 8, 8, 10, 10, 11};
//     int n = arr.size();
//     int x = 3;
//     int count = countOccurrences(x, arr, n);
//     cout << "Number of occurrences of " << x << ": " << count;
//     return 0;
// }

// // Search Element in a Rotated Sorted Array-unique element
// #include <bits/stdc++.h>
// using namespace std;

// int search(vector<int>& arr, int n, int k) {
//     int left = 0, high = n - 1;
//     while (left <= high) {
//         int mid = (left + high) / 2;

//         //if mid points the target
//         if (arr[mid] == k) return mid;

//         //if left part is sorted:
//         if (arr[left] <= arr[mid]) {
//             if (arr[left] <= k && k <= arr[mid]) {
//                 //element exists:
//                 high = mid - 1;
//             }
//             else {
//                 //element does not exist:
//                 left = mid + 1;
//             }
//         }
//         else { //if right part is sorted:
//             if (arr[mid] <= k && k <= arr[high]) {
//                 //element exists:
//                 left = mid + 1;
//             }
//             else {
//                 //element does not exist:
//                 high = mid - 1;
//             }
//         }
//     }
//     return -1;
// }

// int main()
// {
//     vector<int> arr = {7, 8, 9, 1, 2, 3, 4, 5, 6};
//     int n = 9, k = 1;
//     int ans = search(arr, n, k);
//     if (ans == -1)
//         cout << "Target is not present.\n";
//     else
//         cout << "The index is: " << ans << "\n";
//     return 0;
// }

// // check Element in a Rotated Sorted Array -2 {not unique element}
// #include <bits/stdc++.h>
// using namespace std;

// bool search(vector<int>& arr, int n, int k) {
//     int left = 0, high = n - 1;
//     while (left <= high) {
//         int mid = (left + high) / 2;
//         if (arr[left]==arr[mid] && arr[mid]==arr[high]){
//             left++;
//             high--;
//         }
//         //if mid points the target
//         if (arr[mid] == k) return true;

//         //if left part is sorted:
//         if (arr[left] <= arr[mid]) {
//             if (arr[left] <= k && k <= arr[mid]) {
//                 //element exists:
//                 high = mid - 1;
//             }
//             else {
//                 //element does not exist:
//                 left = mid + 1;
//             }
//         }
//         else { //if right part is sorted:
//             if (arr[mid] <= k && k <= arr[high]) {
//                 //element exists:
//                 left = mid + 1;
//             }
//             else {
//                 //element does not exist:
//                 high = mid - 1;
//             }
//         }
//     }
//     return false;
// }

// int main()
// {
//     vector<int> arr = {7, 8, 9, 1,1,1, 2, 3, 4, 5, 6};
//     int n = 9, k = 10;
//     bool ans = search(arr, n, k);
//     if(ans){
//         cout<<k<<" is present in array.";
//     }
//     else
//     cout<<k<<" is not present in array.";
//     return 0;
// }

// // find k rotation
// #include <bits/stdc++.h>
// using namespace std;
// int binary(vector<int> &arr)
// {
//     int low = 0;
//     int high = arr.size() - 1;
//     int ans = INT_MAX;
//     int index=0;
//     while (low <= high)
//     {
//         if (arr[low] <= arr[high])
//         {
//             if (arr[low] < ans)
//             {
//                 index = low;
//                 ans = arr[low];
//             }
//             break;
//         }
//         int mid = low + (high - low) / 2;
//         if (arr[low] <= arr[mid])
//         {
//             if (arr[low]<ans){
//                 index=low;
//                 ans=arr[low];
//             }
//                 low = mid + 1;
//         }
//         else {
//                 if (arr[mid]<ans){
//                     index=mid;
//                 ans=arr[mid];
//             }
//             high=mid-1;
//         }
//     }

//     return index;
// }
// int main()
// {

//     vector<int> arr = {32741, 2322, 9591, 13148, 14275, 14326, 16333, 21015, 26401, 30503, 30948};
//     int ans = binary(arr);
//     cout << "array is rotated by " << ans<< " elements .";

//     return 0;
// }


// // Search Single Element in a sorted array
// #include <bits/stdc++.h>
// using namespace std;
// int binary(vector<int> &arr)
// {
//     int n = arr.size();
//     if (arr.size() == 1)
//         return arr[1];
//     if (arr[n - 1] != arr[n - 2])
//         return arr[n - 1];
//     int low = 1; // we are not taking first and last element because then we have to wrte many condition..
//     int right = arr.size() - 2;
//     while (low <= right) // even-odd => odd-even
//     {
//         int mid = low + (right - low) / 2;
//         if (arr[mid] != arr[mid - 1] && arr[mid] != arr[mid + 1])
//             return arr[mid];

//         if (mid % 2 == 1)
//         {
//             if (arr[mid] == arr[mid - 1])
//             {
//                 low = mid + 1;
//             }
//             else
//                 right = mid - 1;
//         }
//         else
//         {
//             if (arr[mid] == arr[mid + 1])
//             {
//                 low = mid + 1;
//             }
//             else
//                 right = mid - 1;
//         }
//     }
//     return -1;
// }
// int main()
// {
//     vector<int> arr = {1, 1, 2, 3, 3, 4, 4, 6, 6, 7, 7};
//     int ans = binary(arr);
//     cout << ans << " is a unique elements .";
//     return 0;
// }



// // Peak element in Array
// #include <bits/stdc++.h>
// using namespace std;

// int findPeakElement(vector<int> &arr) {
//     int n = arr.size(); //Size of array.

//     // Edge cases:
//     if (n == 1) return 0;
//     if (arr[0] > arr[1]) return 0;
//     if (arr[n - 1] > arr[n - 2]) return n - 1;

//     int low = 1, high = n - 2;
//     while (low <= high) {
//         int mid = (low + high) / 2;

//         if (arr[mid - 1] < arr[mid] && arr[mid] > arr[mid + 1])
//             return mid;

//         if (arr[mid] > arr[mid - 1]) low = mid + 1;

//         else high = mid - 1;
//     }
//     // Dummy return statement
//     return -1;
// }

// int main()
// {
//     vector<int> arr = {1, 9, 3, 4, 5, 6, 7, 8, 9};
//     int ans = findPeakElement(arr);
//     cout << "The peak is at index: " << ans << "\n";
//     return 0;
// }

