
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){

    int x=1534236469;
    string n=to_string(x);
    int i=0;
int c=n.size()-1;
// reverse(n.begin(),n.end());
while(i<=c){
    swap(n[i],n[c]);
    cout<<c<<endl;
    c--;
    i++;
}
    if(x<0){
    n='-'+n;
    n.pop_back();
    }
    long long int fuck = stol(n);
    x=fuck;
    cout<<x<<endl;

























    // vector<int>s1={1,1,1,5,0,1};
    // vector<int>s2={1,1,1,0,0,1};
    // if(s1==s2){
    //     cout<<"true"<<endl;
    // }
    //     string s1={"bbbbbnjhj"};
    //     string s2={"abcdeabcdx"};
    //     // }
    //     int alpha[26]={0};
    //     cout<<alpha[12]<<endl;
    //     int winsize=s1.size();
    // // int p=0;
    // // for(int i=0;i<26;i++){
    
    // // if(i==int(s1[p])-'a'){
    // // alpha[i]++;
    // // p++;
    // // }
        
    // // }
    // int idx2=0,subtrac=0,count=winsize,temp=0,val=0;
    // for(int i=0;i<winsize;i++){
    //     subtrac=0;
    //     idx2=int(s1[i])-'a';
    //     subtrac=alpha[idx2];
    //     if(subtrac>0){
    //         subtrac=1;
    //     }
    //     cout<<"subtract :  "<<subtrac<<endl;
    // alpha[idx2]++;
    // count=count-subtrac;
    // // count++;
    // // count=count-subtrac;
    // // if(subtrac>temp){
    // // val=subtrac;
    // // temp=subtrac;
    // // }
    // }
    // // count=s1.size()-val;
    // cout<<count<<endl;
    
    }








// string s1={"adc"};

// string s2={"dcda"};

// string s1={"abab"};

// string s2={"abcbaba"};
// int idx2=0;
// int c=0;
// // cout<<s2.find(s1[0])<<endl;
// for(int i=0;i<s2.size();i++){
// if(s1.find(s2[i])<s1.size()){
// c++;


// if(s2.find(s2[i])<i){
// // cout<<s1.at(i)<<endl;
// cout<<i<<endl;
// cout<<s2.find(s2[i])<<endl;;
// idx2=i-s1.find(s1[i])+1;
// }
// }
// else if(c>0){
//     cout<<"false"<<endl;
//     break;
// }
// }
// cout<<c<<endl;
// cout<<idx2<<endl;
// if(c-idx2==s1.length()){
//     cout<<"true"<<endl;
    
// }
// else{
//     cout<<"false"<<endl;
// }
// // if(s1.find(s1[1])>1){
// //     cout<<"true"<<endl;
// // }
// // cout<<s1.find(s1[1])<<endl;





