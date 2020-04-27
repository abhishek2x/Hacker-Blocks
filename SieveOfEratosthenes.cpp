/*!
* Copyright (c) 2020 Abhishej Srivastava
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long

// Complexity  - O(Nlog(log(N)))
void prime_sieve(int* p){

    p[2] = 1; 
    for (ll i = 3; i < 1000000; i+=2){
        p[i] = 1;
    }

    for (ll i = 1; i < 1000000; i+=2)
    {
        if(p[i] == 1){
            for (ll j = i*i; j < 1000000; j+=i){
                p[j] = 0;
            }
        }
    }
}

int main(){

    ios :: sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;
    
    int p[1000005] = {0};
    prime_sieve(p);

    for (int i = 0; i <= n; i++) {
        if(p[i] == 1){
            cout << i << ", ";
        }
    }

    return 0;

}