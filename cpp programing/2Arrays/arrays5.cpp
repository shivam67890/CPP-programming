// // Count Subarray sum Equals K
// // optimal method
// #include<bits/stdc++.h>
// using namespace std;
// int count( vector<int> &arr,int k){
//     map<int,int>mpp;
//     mpp[0]=1;
//     int count=0;
//     int sum=0;
//     for (int i = 0; i < arr.size(); i++)
//     {
//         sum+=arr[i];
//         int remove=sum-k;
//         count=count+mpp[remove];
//         mpp[sum]++;//this ensure that map will store sum and count..
//     }
//     return count;
// }
// int main(){
//     vector<int> arr={1,2,3,-3,1,1,1,4,2,-3};
//     int k=3;
//     int ans=count(arr,k);
//     cout<<ans;
//     return 0;
// }

// // find ele at pascal triangle
// #include<bits/stdc++.h>
/// not correct 100%
// using namespace std;
// int combination2(int m){
//     if(m==1 || m==0) return m;
//     int l=m*combination2(m-1);
//     return l;
// }
// int combination1(int n,int k){
//     if(n==k){ int x=1; return x;}
//     else{
//      int l=n*combination1(n-1,k);
//     return l;}
// }
// int main(){
//     int n,m;
//     cout<<"enter the row : ";
//     cin>>n;
//     cout<<"enter the column : ";
//     cin>>m;
//     n=n-1;
//     m=m-1;
//     int k=n-m;
//     int first=combination1(n,k);
//     int second=combination2(m);
//     int ans=first/second;
//     cout<<ans<<" is the ele in pascal triangle..";
//     return 0;
// }

// // // find ele at pascal triangle
// #include<bits/stdc++.h>
// using namespace std;
// int pascal(int r,int c){
//     long long mult=1;
//     for (int i = 0; i < c ; i++)
//     {
//         mult=mult*(r-i);
//         mult=mult/(i+1);
//     }
// return mult;
// }
// int pascalTriangle(int r,int c){
//     int ans=pascal(r-1,c-1);
//     return ans;
// }
// int main(){
//  int r = 5; // row number
//     int c = 3; // col number
//     int element = pascalTriangle(r, c);
//     cout << "The element at position (r,c) is: "<< element << " n";
//     return 0;
// }

// // create a row of pascal traingle ..
// #include<bits/stdc++.h>
// using namespace std;
// int pascal(int r,int c){
//     long long mult=1;
//     for (int i = 0; i < c ; i++)
//     {
//         mult=mult*(r-i);
//         mult=mult/(i+1);
//     }
// return mult;
// }
// void pascalTriangle(int r){
//     for (int i = 1; i <= r; i++)
//     {
//         int c=i;
//         cout<<pascal(r-1,c-1)<<" ";
//     }
// }
// int main(){
//     int r = 5; // row number
//     pascalTriangle(r);
//     return 0;
// }

// // // create a full  pascal triangle
// #include<bits/stdc++.h>
// using namespace std;
// int pascal(int r,int c){
//     long long mult=1;
//     for (int i = 0; i < c ; i++)
//     {
//         mult=mult*(r-i);
//         mult=mult/(i+1);
//     }
// return mult;
// }
// vector<int> pascalTriangle(int r){
//      vector<int> row;
//     for (int i = 1; i <= r; i++)
//     {
//         int c=i;
//         row.push_back(pascal(r-1,c-1));
//     }
//     return row;
// }
// vector<vector<int>> generate(int numRows){
//     vector<vector<int>> ans;
//     for (int i = 1; i <= numRows ; i++)
//     {
//         ans.push_back(pascalTriangle(i));
//     }
//     return ans;
// }
// int main(){
//     int n = 5;
//     vector<vector<int>>ans= generate(n);
//     for (const auto& it:ans)
//     {
//         cout<<"\n";
//     for(int ele:it){
//         cout<<ele<<" ";}
//     }
//     return 0;
// }

// // Find the elements that appears more than N/3 times in the array
// #include <bits/stdc++.h>
// using namespace std;
// vector<int> maximum(vector<int> &arr)
// {
//     vector<int> ans;
//     int n = arr.size();
//     int k = n / 3 + 1;
//     map<int, int> mpp;
//     mpp[n] = {0};
//     for(int i=0;i<n;i++)
//     {
//         mpp[arr[i]]++;
//     }
//     for (auto it : mpp)
//     {
//         if (k <= it.second)
//         {
//             ans.push_back(it.first);
//         }
//     }
//     return ans;
// }
// int main()
// {
//     vector<int> arr = {1, 1, 1, 3, 3, 2, 2, 2};
//     vector<int> ans = maximum(arr);
//     for (auto it : ans)
//     {
//         cout << it << " ";
//     }
//     return 0;
// }

