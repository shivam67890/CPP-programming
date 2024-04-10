// // prime no b/w two numbers
// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// bool checkprime(int num){
//     for (int i = 2; i < num; i++)
//     {
//     if(num%i==0)
//     return false;
//     }

//         return true;

// }
// void primeno(int inp,int inp2){
//     for (int i=inp+1;i<inp2;i++){
//         if(checkprime(i)){
//             cout<<i<<" is a prime no";
//         }

//     }
// }
// int main(){
//     int inp,inp2,d;
//     cout<<"Enter the first number: ";
//     cin>>inp;
//     cout<<"Enter the second number: ";
//     cin>>inp2;
//     primeno(inp,inp2);
//     return 0;
// }

// // C++ Program to Check Whether a Number can be Express as Sum of Two Prime Numbers
// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// // check prime number
// bool check_prime(int n) {
//   int i;
//   bool is_prime = true;
//   // 0 and 1 are not prime numbers
//   if (n == 0 || n == 1) {
//     is_prime = false;
//   }
//   for(i = 2; i <= n/2; ++i) {
//     if(n % i == 0) {
//       is_prime = false;
//       break;
//     }
//   }
//   return is_prime;
// }
// int main(){
//     cout<<"enter the input :";
//     int inp,max=0,sum;
//     cin>>inp;
//     int input=inp;
//     for (int i = 0; i < input/2; i++)
//     {
//      if(check_prime(i)){
//         if(check_prime(input-i)){
//             cout<<i<<" + "<<input-i<<endl;
//         }
//      }
//     }
//     return 0;
// }

// // C++ program to Find Sum of Natural Numbers using Recursion
// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// int summ(int input){
//     int sum;
//     if(input==0 || input==1) return 1;
//     // for (int i=1;i<=input;i++){
//         // sum=sum+i;
//     sum=input+summ(input-1);
//     // }
//     return sum;
// }
// int main(){
//     int inp;
//     cout<<"Enter an positive integer: ";
//     cin>>inp;
//     int inpaj=summ(inp);
//     cout<<"this is the sum of inp :"<<inpaj;
//     return 0;
// }

// // HCF using normal method:
// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// int max(int inp,int inp2){
//     if(inp<inp2)
//     return inp2;
//     return inp;
// }
// int hcf(int inp,int inp2){
//     int answ;
//     for(int i=1;i<max(inp,inp2);i++){
//         if(inp%i==0 && inp2%i==0){
//              answ=i;
//         }
//     }
//     return answ;
// }
// int main(){

//     int inp,inp2;
//     cout<<"Enter an positive integer: ";
//     cin>>inp>>inp2;
//     int maxx=max(inp,inp2);
//     int inpaj=hcf(inp,inp2);
//     cout<<"This is the HCF of input :"<<inpaj;
//     return 0;
// }

// //using recursion;😆😆😆
// #include <iostream>
// using namespace std;

// int hcf(int n1, int n2);

// int main()
// {
//    int n1, n2;

//    cout << "Enter two positive integers: ";
//    cin >> n1 >> n2;

//    cout << "H.C.F of " << n1 << " & " <<  n2 << " is: " << hcf(n1, n2);

//    return 0;
// }

// int hcf(int n1, int n2)
// {
//     if (n2 != 0)
//        return hcf(n2, n1 % n2);
//     else
//        return n1;
// }

// // C++ Program to Convert Binary Number to Decimal
// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// int binary(int inp){
//     int a=0,b=1,c=0,d=0,e=inp;
//     while (b!=0)
//     {
//         a=e%10;
//         b=e/10;
//         e=b;
//         if(a==1){
//             c+=pow(2,d);
//         }d++;
//     }

//        return c;
// }
// int main()
// {
//     int inp;
//     cout << "enter the binary number :";
//     cin >> inp;
//     int convert=binary(inp);
//     cout<<convert;
//     return 0;
// }

// //  Program to Computer Power Using Recursion
// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// int powerof(int base,int power){
//      int a;
//     if (power!=0 )
//     {
//     a=base*powerof(base,power-1);
//     }
//     else{
//         return 1;
//     }
//     return a;
// }
// int main(){
//     int inp,inp2;
//     cout << "enter the base number & then power :";
//     cin >> inp>>inp2;
//     int convert=powerof(inp,inp2);
//     cout<<convert;
//     return 0;
// }

// //reverse a no in arr
// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// void reverse(int n,int arr[]){
//     int temp=0;
//     for (int i=0;i<n/2;i++){
//         temp=arr[i];
//         arr[i]=arr[n-i-1];
//         arr[n-i-1]=temp;
//     }
//     for (int i = 0; i < n; i++)
//     {
//         cout<<arr[i] << " ";
//     }

// }
// int main(){
//     int n;
//     cout<<"enter the no of ele in list : ";
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }

//     reverse(n,arr);

//     return 0;
// }


// // to find max 1 in a row
// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     // int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
//     int arr[3][4] = {{1, 0, 1, 1}, {1, 0, 0, 1}, {0, 0, 0, 1}};
//     int max = INT_MIN;
//     int maxcount=0;
//     int rowcount=0;
//     for (int i = 0; i < 3; i++){
//         int count=0;
//         for (int j = 0; j < 4; j++){
//             if(arr[i][j]==1){
//                 count++;
//             }
            
//         if(maxcount<count){
//         maxcount=count;
//         rowcount=i+1;
// }}
//     }
//     cout<<"this is rowcount : "<<rowcount;

//     return 0;
// }