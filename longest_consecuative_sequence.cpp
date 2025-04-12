
#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_map>
#include<unordered_set>
using namespace std;
int main(){

// vector<int>nums={100,4,200,1,3,2};
// vector<int>nums={0,3,7,2,5,8,4,6,0,1,1,1,1,1,1,1,1,1,1,1};
vector<int>nums={1,0,1,2};
unordered_set<int>s;
for(int i=0;i<nums.size();i++){
    s.insert(nums[i]);
}
int i=0;
int count=1;
while(i<=nums.size()-1){
    int idx=0;
    count=1;
int lock=nums[i];
int forward=lock+1;
int back=lock-1;
int count2=0;
cout<<" befor forwar : "<<forward<<endl;
while(s.find(forward)!=s.end()){
count++;
cout<<" forward : "<<forward;
forward++;
idx++;
i++;
}
cout<<" before back "<<back<<endl;
while(s.find(back)!=s.end()){
    count++;
    cout<<" back "<<back;
    back--;
    i++;
    
    idx++;
}
if(idx==0){
    i++;
}
count=max(count,count2);
count2=count;
cout<<endl;
cout<<"count : "<<count<<endl;
}
cout<<endl;
cout<<"your precious ans is ~~>"<<count<<endl;


}