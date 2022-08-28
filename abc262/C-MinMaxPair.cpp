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
  int n;
  cin >> n;
  vector<int> a(n);
  for(int i = 0; i < n; i++){
    cin >> a[i];
    a[i]--;
  }
  ll cnt=0;
  for(int i=0;i<n;i++){
    if(a[i]==i){
      cnt++;
    }
  }
  ll ans= cnt*(cnt-1)/2;
  ll tmp=0;
  for(int i=0;i<n;i++){
    if(a[a[i]]==i && a[i]!=i) tmp++;
  }
  ans += tmp/2;
  cout << ans << endl;
}
