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
    string s;
    cin >> s;
    int n=s.size();
    reverse(s.begin(),s.end());
    int cnt=0;
    char tmp;
    for(int i=0;i<n-1;i++){
        if(s[i]==s[i+1]){
            tmp=s[i];
            break;
        } 
    }
    //cout << s << endl;
    int var=0;
    int sub=0;
    for(int i=0;i<n-1;i++){
        //if(i!=0) cout << cnt << ' ' << sub << endl;
        if(s[i]==s[i+1]){
            
        }
    }
    cout << cnt << endl;
}