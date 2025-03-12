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

    pair<int,int> p; // 1st valu and 2nd valu

    p.first = 3; // p.first++ as a normal valu moto kaj korte parbo
    p.second = 4;

    cout<<p.first<<p.second<<endl;


    pair<string , vector<int>> p1; // 1st valu string 2nd valu arr

    p1.first = "sabiya";

    p1.second = {13,23,12,5};

    //p1 = {"saba", {2,3,4,7,8}};

    cout<<p1.first <<endl;

    sort(p1.second.begin(),p1.second.end());// sort o korte parbo

    for(auto u:p1.second) cout<<u<<" ";

    cout<<endl;

    cout<<p1.second.size()<<endl;

    /*
    pair<int,int> p2;

    p2 = make_pair(2,4); // p2 = {2,4}

    cout<<p2.first<<" " <<p2.second;
    */


    //compeare

    pair<int,int> p2,p3;

    p2 = {3,5};
    p3 = {1,6};

    /*
    if( p2<p3){
        cout<<"Yes\n";
    }else{
        cout<<"No\n";
    }
    */ // ei rokom korle eyse hoy

    pair<int,int> x = min(p2,p3); // max o kaj korbe

    cout<< x.first <<" " <<x.second<<endl;





    return 0;
}
