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
    string x;
    cin >> x;
    string y;
    for(int i=0;i<x.size();i++){
        if(x[i]=='.'){
            break;
        }
        y.push_back(x[i]);
    }
    cout << y << endl;
}