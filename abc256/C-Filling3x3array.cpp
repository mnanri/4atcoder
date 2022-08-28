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
  ll a,b,c,x,y,z;
  cin >> a >> b >> c >> x >> y >> z;
  ll ans = 0;
  for(int i=1;i<a;i++){
    for(int j=1;j<a-i;j++){
      for(int k=1;k<b;k++){
        for(int l=1;l<b-k;l++){
          for(int m=1;m<c;m++){
            for(int n=1;n<c-m;n++){
              int o = a-i-j;
              int p = b-k-l;
              int q = c-m-n;
              if(o+p+q==z && i+k+m==x && j+l+n==y){
                ans++;
              }
            }
          }
        }
      }
    }
  }
  cout << ans << endl;
}
