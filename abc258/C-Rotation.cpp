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
  int n,q;
  cin >> n >> q;
  string s;
  cin >> s;
  int tmp=0;
  for(int i=0;i<q;i++){
    int t,x;
    cin >> t >> x;
    if(t==1){
      tmp+=x;
      tmp%=n;
    }else{
      int cnt = x-1-tmp;
      if(cnt<0) cnt+=n;
      cout << s[cnt] << endl;
    }
  }
}
