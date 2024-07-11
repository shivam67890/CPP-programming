// // Leaders in an Array - a elemeent is leader if it is greator than its right side element
// #include <iostream>
// #include<algorithm>
// #include <bits/stdc++.h>
// using namespace std;
// vector<int> leader(vector<int> &arr)
// {
//     int n = arr.size();
//     int temp = INT_MIN;
//     vector<int> store;
//     for (int i = n - 1; i > 0; i--)
//     {
//         if (temp < arr[i])
//         {
//             temp = arr[i];
//             store.push_back(temp);
//         }
//     }
//     reverse(store.begin(),store.end());
//     return store;
// }
// int main()
// {
//     vector<int> arr = {16, 17, 4 ,3, 5 ,2};
//     vector<int> ans = leader(arr);
//     for (int i = 0; i < ans.size(); i++)
//     {
//         cout << ans[i] << " ";
//     }
//     return 0;
// }

// // Longest Consecutive Sequence in an Array
// // brute force method:
// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// bool check(vector<int> &arr,int m){
//     int n=arr.size();
//     for (int i = 0; i < n; i++)
//     {
//         if(arr[i]==m)
//         return true;
//     }
//     return false;
// }
// int consecutive(vector<int> &arr, int n)
// {
//     int count=1;
//     for (int i = 0; i < n; i++)
//     {   int x=arr[i]+1;
//         if(check(arr,x)){
//             count++;
//         }
//     }
//     return count;

// }
// int main()
// {
//     vector<int> arr = {1,2,3,10,11,12,13};//3 5 6 7 8
//     int n = arr.size();
//     int ans = consecutive(arr, n);
//     cout << ans;
//     return 0;
// }

// // Longest Consecutive Sequence in an Array
// // Better then above ..
// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// int consecutive(vector<int> &arr)
// {
//     int n=arr.size();
//     int smaller =INT_MIN;
//     int count=0;
//     int maxi=0;
//     if(n==0) return 0;
//     sort(arr.begin(),arr.end());//1,2,3,4,100,200
//     for (int i = 0; i < n; i++)
//     {
//         if(arr[i]-1==smaller){
//             count++;
//             smaller=arr[i];
//         }
//         else if(arr[i]!=smaller){
//             smaller=arr[i];
//             count=1;
//         }
//         maxi=max(maxi,count);
//     }
//     return maxi;
// }
// int main()
// {
//     vector<int> arr = {1,2,3,10,11,12,13};
//     int ans = consecutive(arr);
//     cout <<"The answer is = "<< ans;

//     return 0;
// }

// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// int consecutive(vector<int> &arr){
//     int n=arr.size();
//     sort(arr.begin(),arr.end());
//     int count=1;
//     int maxi=1;
//     for (int i = 0; i < n-1; i++)
//     {
//         int a=arr[i+1];
//         if(arr[i]==a-1){
//             count++;
//         }
//         else{
//             count=1;
//         }
//         maxi=max(maxi,count);
//     }
//     return maxi;
// }
// int main()
// {
//     vector<int> arr = {1,2,3,10,11,12,13};//12,1,2,3,4,100,200
//     int ans = consecutive(arr);
//     cout <<"The answer is = "<< ans;
//     return 0;
// }

// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// int consecutive(vector<int> &arr, int n)
// {
//     if (n == 0)
//         return 0;
//     unordered_set<int> st;
//     for (int i = 0; i < n; i++)
//     {
//         st.insert(arr[i]); // learn
//     }
//     int maxi = 0, x = 0;
//     int count;
//     for (auto it : st)
//     {
//         if (st.find(it - 1) == st.end())
//         { // used to check the that it is starting number..
//             count = 1;
//             x = it;

//             while (st.find(x + 1) != st.end())
//             {
//                 count++;
//                 x++;
//             }
//             maxi = max(maxi, count);
//         }
//     }
//     return maxi;
// }
// int main()
// {
//     vector<int> arr = {100, 200, 1, 2, 3, 4};
//     int n = arr.size();
//     int ans = consecutive(arr, n);
//     cout << "The answer is = " << ans;
//     return 0;
// }

