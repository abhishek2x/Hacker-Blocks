// Sample Input

// 2
// 1 10
// 11 20

// Sample Output

// 4
// 4

/*!
* Copyright (c) 2020 Abhishek Srivastava
*/
// TLE
#include <bits/stdc++.h>
using namespace std;
#define ll long int

bool isPrime(int n){

    if(n == 2)
        return true;
    if(n%2 == 0 || n == 1)
        return false;
    
    int sq = sqrt(n);
    int kp = 0;
    for(int i = 3; i<= sq; i += 2)
    {
        if(n%i == 0)
            kp++;
    }
    if(kp == 0)
        return true;
    return false;
}

int main(){

    ios :: sync_with_stdio(false);
    cin.tie(0);

    int T;
    cin >> T;

    while(T--){

        ll a, b;
        cin >> a >> b;

        isPrime(a, b);
    }
    return 0;
}