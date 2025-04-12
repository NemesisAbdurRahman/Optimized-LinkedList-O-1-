
#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_map>
#include<unordered_set>
using namespace std;
int main(){
vector<vector<int>>vec={{9,1,7},{8,9,2},{3,4,6}};

//using XOR
int sum2=0;
int dup;
for(int i=0;i<vec.size();i++){

    for(int j=0;j<vec[0].size();j++){
   
sum2=vec[i][j]^sum2;
        }
    }

cout<<"sum2 : "<<sum2<<endl;





unordered_set<int>s;
// for(int i=0;i<vec.size();i++){

//     for(int j=0;j<vec[0].size();j++){
//         if(s.find(vec[i][j])!=s.end()){
//             dup=vec[i][j];
// cout<<"duplicate : "<<vec[i][j];
//         }
//         else{
//             s.insert((vec[i][j]));
//             sum2+=vec[i][j];
//         }
//     }
// }
cout<<endl;
int n=vec.size();
cout<<"sum2 : "<<sum2<<endl;
int m=n*n;
int sum=(m*(m+1))/2;
cout<<"sum : "<<sum<<endl;
int value=sum-sum2;
cout<<value<<endl;

}