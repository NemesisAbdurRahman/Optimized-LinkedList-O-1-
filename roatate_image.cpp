
#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_map>
#include<unordered_set>
using namespace std;
int main(){
    // vector<vector<int>>vec={{1,2}
    //                         ,{3,4}};
// vector<vector<int>>vec={{1,2,3},
//                         {4,5,6},
//                         {7,8,9}};
vector<vector<int>>vec={ {5,1,9,11,17}
                        ,{2,4,8,10,18}
                        ,{13,3,6,7,19}
                        ,{15,14,12,16,20}
                         ,{21,22,23,24,25}};

int uL=0;
int uR=vec[0].size()-1;
int dL=0;
int dR=uR;
int k=0;
int i=0;
int time=0;
int d=vec.size()-1;
int enter=1;
while(time<vec.size()-1  ){
// while(uL<=uR){
int uLV=vec[i][uL];
vec[i][uL]=vec[d][dL];
cout<<i<<" "<<uL<<vec[i][uL]<<endl;
int uRV=vec[i+k][uR];
vec[i+k][uR]=uLV;
cout<<i+k<<" "<<uR <<vec[i+k][uR]<<endl;
int dRV=vec[d+k][uR-k];
vec[d+k][uR-k]=uRV;
cout<<d+k<<" "<<uR-k<<vec[d+k][uR-k]<<endl;
cout<<"dRV "<<dRV<<endl;
vec[d][uL-k]=dRV;
cout<<d<<" "<<uL-1<<vec[d][uL-k]<<endl;


cout<<"~~ ROatATION~~~~"<<endl;
cout<<"~~~~~ TIME ~~~~"<<time<<endl;
if(vec.size()-enter*2>=2&&d==1+i){
    i++;
    enter++;
d=vec.size()-(i+1);
uL=i;
uR=d;
dL=i;
dR=d;
k=0;
cout<<" ~~NEW ROTATION IS BEING STARTED~~ "<<endl;
cout<<"uL "<<uL<<endl;
cout<<"uR "<<uR<<endl;
cout<<"dL "<<dL<<endl;
cout<<"dR "<<dR<<endl; 
cout<<"d "<<d<<endl;
cout<<"i "<<i<<endl;
cout<<"~~~~~ TIME ~~~~"<<time<<endl;
time=time+(3-vec.size());
cout<<"~~~~~ TIME ~~~~"<<time<<endl;

// time++;
}else{
    d--;
    uL++;
    // uR--;
    // dL++;
    dR--;
// i++;
k++;
}
time++;
}
for(int j=0;j<vec.size();j++){
for(int i=0;i<vec.size();i++){
    cout<<vec[j][i]<<" ";
}
cout<<endl;
}


}