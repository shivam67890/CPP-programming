// Minimize Max Distance to Gas Station-brute force
// #include <bits/stdc++.h>
// using namespace std;
// double binary(vector<int> &arr, int k)
// {
//     vector<int> store(arr.size() - 1, 0);
//     for (int j = 0; j < k; j++)
//     {
//         double maxsection = -1;
//         int maxindex = -1;
//         for (int i = 0; i < arr.size() - 1; i++)
//         {
//             int dif = arr[i + 1] - arr[i];
//             double sec = dif / (double)(store[i] + 1);
//             if (sec > maxsection)
//             {
//                 maxsection=sec;
//                 maxindex=i;
//             }
//         }
//         store[maxindex]++;
//     }
//     double maxans=-1;
//     for (int i = 0; i < arr.size() - 1; i++)
//     {
//         int dif = arr[i + 1] - arr[i];
//         double sec = dif / (double)(store[i] + 1);
//         maxans=max(sec,maxans);
//     }
//     return maxans;
// }
// int main()
// {
//     vector<int> arr = {1, 2, 3, 4, 5};
//     int k = 4;
//     double ans = binary(arr, k);
//     cout<<ans;
//     return 0;
// }

// Minimize Max Distance to Gas Station-better soln.
// #include <bits/stdc++.h>
// using namespace std;
// double binary(vector<int> &arr, int k)
// {
//     priority_queue<pair<long double, int>> pq;
//     vector<int> store(arr.size() - 1, 0);
//     for (int j = 0; j < arr.size() - 1; j++)
//     {
//         pq.push({arr[j + 1] - arr[j], j});
//     }
//     for (int i = 0; i < k; i++)
//     {
//         auto tp = pq.top();
//         pq.pop();
//         int secind = tp.second;
//         store[secind]++;
//         double dif = arr[secind + 1] - arr[secind];
//         double newsec = dif / (double)(store[secind] + 1);
//         pq.push({newsec, secind});
//     }
//     return pq.top().first;
// }
// int main()
// {
//     vector<int> arr = {1, 2, 3, 4, 5};
//     int k = 4;
//     double ans = binary(arr, k);
//     cout << ans;
//     return 0;
// }

// Minimize Max Distance to Gas Station-optimal soln.

// ➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖

// // Median of Two Sorted Arrays of different sizes--brute force ..
// #include <bits/stdc++.h>
//     using namespace std;
// double median(vector<int> &a, vector<int> &b)
// {
//     int n1 = a.size();
//     int n2 = b.size();
//     vector<int> arr;
//     int i = 0, j = 0;
//     while (i < n1 && j < n2)
//     {
//         if (a[i] < b[j])
//             arr.push_back(a[i++]);
//         else
//             arr.push_back(b[j++]);
//     }

//     // copy the left-out elements:
//     while (i < n1) arr.push_back(a[i++]);
//     while (j < n2) arr.push_back(b[j++]);

//     int mid = (n1 + n2) / 2;
//     if(arr.size()%2==1){
//         return arr[mid];
//     }
//     double medians=((double)arr[mid+1]+(double)arr[mid-1])/2.0;
//     return medians ;
// }
// int main()
// {
//     vector<int> a = {1, 4, 7, 10, 12};
//     vector<int> b = {2, 3, 6, 15};
//     cout << "The median of two sorted array is " << fixed << setprecision(1)
//          << median(a, b) << '\n';
//     return 0;
// }

// // Median of Two Sorted Arrays of different sizes--better solution ..
// #include <bits/stdc++.h>
// using namespace std;
// double median(vector<int> a, vector<int> b)
// {
//     int n1 = a.size();
//     int n2 = b.size();
//     int ind1 = (n1 + n2) / 2;
//     int ind2 = (((n1 + n2)-1) / 2);
//     int i = 0;
//     int j = 0;
//     int cnt = 0;
//     int first = -1;
//     int sec = -1;
//     while (i < n1 && j < n2)
//     {
//         if (a[i] < b[j])
//         {
//             if (cnt == ind1)
//                 first = a[i];
//             if (cnt == ind2)
//                 sec = a[i];
//             i++;
//             cnt++;
//         }
//         else if (cnt == ind1)
//             first = b[i];
//         if (cnt == ind2)
//             sec = b[i];
//         j++;
//         cnt++;
//     }

//     // copy the left-out elements:
//     while (i < n1)
//     {
//         if (cnt == ind1)
//             first = a[i];
//         if (cnt == ind2)
//             sec = a[i];
//         cnt++;
//         i++;
//     }
//     while (j < n2)
//     {
//         if (cnt == ind1)
//             first = b[j];
//         if (cnt == ind2)
//             sec = b[j];
//         cnt++;
//         j++;
//     }
//     if ((n1+n2) % 2 == 1)
//     {
//         return (double)sec;
//     }

//     return (double)((double)(first + sec)) / 2.0;

// }
// int main()
// {
//     vector<int> a = {1, 4, 7, 10, 12};
//     vector<int> b = {2, 3, 6, 15};
//     cout << "The median of two sorted array is " << fixed << setprecision(1)
//          << median(a, b) << '\n';
//     return 0;
// }


