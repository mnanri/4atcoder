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
  ll n,x,y;
  cin >> n>> x >> y;
  n--;
  vector<ll> r(n+1,0);
  vector<ll> b(n+1,0);
  r[n]=1;

  for(int i=n;i>0;i--){
    b[i]+=r[i]*x;
    r[i-1]+=r[i];
    r[i-1]+=b[i];
    b[i-1]+=b[i]*y;
  }

  cout << b[0] << endl;
}
