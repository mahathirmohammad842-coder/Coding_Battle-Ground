#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    vector<string> words(n);

    if(n>=1 && n<=100){
            for(int i=0; i<n;i++){
                cin>>words[i];
            }


    }

     for(int i=0; i<n;i++){
            string s;
            s = words[i];
         if (s.length() > 10) {
            cout << s[0] << s.length()-2 << s[s.length()-1] << endl;
        } else {
            cout << s << endl;
        }
    }


return 0;
}

