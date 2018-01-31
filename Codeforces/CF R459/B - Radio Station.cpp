#include <iostream>
#include <vector>
#include <string>
#include <cstring>
#include <unordered_map>
using namespace std;

const int mod = 1000000007;
vector<vector<int>> ed={{1,0},{0,1},{-1,0},{0,-1}};

bool myComp(int i, int j){return i>j;}

int main(){
    int n,m;
    cin>>n>>m;

    unordered_map<string,string> mymap;

    for(int i=0;i<n;++i){
        string a,b;
        cin>>a>>b;
        mymap[b+";"]=a;
    }

    for(int j=0;j<m;++j){
        string a,b;
        cin>>a>>b;
        cout<<a<<" "<<b<<" #"<<mymap[b]<<endl;
    }

return 0;
}