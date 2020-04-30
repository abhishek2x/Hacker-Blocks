/*!
* Copyright (c) 2020 Abhishek Srivastava
*/

#include <bits/stdc++.h>
using namespace std;

int getint(string s){
    int ans = 0;
    int p = 1;

    for (int i = s.length() - 1; i >= 0; i--)
    {
        ans += (s[i] - '0')*p;
        p *= 10;
    }
    
    return ans;
}

bool numericComparator(pair<string, string> s1, pair<string, string> s2){
    return getint(s1.second) < getint(s2.second);
}

bool lexicoComparator(pair<string, string> s1, pair<string, string> s2){
    return s1.second < s2.second;
}

string getvalueAtKey(string s, int key){

    // Using string tokenizer function
    char* str = strtok((char*)s.c_str(), " ");
    while(key > 1){
        str = strtok(NULL, " ");
        key--;
    }
    return (string)str;
}

int main(){

    ios :: sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;
    cin.get(); // to manage line change

    string a[100];
    for (int i = 0; i < n; i++){
        getline(cin, a[i]);
    }

    int key; cin >> key;
    string reversal, ordering;
    cin >> reversal >> ordering;
    
    pair<string, string> strPair[100];

    for (int i = 0; i < n; i++){
        strPair[i].first = a[i];
        strPair[i].second = getvalueAtKey(a[i], key);
    }

    if(ordering == "numeric"){
        sort(strPair, strPair+n, numericComparator);
    } else{
        sort(strPair, strPair+n, lexicoComparator);
    }
    
    if(reversal == "true"){
        for (int i = 0; i < n/2; i++){
            swap(strPair[i], strPair[n-1-i]);
        }
    }

    // Printing
    for (int i = 0; i < n; i++){
        cout << strPair[i].first << endl;
    }
    
    return 0;
}