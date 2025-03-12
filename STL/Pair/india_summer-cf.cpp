#include <bits/stdc++.h>

using namespace std;

#define endl "\n"

void intcode(){
    #ifndef ONLINE_JUDGE
      freopen("input.txt", "r", stdin);
      freopen("output.txt", "w", stdout);
      #endif
}


int main(){

    intcode();
    
    int n;
    cin>>n;
    vector<pair<string,string>> v(n);;

    for(int i=0; i<n; i++){
        cin>>v[i].first >> v[i].second;
    }

    sort(v.begin(),v.end());

    int sz = unique(v.begin(),v.end()) - v.begin();

    cout<<sz<<endl;

    /*
    unique(v.begin(),v.end()) - v.begin();

    for(auto u:v) cout<<u.first<<" "<<u.second<<endl;

    cout<<endl;
    */




    return 0;
}
