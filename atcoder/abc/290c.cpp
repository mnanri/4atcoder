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
  int n,k;
  cin >> n >> k;
  vector<ll> a(n);
  for(int i=0;i<n;i++){
    cin >> a[i];
  }
  sort(a.begin(),a.end());

  if (a[0]!=0) {
    cout << 0 << endl;
    return 0;
  }
  ll ans=1;
  int cnt=1;
  for(int i=1;i<n;i++){
    if (cnt==k) break;
    if (a[i]==a[i-1]) continue;
    if (a[i]==a[i-1]+1) {
      cnt++;
      ans++;
    } else {
      break;
    }
  }
  cout << ans << endl;
}
