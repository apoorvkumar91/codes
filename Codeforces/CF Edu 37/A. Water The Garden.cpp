
#include <iostream>
#include <vector>
#include <string>
#include <cstring>
using namespace std;

const int mod = 1000000007;
vector<vector<int>> ed={{1,0},{0,1},{-1,0},{0,-1}};

bool myComp(int i, int j){return i>j;}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;

        int ans=100000;
        vector<int> taps(k);
        for(int i=0;i<k;++i) cin>>taps[i];

        ans=taps[0];
        for(int i=0;i<k-1;++i){
            ans=max(ans,(taps[i+1]-taps[i])/2+1);
        }
        ans=max(ans,n-taps[k-1]+1);
        cout<<ans<<endl;
    }
return 0;
}
