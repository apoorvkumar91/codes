#include <iostream>
#include <vector>
#include <string>
#include <cstring>
using namespace std;

const int mod = 1000000007;
vector<vector<int>> ed={{1,0},{0,1},{-1,0},{0,-1}};

bool myComp(int i, int j){return i>j;}

int main(){
    int n;
    cin>>n;
    int p1=1,p2=1;
    int next=2;
    string ans="O";
    //if(n>1) ans+="0";
    for(int i=1;i<n;++i){
        if(i+1==next) ans+="O", p2=p1, p1=next, next=p1+p2;
        else ans+="o";
    }
    cout<<ans<<endl;
return 0;
}