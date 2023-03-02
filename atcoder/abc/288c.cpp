#include <bits/stdc++.h>
using namespace std;
using ll = int64_t;
using graph = vector<vector<int> >;
const ll M = 1000000007;

int main(){
  int n, m;
  cin >> n >> m;
  graph g(n);

  for(int i=0; i<m; i++){
    int a, b;
    cin >> a >> b;
    a--; b--;
    g[a].push_back(b);
    g[b].push_back(a);
  }

  vector<int> dist(n, -1);
  queue<int> que;
  int count = 0;
  vector<vector<int> > connect;
  for(int v=0; v<n; v++){
    if(dist[v] != -1) continue;
    dist[v] = 0, que.push(v);
    vector<int> tmp;
    while(!que.empty()){
      int w = que.front(); que.pop();
      tmp.push_back(w);
      for(auto nv : g[w]){
        if(dist[nv] == -1){
          dist[nv] = dist[w] + 1;
          que.push(nv);
        }
      }
    }
    connect.push_back(tmp);
    ++count;
  }

  int r = 0;
  for(int i=0; i<count; i++){
    // cout << "###" << connect[i].size() << "###" << endl;
    int p = 0;
    for(int j=0; j<connect[i].size(); j++){
      p += g[connect[i][j]].size();
    }
    p /= 2;
    p -= (connect[i].size()-1);
    //cout << "###" << p << "###" << endl;
    r += p;
  }

  cout << r << endl;
}
