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
using namespace std;
using ll = int64_t;
using Graph = vector<vector<int> >;
const ll M = 1000000007;

int main(){
    double sx,sy,gx,gy;
    cin >> sx >> sy >> gx >> gy;
    gy=-gy;
    double ans=sx-(sy*(gx-sx)/(gy-sy));
    cout << fixed << setprecision(8) << ans << endl;
}