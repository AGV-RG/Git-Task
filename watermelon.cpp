#include <bits/stdc++.h>
using namespace std;

#define f(i,s,e) for(long long int i=s;i<e;i++)

typedef long int int32;
typedef unsigned long int uint32;
typedef long long int int64;
typedef unsigned long long int  uint64;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // use newline and not endl and not for interactive code
    int32 n;
    cin>>n;
    map<int,int> m;
    int ans = 0;
    int s;
    int a[n];
    for (int i = 0; i < n; i++)
    {
      cin>>a[i];
    }
    s=0;
    for (int i = 0; i < n; i++)
    {
        if (m.find(a[i]) == m.end())
        {
            m.insert({a[i],i});            
        }
        else
        {
            if (m[a[i]] >= s)
            {
                s= m[a[i]] + 1;
            }
            m[a[i]]=i;
        } 
        ans = max(ans, i - s + 1);
    }    
    cout<<ans;
}