// // Majority Elements(&gt;N/3 times) | Find the elements that appears more than N/3 times in the array
// // optimaml solution..
// #include<bits/stdc++.h>
// using namespace std;
// vector<int> majorityElement(vector<int> &arr){
//     int k=(arr.size()/3)+1;
//     vector<int> store;
//     int cnt1=0,cnt2=0,ele1=INT_MIN,ele2=INT_MIN;
//     for (int i = 0; i < arr.size(); i++)
//     {
//         if(cnt1==0 && arr[i]!=ele2){
//             cnt1=1; ele1=arr[i];
//         }
//         else if(cnt2==0 && arr[i]!=ele1){
//             cnt2=1; ele2=arr[i];
//         }
//         else if(ele1==arr[i]){
//             cnt1++;
//         }
//         else if(ele2==arr[i]){
//             cnt2++;
//         }
//         else{
//             cnt1--;cnt2--;
//         }
//     }
//     cnt1=0,cnt2=0;
//     for (int i = 0; i < arr.size(); i++)//used for rechecking ..
//     {
//         if(ele1==arr[i]) cnt1++;
//         else if(ele2==arr[i]) cnt2++;

//     }
//       if(cnt1>=k) store.push_back(ele1);
//         if(cnt2>=k) store.push_back(ele2);
//     sort(store.begin(),store.end());
//     return store;

// }
// int main(){
//     vector<int> arr = {2,1,1,3,1,2,2,6};
//     vector<int> ans = majorityElement(arr);
//     cout << "The majority elements are: ";
//     for (auto it : ans)
//         cout << it << " ";
//     cout << "\n";
//     return 0;
// }

// // 3 Sum : Find triplets that add up to a zero
// // brute force
// #include<bits/stdc++.h>
// using namespace std;
// vector<vector<int>> threesum(vector<int> &arr){
//     int n=arr.size();
//     // vector<vector<int>> ans;
//     set<vector<int>>unique;
//     for (int i = 0; i <n; i++)
//     {
//         for (int j = i+1; j < n; j++)
//         {
//             for (int k = j+1; k < n; k++)
//             {
//                 if(arr[i]+arr[j]+arr[k]==0){
//                     vector<int> temp={arr[i],arr[j],arr[k]};
//                     sort(temp.begin(),temp.end());//sort happen inside the previously made file..
//                     unique.insert(temp);
//                 }
//             }
//         }
//     }
//     vector<vector<int>> ans(unique.begin(),unique.end());
//  return ans;
// }
// int main(){
//     vector<int> arr={-1, 0, 1, 2, -1, -4};
//     vector<vector<int>> ans=threesum(arr);
//     for(auto it:ans){
//         for(auto ele:it){
//             cout<<ele<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// // 3 Sum : Find triplets that add up to a zero
// // better soln
// #include<bits/stdc++.h>
// using namespace std;
// vector<vector<int>> triplet(vector<int> &arr,int n){
//     set<vector<int>> st;
//     for (int i = 0; i < n; i++)
//     {

//         set<int> hashset;
//         vector<vector<int>> retur;
//         for (int j = i+1; j < n; j++)
//         {
//            int remove=-(arr[i]+arr[j]);
//             if(hashset.find(remove)!=hashset.end()){
//             vector<int> ans{arr[i],arr[j],remove};
//             sort(ans.begin(),ans.end());
//             st.insert(ans);
//             }
//            hashset.insert(arr[j]);
//         }
//     }
//     vector<vector<int>> retur(st.begin(), st.end());
//     return retur;
// }
// int main(){
//     vector<int> arr={-1, 0, 1, 2, -1, -4};
//     int n=arr.size();
//     vector<vector<int>> ans=triplet(arr,n);
//     for(auto it:ans){
//         for(auto ele:it){
//             cout<<ele<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// // 3 Sum : Find triplets that add up to a zero
// // optimal soln
// #include <bits/stdc++.h>
// using namespace std;
// vector<vector<int>> triplet(int n, vector<int> &arr) {
//     vector<vector<int>> ans;
//     sort(arr.begin(), arr.end());
//     for (int i = 0; i < n; i++) {
//         //remove duplicates:
// if (i != 0 && arr[i] == arr[i - 1]) continue;

