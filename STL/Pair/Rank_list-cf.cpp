#include <bits/stdc++.h>
using namespace std;

#define endl "\n"

void intcode(){
    #ifndef ONLINE_JUDGE
      freopen("input.txt", "r", stdin);
      freopen("output.txt", "w", stdout);
      #endif
}

bool cmd (const pair<int,int> &p1, const pair<int,int> &p2){

    return (p1.first > p2.first);

    if( p1.first == p2.first) return (p1.second < p2.second);

    return 0;

}

int main(){

    intcode();

    int n,k;

    cin>>n>>k;

    vector<pair<int,int>> v(n);

    for(int i=0; i<n; i++){
        cin>>v[i].first >> v[i].second;
    }

    sort(v.begin(),v.end(),cmd);

    int ans = 0;

    for(auto u:v){
        if( u == v[k-1]) ans++; // sort pair and ager jate dice eta check korteci
        // vec 0 beas idx so k-1
    }

    cout<<ans<<endl;

    /*
    for(auto u:v){
        cout<<u.first<<" " <<u.second<<endl;
    }
    */



    return 0;
}
