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

    return( p1.first > p2.first); // first valu boro hole like p1{4,143} ,p2 {3,120} // 4 take samene debe

    if(p1.first == p2.first) return ( p1.second < p2.second); // p1{4,143},p2{4,500} // first er 2 ta valu equal hole
    // second er coto jata seta samene debe // age asbe 143 then 500 second valu ta

    return 0; // else hole normal

}

int main(){
    intcode();

    vector <pair<int,int>> v;

    v = { {4,143},{3,120},{4,500},{3,387},{1,20},{2,45}};
   // v = { {4,-143},{3,-120},{4,-500},{3,-387},{1,-20},{2,-45}};
   // treck second valu - kore dile cmd use kora lagbe na

    sort(v.begin(),v.end(),cmd);

    for(auto u:v) cout<<u.first<<" " << u.second<<endl;

    cout<<endl;




    return 0;
}
