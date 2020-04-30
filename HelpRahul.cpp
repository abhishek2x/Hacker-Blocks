/*!
* Copyright (c) 2020 Abhishek Srivastava
*/

#include <bits/stdc++.h>
using namespace std;

int unsorted_binary_searching(int a[], int n, int key){
    int s = 0;
    int e = n-1;

    while(s <= e){
        int mid = (s+e)/2;
        if(key == a[mid]){
            return mid;
        }
        else if(a[s] <= a[mid]){
            if(key >= a[s] && key <= a[mid]){
                e = mid-1;
            }
            else{
                s = mid+1;
            }
        }
        else{
            if(key >= a[mid] && key <= a[e]){
                s = mid+1;
        }
            else{
                e = mid-1;
            }
        }
    }
    return -1;
}

int main(){

    ios :: sync_with_stdio(false);
    cin.tie(0);

    int n; cin >> n;
    int a[1000000];
    
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }

    int key;
    cin >> key;

    cout << unsorted_binary_searching(a, n, key);

    return 0;
}