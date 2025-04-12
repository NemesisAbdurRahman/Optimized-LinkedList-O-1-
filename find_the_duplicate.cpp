
#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_map>
#include<unordered_set>
using namespace std;
int main(){
vector<int>vec={1,3,4,2,2};
unordered_set<int>s;
for(int i=0;i<vec.size();i++){

if(s.find(vec[i])!=s.end()){
    cout<<"figure out : "<<vec[i];
}
else{
    s.insert(vec[i]);
}

}


}