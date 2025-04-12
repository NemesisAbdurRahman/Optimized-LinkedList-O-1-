#include<iostream>
#include<vector>
using namespace std;

int main(){
// vector<vector<int>>vec={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
vector<vector<int>>vec={    {1, 2, 3, 4, 5, 6, 7, 8},
{9, 10, 11, 12, 13, 14, 15, 16},
{17, 18, 19, 20, 21, 22, 23, 24},
{25, 26, 27, 28, 29, 30, 31, 32},
{33, 34, 35, 36, 37, 38, 39, 40}};
// vector<vector<int>>vec={  {1, 2, 3, 4, 5, 6, 7, 8},
// {9, 10, 11, 12, 13, 14, 15, 16},
// {17, 18, 19, 20, 21, 22, 23, 24}
// };
int i=0;int p=0;
int pass=0;
int n=vec[0].size()-1;
int m=vec.size()-1;
int lenth=vec[0].size();
int nn=n;
int j=0;
int UpPass=0;
int rightside=0;
int down=0;
int leftside=0;
int k=0;int last=m,fast=i;
while(k<vec[0].size()*vec.size()){
i=leftside;
n=n-rightside;
j=UpPass;
// cout<<endl;
// cout<<i<<endl;
// cout<<n<<endl;
// cout<<j<<endl;
while(i<=n){
    cout<<vec[j][i]<<"~";
    i++;
    k++;
}
UpPass++;
// cout<<endl;
// // j=n+i;
j++;
i--;
// j=j-rightside;
m=m-rightside;
int c=0;
// cout<<"i : "<<i<<"."<<endl;
// cout<<"j : "<<j<<"."<<endl;
// cout<<"n : "<<n<<"."<<endl;
while(j<=m){
cout<<vec[j][i]<<"-";
// j=j+n;
j++;
k++;
c=1;
}
j--;
i--;if(c==1){
down=i;
}

rightside++;
// cout<<"j : "<<j<<"."<<endl;
// cout<<"i : "<<i<<"."<<endl;

// cout<<"down "<<down<<endl;
// cout<<"down-n : "<<down-pass<<endl;
while(down>=0+pass){
    cout<<vec[j][down]<<"_";
    down--;
k++;
}
pass++;
down++;
j--;
// cout<<endl;
while(j>=0+UpPass){
    cout<<vec[j][down]<<"+";
    j--;
    k++;
}
// cout<<"k "<<k<<endl;
leftside++;
}






}