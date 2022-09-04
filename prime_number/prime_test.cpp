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

bool test_prime(ll n){
          if(n < 2) return false ;
          if(n <= 3) return  true;
          if(n %2 == 0) return false;

          for(ll i=3;i*i<n;i+=2){
                    if(n%i == 0){
                              return false;
                    }
          }
          return true;
}

int main(){
          ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
          vector<ll>v;set<ll>s;map<ll,ll>mp;pair<ll,ll>p;list<ll>li;ll ara[N];
          ll n ; bool cnt = false;

          cin >> n ;
          cnt = test_prime(n);
          if(cnt) YES;
          else NO;
          return 0;
}
