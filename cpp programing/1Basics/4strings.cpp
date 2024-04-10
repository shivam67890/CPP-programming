// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
    // string inp;
    // getline(cin,inp);//used to take multiple input..
    // cout<<inp<<" \n";
    // char ch='b';//dont use ""
    // cout<<int(ch);// () are needed..
    

    // string str="hello";
    // reverse(str.begin(),str.end());
    // cout<<str<<"\n";

    // string str2="world";
    // cout<<str2.substr(0,3)<<"\n";//it does`t change the real string..
    // cout<<str2<<"\n";


    // string a="hello";
    // string b="world";
    // cout<<a+b;


    // char c[20]="hello";
    // char d[20]="world";
    // strcat(c,d);
    // cout<<c;


    // string str="hell";
    // char str2='o';
    // str.push_back(str2);//used to add string with char ..
    // cout<<str;


    // string abc="abcde";
    // char bcd[20]="abcde";
    // cout<<abc.size()<<endl;
    // cout<<strlen(bcd)<<endl;

//     int num=123456;
//     string str=to_string(num);
//     str+="1";
//     cout<<str;

//     return 0;
// }


// sorted strings
#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;
string countsort(string str){
    vector<int>freq(26,0);
    for (int i = 0; i < str.length(); i++)
    {       
        int index=str[i]-'a';
        freq[index]++;
    }
    int j=0;
    for(int i=0;i<26;i++){
        while (freq[i]--){
            str[j++]=i+'a';
        }
    }
    return str; 
}       
int main(){
    string str;
    cin>>str;
    cout<<countsort(str)<<endl;
    return 0;
}