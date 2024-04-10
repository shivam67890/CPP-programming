// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// int func(int x){
//     if(x==0) return 1;
//     int a;
//     cout<<x<<endl;
//     a=func(x-1);
//     return a;
// }
// int main (){
//     int inp;
//     cout<<"enter the number : ";
//     cin>>inp;
//     func(inp);
//     return 0;
// }

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// int func(int x,int y){
//     if(x>y) return 0;
//     int a;
//     cout<<x<<endl;
//     a=func(x+1,y);
//     return a;
// }
// int main (){
//     int inp;
//     cout<<"enter the number : ";
//     cin>>inp;
//     func(1,inp);
//     return 0;
// }

// // from 0-n in series
// #include <iostream>
// int decreasing(int x){
//   if(x==0) return 0; //1
//   int ret = decreasing(x-1);//2
//   printf("%d\n",x);//3
//   return ret;
// }
// int main() {
//   int n;
//   printf("enter the no:");
//   scanf("%d",&n);
//   decreasing(n);
//   return 0;
// }

// // sum of num for 0
// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// int func(int x){
//     if(x==0) return 0;
//     int a=x+func(x-1);
//     return a;
// }
// int main(){
//     int inp;
//     cout<<"enter the number : ";
//     cin>>inp;
//     int a=func(inp);
//     cout<<a;
//     return 0;
// }

// // enter the no:2
// // enter the power:4
// // 16
// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// int func(int x,int y){
//    int a;
//    if(y==0)
//    return 1;

//    a=x*func(x,y-1);
//    return a;

// }
// int main(){
//     int inp,inp2;
//     cout<<"enter the number : ";
//     cin>>inp;
//     cout<<"enter the power : ";
//     cin>>inp2;
//     int x=func(inp,inp2);
//     cout<<x;
//     return 0;
// }

// // reverse of a number
// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
//     void func(int i,int n,int arr[]){
//         if(i>n/2) return ;
//         swap(arr[i],arr[n-i-1]);
//         func(i+1,n,arr);
//         // return;
//     }
// int main(){
//     int n;
//     cout<<"enter the no. of ele in arr : ";
//     cin>>n;
//     int arr[n];
//     cout<<"enter the arr- ";
//     for(int i=0;i<n;i++)
//     cin>>arr[i];
//     func(0,n,arr);

//     for(int i=0;i<n;i++)
//     cout<<arr[i]<<" ";
//     return 0;
// }

// //palindrom string whithout swapping
// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// bool func(int i,string &s){
//     if(i>=s.size()/2) return true;
//     if(s[i]!=s[s.size()-i-1]) return false;
//     return func(i+1,s);
// }
// int main(){
//     string str;
//     cout<<"enter the string : ";
//     cin>>str;
//     int x=func(0,str);
//     if(x) cout<<"yes it is palindrome..";
//     else cout<<"no not a palindrome";
//    return 0;
// }

// // Print Fibonacci Series up to Nth term
// // Input: N = 5
// // Output: 0 1 1 2 3 5
// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// int func(int y){
//     if(y==1 || y==0) return 1;
//     int a=func(y-1)+func(y-2);
//     return a;
// }
// int main(){
//     int inp;
//     cout<<"enter the number : ";
//     cin>>inp;
//     cout<<func(inp);
//     return 0;
// }

// // logic for printing febonoci num--
//     int fib[n + 1];
//     fib[0] = 0;
//     fib[1] = 1;
//     for (int i = 2; i <= n; i++) {
//       fib[i] = fib[i - 1] + fib[i - 2];
//     }
