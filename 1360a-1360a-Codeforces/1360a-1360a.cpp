#include <bits/stdc++.h>#define endl '\n'using namespace std; void solution(){    int a, b;    cin >> a >> b;        int reql = 2*min(a, b);    int reqb = reql;        if(reqb < max(a, b))    {        reqb = max(a, b);        reql = max(a, b);    }        cout << reql*reqb << endl;} int main(){    ios::sync_with_stdio(false);    cin.tie(nullptr);    	int t;	cin >> t;		while(t --) solution();     return 0;}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna