#include<iostream>
#include<iomanip>
#include<string>
#include<algorithm>
#include<vector>
#include<utility>
#include<tuple>
#include<map>
#include<queue>
#include<stack>
#include<deque>
#include<bitset>
#include<math.h>
#include<numeric>
using namespace std;
using ll = int64_t;
using Graph = vector<vector<int> >;
const ll M = 1000000007;

vector<ll> fac(100001); //n!(mod M)
vector<ll> ifac(100001); //k!^{M-2} (mod M)
//a,bの範囲的にこれだけ配列を用意していけば十分

ll mpow(ll x, ll n){ //x^n(mod M) ←普通にpow(x,n)では溢れてしまうため，随時mod計算
    ll ans = 1;
    while(n != 0){
        if(n&1) ans = ans*x % M;
        x = x*x % M;
        n = n >> 1;
    }
    return ans;
}

ll comb(ll a, ll b){ //aCbをmod計算
    if(a == 0 && b == 0)return 1;
    if(a < b || a < 0)return 0;
    ll tmp = ifac[a-b]* ifac[b] % M;
    return tmp * fac[a] % M;
}

int main(){
  ll n,l;
  cin >> n >> l;
  ll r=n/l;
  //大した量ではないので，先にfax[i]とifax[i]を全て計算しておく
  fac[0] = 1;
  ifac[0] = 1;
  for(ll i = 0; i<100000; i++){
    fac[i+1] = fac[i]*(i+1) % M; // n!(mod M)
    ifac[i+1] = ifac[i]*mpow(i+1, M-2) % M; // k!^{M-2} (mod M) ←累乗にmpowを採用
  }
  ll sum=1;
  for(ll i=1;i<=r;i++){
    ll tmp=comb(n-i*l+i,i)%M;
    sum+=tmp;
    sum%=M;
  }
  cout << sum << endl;
}
