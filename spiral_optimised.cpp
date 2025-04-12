#include<iostream>
#include<vector>
using namespace std;

int main(){
    // vector<vector<int>>vec={    {1, 2, 3, 4, 5, 6, 7, 8},
    // {9, 10, 11, 12, 13, 14, 15, 16},
    // {17, 18, 19, 20, 21, 22, 23, 24},
    // {25, 26, 27, 28, 29, 30, 31, 32},
    // {33, 34, 35, 36, 37, 38, 39, 40}};
    vector<vector<int>>vec=
        {{1,2,3,4}
        ,{5,6,7,8}
        ,{9,10,11,12}};

        // {2,3,4}
        // ,{5,6,7}
        // ,{8,9,10}
        // ,{11,12,13}
        // ,{14,15,16}};
    // {1,2,3,4,5},
    // {6,7,8,9,10},
    // {11,12,13,14,15},
    // {16,17,18,19,20},
    // {21,22,23,24,25}};
int srow=0,erow=vec.size()-1,rcol=vec[0].size()-1,lcol=0;
int count=0;
while ((count<vec.size()*vec[0].size())){
int pass=0;
for(int i=srow;i<=rcol;i++){
    cout<<vec[srow][i]<<"~";
    count++;
}
for(int i=srow+1;i<=erow;i++){
    cout<<vec[i][rcol]<<"-";
    count++;
    pass++;
}
cout<<endl;
if(pass!=0){
for(int i=rcol-1;i>=srow;i--){
    cout<<vec[erow][i]<<"_";
    count++;
}
}
if((rcol+1)*(lcol+1)-1!=vec[0].size()){
for(int i=erow-1;i>=srow+1;i--){
    cout<<vec[i][srow]<<"+";
    count++;
}
}
srow++;erow--;rcol--;lcol++;

}


}