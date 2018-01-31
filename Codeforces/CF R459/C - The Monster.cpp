#include <iostream>
#include <vector>
#include <string>
#include <cstring>
using namespace std;

const int mod = 1000000007;
vector<vector<int>> ed={{1,0},{0,1},{-1,0},{0,-1}};

bool myComp(int i, int j){return i>j;}

int main(){
    string str;
    cin>>str;

    int n=(int)str.size();

    int ans=0;

    for(int i=0;i<n;++i){
        int co=0,cc=0,cq=0;
        //int df=0;
        int maxqcl=0;
        for(int j=i;j<n;++j){
            char &c=str[j];
            if(c=='(') ++co; else if(c==')') ++cc; else ++cq;
            if(co+cq<cc) break;
            if(c=='(') continue;
            if (c=='?') maxqcl=min((co-cc+cq)/2,maxqcl+1);
            else maxqcl=min((co-cc+cq)/2,maxqcl);
            //if(c=='?')
            //maxqcl = min(, maxqcl+1);
            if((j-i+1)%2==0){   //even

                if(co<=cc+maxqcl) ++ans;
            }
        }
    }
    cout<<ans<<endl;

return 0;
}