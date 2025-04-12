#include<iostream>
#include<vector>
using namespace std;

int main(){
    // vector<vector<int>>vec={    {1, 2, 3, 4, 5, 6, 7, 8},
    // {9, 10, 11, 12, 13, 14, 15, 16},
    // {17, 18, 19, 20, 21, 22, 23, 24},
    // {25, 26, 27, 28, 29, 30, 31, 32},
    // {33, 34, 35, 36, 37, 38, 39, 40}};
    vector<vector<int>>vec={

        {2,3,4}
        ,{5,6,7}
        ,{8,9,10}
        ,{11,12,13}
        ,{14,15,16}};
    // {1,2,3,4,5},
    // {6,7,8,9,10},
    // {11,12,13,14,15},
    // {16,17,18,19,20},
    // {21,22,23,24,25}};

int k=0;
int i=0;
int j=0;
int reverse=0;
int up=0;
int count=0;
while(k<vec[0].size()*vec.size()){
    if(count<=vec.size()-1){
    j=count;
    }else{
        break;
    }
    cout<<endl;
    cout<<"count"<<count<<endl;
    int idx_check=i;
for(i=0+count;i<vec[j].size()-count;i++){
cout<<vec[j][i]<<"~";
k++;


}
i--;//baire jono na jay;

int check=j;
// cout<<"j "<<j<<endl;
for(j=count+1;j<vec.size()-count;j++){
    cout<<vec[j][i]<<"-";
k++;

}
// cout<<"j "<<j<<endl;

if(check!=(j-1)){

    j--; // thik thak;
    for(reverse=i-1;reverse>=0+count;reverse--){
        cout<<vec[j][reverse]<<"_";
k++;

    }
    reverse++;//thik thak;
}
else{
    k++;
}
if(idx_check!=i&&(count*2+1)!=vec[0].size()){
for(up=j-1;up>=1+count;up--){
    cout<<vec[up][reverse]<<"+";
k++;
}
}
else{
    k++;
}
cout<<endl;
count++;
// k++;
// k--;
}

}