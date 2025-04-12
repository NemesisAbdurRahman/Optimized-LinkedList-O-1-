
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main (){

vector<vector<int>>vec={
{5},{6}
    // {2, 5, 8, 12, 16, 20},
    // {3, 7, 9, 14, 18, 23},
    // {6, 10, 13, 17, 21, 25},
    // {11, 15, 19, 22, 26, 30},
    // {13, 16, 20, 24, 28, 33},
    // {17, 21, 23, 27, 31, 35}
};
int target =6;
int n=vec[0].size();
int find=0,i=0;
int st=0,ed=vec[vec.size()-1][vec[vec.size()-1].size()-1];
cout<<n<<endl;
if(n==0){
    if(target==vec[i][n]){
    cout<<"true"<<endl; 
    }
}
while(i<=vec.size()-1&&n-1>=0||n==0){
if(target==vec[i][n-1]||target==vec[i][n]){
    cout<<"~~TRUE~~"<<endl;
    cout<<vec[i][n-1]<<endl;
    cout<<"i : "<<i<<" & "<<"n-1 : "<<n-1<<endl;
    break;
}
else if(target<vec[i][n-1]){
    if(n!=0){
n--;
    }
    else{
        cout<<"~~SORRY~~"<<endl;
        break;
    }
}
else{
 
    i++;
 
}
cout<<"i : "<<i<<" & "<<"n-1 : "<<n-1<<endl;

}
cout<<ed<<endl;
    }