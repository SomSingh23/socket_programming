/* code by som #2nd year cse at IIIT - Pune */
/* motivation should be your dreams because coding will help them achieve :)*/
/* anyone ======> someone*/
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
typedef vector<int> v32; /*   vector<int>   */
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
void free_as_zero();
int main(/*int args ,char *argv[]*/){
   // cout << fixed << setprecision(1);
 free_as_zero();

    } 

  
 
/* Driver code */

 void free_as_zero() { 
// Sun Mar 05 10:20:38 2023

string a;cin>>a;
int m = a.length();
// checking for valid r value
int r = 0;
set<int> r_value;
int power_2 = 1;
while(power_2<m+r+1){
    r_value.insert(power_2);
power_2*=2;r++;

}
cout<<"value of r = " << r<<nl;
int ptr = 0;
reverse(all(a));
for(auto x : r_value)cout<<x<<" ";cout<<nl;
int arr[m+r];
f(i,m+r){
    auto it = r_value.find(i+1);
    if(it!=r_value.end()){
        arr[i]=-1;
    }
    else {
arr[i] = a[ptr] - 48; ptr++;
    }

}
reverse(arr,arr+m+r);
for(auto x : arr)cout<<x<<" ";cout<<nl;
    // f(i,m+r)cout<<i<<" ";cout<<nl;
    reverse(arr,arr+m+r);
f(i,m+r){
    if(arr[i]==-1){
        int sum = 0;
        int skip = i+2;
        bool f  = 0;
        int inner_loop = i+1;
    for(int k = i  ; k<m+r ; k+=skip){
        if(f==1)break;
        for(int j = 0 ; j<inner_loop ; j++){
           if(k+j>m+r-1){f=1;break;}
           if(arr[k+j]==-1){cout<<"R"<<inner_loop<<" ";}

           else cout<<arr[k+j]<<" ";

           if(arr[k+j]!=-1)sum+=arr[k+j];

        } k+=inner_loop-1;
    }
cout<<nl;

            if(sum%2==0)arr[i]=0;
            else arr[i] = 1;


    }
}
cout<<"Final answer"<<nl;
reverse(arr,arr+m+r);
for(auto x : arr)cout<<x<<" ";cout<<nl;
cout<<"Reciever side"<<nl;
while (true)
{
string option ;
cout<<"Do you want to give reciever side string (Yes/No)"<<nl;


cin>>option;

if(option=="no" or option=="NO" or option=="No" or option=="nO")break;
else {
cout<<"please give reciever side input string"<<nl;
string r_i ;cin>>r_i;

if(r_i.length()-r!=a.length()){cout<<"Invalid string"<<nl; continue;}
else {reverse(all(r_i));
f(i,m+r){arr[i] = r_i[i] - 48;}

v32 _b;
int lomda = 0;
f(i,m+r){
    if(i==(pow(2,lomda)-1)){
       lomda++;
      // cout<<i<<" ";
        int sum = 0;
        int skip = i+2;
        bool f  = 0;
        int inner_loop = i+1;
    for(int k = i  ; k<m+r ; k+=skip){
        if(f==1)break;
        for(int j = 0 ; j<inner_loop ; j++){
           if(k+j>m+r-1){f=1;break;}
           if(arr[k+j]==-1){cout<<"R"<<inner_loop<<" ";}

           else cout<<arr[k+j]<<" ";

           if(arr[k+j]!=-1)sum+=arr[k+j];

        } k+=inner_loop-1;
    }
cout<<nl;

            if(sum%2==0)_b.push_back(0);
            else _b.push_back(1);


    }
}cout<<nl;

reverse(all(_b));
cout<<"binary representation of changed bit is : ";
for(auto x : _b)cout<<x<<" ";cout<<nl;
cout<<"Decimal representation of changed bit is : ";
ll dec = 0;
f(i,sz(_b))dec+=(_b[i]*pow(2,sz(_b)-i-1));
cout<<dec<<nl;
continue;








}


}
}





















return;}



/*

Sun Mar 05 10:20:38 2023

0
1
1
3


*/
