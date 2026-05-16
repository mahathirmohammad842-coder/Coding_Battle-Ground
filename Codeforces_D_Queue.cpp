#include<bits/stdc++.h>
using namespace std;

int main(){
        int n;
        cin>>n;
        int v[n];

    for(int i=0;i<n;i++){
        cin>>v[i];
    }

    sort(v,v+n);

    int t=0;
    int count=0;

    for(int i=0;i<n;i++){
        if(t<=v[i]){
            count++;
            t=t+v[i];
        }
    }
    cout<<count<<endl;
    return 0;
}
