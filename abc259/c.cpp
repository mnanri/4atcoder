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
  string s,t;
  cin >> s >> t;
  vector<pair<char, int> > x,y;
  x.push_back(make_pair(s[0],1));
  y.push_back(make_pair(t[0],1));
  for(int i=1;i<s.size();i++){
    if(s[i] == s[i-1]){
      x[x.size()-1].second++;
    }else{
      x.push_back(make_pair(s[i],1));
    }
  }
  for(int i=1;i<t.size();i++){
    if(t[i] == t[i-1]){
      y[y.size()-1].second++;
    }else{
      y.push_back(make_pair(t[i],1));
    }
  }
  if(x.size() != y.size()){
    cout << "No" << endl;
    return 0;
  }
  for(int i=0;i<y.size();i++){
    if(x[i].first != y[i].first){
      cout << "No" << endl;
      return 0;
    }
    if(x[i].second > y[i].second){
      cout << "No" << endl;
      return 0;
    }
    if(x[i].second < y[i].second && x[i].second == 1){
      cout << "No" << endl;
      return 0;
    }
  }
  cout << "Yes" << endl;
}
