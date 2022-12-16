#include<iostream>

using namespace std;

int ans = 1;

#define ll long long
#define pi acos(-1)
#define pb push_back
#define pob pop_back


int solve(int n){
    while(n != 1){
        if(n % 2 != 0){
            n = 3 * n + 1;

            ans+=1;
        }
        else{
            n/=2;

            ans+=1;
        }
    }

    return ans;
}


int main(){
    int first,second;

    while(scanf("%d %d",&first,&second) == 2){
        printf("%d %d ",first,second);

        if(first > second){
            int k = first;
            first = second;
            second = k;
        }

        int greater = 0;
        
        for(int i = first ; i <= second ; i++){
            int p = solve(i);

            if(p > greater){
                greater = p;
            }

            ans = 1;
        }

        printf("%d\n",greater);
    }

    return 0;
}