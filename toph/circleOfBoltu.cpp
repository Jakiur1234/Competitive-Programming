#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define pi acos(-1)
#define pb push_back
#define pob pop_back


int main() {
    int T,n;

    cin>>T;

    for(int i = 1; i <= T; i++){
        cin >> n;

        ll int x[n],y[n];

        for(int i = 0 ; i < n ; i++){
            cin>>x[i]>>y[i];
        }

        ll int ans, m = 0;

        for(int i = 0; i < n - 1; i++){
            for(int j = i + 1; j < n ; j++){
                ans = ((x[j]-x[i])*(x[j]-x[i])) + ((y[j] - y[i])*(y[j] - y[i]));

                if(ans > m){
                    m = ans;
                }
            }
        }

        cout<<"Case "<<i<<": "<<m<<endl;
    }

    return 0;

}