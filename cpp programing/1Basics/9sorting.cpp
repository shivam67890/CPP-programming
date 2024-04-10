// /* Selection Sort--Given an array of N integers,
// write a program to implement the Selection sorting algorithm.*/
// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int arr[]={8,46,24,52,20,9};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     for(int i=0;i<n;i++){
//         int min=i;
//         for(int j=i;j<n;j++){
//             if(arr[min]>arr[j]){
//             min=j;
//             }
//         }
//         swap(arr[min],arr[i]);
//     }   for (int i = 0; i < n; i++)
//     {
//         cout<<arr[i]<<" ";
//     }

//     return 0;
// }


// /*Bubble Sort Algorithm
// Problem Statement: Given an array of N integers,
// write a program to implement the Bubble Sorting algorithm.*/
// //in this it take one greatest and check it with nxt ele and if it is
// // greator then move forward  to last and then restart again
// // and one by one it take every ele forward that`s why its slow
// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// void bubble(int n,int arr[]){//it`s lease time complexity would be n and max will be n^2.
//     for (int  i = n-1; i > 0; i--){
//         int  didswap=0; // to check time complexity..
//         for (int j = 0; j < i; j++){
//             // int max=j+1;
//             if(arr[j]>arr[j+1]){
//                 // max=j;
//                 swap(arr[j],arr[j+1]);
//                 didswap=1;
//             }
//         }if(didswap==0) break;
//         cout<<"run"<<endl;//this tell how many time loop run
//     }
//     return ;
// }
// int main(){
//     int n;
//     cout<<"enter no. of ele- ";
//     cin>>n;
//     int arr[n];
//     for (int i = 0; i < n; i++){
//         cin>>arr[i];
//     }
//     bubble(n,arr);
//     for (int i = 0; i < n; i++)
//     {
//         cout<<arr[i]<<" ";
//     }

//     return 0;
// }


// /*Insertion Sort Algorithm
// Problem Statement: Given an array of N integers,
// write a program to implement the Insertion sorting algorithm.*/
// // it is fast because it only take one ele and compare it with all ele
// // that`s why it is fast..
// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// void insertion(int n,int arr[]){
//     for (int i = 0; i < n; i++){
//         int j=i;
//         while (j>0 && arr[j-1]>arr[j])
//         {
//             swap(arr[j-1],arr[j]);
//             j--; // j is used to go back to check if again swap is required⭐⭐
//         }
//     }
// }
// int main(){
//     int n;
//     cout<<"enter no. of ele- ";
//     cin>>n;
//     int arr[n];
//     for (int i = 0; i < n; i++){
//         cin>>arr[i];
//     }
//     insertion(n,arr);
//     for (int i = 0; i < n; i++)
//     {
//         cout<<arr[i]<<" ";
//     }
// // In the insertion sort algorithm, when processing the element 9, 
// // it is compared with the element to its left, which is 8. If 9 is
// //  greater than 8, a swap operation is performed, causing 9 to move
// //  one position to the left.
//     return 0;
// }








// // merge sort
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
// void mergeSort(vector<int> &arr, int low, int high) {
//     if (low >= high) return;// very imp
//     int mid = (low + high) / 2 ;
//     mergeSort(arr, low, mid);  // left half
//     mergeSort(arr, mid + 1, high); // right half
//     merge(arr, low, mid, high);  // merging sorted halves
// }
// int main() {

//     vector<int> arr = {9, 4, 7, 6, 3, 1, 5}  ;
//     int n = 7;

//     cout << "Before Sorting Array: " << endl;
//     for (int i = 0; i < n; i++) {
//         cout << arr[i] << " "  ;
//     }
//     cout << endl;
//     mergeSort(arr, 0, n - 1);
//     cout << "After Sorting Array: " << endl;
//     for (int i = 0; i < n; i++) {
//         cout << arr[i] << " "  ;
//     }
//     cout << endl;
//     return 0 ;
// }
   



// // quick sort
// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// int merge(int arr[], int left, int right)
// {
//     int i = left;
//     int j = right;
//     int first = arr[left];
//     while (i < j)
//     {
//         while (arr[i] >= first && i <= j)
//         {
//             i++;
//         }
//         while (arr[j] < first && i < j)
//         {
//             j--;
//         }
//         if (i <= j)
//         {
//             swap(arr[i], arr[j]);
//             i++;
//             j--;
//         }
//     }
//     swap(arr[left], arr[j]);
//     return j;
// }
// void divide(int arr[], int left, int right)
// {
//     if (left < right)
//     {
//         // int sz=arr.size()-1;
//         int pindex = merge(arr, left, right);
//         divide(arr, left, pindex - 1);
//         divide(arr, pindex + 1, right);
//     }
// }
// int main()
// {
//     int arr[8] = {4, 6, 2, 5, 7, 9, 1, 3};
//     int n = 8;
//     divide(arr, 0, n - 1);
//     cout << "After Using quick sort: "
//          << "\n";
//     for (int i = n-1; i >= 0; i--)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << "\n";
//     return 0;
// }




// same as above
// #include <bits/stdc++.h>
// using namespace std;

// int partition(vector<int> &arr, int low, int high) {
//     int pivot = arr[low];
//     int i = low;
//     int j = high;

//     while (i < j) {
//         while (arr[i] <= pivot && i <= high - 1) {
//             i++;
//         }

//         while (arr[j] > pivot && j >= low + 1) {
//             j--;
//         }
//         if (i < j) swap(arr[i], arr[j]);
//     }
//     swap(arr[low], arr[j]);
//     return j;
// }

// void qs(vector<int> &arr, int low, int high) {
//     if (low < high) {
//         int pIndex = partition(arr, low, high);
//         qs(arr, low, pIndex - 1);
//         qs(arr, pIndex + 1, high);
//     }
// }

// vector<int> quickSort(vector<int> arr) {
//     qs(arr, 0, arr.size() - 1);
//     return arr;
// }

// int main()
// {
//     vector<int> arr = {4, 6, 2, 5, 7, 9, 1, 3};
//     int n = arr.size();
//     cout << "Before Using quick Sort: " << endl;
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;

//     arr = quickSort(arr);
//     cout << "After Using quick sort: " << "\n";
//     for (int i = 0; i < n; i++) {
//         cout << arr[i] << " ";
//     }
//     cout << "\n";
//     return 0;
// }


