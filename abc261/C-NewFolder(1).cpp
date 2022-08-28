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
  map<string, int> mp;
  for(int i=0;i<n;i++){
    string s;
    cin >> s;
    if(mp.count(s)){
      mp[s]++;
      cout << s+"(" << mp[s] << ")" << endl;
    }else{
      mp[s] = 0;
      cout << s << endl;
    }
  }
}
