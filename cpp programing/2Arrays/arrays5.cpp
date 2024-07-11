// // Count Subarray sum Equals K⭐⭐⭐
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
//         sum+=arr[i];//6
//         int remove=sum-k;//3
//         count=count+mpp[remove];
//         mpp[sum]++;//this ensure that map will store sum and count..
//     }
//     return count;
// }
// int main(){
//     vector<int> arr={1,2,3,4};
//     int k=3;
//     int ans=count(arr,k);
//     cout<<ans;
//     return 0;
// }

// // find ele at pascal triangle⭐
// #include<bits/stdc++.h>
// // / not correct 100%
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

// // // create a full  pascal triangle-hard method (below one is easy)
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

// // pascal traingle ✅
// #include<bits/stdc++.h>
// using namespace std;

// vector<vector<int>> generate(int numRows) {
//     vector<vector<int>> ans;
//     for (int i = 0; i < numRows; i++) {
//         vector<int> temp(i + 1, 1);
// //i + 1: specifies the size of the vector; 1: used to initialize each element with 1..
//         for (int j = 1; j < i; j++) {
//             temp[j] = ans[i - 1][j - 1] + ans[i - 1][j];
//         }
//         ans.push_back(temp);
//     }
//     return ans;
// }

// int main() {
//     int n;
//     cout << "Enter the number of rows: ";
//     cin >> n;

//     vector<vector<int>> ans = generate(n);

//     // Print Pascal's Triangle
//     for (int i = 0; i < n; i++) {
//         // Add spaces before each row to center-align the triangle
//         cout << string(n - i - 1, ' ');

//         for (int j = 0; j <= i; j++) {
//             cout << ans[i][j] << " ";
//         }

//         cout << endl;
//     }

// for just printing a line in a pascal triangle
//  for (int i = 0; i < n; i++)
//  {
//      cout << ans[n-1][i] << " ";
//  }

//     return 0;
// }

// // Find the elements that appears more than N/3 times in the array⭐
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

// // only 2 no can be there && Find the elements that appears more than N/3 times in the array
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
//     vector<int> arr = {1,1,1,2,2,2,3,3,3,};
//     vector<int> ans = majorityElement(arr);
//     cout << "The majority elements are: ";
//     for (auto it : ans)
//         cout << it << " ";
//     cout << "\n";
//     return 0;
// }

// // 3 Sum : Find triplets that add up to a zero⭐
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
//     vector<int> arr={ 0, 1,-1, 2, -1, -4};
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
//                 while(left<right && arr[left]==arr[left-1]) left++; // we are using arr[left-1] because we already move forward
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

// // 4 Sum | Find Quads that add up to a target value⭐
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
// #include <bits/stdc++.h>
// using namespace std;
// vector<vector<int>> foursome(int n, int z, vector<int> &arr)
// {
//     set<vector<int>> uni;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i + 1; j < n; j++)
//         {
//             set<long long> hashset;
//             for (int k = j + 1; k < n; k++)
//             {
//                 long long sum = arr[i] + arr[j];
//                 sum += arr[k];
//                 int last = z - sum; // don`t mistake z with k..
//                 if (hashset.find(last) != hashset.end())
//                 {
//                     vector<int> ans = {arr[i], arr[j], arr[k], last};
//                     sort(ans.begin(), ans.end());
//                     uni.insert(ans);
//                 }
//                 hashset.insert(arr[k]);
//             }
//         }
//     }
//     vector<vector<int>> retur(uni.begin(), uni.end());
//     return retur;
// }
// int main()
// {
//     vector<int> arr = {2, 2, 2, 2, 4, 4, 1, 1, 1, 1, 1};
//     int k = 8;
//     int n = arr.size();
//     vector<vector<int>> ans = foursome(n, k, arr);
//     for (auto it : ans)
//     {
//         cout << "[";
//         for (auto i : it)
//         {
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

// //Largest Subarray with 0 Sum ⭐
// #include <bits/stdc++.h>
// using namespace std;

// int subarray(int n,vector<int> arr, int result){

//     int sum=0;
//     map<int,int>mpp;
//     int maxlen=0;
//     mpp[0]=-1;
//     // int count=0;
//     for (int i = 0; i < n; i++)
//     {
//         sum+=arr[i];
//         if(sum==0){
//             maxlen=i+1;
//         }
//         else if(mpp.find(sum)!=mpp.end()){
//             maxlen=max(maxlen,i-mpp[sum]);
//         }
//         else{
//             mpp[sum]=i;
//         }
//     }
//     return maxlen;
// }
// int main()
// {
//     int n = 6;
//     vector<int> arr = {9, -3, 3, -1, 6, -5};
//     int result=0;
//     int ans=subarray(n,arr,result);
//     cout<<ans;
//     return 0;
// }



// // Merge Overlapping Sub-intervals ⭐
// #include <bits/stdc++.h>
// using namespace std;
// vector<vector<int>> mergeoverlaping(vector<vector<int>> &arr)
// {
//     sort(arr.begin(),arr.end());

//     int size =arr.size();
//     vector<vector<int>> ans;

//     int first=arr[0][0];
//     int end=arr[0][1];

//    for (int i = 1; i < size; i++)
//    {
//     if(arr[i][0]<=end){
//         end=max(end,arr[i][1]);
//     // ans.push_back({first,end});
//     }

//     else{
//         ans.push_back({first,end});
//         first=arr[i][0];
//         end=arr[i][1];
//         // ans.push_back({first,end});
//         //  WE MOVE THIS ANS BOTH ABOVE ANS HERE BECAUSE WHEN WE TAKE ONLY 1 INPUT IT GIVE ERROR
//     }}
//     ans.push_back({first,end});
//     return ans;
// }
// int main()
// {
//     vector<vector<int>> arr = {{1,6},
//                                {8, 10},
//                                {2, 4},
//                                {15, 18}}; // Output: [[1,6],[8,10],[15,18]]
//     vector<vector<int>> ans = mergeoverlaping(arr);
//     for (auto it : ans)
//     {
//         for (auto ele : it)
//         {
//             cout<<ele<< " ";
//         }
//         cout<<endl;
//     }

//     return 0;
// }


// //take input till non-integer come into picture --
// #include <iostream>
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
// vector<int> arr;
// int num;
// while(cin>>num){
//     arr.push_back(num);
// }
// cout<<"----------------";
// for(auto it:arr){
//     cout<<it<<" ";
// }

// return 0;
// }


