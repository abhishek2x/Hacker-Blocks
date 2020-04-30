

// Output a single integer denoting the number of good sub-arrays.
// Sample Input

// 2
// 5
// 1 1 1 1 1
// 5
// 5 5 5 5 5

// Sample Output

// 1
// 15

// Explanation

// In first test case, there is only one sub-array [1, 1, 1, 1, 1], such that 1+1+1+1+1=5, which is divisible by N=5
// TLE
/*!
* Copyright (c) 2020 Abhishek Srivastava
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll a[1000005], pre[1000005];

int main(){

    ios :: sync_with_stdio(false);
    cin.tie(0);

    int t; cin >> t;
    while(t--){
        int n;
        cin >> n;

        memset(pre, 0, sizeof(pre));

        pre[0] = 1;

        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += a[i];
            sum %= n;
            sum = (sum + n)%n; // to make it positive
            pre[sum]++;
        }

        ll ans = 0;
        for (int i = 0; i < n; i++)
        {
            int m = pre[i];
            ans += (m*(m-1))/2;
        }
        
        cout << ans << endl;

    }


    return 0;
}