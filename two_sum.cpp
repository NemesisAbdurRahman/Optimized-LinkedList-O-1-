
#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_map>
using namespace std;
int main(){
vector<int>nums={3,3};
int target = 6;
unordered_map<int,int>n;
// for(int i=0;i<nums.size();i++){
// n[nums[i]]=i;
// }
// for(auto i:n){
//     cout<<i.first<<" "<<i.second<<endl;
// }
        vector<int>p(2,0);
for(int i=0;i<nums.size();i++){

    int second=target-nums[i];
    cout<<"second: "<<second<<endl;

    if(n.find(second)!=n.end()){
        // p[0]=i;
        auto it=n.find(second);
        int idx=distance(n.begin(),it);
        // cout<<it->second<<endl;
        p[0]=i;
        p[1]=it->second;
        cout<<p[0]<<endl;
        cout<<p[1]<<endl;
        // // return p;
        break;
    }
    else{
        n[nums[i]]=i;

    }
    cout<<"pass"<<endl;
}


// vector<int> twoSum(vector<int>& nums, int target) {
//     vector<pair<int,int>>idx(nums.size());
//     for(int i=0;i<nums.size();i++){
//    idx[i].first=nums[i];
//    idx[i].second=i;
//     }
// sort(idx.begin(),idx.end());
//     int  i=0,j=nums.size()-1;
// while(i<=j){
// if(idx[i].first+idx[j].first==target){
// vector<int>p={idx[i].second,idx[j].second};

// return p;
// }
// else if(idx[i].first+idx[j].first<target){
// i++;
// }
// else{
// j--;
// }

// }
// }

// int main (){
// int target=17;
//     vector<int> nums1 = {2, 7, 11, 15}; 
// vector<int>nums={twoSum(nums1,target)};

// if (!nums.empty()) {
//     std::cout << "Indices: " << nums[0] << " and " << nums[1] << std::endl;
// } else {
//     std::cout << "No solution found." << std::endl;
// }


}