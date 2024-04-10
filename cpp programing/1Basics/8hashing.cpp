// // for finding 0`s and 1`s in binary number:
// // 4
// // 1 2 2 1
// // 3
// // 1
// // 2
// // 2
// // 2
// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     unordered_map<int ,int> mpp;
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//         mpp[arr[i]]++;// map just update frequency count of the element arr[i] in the unordered map mpp. It keeps track of how many times each element appears in the input array.
//     }
// // // prerequisite
// //     int hash[13]={0};
// //     for (int i = 0; i < n; i++){
// //         hash[arr[i]]++;
// //     }

//     for(auto it:mpp){
//         cout<<it.first<<"->"<<it.second<<endl;
//     }
//     // int q;
//     // cin>>q;
//     // while(q--){
//     //     int num;
//     //     cin>>num;
//     //     cout<<hash[num]<<endl;
//     // }
//     return 0;
// }

// // hash in string
// // str : shivshuv
// // 5
// // s h i v a
// // 2
// // 2
// // 1
// // 2
// // 0
// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     string str;
//     cout<<"str : ";
//     cin>>str;
//     // pre
//     int hash[26]={0};
//     unordered_map<int ,int>mpp;
//     for (int i = 0; i < str.size(); i++){
//         int a=str[i]-'a';
//         hash[a]++;

//     }
//     // iterate

//     int q;
//     cin>>q;
//     while (q--){
//         char s;
//         cin>>s;
//         cout<<hash[s-'a']<<endl;
//     }

//    return 0;
// }

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     string s;
//     cout<<"enter string- ";
//     cin>>s;
//     unordered_map<char,int>mpp;
//     for(int i=0;i<s.size();i++){
//         char n=s[i];
//         mpp[n]++;
//     }
//     for(auto it:mpp){
//         cout<<it.first<<"->"<<it.second<<endl;
//     }
//     return 0;
// }

// // Count frequency of each element in the array(1CodeIsSameAsThis)
// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int arr[]={10,5,10,15,10,5};
//     int size = sizeof(arr) / sizeof(arr[0]);
//     unordered_map<int,int>mpp;
//     for(int i=0;i<size;i++){
//         mpp[arr[i]]++;
//     }
//     for(auto it:mpp){
//         cout<<it.first<<"->"<<it.second<<endl;
//     }
//     return 0;
// }

// //good question for finding the highest/lowest frequency element
// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int arr[]={10,5,15,10,10,5};
//     int size = sizeof(arr) / sizeof(arr[0]);
//     unordered_map<int,int>mpp;
//     for(int i=0;i<size;i++){
//         mpp[arr[i]]++;
//     }
//     for(auto it:mpp){
//         cout<<it.first<<"->"<<it.second<<endl;
//     }
//     int max=0; int maxele=0;
//     int min=INT_MAX; int minele=0;
//     for(auto it:mpp){

//         int count=it.second;//imp
//         int element=it.first;

//         if(count>max){//max
//             max=count;
//             maxele=element;
//         }
//         if(count<min){//min
//             min=count;
//             minele=element;
//         }
//     }

//     cout<<"The highest frequency element is: "<<maxele<<endl;
//     cout<<"The lowest frequency element is: "<<minele<<endl;

//     return 0;

// }
