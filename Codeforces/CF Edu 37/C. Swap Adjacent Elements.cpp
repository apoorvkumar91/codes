
#include <iostream>
#include <vector>
#include <string>
#include <cstring>
using namespace std;

int main(){
    int n; cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;++i){
        cin>>arr[i];
        --arr[i];
    }

    string str; cin>>str;

    vector<int> cum(n-1);

    cum[0]=str[0]-'0';

    for(int i=1;i<n-1;++i){
        cum[i]=cum[i-1]+str[i]-'0';
    }
    int f=0;
    for(int i=0;i<n;++i){
        int &val=arr[i];
        //cout<<val-1<<" "<<i-1<<" "<<cum[val-1]<<" "<<cum[i-1]<<endl;
        if(val==i) continue;
        if(val==0 && cum[i-1]==i) continue;
        if(i==0 && cum[val-1]==val) continue;
        if(val>0 && i>0 && cum[val-1]-cum[i-1]==val-i) continue;
        else { f=1; break;}
    }
    if(f) cout<<"NO"<<endl; else cout<<"YES"<<endl;

return 0;
}
