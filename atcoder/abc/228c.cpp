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
  int n,k;
  cin >> n >> k;
  vector<vector<int> > p(n,vector<int>(3));
  for(int i=0;i<n;i++){
    for(int j=0;j<3;j++){
      cin >> p[i][j];
    }
  }

  vector<int> tmp(n,0);
  vector<int> cp(n);
  for(int i=0;i<n;i++){
    for(int j=0;j<3;j++){
      tmp[i]+=p[i][j];
    }
    cp[i]=tmp[i];
  }

  sort(cp.begin(),cp.end());
  reverse(cp.begin(),cp.end());

  for(int i=0;i<n;i++){
    if(tmp[i]+300 >= cp[k-1]){
      cout << "Yes" << endl;
    }else{
      cout << "No" << endl;
    }
  }
}