//         //moving 2 pointers:
//         int j = i + 1;
//         int k = n - 1;
//         while (j < k) {
//             int sum = arr[i] + arr[j] + arr[k];
//             if (sum < 0) {
//                 j++;
//             }
//             else if (sum > 0) {
//                 k--;
//             }
//             else {
//                 vector<int> temp = {arr[i], arr[j], arr[k]};
//                 ans.push_back(temp);
//                 j++;
//                 k--;
//                 //skip the duplicates:
//                 while (j < k && arr[j] == arr[j - 1]) j++;
//                 while (j < k && arr[k] == arr[k + 1]) k--;
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

// // 4 Sum | Find Quads that add up to a target value
// //brute force
// #include<bits/stdc++.h>
// using namespace std;
// vector<vector<int>> foursome(int n,int z,vector<int> &arr){
//     set<vector<int>>uni;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i+1; j < n; j++)
//         {
//             for (int k = j+1; k < n; k++)
//             {
//                 for (int  l = k+1; l < n; l++)
//                 {
//                     int sum=arr[i]+arr[j]+arr[k]+arr[l];
//                     if(sum==z){
//                        vector<int> temp = {arr[i],arr[j],arr[k],arr[l]};
//                        sort(temp.begin(),temp.end());
//                         uni.insert(temp);//in set not required to write full begin end .
//                     }
//                 }

//             }

//         }

//     }vector<vector<int>> ans(uni.begin(), uni.end());
//     return ans;
// }
// int main(){
//     vector<int> arr = { 4, 3, 3, 4, 4, 2, 1, 2, 1, 1};
//     int k=9;
//     int n = arr.size();
//     vector<vector<int>> ans = foursome(n,k, arr);
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

// // 4 Sum | Find Quads that add up to a target value
// // better approach
// #include<bits/stdc++.h>
// using namespace std;
// vector<vector<int>> foursome(int n,int z,vector<int> &arr){
//     set<vector<int>> uni;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i+1; j < n; j++)
//         {   set<long long> hashset;
//             for (int k = j+1; k < n; k++)
//             {  long long sum=arr[i]+arr[j];
//                 sum+=arr[k];
//                 int last=z-sum; //don`t mistake z with k..
//                 if(hashset.find(last)!=hashset.end()){
//                 vector<int> ans={arr[i],arr[j],arr[k],last};
//                 sort(ans.begin(),ans.end());
//                 uni.insert(ans);
//                 }
//                 hashset.insert(arr[k]);
//             }
//         }
//     }
//     vector<vector<int>> retur(uni.begin(),uni.end());
//     return retur;
// }
// int main(){
//    vector<int> arr = { 4, 3, 3, 4, 4, 2, 1, 2, 1, 1};
//     int k=9;
//     int n = arr.size();
//     vector<vector<int>> ans = foursome(n,k, arr);
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

// //  4 Sum | Find Quads that add up to a target value
// // optimal soln
// #include<bits/stdc++.h>
// using namespace std;
// vector<vector<int>> foursome(int n,int z,vector<int> &arr){
//     sort(arr.begin(),arr.end());
//     set<vector<int>> hashset;
//     for (int i = 0; i < n; i++)
//     {if (i != 0 && arr[i] == arr[i - 1]) continue;
//        for (int j = i+1; j < n; j++)
//        {
//         // if (j != 0 && arr[j] == arr[j - 1]) continue;
// if (j > i + 1 && arr[j] == arr[j - 1]) continue;
//             int k=j+1;
//             int l=n-1;
//             while (k<l){
//             int sum=arr[i]+arr[j]+arr[k]+arr[l];
//             if(sum<z) k++;
//             else if(sum>z) l--;
//             else{
//                 vector<int> ans={arr[i],arr[j],arr[k],arr[l]};
//                 sort(ans.begin(),ans.end());
//                 hashset.insert(ans);
//                 k++;
//                 l--;
//                 while(k<l && arr[k]==arr[k-1]) k++;
//                 while(k<l && arr[l]==arr[l+1]) l--;
//             }
//             }
//        }
//     }vector<vector<int>> retur(hashset.begin(),hashset.end());
//     return retur;
// }
// int main(){
//    vector<int> arr = { 4, 3, 3, 4, 4, 2, 1, 2, 1, 1};
//     int k=9;
//     int n = arr.size();
//     vector<vector<int>> ans = foursome(n,k, arr);
//     cout << "[";
//     for (auto it : ans) {
//         cout << "[";
//         for (auto i : it) {
//             cout << i << " ";
//         }
//         cout << "]";
//     }cout << "]";
//     cout << "\n";
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N = 6;
    vector<int> array = {9, -3, 3, -1, 6, -5};

    return 0;
}
