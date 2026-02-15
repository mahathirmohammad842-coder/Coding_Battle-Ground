#include<bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin>>N;
    int min= INT_MAX;
    int p=0;
    if(2<=N && N<=1000){
            int A[N];
       for(int i=0; i<N; i++){
        cin>>A[i];
       }



            for(int i=0; i<N; i++){
                    if(-100000<=A[i] && A[i]<=100000){
                if(A[i]<min){
                    min= A[i];
                    p=i;


                }
            }
    }

    }
    cout<<min<<" "<<p+1;

return 0;
}


