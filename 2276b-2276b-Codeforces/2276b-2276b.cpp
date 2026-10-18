#include <bits/stdc++.h>#define endl '\n'using ll = long long;using namespace std; void solution(){    string str;    cin >> str;     int n = str.size();    int f1 = 0, f2 = 0;    for(int i=1; i<n-1; ++i)    {    	bool cond1 = str[i-1] == str[i];    	bool cond2 = str[i] == str[i+1];        if(cond1 && cond2) f1 = 1;        else if(!cond1 && !cond2) f2 = 1;    }        cout<< f1 + f2 + 1 << endl;} int main(){    ios::sync_with_stdio(false);    cin.tie(nullptr);     int t;    cin >> t;     while(t--) solution();     return 0;}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna