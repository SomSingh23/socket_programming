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
	  ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
	 #ifndef ONLINE_JUDGE
    freopen("Input.txt", "r", stdin);
    freopen("Output.txt", "w", stdout);
    freopen("Error.txt", "w", stderr);
    #endif 
 time_t now = time(0);

   // convert now to string form
//  set<int> set = {3,5,7};

//  for(auto x : set)cout<<x<<" ";
//    char* date_time = ctime(&now);
// cout<<date_time<<nl;  
// cout<<"enter input string"<<nl;
string data;cin>>data;
// cout<<"enter divisor"<<nl;
string divisor ;cin>>divisor;
string new_d = divisor;
f(i,divisor.length()-1)data+='0';
string init = "";
string final_answer = "";
final_answer+='1';
f(i,sz(divisor))init+=data[i];
int count = sz(divisor);
while(1){
if(count==data.length()){
cout<<"final remainder  : ";
	fs(i,1,sz(divisor)){
		if(divisor[i]!=init[i]){cout<<'1';}
		else cout<<'0';
	}cout<<nl;



	break;}
	string som = "";
	f(i,sz(divisor)){
		if(divisor[i]!=init[i]){som+='1';}
		else som+='0';
	}
string konsa = som.substr(1,som.length());
konsa+=data[count];count++;
init=konsa;
cout<<"Remainder " << init<<nl;
if(init[0]=='0'){
final_answer+='0';
int kitna = divisor.length();divisor.clear();
f(i,kitna){
divisor+='0';
}

}
else{
	final_answer+='1';
	divisor = new_d;
}
}

cout<<"quoitent : " <<final_answer<<nl;

return 0 ;}
