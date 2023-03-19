#include <bits/stdc++.h>
using namespace std;
using ll = int64_t;
using graph = vector<vector<int> >;
const ll M = 1000000007;

int main(){
  ll n,a,b;
  cin >> n >> a >> b;
  string s;
  cin >> s;
  ll ans = n*b;
  for (int i=0; i<n; i=i+2) {
    int c = i/2;
    int cnt = 0;
    for (int j=0; j<c; j++){
      if (s[c-1-j] != s[j+c]) {
        cnt++;
      }
    }
    int d = (n-i)/2;
    if (n%2 == 0) {
      for (int j=0; j<d; j++){
        if (s[i+d-1-j] != s[i+j+d]) {
          cnt++;
        }
      }
    } else {
      for (int j=0; j<d; j++){
        if (s[i+d-1-j] != s[i+j+d+1]) {
          cnt++;
        }
      }
    }

    ll cost = a*c + b*cnt;
    //cout << "#" << c << "#" << cnt << "#" << cost << endl;
    ans = min(ans, cost);
  }

  cout << ans << endl;
}
