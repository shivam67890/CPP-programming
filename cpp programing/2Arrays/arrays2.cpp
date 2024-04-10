// // finding missing number
// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// int func(vector<int>& arr, int n)
// {
//     int hash[n+1] = {0};
//     for (int i = 0; i < n-1 ; i++)
//     {
//         hash[arr[i]]++;
//     }
//     for (int j = 1; j <= n+1; j++)
//     {
//         if (hash[j] == 0)
//         {
//             return j;
//         }
//     }
//     return -1;
// }
// int main()
// {
//     vector<int> arr = {1, 2, 3, 5};
//     int n = arr.size();
//     // cout<<n;
//     int ans = func(arr, n);
//     cout<<ans<<" ";

//     return 0;
// }

// // finding missing number using sum method
// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// int func(vector<int>& arr,int n){
//     int sum=0;
//     int k=0;
//     for (int i =0; i < n-1; i++)
//     {
//         sum=sum+arr[i];
//     }
//     // for (int j = 1;j <=n+1; j++)
//     // {
//     //     k=k+j;
//     // }
//     k = (n * (n + 1)) / 2;   //Summation of first N numbers:
//     int ans=k-sum;
//     return ans;
// }
// int main(){
//     vector<int> arr={1,3,4,5};
//     int n=arr.size();
//     int ans=func(arr,n);
//     cout<<ans<<" ";
//     return 0;
// }

// // xor method is fastest for finding missing number
// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;

// int missingNumber(vector<int> &arr, int N)
// {
//     int xor1 = 0, xor2 = 0;
//     for (int i = 0; i < N - 1; i++)
//     {
//         xor1 = xor1^arr[i];
//         xor2 = xor2 ^ (i + 1);
//     }
//     xor1 = xor1 ^ N;
//     return xor1 ^ xor2;
// }
// int main()
// {
//     int N = 5;
//     vector<int> arr = {1, 2, 4, 5};
//     int ans = missingNumber(arr, N);
//     cout << "The missing number is: " << ans << endl;
//     return 0;
// }

// // Count Maximum Consecutive One’s in the array
// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// int func(int n,vector<int>& arr){
//     int max=0;int count=0;
//     for (int i = 0; i < n; i++)
//     {
//         if(arr[i]==1){
//             count++;
//         }
//         else{
//             count=0;
//         }
//         if(count>max){//it is called only if count is bigger than max otherwise skipped ..
//             max=count;
//         }
//     }
//     return max;

// }
// int main(){
//     vector<int> arr={1,1,0,1,1,1,0,1,1};
//     int n=arr.size();
//     int ans=func(n,arr);
//     cout<<"No of max one in consecutive are = "<<ans;
//     return 0;
// }

// // Find the number that appears once, and the other numbers twice ..
// // using hashing-
// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// int func(int n, vector<int> &arr)
// {
//     int hash[n + 1] = {0};
//     for (int i = 0; i < n; i++)
//     {
//         hash[arr[i]]++;
//     }
//     for (int i = 0; i < n; i++)
//     {
//         if (hash[i] == 2)
//         {
//             return arr[i];
//         }
//     }

//     return -1;
// }
// int main()
// {
//     vector<int> arr = {2, 2, 3, 4, 4};
//     int n = arr.size();
//     int ans = func(n, arr);
//     cout << "The number that only appear once  = " << ans;
//     return 0;
// }

// // Find the number that appears once, and the other numbers twice ..
// // 2> using map
// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// int func(int n, vector<int> &arr)
// {
//     map<int,int>mpp;
//     for (int i = 0; i < n; i++)
//     {
//         mpp[arr[i]]++;
//     }
//     for(auto it:mpp){
//         if(it.second==1) return it.first;
//     }

//     return -1;
// }
// int main()
// {
//     vector<int> arr = {2, 2, 3, 4, 4};
//     int n = arr.size();
//     int ans = func(n, arr);
//     cout << "The number that only appear once  = " << ans;
//     return 0;
// }

// // Find the number that appears once, and the other numbers twice ..
// // 3> Using XOR ..
// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// int func(int n,vector<int>& arr){
//     int xxor=0;
//     for (int  i = 0; i < n; i++)
//     {
//         xxor=xxor^arr[i];
//     }

//     return xxor;
// }
// int main()
// {
//     vector<int> arr = {2, 2, 3, 4, 4};
//     int n = arr.size();
//     int ans = func(n, arr);
//     cout << "The number that only appear once  = " << ans;
//     return 0;
// }

// // Longest Subarray with given Sum K(Positives)
// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// int func(int n, int k, vector<int> &arr)
// {
//     for (int i = 0; i < n; i++)
//     {
//         int sum = 0;
//         int arrlength = 0;
//         for (int j = i; j < n; j++)
//         {
//             sum += arr[j];
//             arrlength = j - i + 1;
//             if (sum == k)
//             {
//                 return arrlength;
//             }
//         }
//     }
//     return -1;
// }
// int main()
// {
//     vector<int> arr = {2, 3, 5, 1, 9};
//     int k = 10;
//     int n = arr.size();
//     int ans = func(n, k, arr);
//     cout << "The length of the longest subarray is = " << ans;
//     return 0;
// }

// // Longest Subarray with given Sum K(Positives)
// // most otimal for +ve arrays
// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// int getLongestSubarray(vector<int>& arr,int k){
//     int right=0,left=0,sum=arr[0],maxlen=0;
//     int n=arr.size();
//     while (right<n)
//     {
//         while (left<=right && sum>k)
//         {
//             sum-=arr[left];
//             left++;
//         }
//         if(sum==k){
//             // maxlen=max(maxlen,right-left+1);
//             maxlen=right-left+1;
//         }

//         if(right<n){//if we put this in starting then value of sum will change..
//             sum+=arr[right];
//         }
//         right++;
//     }
//      return maxlen;
// }
// int main()
// {
//     vector<int> arr = {2, 3, 5, 1, 9};
//     long long k = 10;
//     int len = getLongestSubarray(arr, k);
//     cout << "The length of the longest subarray is: " << len << "\n";
//     return 0;
// }

// // Longest Subarray with given Sum K(Positives/negative)
// // it not best(upper one is best ) for +ve but it best for negative..
// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {

//     return 0;
// }

// --------------------



//Two Sum : Check if a pair with given sum exists in Array
// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// string twosum(vector<int> arr, int k)
// {
//     map<int, int> mpp;
//     for (int i = 0; i < arr.size(); i++)
//     {
//         int j = arr[i];
//         int two = k - j;
//         if (mpp.find(two) != mpp.end())
//         {
//             return "yes";
//         }
//         mpp[j]=i;
//     }

//     return "no";
// }
// int main()
// {
//     vector<int> arr = {2, 3, 5, 1, 9};
//     int k = 10;
//     string len = twosum(arr, k);
//     cout << "The position of 2 array is: " << len << "\n";
//     return 0;
// }


// // Two Sum : Check if a pair with given sum exists in Array
// // optimal method
// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// string twosum(vector<int>& arr,int k){
//     sort(arr.begin(),arr.end());
//     int n=arr.size();
//     int left=0,right=n-1;
//     while (left<right)
//     {
//         int sum=arr[left]+arr[right];
//         if(sum==k){
//             return "yes";
//         }
//         else if(sum>k) right--;
//         else left++; 
//     }
    
//     return "no";
// }
// int main()
// {
//     vector<int> arr = {2, 11, 5, 8, 10};
//     int k = 10;
//     string len = twosum(arr, k);
//     cout << "The position of 2 array is: " << len << "\n";
//     return 0;
// }



