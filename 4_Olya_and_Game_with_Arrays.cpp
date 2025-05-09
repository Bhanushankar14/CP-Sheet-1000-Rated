#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,m,it,i,j,sum=0;
        cin>>n;
        vector<long long> a;
        vector<long long> b;
        vector<long long> c;
        vector<long long> d;
        
        for(i=0;i<n;i++){
            cin>>m;
            for(j=0;j<m;j++){
            cin>>it;
            a.push_back(it);
            }
            sort(a.begin(),a.end());
            b.push_back(a[0]);
            b.push_back(a[1]);
            d.push_back(a[0]);
            c.push_back(a[1]);
            a.clear();
        }
        for(auto it:c)
        sum+=it;
        sort(c.begin(),c.end());
        sum=sum-c[0];
        sort(d.begin(),d.end());
        cout<<sum+d[0]<<endl;
    }
}
