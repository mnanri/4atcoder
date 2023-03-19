#include <bits/stdc++.h>
using namespace std;
using ll = int64_t;
using graph = vector<vector<int> >;
const ll M = 1000000007;

int main(){
  int h,w;
  cin >> h >> w;
  vector<string> s(h);
  for(int i=0;i<h;i++){
    cin >> s[i];
  }
  vector<string> t(h);
  for(int i=0;i<h;i++){
    cin >> t[i];
  }

  vector<string> s2(w);
  for(int i=0;i<w;i++){
    for(int j=0;j<h;j++){
      s2[i] += s[j][i];
    }
  }
  vector<string> t2(w);
  for(int i=0;i<w;i++){
    for(int j=0;j<h;j++){
      t2[i] += t[j][i];
    }
  }

  map<string, int> mp;
  for(int i=0;i<w;i++){
    if(mp.count(s2[i])) {
      mp[s2[i]]++;
    } else {
      mp[s2[i]] = 1;
    }
  }

  for(int i=0;i<w;i++){
    if(mp.count(t2[i])) {
      mp[t2[i]]--;
      if(mp[t2[i]] == -1){
        cout << "No" << endl;
        return 0;
      }
    } else {
      cout << "No" << endl;
      return 0;
    }
  }

  cout << "Yes" << endl;
}
