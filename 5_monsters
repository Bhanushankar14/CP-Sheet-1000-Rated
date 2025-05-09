#include<bits/stdc++.h>
using namespace std;
bool cmp(pair<long long,long long> c,pair<long long,long long> d){
    if(c.first!=d.first)
    return c.first>d.first;
    else
    return c.second<d.second;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        long long k,n,i,te;
        cin>>n>>k;
        vector<pair<long long,long long>> a(n);
        for(i=0;i<n;i++){
            cin>>te;
            te=te%k;
            if(te==0)
            te=k;
            a[i].first=te;
            a[i].second=i+1;
        }
        sort(a.begin(),a.end(),cmp);
        for(auto &it:a)
        cout<<it.second<<" ";
        cout<<endl;
}
}
