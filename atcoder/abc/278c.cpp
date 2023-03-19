#include <bits/stdc++.h>
using namespace std;
using ll = int64_t;
using graph = vector<vector<int> >;
const ll M = 1000000007;

int main(){
  ll n;
  cin >> n;
  int q;
  cin >> q;

  map<string, int> mp;
  for (int i=0; i<q; i++){
    int t;
    cin >> t;
    ll a,b;
    cin >> a >> b;
    string s = to_string(a) + "->" + to_string(b);
    if (t == 1){
      if (!mp.count(s)) mp[s] = 1;
    } else if ( t == 2 ){
      if (mp.count(s)) mp.erase(s);
    } else {
      string s2 = to_string(b) + "->" + to_string(a);
      if ( mp.count(s) && mp.count(s2) ) cout << "Yes" << endl;
      else cout << "No" << endl;
    }
  }
}
