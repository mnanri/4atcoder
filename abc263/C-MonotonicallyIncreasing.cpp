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
  int n,m;
  cin >> n >> m;

  vector<int> a(m);
  for(int i = 0; i < m; i++){
    a[i] = i+1;
  }
  vector<int> c(n,0);
  do {
    vector<int> b(n);
    for(int i=0;i<n;i++){
      b[i] = a[i];
    }
    bool x = true;
    for(int i=0;i<n-1;i++){
      if(b[i]>b[i+1]){
        x=false;
        break;
      }
    }
    if(x && c!=b){
      c = b;
      for(int i=0;i<n;i++){
        cout << c[i] << " ";
      }
      cout << endl;
    }
  } while (next_permutation(a.begin(), a.end()));
}

/*int main() {
  vector<int> v = { 2, 1, 3 };
  sort(v.begin(), v.end());
  do {
    // 1行で今の並び方を出力
    for (int x : v) {
      cout << x << " ";
    }
    cout << endl;
  } while (next_permutation(v.begin(), v.end()));
}*/
