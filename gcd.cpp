/*!
* Copyright (c) 2020 Abhishek Srivastava
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int gcd(int a, int b){
    return b==0? a: gcd(b, a%b);
}

int main(){

    ios :: sync_with_stdio(false);
    cin.tie(0);

    ll n1;
    ll n2;

    cin >> n1 >> n2;

    cout << gcd(n1, n2) << endl;
    return 0;
}