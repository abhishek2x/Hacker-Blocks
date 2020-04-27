// Sample Input

// 4 
// 1  2  3  4
// 5  6  7  8
// 9  10 11 12
// 13 14 15 16

// Sample Output

// 4 8 12 16 
// 3 7 11 15 
// 2 6 10 14 
// 1 5 9  13 

// array 90 degrees anticlockwise.

/*!
* Copyright (c) 2020 Abhishek Srivastava
*/

#include <bits/stdc++.h>
using namespace std;

int main(){

    ios :: sync_with_stdio(false);
    cin.tie(0);

    int n; cin >> n;
    
    int a[n][n];
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cin >> a[i][j];
        }
    }

    int b[n][n];
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            b[i][j] = 0;
        }
    }

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            b[n-j-1][i] = a[i][j];
        }
    }
    
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cout << b[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}