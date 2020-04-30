

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

int main(){

    ios :: sync_with_stdio(false);
    cin.tie(0);

    int T;
    cin >> T;
    while(T--){
        int n;
        cin >> n;

        int* a = NULL;
        a = new int [n];
        
        for (int i = 0; i < n; i++){
            cin >> a[i];
        }

        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            if(a[i]%n == 0){
                ans++;
            }
            int sum = a[i];
            for (int j = i+1; j < n; j++)
            {
                sum += a[j];
                if(sum%n == 0)
                    ans++;
            }
        }
        
        cout << ans << endl;
    }
    return 0;
}