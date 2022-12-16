#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define pi acos(-1)
#define pb push_back
#define pob pop_back


int main() {
    string s;

    int t;

    cin>>t;

    while(t--){
        cin>>s;

        int len = s.length();

        stringstream ss,pp;
        
        ss<<s[len-1];

        int a, b;

        ss>>a;

        pp<<s[0];

        pp>>b;

        cout<<"Sum = "<<a+b<<endl;
    }

    return 0;

}