// // Set Matrix Zero
// // brute force -
// #include <bits/stdc++.h>
// using namespace std;
// void markrow(vector<vector<int>> &matrix,int m,int i){
// // set all non-zero elements as -1 in the row i:
//         for (int  j = 0; j < m; j++)
//         {
//             if(matrix[i][j]!=0){
//                 matrix[i][j]=-1;
//             }
//         }
// }
// void markcol(vector<vector<int>> &matrix,int n,int j){
// // set all non-zero elements as -1 in the col j:
//         for (int  i= 0; i < n; i++)
//         {
//             if(matrix[i][j]!=0){
//                 matrix[i][j]=-1;
//             }
//         }
// }
// vector<vector<int>> zeromatrix(vector<vector<int>> &matrix, int n, int m)
// // Set -1 for rows and cols
// // that contains 0. Don't mark any 0 as -1:
// {
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             if(matrix[i][j]==0){
//                 markrow(matrix,m,i);
//                 markcol(matrix,n,j);
//             }
//         }
//     }
// // Finally, mark all -1 as 0:
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             if(matrix[i][j]==-1)
//             matrix[i][j]=0;
//         }

//     }
//  return matrix;
// }
// int main()
// {
//     vector<vector<int>> matrix = {{1, 1, 1}, {1, 0, 1}, {1, 1, 1},};
//     int n = matrix.size();
//     int m = matrix[0].size();
//     vector<vector<int>> ans = zeromatrix(matrix, n, m);
//     for (auto it : ans)
//     {
//         for (auto ele : it)
//         {
//             cout << ele << " ";
//         }
//         cout << "\n";
//     }
//     return 0;
// }

// // Set Matrix Zero
// // better aproach
// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// vector<vector<int>> zeromatrix(vector<vector<int>> &matrix, int n, int m)
// {
//     int row[n] = {0};
//     int col[m] = {0};
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             if (matrix[i][j] == 0)
//             {
//                 row[i] = 1;
//                 col[j] = 1;
//             }
//         }
//     }
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             if(row[i]==1 || col[j]==1){
//                 matrix[i][j]=0;
//             }
//         }
//     }
//     return matrix;
// }
// int main()
// {
//     vector<vector<int>> matrix = {
//         {1, 1, 1},
//         {1, 0, 1},
//         {1, 1, 1},
//     };
//     int n = matrix.size();
//     int m = matrix[0].size();
//     vector<vector<int>> ans = zeromatrix(matrix, n, m);
//     for (auto it : ans)
//     {
//         for (auto ele : it)
//         {
//             cout << ele << " ";
//         }
//         cout << "\n";
//     }

//     return 0;
// }

// // // Set Matrix Zero
// // // optimal aproach
// #include <bits/stdc++.h>
// using namespace std;
// vector<vector<int>> zeromatrix(vector<vector<int>> matrix)
// {
//       int n = matrix.size();
//     int m = matrix[0].size();
//     int col0;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             if (matrix[i][j] == 0)
//             {
//                 matrix[i][0] = 0;

//                 if (j != 0)
//                 {
//                     matrix[0][j] = 0;
//                 }
//                 else
//                 {
//                     col0 = 0;
//                 }
//             }
//         }
//     }

//     for (int i = 1; i < n; i++)
//     {
//         for (int j = 1; j < m; j++)
//         {
//             if (matrix[i][j] != 0)
//             {

//               if(matrix[i][0] == 0 || matrix[0][j] == 0) {
//                     matrix[i][j] = 0;
//             }
//             }
//         }
//     }
//     //step 3: Finally mark the 1st col & then 1st row:
//     if (matrix[0][0] == 0) {
//         for (int j = 0; j < m; j++) {
//             matrix[0][j] = 0;
//         }
//     }
//     if (col0 == 0) {
//         for (int i = 0; i < n; i++) {
//             matrix[i][0] = 0;
//         }
//     }

//     return matrix;

// }
// int main()
// {
//     vector<vector<int>> matrix = {
//         {1, 1, 1},
//         {1, 0, 1},
//         {1, 1, 1},
//     };

//     vector<vector<int>> ans = zeromatrix(matrix);
//     for (auto it : ans)
//     {
//         for (auto ele : it)
//         {
//             cout << ele << " ";
//         }
//         cout << "\n";
//     }

//     return 0;
// }

// // Rotate Image by 90 degree
// // brute force
// #include <bits/stdc++.h>
// using namespace std;
// vector<vector<int>> rotate(vector<vector<int>> &matrix)
// {
//     int n = matrix.size();
//     vector<vector<int>> rotated(n, vector<int>(n, 0));
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             rotated[j][n - i - 1] = matrix[i][j];
//         }
//     }
//     return rotated;
// }
// int main()
// {
//     vector<vector<int>> arr;
//     arr = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
//     vector<vector<int>> rotated = rotate(arr);
//     cout << "Rotated Image" << endl;
//     for (auto it : rotated)
//     {
//         for (auto ele : it)
//         {
//             cout << ele << " ";
//         }
//         cout << "\n";
//     }
//     return 0;
// }

// // Rotate Image by 90 degree
// // optimal soln
//     #include<bits/stdc++.h>
//     using namespace std;
//     vector<vector<int>> rotate(vector<vector<int>> &matrix){
//         int n=matrix.size();
//         int m=matrix[0].size();
//         for (int i = 0; i < n; i++)
//         {
//             for (int j = 0; j < i; j++)
//             {
//                 swap(matrix[i][j],matrix[j][i]);
//             }
//         }
//             for (int i = 0; i < n; i++) {
//         reverse(matrix[i].begin(), matrix[i].end());
//         }
//         return matrix;
//     }
//     int main(){
//         vector<vector<int>> arr={{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
//         vector<vector<int>> rotated = rotate(arr);
//         cout << "Rotated Image" << endl;
//         for (auto it : rotated)
//         {
//             for (auto ele : it)
//             {
//                 cout << ele << " ";
//             }
//             cout << "\n";
//         }
//         return 0;
//     }

// // Spiral Traversal of Matrix
// #include<bits/stdc++.h>
// using namespace std;
// vector<int> rotate(vector<vector<int>> &arr){
//     int n=arr.size();
//     int m=arr[0].size();
//     vector<int> ans;
//     int left=0,right=m-1,top=0,bottom=n-1;
//     while (left<=right && top<=bottom)
//     {
//         for (int i = left; i <=right; i++)
//         {
//             ans.push_back(arr[top][i]);

//         }top++;
//         for (int i = top; i <= bottom; i++)
//         {
//             ans.push_back(arr[i][right]);
//         }right--;

//         if(top<=bottom){
//             for (int i = right; i >= left; i--)
//             {
//                 ans.push_back(arr[bottom][i]);
//             }bottom--;

//         }
//                 if(left <= right){
//             for (int i = bottom; i >= top; i--)
//             {
//                 ans.push_back(arr[i][left]);
//             }left++;

//         }

//     }
//     return ans;
// }

// int main(){
//       vector<vector<int>> arr{{1, 2, 3, 4},
//                              {5, 6, 7, 8},
// 	                         {9, 10, 11, 12},
// 		                     {13, 14, 15, 16}};
//         vector<int> ans = rotate(arr);
//         cout << "Rotated Image" << endl;
//     for(auto it:ans){
//         cout<<it<<" ";
//     }
//     return 0;
// }

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
vector<int> spiral(vector<vector<int>> &arr)
{
    vector<int> store;
    int n = arr.size();
    int m = arr[0].size();
    int top=0, left = 0;
    int bottom = n- 1, right = m - 1;
    while (top <= bottom && left <= right)
    {
        for (int i = left; i <= right; i++)
        {
            store.push_back(arr[top][i]);
        }
top++;
        for (int i = top; i <= bottom; i++)
        {
            store.push_back(arr[i][right]);
        }
            right--;
        if (top <= bottom)
        {
            for (int i = right; i >= left; i--)
            {
                store.push_back(arr[bottom][i]);
            }
                bottom--;
        }
        if (left <= right)
        {
            for (int i = bottom; i >= top; i--)
            {
                store.push_back(arr[i][left]);
            }
                left++;
        }
    }
    return store;
}
int main()
{
    vector<vector<int>> arr = {{1, 2, 3, 4},
                               {5, 6, 7, 8},
                               {9, 10, 11, 12},
                               {13, 14, 15, 16}};
    vector<int> ans = spiral(arr);
    cout << "Rotated Image" << endl;
    for (auto it : ans)
    {
        cout << it << " ";
    }
    return 0;
}