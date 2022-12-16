#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define pi acos(-1)
#define pb push_back
#define pob pop_back


int main() {

    int t;

    cin>>t;

    while(t--){
        string s;
        cin>>s;

        stringstream ss;

        ss<<s[s.length()-1];

        int p;

        ss>>p;

        if(p % 2 == 0){
            cout<<"even"<<endl;
        }
        else{
            cout<<"odd"<<endl;
        }
    }

    return 0;

}