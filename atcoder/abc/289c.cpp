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
  vector<vector<int> > a(m,vector<int>(n));
  for(int i=0; i<m; i++) {
    int c;
    cin >> c;
    for(int j=0; j<c; j++) {
      int s;
      cin >> s;
      a[i][s-1]=1;
    }
  }
  int cnt=0;
  for (int tmp = 0; tmp < (1 << m); tmp++) {
    bitset<10> b(tmp);
    vector<int> c(n,0);

    for(int i=0;i<m;i++){
      if(b.test(i)) {
        for(int j=0;j<n;j++){
          if(a[i][j]==1) c[j]=1;
        }
      }
    }

    for(int i=0;i<n;i++){
      if(c[i]==0) break;
      if(i==n-1 && c[n-1]==1) cnt++;
    }
  }

  cout << cnt << endl;
}
