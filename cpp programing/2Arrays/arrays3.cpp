// // Sort an array of 0s, 1s and 2s
// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// vector<int> func(int n, vector<int> &arr)
// {
//     int count1 = 0;
//     int count2 = 0;
//     int count3 = 0;
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] == 0)
//         {
//             count1++;
//         }
//         else if (arr[i] == 1)
//         {
//             count2++;
//         }
//         else
//         // (arr[i] == 2)

//         {
//             count3++;
//         }
//     }
//     for (int i = 0; i < count1; i++)
//     {
//         arr[i] = 0;
//     }
//     for (int i = count1; i < count2 + count1; i++)
//     {
//         arr[i] = 1;
//     }
//     for (int i = count2 + count1; i < n; i++)
//     {
//         arr[i] = 2;
//     }

//     return arr;
// }
// int main()
// {
//     vector<int> arr = {2, 1, 0, 0, 0, 2, 0, 2, 1, 1, 0};
//     int n = arr.size();
//     vector<int> ans = func(n, arr);
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     return 0;
// }

// // imp
// // Sort an array of 0s, 1s and 2s
// // Dutch National flag algorithm
// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// vector<int> func(int n, vector<int> &arr){
//     int low =0;
//     int mid=0;
//     int high=n-1;
//     while (mid<high)
//     {
//         if(arr[mid]==0){
//             swap(arr[low],arr[mid]);
//             low++;
//             mid++;
//         }
//         else if(arr[mid]==1){
//             mid++;
//         }
//         else{
//             swap(arr[mid],arr[high]);
//             high--;
//         }
//     }
//     return arr;
// }
// int main()
// {
//     vector<int> arr = {2, 0, 2, 1, 1, 0};
//     int n = arr.size();
//     vector<int> ans = func(n, arr);
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     return 0;
// }

// // Find the Majority Element that occurs more than N/2 times
// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// int func(vector<int> &arr, int n)
// {
    // // int hash[n + 1] = {0};
    // unordered_map<int,int>hash;
    // for (int i = 0; i < n; i++)
    // {
    //     hash[arr[i]]++;
    // }
    // for (int i = 0; i < n; i++)
    // {
    //     if (hash[arr[i]] > n / 2)
    //     {
    //         return arr[i];
    //     }
    // }

    // return 0;
// }
// int main()
// {
//     vector<int> arr = {5,5,5,5,5,5,5,5,5,5,5 ,2, 3, 4, 2, 2, 2};
//     int n = arr.size();
//     int ans = func(arr, n);
//     cout << ans;
//     return 0;
// }


// // Find the Majority Element that occurs more than N/2 times
// // using map
// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// int func(vector<int> &arr, int n)
// {
//     map<int,int>mpp;
//     for (int i = 0; i < n; i++)
//     {
//         mpp[arr[i]]++;
//     }
//     for (auto it:mpp)
//     {
//         if (it.second > n / 2)
//         {
//             return it.first;
//         }
//     }

//     return -1;
// }
// int main()
// {
//     vector<int> arr = {1, 2, 3, 3, 3, 3, 3, 3, 2, 3, 2, 3, 2, 2};
//     int n = arr.size();
//     int ans = func(arr, n);
//     cout << ans;
//     return 0;
// }


// // Find the Majority Element that occurs more than N/2 times🤷🤷🤷
// // MOST OPTIMAL ..
// #include <bits/stdc++.h>
// using namespace std;
// int majorityElement(vector<int> v)
// {
//     // size of the given array:
//     int n = v.size();
//     int cnt = 0; // count
//     int el;      // Element
//     // applying the algorithm:
//     for (int i = 0; i < n; i++)
//     {
//         if (cnt == 0)
//         {
//             cnt = 1;
//             el = v[i];
//         }
//         else if (el == v[i])
//             cnt++;
//         else
//             cnt--;
//     }
//     // checking if the stored element
//     //  is the majority element:
//     int cnt1 = 0;
//     for (int i = 0; i < n; i++)
//     {
//         if (v[i] == el)
//             cnt1++;
//     }

//     if (cnt1 > (n / 2))
//         return el;
//     return -1;
// }

// int main()
// {
//     vector<int> arr = {2, 2, 1, 1, 1, 2, 2};
//     int ans = majorityElement(arr);
//     cout << "The majority element is: " << ans << endl;
//     return 0;
// }


// // // Kadane’s Algorithm : Maximum Subarray Sum in an Array
// // //very easy method (better but not best)..
// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// int maxSubarraySum(vector<int> &arr, int n)
// {

//     int maximum = INT_MIN;
//     for (int i = 0; i < n; i++)
//     {
//         int sum = 0;
//         for (int j = i; j < n; j++)
//         {
//             sum += arr[j];
//             maximum = max(maximum, sum);
//         }

//     }
//     return maximum;
// }
// int main()
// {
//     vector<int> arr = {-2, -3, 4, -1, -2, 1, 5, -3};
//     int n = arr.size();
//     int maxSum = maxSubarraySum(arr, n);
//     cout << "The maximum subarray sum is: " << maxSum << endl;
//     return 0;
// }


