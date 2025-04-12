
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){

    // vector<vector<int>>matrix={{1,3,5,7},{10,11,16,20},{23,30,34,60}};
    vector<vector<int>>matrix= {{1,3,5,7},{10,11,16,20},{23,30,34,60}};
int target=13;
    for(int i=0;i<matrix.size();i++){

if(target<=matrix[i][matrix[i].size()-1]&&target>=matrix[i][0]){
cout<<"entered"<<endl;
    int st=0,ed=matrix[i].size()-1,mid=0;
        for(int j=0;j<matrix[i].size();j++){
mid=st+(ed-st)/2;
if(matrix[i][mid]==target){
    cout<<"true"<<endl;
    cout<<i<<" "<<mid<<endl;
    break;
}

else if((target>matrix[i][mid])){
    if((ed-st==1)&&(matrix[i][st]==target||matrix[i][ed]==target)){
        cout<<"true"<<" why"<<endl;
        
        break;
    }
    st=mid;
}
else{
    ed=mid;
}

        }
    }
    }





}