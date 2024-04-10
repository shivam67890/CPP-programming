#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    pair<int ,int>par={1,2};
    cout<<par.first<<"\n";

    pair <int ,pair<int ,int>>sec={1,{1,2}};
    cout<<sec.second.second<<"\n";
    
    pair<int,int>arr[]={{1,3},{6,8}};
    cout<<arr[1].second<<"\n";
    return 0;
}