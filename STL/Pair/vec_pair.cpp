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

    vector<pair<int,int>> v; // {6,5} {2,3} {4,5} {6,1} {1,9} // vec_of_pair
    //first valu er opor dipend kore sort kore

    v.push_back( {6,5} );
    v.push_back( {2,3} );
    v.push_back( {4,5} );
    v.push_back( {6,1} );
    v.push_back( {1,9} );
    v.push_back( {8,6} );
    v.push_back( {4,3} );
    v.push_back( {3,2} );

    sort(v.begin(),v.end()); // 1st valu er opore sort then second valu er opor sort kore
    //sort(v.rbegin(),v.rend());

    for(auto u:v)cout<<u.first<<" "<<u.second<<endl;

    cout<<endl<<endl;
    /*
    arr use kore pair
    pair<int,int> p[] = { {6,5}, {5,6}, {2,3}, {3,1} };

    sort(p,p+4);

    for(int i=0; i<4; i++){
        cout<<p[i].first <<" " <<p[i].second<<endl;
    }

    */

    vector < pair<string,int>> v1;

    v1.push_back({"shariya",21});
    v1.push_back( {"momo",32});
    v1.push_back({"sabiya",28});
    v1.push_back({"sabiya",28});
    v1.push_back({"sharif",34});
    v1.push_back({"sharif",12});
    v1.push_back( {"momo",32});

    sort(v1.begin(),v1.end());

    int sz = unique(v1.begin(),v1.end()) - v1.begin();


    for(int i = 0; i<sz; i++) cout<<v1[i].first <<" "<<v1[i].second<<endl;

    //for(auto u:v1) cout<<u.first<<' '<<u.second<<endl;

    cout<<endl;






    return 0;

}
