#include<bits/stdc++.h>
using namespace std;

int main(){
    int N,i;
    cin>>N;
    if(2<=N && N<=1000){
            int A[N];
       for(int i=0; i<N; i++){
        cin>>A[i];
       }


            for(int i=0; i<N; i++){
                    if(-100000<=A[i] && A[i]<=100000){
                if(A[i]<=10){
                    cout<<"A"<<"["<<i<<"]"<<" = "<<A[i]<<endl;
                }
            }
    }
    }

return 0;
}
