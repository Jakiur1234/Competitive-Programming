#include <iostream>
#include <string>
#include <cmath>
#include <cctype>
#include <vector>
#include <algorithm>
#include <sstream>
#include <queue>
#include <deque>
#include <bitset>
#include <iterator>
#include <list>
#include <stack>
#include <map>
#include <set>
#include <functional>
#include <numeric>
#include <utility>
#include <limits>
#include <time.h>
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>

using namespace std;

/*******  All Required define Pre-Processors and typedef Constants *******/
#define INF (int)1e9
#define EPS 1e-9
#define PI 3.1415926535897932384626433832795
#define MOD 1000000007

/******** User-defined Function *******/
void solve(){

}

/**************************************/

/********** Main()  function **********/
int main()
{

    #ifndef ONLINE_JUDGE
        //freopen("input.txt","r",stdin);
        //freopen("output.txt","w",stdout);
    #endif

    int tc,count = 0;;
    scanf("%d",&tc);
    int ara[3];

    for(int i = 0; i <tc ; i++){
        for(int j =0; j < 3 ; j++){
            cin>>ara[j];
        }

        if(ara[0] == 1 && ara[1] == 1){
            count++;
        }
        else if(ara[1] == 1 && ara[2] == 1) {
            count++;
        }
        else if(ara[0] == 1 && ara[2] == 1){
            count++;
        }
    }

    cout<<count<<endl;

    return 0;
}