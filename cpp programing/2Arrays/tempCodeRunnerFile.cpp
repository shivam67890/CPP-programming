// Count Subarray sum Equals K⭐
// optimal method
#include<bits/stdc++.h>
using namespace std;
int count( vector<int> &arr,int k){
    map<int,int>mpp;
    mpp[0]=1;
    int count=0;
    int sum=0;
    for (int i = 0; i < arr.size(); i++)
    {
        sum+=arr[i];
        int remove=sum-k;
        count=count+mpp[remove];
        mpp[sum]++;//this ensure that map will store sum and count..
    }
    return count;
}
int main(){
    vector<int> arr={1, 3, -5, 6, -2};
    int k=4;
    int ans=count(arr,k);
    cout<<ans;
    return 0;
}
