// binary search-real life example we take a dictionary {search:"raj"}and split it half to check left side contain
// 's' and right side contain 't' :: so its obvious we will search in left side of the dictionary and split continue

// IMP+++----prevent overflow by using long long or mid=low+(high+low)/2;

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

// // lower bound -smallest index that meets the condition
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
//     int low = 0, high = n - 1;
//     while (low <= high) {
//         int mid = (low + high) / 2;

//         //if mid points the target
//         if (arr[mid] == k) return mid;

//         //if left part is sorted:
//         if (arr[low] <= arr[mid]) {
//             if (arr[low] <= k && k <= arr[mid]) {// we check target with lower element
//                 //element exists:
//                 high = mid - 1;
//             }
//             else {
//                 //element does not exist:
//                 low = mid + 1;
//             }
//         }
//         else { //if right part is sorted:
//             if (arr[mid] <= k && k <= arr[high]) {// we check target with lower element
//                 //element exists:
//                 low = mid + 1;
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






// check Element in a Rotated Sorted Array -2 {not unique element}
#include <bits/stdc++.h>
using namespace std;

bool search(vector<int>& arr, int n, int k) {
    int low = 0, high = n - 1;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[low]==arr[mid] && arr[mid]==arr[high]){
            low++;
            high--;
        }
        //if mid points the target
        if (arr[mid] == k) return true;

        //if left part is sorted:
        if (arr[low] <= arr[mid]) {
            if (arr[low] <= k && k <= arr[mid]) {// we check target with lower element
                //element exists:
                high = mid - 1;
            }
            else {
                //element does not exist:
                low = mid + 1;
            }
        }
        else { //if right part is sorted:
            if (arr[mid] <= k && k <= arr[high]) {// we check target with lower element
                //element exists:
                low = mid + 1;
            }
            else {
                //element does not exist:
                high = mid - 1;
            }
        }
    }
    return false;
}

int main()
{
    vector<int> arr = {7, 8, 9, 1, 2, 3, 4, 5, 6};
    int n = 9, k = 10;
    bool ans = search(arr, n, k);
    cout<<ans;
    return 0;
}


