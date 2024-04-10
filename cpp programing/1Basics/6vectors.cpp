#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    // vector<int>arr;
    // arr.push_back(1);
    // arr.emplace_back(2);

    // vector<pair<int,int>>vec;
    // vec.emplace_back(2,3);
    //     for (int i = 0; i < vec.size(); i++) {
    //     cout << vec[i].first<< " ";
    // }

    vector<int> v(5, 100);
    for (int i = 0; i < v.size(); i++)
    { // easiest method
        cout << v[i] << " ";
    }
    cout << endl;
    /*vector<int>::iterator itrator;*/ auto itrator = v.begin();
    itrator++; // same without using this ..
    cout << *(itrator) << " ";
    // for(auto itrator=v.begin();itrator!=v.end();itrator++){
    //     cout<<*(itrator);
    // }
    cout << "\n";
    for (auto itrator : v)
    { // shorcut
        cout << itrator << " ";
    }
    return 0;
}
/* By using an iterator, you can easily read or modify the elements stored in a
  vector without needing to know the exact index of each element  */ 

// just simple vector array
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> x{1, 2, 3, 4, 5};
    auto move = x.begin();
    for (auto &move : x)
    { //& is used to make changes directly in main array..
        move += 10;
    }
    for (auto &move : x)
    {
        cout << move << " ";
    }
    return 0;
}

// vector insert
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> y{1, 2, 3, 4, 5};
    auto move = y.begin();

    y.erase(y.begin() + 1);                // to remove something
    y.erase(y.begin() + 1, y.begin() + 3); // to remove somthing in range

    y.insert(y.begin() + 1, 300);          // to insert ele in array
    y.insert(y.begin() + 1, 2, 4);         // used to insert 2 time 4
    y.insert(y.begin() + 4, {9, 9, 9, 9}); // add new array in previous one.
    y.pop_back();                          // remove ele from back
    // // y.clear();// //to clear everything
    for (auto move : y)
    {
        cout << move << " ";
    }

    return 0;
}

// map
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<int, int> mpp;
    // map<int,pair<int,int>>mpp;
    auto move = mpp, begin();
    mpp[1] = 2;
    mpp.emplace(3, 1);
    mpp.insert({2, 4});
    // mpp[{2,3}]=10;
    for (auto move : mpp)
    {
        cout << move.first << " " << move.second << endl;
    }

    return 0;
}