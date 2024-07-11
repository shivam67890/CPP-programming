
// // find ele at pascal triangle⭐
// #include<bits/stdc++.h>
// using namespace std;
// vector<vector<int>> generate(int numRows) {
//         vector<vector<int>> ans;
//         for(int i = 0; i<numRows ; i++)
//         {
//             vector<int> temp;
//             for(int j=0; j<=i ; j++)
//             {
//                 if(j==0 || j==i)
//                 {
//                     temp.push_back(1);
//                 }
//                 else{
//                     temp.push_back(ans[i-1][j-1]+ans[i-1][j]);
//                 }
//             }
//             ans.push_back(temp);
//         }
//         return ans;
//     }
// int main(){
//     int n,m;
//     cout<<"enter the row : ";
//     cin>>n;
//     // cout<<"enter the column : ";
//     // cin>>m;
//     // n=n-1;
//     // m=m-1;
//     // int k=n-m;
//     // int first=combination1(n,k);
//     // int second=combination2(m);
//     // int ans=first/second;
//     vector<vector<int>> ans=generate( n);
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < i; j++)
//         {
//                 cout<<ans[i][j]<<" ";
//         }
//         cout<<endl;
        
//     }
    
//     return 0;
// }





// // 3 Sum : Find triplets that add up to a zero
// // optimal soln
// #include <bits/stdc++.h>
// #include<iostream>
// #include<vector>
// using namespace std;
// vector<vector<int>> triplet(int n, vector<int> &arr) {
//     vector<vector<int>> ans;
//     sort(arr.begin(), arr.end());
//     for (int i = 0; i < arr.size()-2; i++)
//     {
//      if (i > 0 && arr[i] == arr[i-1]) continue;  // Skip duplicates for i
//         int left=i+1;
//         int right=arr.size()-1;
//         while (left<right)
//         {
//             int sum=arr[i]+arr[left]+arr[right];
//             if(sum==0){
//                 ans.push_back({arr[i],arr[left],arr[right]});
//                 left++;
//                 right--;
//                 while(left<right && arr[left]==arr[left-1]) left++;
//                 while(left<right && arr[right]==arr[right+1]) right--;
//             }
//             else if(sum<0){
//                 left++;
//             }
//             else{
//                 right--;
//             }
//         }
        
//     }
    
//     return ans;
// }
// int main()
// {
//     vector<int> arr = { -1, 0, 1, 2, -1, -4};
//     int n = arr.size();
//     vector<vector<int>> ans = triplet(n, arr);
//     for (auto it : ans) {
//         cout << "[";
//         for (auto i : it) {
//             cout << i << " ";
//         }
//         cout << "] ";
//     }
//     cout << "\n";
//     return 0;
// }








// 3 Sum : Find triplets that add up to a zero
// optimal soln
#include <bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;
// vector<vector<int>> triplet(int n, vector<int> &arr) {
//     vector<vector<int>> ans;
//     sort(arr.begin(), arr.end());
//     for (int i = 0; i < arr.size()-2; i++)
//     {
//      if (i > 0 && arr[i] == arr[i-1]) continue;  // Skip duplicates for i
//         int left=i+1;
//         int right=arr.size()-1;
//         while (left<right)
//         {
//             int sum=arr[i]+arr[left]+arr[right];
//             if(sum==0){
//                 ans.push_back({arr[i],arr[left],arr[right]});
//                 left++;
//                 right--;
//                 while(left<right && arr[left]==arr[left-1]) left++;
//                 while(left<right && arr[right]==arr[right+1]) right--;
//             }
//             else if(sum<0){
//                 left++;
//             }
//             else{
//                 right--;
//             }
//         }
        
//     }
    
//     return ans;
// }
int main()
{
int k=3;
int m=3;
int x=k%m;
cout<<x;
    return 0;
}



