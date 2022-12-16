#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define pi acos(-1)
#define pb push_back
#define pob pop_back


int main() {
    ll int a,t;

    cin>>t;

    while(t--){
        cin>>a;

        if(a % 2 == 0){
            cout<<"even"<<endl;
        }
        else{
            cout<<"odd"<<endl;
        }
    }

    return 0;

}