// // // Kadane’s Algorithm : Maximum Subarray Sum in an Array⭐⭐⭐👏👏👏
// // faster then previous
// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// int maxSubarraySum(vector<int> &arr,int n)
// {
//     int sum = 0;
//     int ele = INT_MIN;
//     for (int i = 0; i < n; i++)
//     {
//         sum+=arr[i];
//         ele=max(ele,sum);
//         if (sum < 0)
//         {
//             sum=0;
//         }
//     }
//     return ele;
// }
// int main()
// {
//     vector<int> arr = {-2, -3, 4, -1, -2, 1, 5, -3};
//     int n = arr.size();
//     int maxSum = maxSubarraySum(arr, n);
//     cout << "The maximum subarray sum is: " << maxSum << endl;
//     return 0;
// }


// // Stock Buy And Sell
// // using only 1 loop
// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// int maxProfit(vector<int> &arr)
// {
//     int n = arr.size();
//     int manimum = INT_MAX;
//     int maxpro= INT_MIN;
//     int maxes = maxpro- manimum;
//     for (int i = 1; i < n; i++)
//     {
//         manimum = min(manimum, arr[i]);
//         maxpro= max(maxpro, arr[i] - manimum);
//         // maxes=max(1,maxes);
//     }
//     return maxpro;
// }
// int main()
// {
//     vector<int> arr = {7, 1, 5, 3, 6, 4};
//     int maxPro = maxProfit(arr);
//     cout << "Max profit is: " << maxPro << endl;
//     return 0;
// }



// // Rearrange Array Elements by Sign
// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// vector<int> Rearrange(vector<int> &arr)
// {
//     int n = arr.size();
//     int positive = 0, negative = 1;
//     vector<int> ans(n, 0);
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] < 0)
//         {
//             ans[negative] = arr[i];
//             negative+=2;
//         }
//         else
//         {
//             ans[positive]=arr[i];
//             positive+=2;
//         }
//     }return ans;
// }
// int main()
// {
//     vector<int> arr = {1, 2, 3, -1, -2, -3 };
//     // vector<int> arr = {-1,2,3,-3,4,-2 };
    
//     vector<int> ans=Rearrange(arr);
//     for (int i = 0; i < ans.size(); i++)
//     {
//         cout << ans[i] << "   ";
//     }
//     return 0;
// }


// // Rearrange Array Elements by Sign
// //  variety 2
// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// vector<int> Rearrange(vector<int> &arr)
// {
//     int n = arr.size();
//     vector<int> positive;
//     vector<int> negative;
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] > 0)
//             positive.push_back(arr[i]);
//         else
//         {
//             negative.push_back(arr[i]);
//         }
//     }
//     int a = positive.size();
//     int b = negative.size();
//     int c = min(a, b);
//     int z;
//     if(c==a){
//      z=a;
//     }
//     else{
//         z=b;
//     }
//     int j = 0;
//     for (int i = 0; i < n; i++)
//     {
//         if (i % 2 == 0)
//         {
//             arr[i] = positive[j];
//             j++;
//         }
//     }
//     int k = 0;
//     for (int i = 0; i < n; i++)
//     {

//         if (i % 2 == 1)
//         {
//             arr[i] = negative[k];
//             k++;
//         }
//     }
//     int x=c;
//     for (int i = 2*c; i < n; i++)
//     {

//         // if(z==a){
//             arr[i]=positive[x];
//        x++;
//     }

//     return arr;
// }
// int main()
// {
//     vector<int> arr = {1, 2, 3, -1, -2, -3, 4, 5};
//     vector<int> ans = Rearrange(arr);
//     for (int i = 0; i < ans.size(); i++)
//     {
//         cout << ans[i] << "   ";
//     }
//     return 0;
// }


// // next_permutation : find next lexicographically greater permutation (greator no using same no)
// #include<iostream>
// #include<vector>
// #include<algorithm>

// using namespace std;

// int main() {
//     vector<int> arr = {2, 1, 5, 4, 3, 0, 0};

//     next_permutation(arr.begin(),arr.end());

//     for (int i = 0; i < arr.size(); i++)
//     {
//         cout<<arr[i]<< " ";
//     }
    

//     return 0;
// }
        

// next_permutation : find next lexicographically greater permutation
// optimal way: and also can be used in all language
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
vector<int> nextGreaterPermutation(vector<int> &arr)
{
    int n = arr.size();
    int temp=-1;
    for (int i = n - 2; i >= 0; i--)
    {
        if (arr[i] < arr[i + 1]){
            temp = i;
            break;}
    }
    // If break point does not exist:
    if (temp == -1)
    {
        // reverse the whole array:
        reverse(arr.begin(), arr.end());
        return arr;
    }

    for (int i = n - 1; i > temp; i--)
    {
        if (arr[i] > arr[temp])
        {
            swap(arr[i], arr[temp]);
            break;
        }
    }
     // Step 3: reverse the right half:
     reverse(arr.begin()+temp+1,arr.end());
     return arr;
}
int main()
{
    vector<int> arr = {2, 1, 5, 4, 3, 0, 0};
    vector<int> ans = nextGreaterPermutation(arr);
    cout << "The next permutation is: [";
    for (auto it : ans)
    {
        cout << it << " ";
    }
    cout << "]n";
    return 0;
}   

