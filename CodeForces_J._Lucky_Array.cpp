#include<bits/stdc++.h>
using namespace std;

int main(){
    int N,i;
    cin>>N;
    int ODD=0;
    int EVEN=0;
    int min=INT_MAX;
    int R;
    if(2<=N && N<=1000){
            int A[N];
       for(int i=0; i<N; i++){
        cin>>A[i];
       }


            for(int i=0; i<N; i++){
                    if(-100000<=A[i] && A[i]<=100000){
                        if(A[i]<min){
                            min = A[i];

                            }
                        }


            }
            for( int i=0; i<N; i++){
            if(A[i]==min){
                R++;
            }
            }
            if(R%2==0){EVEN++;}
                        else{ODD++;}

    }

    if(EVEN>ODD){
        cout<<"Lucky ";
    }
    else{
        cout<<"Unlucky ";
    }

return 0;
}

