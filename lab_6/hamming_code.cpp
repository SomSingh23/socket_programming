/* code by som #2nd year cse at IIIT - Pune */
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


/* count frequency using map ************************************

map<int,int> map;
int ctr = 1;
f(i,n-1){
    if(a[i]!=a[i+1]){map.insert({a[i],ctr}); ctr=1;}
    else ctr++;}

*****************************************************************/
 
void display_map(map<int,int> map){
       for(auto it = map.begin() ; it!=map.end() ;it++)cout<<it->fi<<" "<<it->se<<nl;
    }


/**************************************************************************/
// lcm of first n natural numbers  //
ll hcf(ll a, ll b)
{
    if (b == 0)
        return a;
    return hcf(b, a % b);
}
 
 
ll findlcm(ll a,ll b)
{
    if (b == 1)
       
        // lcm(a,b)=(a*b)/hcf(a,b)
        return a;
   
    // assign a=lcm of n,n-1
    a = (a * b) / hcf(a, b);
   
    // b=b-1
    b -= 1;
    return findlcm(a, b);
}

/* lcm of first n natural number code  */


// return ll don't use ull 
ll x_to_the_power_y(long long x, ull y, int p = Mod)
{

    // return long long 
    int res = 1;     // Initialize result
 
    x = x % p; // Update x if it is more than or
                // equal to p
  
    if (x == 0) return 0; // In case x is divisible by p;
 
    while (y > 0)
    {
        // If y is odd, multiply x with result
        if (y & 1)
            res = (res*x) % p;
 
        // y must be even now
        y = y>>1; // y = y/2
        x = (x*x) % p;
    }
    return res;
}
  static int lod = 1;

/**************************************************************************/
void free_as_zero();
bool isPrime(int n)
{
    if (n == 2 || n == 3)
        return true;
  
    if (n <= 1 || n % 2 == 0 || n % 3 == 0)
        return false;
  
    // To check through all numbers of the form 6k ± 1
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    }
  
    return true;
}
/*define your possible decimal number as an int and it will 
automatically round it, then compare the double with the int.
if both of them are equal then decimal_no = integer_no */

/**************************************************************************/

// kadane's algorithm : to find maximum subarray sum
ll maxSubArraySum(int a[], int size){
    ll max_so_far = INT_MIN, max_ending_here = 0;
 
    for (int i = 0; i < size; i++) {
        max_ending_here = max_ending_here + a[i];
        if (max_so_far < max_ending_here)
            max_so_far = max_ending_here;
 
        if (max_ending_here <= 0)
            max_ending_here = 0;
    }
    return max_so_far;}
static int print = 1;
bool is_sorted(int a[], int n){
    int ctr = 0;
    f(i,n-1)if(a[i]<=a[i+1])ctr++;
   // cout<<ctr<<nl;
    if(ctr==n-1)return true;
    else return false;
}

/* removing duplicate element from array , code by som without sorting
ex : 1000100010 -> 101010
 v32 vec;
       int chk = a[0];
       vec.pb(chk);
       fs(i,1,n){
        if(a[i]!=chk){vec.pb(a[i]);chk=a[i];}
 }*/
int main(/*int args ,char *argv[]*/){
   // cout << fixed << setprecision(1);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

   // convert now to string form

     int your_are_my_love=1;  
  // cin>>your_are_my_love;
    while(your_are_my_love--)
    {
        free_as_zero();
    }
   cerr<<"time taken : "<<(float)clock()/CLOCKS_PER_SEC<<" secs";
   return 0;
  

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
           cout<<arr[k+j]<<" ";
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
// cout<<"RECIEVER SIDE"<<nl;
// while(true){
//     string option ;
//     cin>>option;
//     if(option=="NO")break;
//     else{
//     // acting as reciever
//         string input_str;
//         cin>>input_str; int  arrr[input_str.length()];
// v32 answer_som;answer_som.clear();
// f(i,input_str.length()){
  
//    f(i,input_str.length()){
//     if(input_str[i]=='1')arrr[i] = input_str[i]-48;
//    }
// }
// f(i,input_str.length()){

// auto it = r_value.find(i+1);
// if(it!=r_value.end()){
//         int sum = 0;
//         int skip = i+2;
//         bool f  = 0;
//         int inner_loop = i+1;
//     for(int k = i  ; k<input_str.length() ; k+=skip){
//         if(f==1)break;
//         for(int j = 0 ; j<inner_loop ; j++){
//            if(k+j>input_str.length()-1){f=1;break;}
          
//            if(arrr[k+j]!=-1)sum+=arrr[k+j];

//         } k+=inner_loop-1;
//     }

//             if(sum%2==0)answer_som.pb(0);
//             else answer_som.pb(1);


//     }















// }

// cout<<"BIT STRING"<<nl;
// for(auto x : answer_som)cout<<x<<" ";cout<<nl;
//  }

// }












return;}



/*

Sun Mar 05 10:20:38 2023

0
1
1
3


*/
