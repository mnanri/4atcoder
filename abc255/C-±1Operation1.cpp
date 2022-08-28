#include<iostream>
#include<iomanip>
#include<string>
#include<cstring>
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

int main(){
  ll x,a,d,n;
  cin >> x >> a >> d >> n;
  if(d<0){
    a=a+d*(n-1);
    d=-d;
  }
  ll mi,ma;
  mi = min(a, a+d*(n-1));
  ma = max(a, a+d*(n-1));
  if(x<mi){
    cout << mi-x << endl;
  }else if(x>ma){
    cout << x-ma << endl;
  }else if(d==0){
    cout << abs(x-a) << endl;
  }else{
    x-=a;
    ll y=x%d;
    cout << min(abs(y),d-abs(y)) << endl;
  }
}
