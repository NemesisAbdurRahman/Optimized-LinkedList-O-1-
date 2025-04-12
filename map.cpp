#include<iostream>
#include<vector>
#include<map>
#include<set>
using namespace std;

int main(){

// map<string,int>m;

// int n;
// cin>>n;
// for(int i=0;i<n;i++){
//     string s;
//     cin>>s;
//     int marks;
//     cin>>marks;
//     m[s]=marks;
// }
// for(auto i:m){
//     cout<<i.first<<"  "<<i.second<<endl;
// }

set<int>N;
int n;
cin>>n;
for(int i=0;i<n;i++){
int key;
cin>>key;

N.insert(key);

}
for(auto i:N){
    cout<<i<<endl;
}

}