// // even odd
// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int inp;
//     cout<<"enter the number: ";
//     cin>>inp;
//     if (inp%2==0)
//     {
//         cout<<"yes";
//     }
//     else{
//         cout<<"no";
//     }
//     return 0;
// }

// // largest number
// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int inp1,inp2,inp3;
//     cout<<"enter the numbers : ";
//     cin>>inp1>>inp2>>inp3;
//     if(inp1>inp2 && inp1>inp3){
//         cout<<"input 1 ("<<inp1<<") is greatest";
//     }
//     else if(inp1<inp2 && inp2>inp3){
//         cout<<"input 2 ("<< inp2<<") is greatest";
//     }
//     else{
//         cout<<"input 3 ("<< inp3<<") is greatest";
//     }
//     return 0;
// }

// //factorial
// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// int main (){
//     int d=1,inp=5;
//     for (int i=1;i<=inp;i++){
//         d*=i;
//     }
//     cout<<"This is the factorial of 5 : "<<d;
//     return 0;
// }

// // The Fibonacci sequence: 0, 1, 1, 2, 3, 5, 8, 13, 21
// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// int main (){
//     int m,c=6,d=1,k=0;
//     cout<<"0";
//     for (int i=0;i<=c-2;i++){
//         m=d+k;
//         d=k;
//         k=m;
//         cout<<","<<m;
//     }
//     return 0;
// }

// // hcf
// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int inp,inp2,greator,hcf;
//     cout<<"enter the numbers: ";
//     cin>>inp>>inp2;
//     if(inp>inp2){
//         greator=inp2;
//         inp2=inp;
//         inp=greator;
//     }
//     for (int i=1;i<=inp;i++){
//     if (inp%i==0 && inp2%i==0)
//     {
//      hcf=i;
//     }
//     }
//     cout<<"hcf: "<<hcf;
//     return 0;
// }



// // Lcm
// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int inp, inp2, greator, hcf;
//     int product = 1;
//     cout << "enter the numbers: ";
//     cin >> inp >> inp2;
//     if (inp > inp2)
//     {
//         greator = inp2;
//         inp2 = inp;
//         inp = greator;
//     }
//     cout << "Lcm : ";

//     for (int i = 2; i <= inp2; i++)
//     {
//         if (inp % i == 0 && inp2 % i == 0)
//         {
//             hcf = i;
//             product = hcf * product;
//         }
//     }
//     cout << product << " ";

//     return 0;
// }



// // Reverse a number 1234--4321
// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// int main (){
//     int inp,first,second=0,input,third;
//     cout<<"Enter the number: ";
//     cin>>inp;
//     input=inp;
//     while (input!=0)
//     {
//        first = input%10;
//        second = second*10+first;
//         input = input/10;
//     }
//     cout<<second;
    
//     return 0;
// }


// // calculate the power of a number
// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// int main (){
//     int input,power;
//     cout<<"enter the base and power : ";
//     cin>>input>>power;
//     int sol=input;
//     for(int i =1;i<power;i++){

//     sol=input*sol;
//     // input=sol;
//     }
//     cout<<sol;
//     return 0;
// }




// // palindrome numbers
// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// int main (){
//     int input,first,second,third=0;
//     cout<<"Enter the positive number:";
//     cin>>input;
//     int inp=input;
//     while(inp!=0){
//         first=inp%10;
//         third=third*10+first;
//         inp=inp/10;
//     }
//     if(input==third){
//         cout<<"its palindrome";

//     }
//     else{
// cout<<"its NOT palindrome";
        
//     }
//     return 0;
// }



// // To check weather the number is prime or not;29
// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// int main (){
//     int inp,first,second,third;
//     bool is_prime = true;
//     cout<<"enter the number : ";
//     cin>>inp;
//     for(int i=2;i<inp;i++){
//     if(inp%i==0){
//         is_prime = false;
//         break;
//     }
//     }
//     if(is_prime){
//         cout<<"yes";
//     }
//     else{
//         cout<<"no";
//     }
//     return 0;
// }


// //armstrong number: 153
// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// int main (){
//     int input,first,second,third,forth=0,mult;
//     cout<<"enter the number : ";
//     cin>>input;
//     int inp=input;
//     while(inp!=0){
//         first=inp%10;
//         forth+=first*first*first;
//         inp=inp/10;
        
//     }
//     if(input == forth){
//     cout<<input<< " is an Armstrong number.";
//     }
//     else{
//         cout<<"nonono";
//     }
//     return 0;
// }


// switchCase
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main (){
    char op;
    float first,second;
    cout<<"enter the operator + - * / :";
    cin>>op;
    cout<<"enter the 2 Numbers: ";
    cin>>first>>second;
    switch (op)
    {
    case '+':
        cout<<first<<"+"<<second<<"="<<first+second;
        break;
    // more case here

    default:
    cout<<"enter correct number";
        break;
    }
    return 0;
}