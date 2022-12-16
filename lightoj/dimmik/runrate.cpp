#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define pi acos(-1)
#define pb push_back
#define pob pop_back


int main() {

    int t;

    cin>>t;

    float r1,r2,ball,rrr,crr;

    while(t--){
        cin>>r1>>r2>>ball;

        crr = r2/((300 - ball)/6);

        if(r2 > r1){
            rrr = 0.00;
        }
        else{
            rrr = ((r1-r2) + 1) / (ball/6);
        }

        printf("%.2f %.2f\n",crr,rrr);
    }

    return 0;

}