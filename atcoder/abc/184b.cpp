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
    int n,x;
    string s;
    cin >> n >> x >> s;
    for(int i=0;i<n;i++){
        if(s.at(i)=='o') x++;
        if(s.at(i)=='x'){
            if(x>0) x--; 
        }
    }

    cout << x << endl;
}