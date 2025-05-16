#include <bits/stdc++.h>
using namespace std;
#include <cmath>

#define f(i,s,e) for(long long int i=s;i<e;i++)

typedef long int int32;
typedef unsigned long int uint32;
typedef long long int int64;
typedef unsigned long long int  uint64;

void solve()
{
    int n; cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; ++i) cin >> a[i];
    map<int64, int64> m;
    int64 s = 0;
    m[0] = 1;
    for(int i = 0; i < n; ++i) {
        a[i] *= ((i % 2) ? -1 : 1);
        s += a[i];
        if(m[s]) {
            cout << "YES\n";
            return;
        }
        ++m[s];
    }
    cout << "NO\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // use newline and not endl and not for interactive code
    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }
}