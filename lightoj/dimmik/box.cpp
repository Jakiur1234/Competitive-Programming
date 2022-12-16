#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define pi acos(-1)


int main() {

    int t;

    cin>>t;

    for(int i = 0; i < t ; i++){
        int n;

        cin>>n;

        for(int i = 0; i < n ; i++){
            for(int i = 0; i < n ; i++){
                cout<<"*";
            }

            cout<<endl;
        }

        if(i != t-1){
            cout<<endl;
        }
    }

    return 0;

}