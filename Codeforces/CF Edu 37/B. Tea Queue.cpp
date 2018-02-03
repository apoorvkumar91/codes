
#include <iostream>
#include <vector>
#include <string>
#include <cstring>
#include <algorithm>
using namespace std;

const int mod = 1000000007;
vector<vector<int>> ed={{1,0},{0,1},{-1,0},{0,-1}};

bool myComp(vector<int> i, vector<int> j){
    if(i[0]<j[0]) return true;
    else return i[1]<j[1];
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<vector<int>> arr(n,vector<int> (3,0));
        for(int i=0;i<n;++i){
            vector<int> &v = arr[i];
            cin>>v[0]>>v[2];
            v[1]=i;
        }
        sort(arr.begin(),arr.end(),myComp);

        vector<int> ans(n,0);
        //int time=1;
        int i=0;
        for(int time=1;time<5001;++time){

            while(i<n && arr[i][2]<time) ++i;

            if(i<n && arr[i][0]<=time && arr[i][2]>=time) ans[arr[i][1]]=time,++i;

        }

        for(int i=0;i<n;++i){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
return 0;
}
