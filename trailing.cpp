// Input Format

// A single integer N.
// Constraints

// 1 <= N <= 10^9
// Output Format

// A single integer denoting the count of trailing zeroes in N!
// Sample Input

// 5

// Sample Output

// 1

/*!
* Copyright (c) 2020 Abhishek Srivastava
*/

#include <bits/stdc++.h>
using namespace std;

int main(){

    ios :: sync_with_stdio(false);
    cin.tie(0);

    int n;cin >> n;

    long long int f=1;
    int p = 5, c = 0;
    for (int i = 1; i <= n; i++){
        if(floor(n/pow(p, i)) == 0)
            break;
        c+= floor(n/pow(p, i));
    }
    
    cout << c;
    return 0;
}