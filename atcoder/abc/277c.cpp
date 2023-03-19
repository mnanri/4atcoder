#include <bits/stdc++.h>
using namespace std;
using ll = int64_t;
using graph = vector<vector<int> >;
const ll M = 1000000007;

int main(){
  int n;
  cin >> n;
  map<ll,vector<ll> > mp;
  map<ll, int> visited;
  for (int i = 0; i < n; i++){
    ll a,b;
    cin >> a >> b;
    mp[a].push_back(b);
    mp[b].push_back(a);
    visited[a] = -1;
    visited[b] = -1;
  }

  if (!mp.count(1)){
    cout << 1 << endl;
    return 0;
  }

  queue<ll> que;
  visited[1] = 0;
  que.push(1);
  while (!que.empty()){
    ll v = que.front();
    que.pop();
    for (int i = 0; i < mp[v].size(); i++){
      ll nv = mp[v][i];
      if (visited[nv] == -1){
        visited[nv] = visited[v] + 1;
        // cout << "#" << nv << " " << visited[nv] << endl;
        que.push(nv);
      }
    }
  }

  ll ans = 1;
  for (auto p : visited) {
    auto key = p.first;
    auto value = p.second;
    // key, valueを使う
    // cout << key << " " << value << endl;
    if (value == -1) continue;
    ans = max(ans, key);
  }

  cout << ans << endl;
}
