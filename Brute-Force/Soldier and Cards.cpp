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
bool vis[105];
ll n;
ll a[105];
ll ans[105];
vector<pair<ll,ll>> adj[105];
void dfs(ll i , ll p)
{
    for(auto x:adj[i])
    {
        if(x.ff == p) continue;

        dfs(x.ff, i);

        ans[i] = max(ans[i] , ans[x.ff]+x.ss);
    }
}
void cook_here()
{
    cin>>n;
    
    queue<ll> first , second;

    ll k;

    cin>>k;
    while(k--){
        ll x;
        cin>>x;
        first.push(x);
    }

    cin>>k;
    while(k--){
        ll x;
        cin>>x;
        second.push(x);
    }
    ll cnt=0;
    while(first.size() && second.size())
    {
        ll x = first.front();
        first.pop();

        ll y=second.front();
        second.pop();
        if(cnt > 15*n)
            {
            cout<<"-1\n";
            return;
        }

        if(x>y)
        {
            cnt++;
            first.push(y);
            first.push(x);
        }
        else if(x<y)
        {
            cnt++;
            second.push(x);
            second.push(y);
        }
        else{
            cout<<"-1\n";
            return;
        }
    }

    if(first.size() && second.size()==0)
    {
        cout<<cnt<<' '<<1<<endl;
        return;
    } 


    if(first.size()==0 && second.size()!=0)
    {
        cout<<cnt<<' '<<2<<endl;
        return;
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
