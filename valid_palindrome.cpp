
#include<iostream>
using namespace std;

int main(){


string s={"1b1"};
// getline(cin,s);
int st=0;
int c=0;
int pass1=0,pass2=0;

int ed=s.size()-1;
cout<<ed<<endl;
// for(int i=0;i<s.size();i++){
while(st<=ed){
    if((s[st]>='A'&&s[st]<='Z')||(s[st]>='a'&&s[st]<='z')||(s[st]>='0'&&s[st]<='9')){
        // st++;
        cout<<"HI"<<endl;
    }
    else{
        cout<<"ulta palta st :"<<s[st]<<endl;
        cout<<st<<endl;
        st++;
        pass1++;
        continue;
    }
    if((s[ed]>='A'&&s[ed]<='Z')||(s[ed]>='a'&&s[ed]<='z')||(s[ed]>='0'&&s[ed]<='9')){
// ed--;
}
else{
    cout<<"ulta palta ed :"<<s[ed]<<endl;
    ed--;
    pass2++;
    continue;
}
 
            // c++;

        // ed--;
    // }

    if((s[st]>=0&&s[st<=9])||(s[ed]>=0&&s[st]<=9)){
        if(s[st]!=s[ed])
{
    c++;
    st++;
    ed--;
}else{
   st++;
    ed--;  
} 

}
else {
    if((s[st]==s[ed]||(s[st]+32==s[ed])||(s[st]==s[ed]+32))){
    // if(s[st]+32==s[ed]){
        // c++;
        cout<<s[st]<<endl;
        cout<<s[ed]<<endl;
        cout<<"s :: "<<st<<endl;
        cout<<"ed :: "<<ed<<endl;
        st++;
        ed--;
    }
    else{
        c++;
        st++;
        ed--;
    }
}
    // st++;
    // ed--;
    pass1=0;
    pass2=0;

}
cout<<s.size()<<endl;
cout<<c<<endl;
if(c==0){
    cout<<"true"<<endl;
    
}
else{
cout<<"false"<<endl;
}
pass1=0;
pass2=0;


// if('A'+32=='a'){
//     cout<<"true";
// }
}


// char nam='a';
// char a='1';
// cout<<a;

// }