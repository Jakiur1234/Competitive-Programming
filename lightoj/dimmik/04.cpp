#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define pi acos(-1)
#define pb push_back
#define pob pop_back


void gcd(int a){
    for(int i = 1; i < a; i++){
        if(a % i == 0){
            cout<<i<<" ";
        }
    }
    
    cout<<a<<endl;
}

int main(){
    int t; 
    
    cin>>t;
    
    for(int i = 0; i < t; i++){
        int n;
        
        cin>>n;

        cout<<"Case "<<i+1<<": ";
        
        gcd(n);
    }

    return 0;
}