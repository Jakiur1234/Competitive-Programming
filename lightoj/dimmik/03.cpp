#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define pi acos(-1)
#define pb push_back
#define pob pop_back


int main() {
    int count = 0;
    for(int i = 1000 ;i >= 1; i--){
        cout<<i<<" ";
        count++;
        
        if(count == 5){
            count=0;
            cout<<endl;
        }
        
    }

    return 0;

}