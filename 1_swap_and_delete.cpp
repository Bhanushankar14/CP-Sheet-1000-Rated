#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int i,n=s.length(),c0=0,c1=0;
        for(i=0;i<n;i++){
            if(s[i]=='0')
            c0++;
            else
            c1++;
        }
        if(c0==c1)
        cout<<"0"<<endl;
        else{
            char hval;
            if(c1<c0)
            hval='0';
            else
            hval='1';
            int val=abs(c0-c1),cnt=0;
            i=n-1;
            while(val){
                if(s[i]==hval)
                val--;
                cnt++;
                i--;
            }
            
            cout<<cnt<<endl;
        }
    }
}
