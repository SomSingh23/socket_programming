/* code by som #2nd year cse at IIIT - Pune */
/* https://github.com/SomSingh23 */
#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
using namespace std;
#define ull unsigned long long
#define Mod 1000000007 
typedef long long ll;
typedef long double ld;
typedef pair<int,int> p32;
typedef pair<ll,ll> p64;
typedef pair<double,double> pdd;
typedef vector<ll> v64;
typedef vector<int> v32;
typedef vector<vector<int> > vv32;
typedef vector<vector<ll> > vv64;
typedef vector<vector<p64> > vvp64;
typedef vector<p64> vp64;
typedef vector<p32> vp32;
#define ull unsigned long long
#define f(i,e) for(ll i = 0; i < e; i++)
#define fs(i,s,e) for(ll i = s; i < e; i++)
#define fr(i,s) for(ll i = s; i >= 0; i--)
#define frs(i,s,e) for(ll i = s; i >= e; i--)
#define nl "\n"
#define dbg(x) cout<<#x<<" = "<<x<<nl
#define mp make_pair
#define pb push_back
#define Y cout<<"YES"<<nl
#define N cout<<"NO"<<nl
#define fi first
#define se second
#define INF 2e18
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define all(x) (x).begin(), (x).end()
#define sz(x) ((ll)(x).size())
using namespace std;

signed main(){
    cout<<"Enter size of frame"<<nl;
int _si ;cin>>_si;
cout<<"How many frames are there of size "<<_si<<nl;
int n;cin>>n;
vector<string> vec;
f(i,n){
string k;cin>>k;
vec.pb(k);}
string som = "";

for(int i = 0 ; i<_si;i++){int ctr = 0;
for(int k  = 0 ; k<n;k++){
    if(vec[k][i]=='1')ctr++;

}
if(ctr%2)som+='1';
else som+='0';
}

cout<<"Final out put"<<nl;
for(auto x : vec)cout<<x<<" "; cout<<som<<nl;
return 0 ;}
