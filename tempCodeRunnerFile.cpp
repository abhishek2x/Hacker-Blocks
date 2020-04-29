// Sample Input

// 5
// 4
// 5
// 1
// 2
// 3
// 2

// Sample Output

// 3

// Explanation

// The given rotated array is [4, 5, 1, 2, 3]. The element to be searched is 2 whose index is 3.

/*!
* Copyright (c) 2020 Abhishek Srivastava
*/

#include <bits/stdc++.h>
using namespace std;

int main(){

    ios :: sync_with_stdio(false);
    cin.tie(0);

    vector<int> s;
    int n;cin >> n;

    for (int i = 0; i < n; i++){
        int j;cin >> j;
        s.push_back(j);
    }
    
    int k; cin >> k;
    auto it = std::find (s.begin(), s.end(), k); 
    if (it != s.end()) { 
        cout << it - s.begin();
    } 
    else
        cout << "-1"; 

    return 0;
}