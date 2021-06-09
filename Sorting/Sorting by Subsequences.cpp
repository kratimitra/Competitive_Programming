#include <bits/stdc++.h>
using namespace std;

#define codephillic__ ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)

typedef long long ll;
#define mod (int) 998244353
long long MOD=1e9+7;
// Big two primes
#define X 1001100011100001111ll
#define all(a) a.begin(),a.end()
#define for0(i, n) for (int i = 0; i < n; i++)
#define for1(i, n) for (int i = 1; i <= n; i++)
#define loop(i,a,b) for (int i = a; i < b; i++)
#define bloop(i,a,b) for (int i = a ; i>=b;i--)

#define pb push_back
#define prec(n) fixed<<setprecision(n)
#define maxpq priority_queue<int>
#define minpq priority_queue<int, vector<int>, greater<int> >
#define inf (int)(1e18)
#define fill__(a, i) memset(a, i, sizeof(a))
#define vi vector<int>
#define ff first
#define ss second
#define endl "\n"
#define pi 3.1415926536
#define pii pair<int, int>
#define vii vector<pi>
const int MAXN = (int)((1e5) + 100);

vector<ll> ans[100500];
bool vis[100100];

void cook_here()
{
    ll n;
    cin>>n;

    pair<ll,ll> a[n];

    //ll a[n],b[n];

    for(ll i=0;i<n;i++) {
        cin>>a[i].ff;
        a[i].ss=i;
    }

    sort(a,a+n);

    ll k=0;


    for(ll i=0;i<n;i++)
    {
        if(vis[i]) continue;

        int x=i;

        while(!vis[x])
        {
            vis[x]=1;
            ans[k].pb(x+1);
            x=a[x].ss;
        }
        k++;
    }

    cout<<k<<endl;

    for(int i=0;i<k;i++)
    {
        cout<<ans[i].size()<<' ';

        for(auto x:ans[i])
        {
            cout<<x<<' ';
        }

        cout<<endl;
    }







}
int32_t main() {
/*
#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
#endif
*/
    codephillic__;
//srand(time(NULL));
    ll t=1;
    //cin>>t;
    while(t--){
        cook_here();
    }
    return 0;
    


}
