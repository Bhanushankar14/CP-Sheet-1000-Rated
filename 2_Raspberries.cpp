#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,i,k,flag=0;
        cin>>n>>k;
        vector<int> a(n);
        for(i=0;i<n;i++)
        cin>>a[i];
        if(k==2){
            for(i=0;i<n;i++){
                if(a[i]%k==0){
                cout<<"0"<<endl;
                flag=1;
                break;
                }
            }
            if(flag==0)
            cout<<"1"<<endl;
        }
        else if(k==3){
            int minn=11,val;
             for(i=0;i<n;i++){
                val=3-a[i]%k;
                if(a[i]%k==0){
                cout<<"0"<<endl;
                flag=1;
                break;
                }
                else if(val<minn)
                minn=val;
            }
            if(flag==0)
            cout<<minn<<endl;
            
        }
        else if(k==5){
            int minn=11,val;
             for(i=0;i<n;i++){
                val=5-a[i]%k;
                if(a[i]%k==0){
                cout<<"0"<<endl;
                flag=1;
                break;
                }
                else if(val<minn)
                minn=val;
            }
            if(flag==0)
            cout<<minn<<endl;
            
        }
        else if(k==4){
            int minn=11,ct2d=0,frmod=0;
            for(i=0;i<n;i++){
                if(a[i]%k==0){
                cout<<"0"<<endl;
                flag=1;
                break;
                }
                else if(ct2d<2){
                    if(a[i]%2==0)
                    ct2d++;
                    if(ct2d>=2){
                        cout<<"0"<<endl;
                        flag=1;
                        break;
                    }
                }
                if(4-(a[i]%4)==1)
                frmod=1;
                
            }
            if(flag==0){
                if(ct2d==1|| frmod==1)
                cout<<"1"<<endl;
                else
                cout<<"2"<<endl;
            }
        
    }
}
}
