/*ctrl + option + D == cph
cmd + shift + E == open current folder*/
#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#define nl endl
#define x first
#define y second
#define sqr(a) ((a) * (a))
#define sz(a) int(a.size())
#define all(a) a.begin(), a.end()
#define ll long long int
#define pb push_back
#define uq unique
#define mp make_pair
#define em_back emplace_back
#define sqrt(x) sqrt(abs(x))
#define nnl cout <<'\n'
#define YES cout << "YES"<<nl
#define NO cout << "NO"<<nl
typedef long double ld;
#define mod 1000000007
#define N 100005
using namespace std;
using namespace __gnu_pbds;

void primality(ll n){
          ll prime[n+3];
          memset(prime,0,sizeof(prime));

          for(ll i=2;i<=n;i++){
                    if(prime[i] == 0){
                              for(int j=i*i;j<=n;j+=i){
                                        prime[j] = 1; 
                              }
                    }
          }

          for(int i=2;i<=n;i++){
                    if(prime[i]==0){
                              cout << i << nl;
                    }
          }
}
int main(){
          ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
          vector<ll>v;set<ll>s;map<ll,ll>mp;pair<ll,ll>p;list<ll>li;ll ara[N];
          ll a=0,b=0,c=0,n=0;string str1,str2,str3;char ch;ld d;bool fcnt = false,tcnt = true;
          
          cin >> n ;
          primality(n);
          return 0;
}
