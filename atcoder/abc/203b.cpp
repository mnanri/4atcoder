#include<iostream>
#include<iomanip>
#include<string>
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
  int n,k;
  cin >> n >> k;
  int sum=0;
  for(int i=1;i<=n;i++){
    for(int j=1;j<=k;j++){
      sum+=(100*i+j);
    }
  }
  cout << sum << endl;
}
