#include <bits/stdc++.h>
using namespace std;
using ll = int64_t;
using graph = vector<vector<int> >;
const ll M = 1000000007;

int main(){
  int n,m;
  cin >> n >> m;
  graph g(n);
  for (int i = 0; i < m; i++) {
    int a,b;
    cin >> a >> b;
    a--,b--;
    g[a].push_back(b);
    g[b].push_back(a);
  }
  if (m != n-1) {
    cout << "No" << endl;
    return 0;
  }
  int s = -1;
  for (int i = 0; i < n; i++) {
    if (g[i].size() == 1) {
      s = i;
      break;
    }
  }
  int t = -1;
  for (int i = 0; i < n; i++) {
    if (g[i].size() == 1 && i != s) {
      t = i;
      break;
    }
  }
  if (s == -1 || t == -1) {
    cout << "No" << endl;
    return 0;
  }

  vector<int> dist(n, -1);
  queue<int> que;
  dist[s] = 0, que.push(s);
  while (!que.empty()) {
    int v = que.front(); que.pop();
    for (int i=0;i<g[v].size();i++) {
      int nv = g[v][i];
      if (dist[nv] == -1) {
        dist[nv] = dist[v] + 1;
        que.push(nv);
        if (que.size() > 1) {
          cout << "No" << endl;
          return 0;
        }
      }
    }
  }

  if (dist[t] == n-1) cout << "Yes" << endl;
  else cout << "No" << endl;
}
