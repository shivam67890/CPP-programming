// second largest using optimal method
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int func(int size, vector<int> &arr)
{
    int largest=INT_MIN;
    int secondlargest=INT_MIN;
    int i=0;
    for (int i = 0; i < size; i++) {
        if (arr[i] > largest) {
            secondlargest = largest;
            largest = arr[i];
        } else if (arr[i] > secondlargest && arr[i] < largest) {
            secondlargest = arr[i];
        }
    }
    return secondlargest;
}
int main()
{
    vector<int> arr = {7, 9, 4, 1, 9};
    int size = arr.size();
    cout<<func(size, arr);
    return 0;
}

// // set : used to take unique numbers in array..
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     set<int> arr={3,4,2,6,7,1,2,6,3,1,5,9};
//     int i=0;
//    for (auto it:arr)
//    {
//     cout<<it<<" ";
//    }

//     return 0;
// }

// // to check a sorted array.
// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// bool func(int size, vector<int> &arr)
// {
//     for (int i = 1; i < size; i++)
//     {
//         if (arr[i] < arr[i - 1])
//         {
//             return false;
//         }
//     }
//     return true;
// }
// int main()
// {

//     vector<int> arr = {1, 2, 3, 4, 5};
//     int size = arr.size();
//     if (func(size, arr))
//     {
//         cout << "Yes it is sorted";
//     }
//     else
//     {
//         cout << "It is NOT sorted";
//     }
//     return 0;
// }


// // left rotation of array
// #include<bits/stdc++.h>
// using namespace std;
// void solve(int arr[], int n) {
//   int temp = arr[0]; // storing the first element of array in a variable
//   for (int i = 0; i < n - 1; i++) {
//     arr[i] = arr[i + 1];
//   }
//   arr[n - 1] = temp; // assigned the value of variable at the last index
//   for (int i = 0; i < n; i++) {
//     cout << arr[i] << " ";
//   }

// }
// int main() {
//   int arr[]= {1,2,3,4,5};
//   int n=sizeof(arr)/sizeof(arr[0]);
//   cout<<"Before left rotated array -"<<endl;
//   for (int i = 0; i < n; i++)
//   {
//     cout<<arr[i]<<" ";
//   }
//   cout<<endl;
//   cout<<"After left rotated array -"<<endl;
//   solve(arr, n);
// }



// // left rotation of array by n number ;
// #include <bits/stdc++.h>
// using namespace std;
// void solve(int arr[], int n, int k)
// {
//     int temp=0;
//     for (int j = 0; j < k; j++)
//     {
//     temp = arr[0]; // storing the first element of array in a variable
//     for (int i = 0; i < n - 1; i++)
//     {
//         arr[i] = arr[i + 1];
//     }

//     arr[n - 1] = temp;} // assigned the value of variable at the last index
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
// }
// int main()
// {
//     int n=5;
//     int k;
//     cout<<"enter the number : ";
//     cin>>k;
//     if(k>n){
//         k=k%n;
//     }
//     int arr[] = {1, 2, 3, 4, 5};
//     cout << "Before left rotated array -" << endl;
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
//     cout << "After left rotated array -" << endl;
//     solve(arr, n, k);
// }

⭐

// Move all Zeros to the end of the array
// time complexity - O(n^2) BUT IT SHOULD BE O(n)..
// #include <bits/stdc++.h>
// using namespace std;
// void solve(int arr[], int n)
// {
//     int temp = 0;
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] == 0)
//         {
//             temp = arr[i];
//             for (int j = i; j < n; j++)
//             {
//                 arr[j] = arr[j + 1];
//             }
//             arr[n - 1] = temp;
//         }
//     }
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
// }
// int main()
// {
//     int n = 7;
//     int arr[] = {1, 2, 0, 4, 5, 0, 9};
//     cout << "Before removing 0 array -" << endl;
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
//     cout << "After removing 0 array -" << endl;
//     solve(arr, n);
// return 0;
// }

// // Move all Zeros to the end of the array
// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// void solve(int arr[], int n)
// {
//     int temp = 0,j=-1;
//     for (int  i = 0; i < n; i++)
//     {
//         if(arr[i]==0){
//             j=i;
//             break;
//         }
//     }
//     // if (j == -1) return arr[]; //why ??

//     for (int k = j+1; k < n; k++)
//     {   if(arr[k]!=0){
//         swap(arr[j],arr[k]);
//         j++;
//         }
//     }

// }
// int main()
// {
//     int n = 7;
//     int arr[] = {1, 2, 0, 4, 5, 0, 9};
//     cout << "Before removing 0 array -" << endl;
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
//     cout << "After removing 0 array -" << endl;
//     solve(arr, n);
//     for (int i = 0; i < n; i++)
//     {
//         cout<<arr[i]<<" ";
//     }

//     return 0;
// }

// // for union of 2 sorted arrays.
// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int n = 6;
//     int arr1 []=  {1, 2, 2, 3, 4, 5 };
//     int arr2 []= { 2, 3, 4, 5, 6, 7 };
//     set<int> set;
//     for (int i = 0; i < n; i++)
//     {
//         set.insert(arr1[i]);
//     }
//     for (int j = 0; j < n; j++)
//     {
//         set.insert(arr2[j]);
//     }
//     int k = 0;
//     int unionn[set.size()];
//     for (auto it : set)
//     {
//         unionn[k] = it;
//         k++;
//     }
//     for (int i = 0; i <k; i++)
//     {
//         cout<<unionn[i]<<" ";
//     }

//     return 0;
// }



// // just above code with better time complexity
// #include <iostream>
// #include <bits/stdc++.h>
// #include <vector>
// using namespace std;
// vector<int> func(int n, int m, int arr1[], int arr2[], vector<int> &arr)
// {
//     // //to return vector <int> use vector <int> in this function
//     int i = 0;
//     int j = 0;
//     while (i < n && j < m)
//     {
//         if (arr1[i] < arr2[j])
//         {
//             if (arr.empty() || arr.back() != arr1[i])
//             {
//                 arr.push_back(arr1[i]);
//                 i++;
//             }
//             else
//             {
//                 i++;
//             }
//         }
//         else
//         {
//             if (arr.empty() || arr.back() != arr2[j])
//             {
//                 arr.push_back(arr2[j]);
//                 j++;
//             }
//             else
//             {
//                 j++;
//             }
//         }
//     }
//     while (i < n)
//     {
//         if (arr.empty() || arr.back() != arr1[i])
//         {
//             arr.push_back(arr1[i]);
//         }
//         i++;
//     }

//     while (j < m)
//     {
//         if (arr.empty() || arr.back() != arr2[j])
//         {
//             arr.push_back(arr2[j]);
//         }
//         j++;
//     }

//     return arr;
// }
// int main()
// {
//     int n = 6;
//     int m = 7;
//     int arr1[] = {1, 2, 3, 4, 4, 5};
//     int arr2[] = {3, 3, 4, 5, 6, 7, 8};
//     vector<int> arrUnion;
//     cout << "This is the union array :";
//     func(n, m, arr1, arr2, arrUnion);
//     int size = arrUnion.size();
//     for (int i = 0; i < size; i++)
//     {
//         cout << arrUnion[i] << " ";
//     }

//     return 0;
// }