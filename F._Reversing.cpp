#include<bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin>>N;
    if(1<=N && N<=1000){
            int A[N];
       for(int i=0; i<N; i++){
        cin>>A[i];
       }

       for(int i=N-1; i>=0; i--){
           if(0<=A[i] && A[i]<=1000000000){
            cout<<A[i]<<" ";
           }


                        }
                    }
return 0;
}

