
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main (){
    
    // string s={"the sky is blue"};
    string s={"    hello    world    i    am the  fucking  beaest    "};
    int roated=0;
    while ( s[roated] == ' ') {
        roated++;
    }
    s = s.substr(roated);  // Remove the first character (space)
roated=0;
    // s=s.substr(2);
    reverse(s.begin(),s.end());
    while ( s[roated] == ' ') {
        roated++;
    }
    s = s.substr(roated);  // Remove the first character (space)
    int cp=0,count=0;
    for(int i=0;i<s.size();i++){
    if(s[i]==' '&&cp>0){
        s[i-count]=s[i];
    
    count++;
    }
    else if(s[i]==' '){
        s[i-count]=s[i];
    
        cp++;
    }
    else{
        s[i-count]=s[i];
        cp=0;
    }
    
    }
    
    for(int i=0;i<count;i++){
        s.pop_back();
    }
int c=0,skip=0;
// vector<int>space;
// vector<int>middle;
// for(int i=0;i<s.size();i++){
// if(s[i]==' '&&skip>0){
//     middle.push_back(i);
// }
// if(s[i]==' '&&skip!=1){
//     space.push_back(c);
// skip++;
// }
//  else{
//     skip=0;
//       }
//      c++;
//      if(i==s.size()-1){
//     space.push_back(c);

// }
// }
// cout<<s<<endl;
// cout<<"skip :"<<skip<<endl;
// for(int i:space){
//     cout<<i<<endl;
// }
// for(int i:middle){
//     cout<<i<<endl;
// }
// // cout<<space.at(0)<<endl;
// cout<<space.at(1)<<endl;
// cout<<space.at(2)<<endl;
// cout<<space.at(3)<<endl;

cout<<s<<endl;
int jk=s.size()-1;
int nextt=0;
// reverse(s.begin(),s.begin()+4);
// reverse(s.begin()+5,s.begin()+7);
// reverse(s.begin()+8,s.begin()+11);
// reverse(s.begin()+12,s.begin()+15);
int temp=0;
for(int i=0;i<=s.size();i++){

    if(s[i]==' '||i==s.size()){

        reverse(s.begin()+temp,s.begin()+i);
      
        temp=i+1;
    }
    
}

// for(int i=0;i<space.size();i++){
//     reverse(s.begin()+nextt,s.begin()+space[i]);
//     nextt=space[i]+1;
//     // jk--;
// }
cout<<s<<endl;
}