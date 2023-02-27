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
string data ;
cout<<"Please provide the input data"<<endl;
cin>>data;
cout<<"Which check you want to perform even or odd"<<nl;
string check ;cin>>check;
if(check=="even"){
int ctr = 0;
f(i,data.length())if(data[i]=='1')ctr++;
if(ctr%2==0)cout<<"Error"<<endl;
else cout<<data<<'1'<<nl;
}
if(check=="odd") {
int ctr = 0;
f(i,data.length())if(data[i]=='1')ctr++;
if(ctr%2==1)cout<<"Error"<<endl;
else cout<<data<<'1'<<nl;
}

return 0 ;}
