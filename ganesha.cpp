// Take as input N, an odd number (>=5) . Print the following pattern as given below for N = 7.

// *  ****
// *  *
// *  *
// *******
//    *  *
//    *  *
// ****  *

// Input Format

// Enter value of N ( >=5 )
// Constraints

// 5 <= N <= 99

/*!
* Copyright (c) 2020 Abhishek Srivastava
*/

#include <bits/stdc++.h>
using namespace std;

int main(){

    ios :: sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(i == n/2 || j == n/2)
                cout << "*";
            else if(i == 0 && j > n/2)
                cout << "*";
            else if(j == 0 && i < n/2)
                cout << "*";
            else if(i == n-1 && j < n/2)
                cout << "*";
            else if (j == n-1 && i > n/2)
                cout << "*";
            else cout << " ";
        }
        cout << "\n";
    }
    
    return 0;
}