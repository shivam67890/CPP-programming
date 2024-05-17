#include <bits/stdc++.h>
using namespace std;
vector<int> shift(vector<int> &arr)
{ 
    int n=arr.size();
    // vector<int> save;
    int k;
    for (int i = 0; i < n; i++)
    {
       if(arr[i]==0){
        k=i;
        break;
       }
    }
    for (int i = k+1; i < n; i++)
    {
        if(arr[i]!=0){
            swap(arr[i],arr[k]);
            k++;




            
        }
    }
    
        
    return arr;
}
int main()
{
    vector<int> arr= {1 ,0 ,2 ,3 ,0 ,4 ,0 ,1};
    // int n =arr.size();
    vector<int> k = shift(arr);
    cout << "The array after removing zero elements is " << endl;
    for (int i = 0; i < k.size(); i++)
    {
        cout << k[i] << " ";
    }
    return 0;
}