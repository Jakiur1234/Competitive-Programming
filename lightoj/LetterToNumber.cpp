#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define pi acos(-1)
#define pb push_back
#define pob pop_back


int main() {

    map<char, int> mp;

    mp.insert(pair<char,int>('A',1));
    mp.insert(pair<char,int>('B',2));
    mp.insert(pair<char,int>('C',3));
    mp.insert(pair<char,int>('D',4));
    mp.insert(pair<char,int>('E',5));
    mp.insert(pair<char,int>('F',6));
    mp.insert(pair<char,int>('G',7));
    mp.insert(pair<char,int>('H',8));
    mp.insert(pair<char,int>('I',9));
    mp.insert(pair<char,int>('J',10));
    mp.insert(pair<char,int>('K',11));
    mp.insert(pair<char,int>('L',12));
    mp.insert(pair<char,int>('M',13));
    mp.insert(pair<char,int>('N',14));
    mp.insert(pair<char,int>('O',15));
    mp.insert(pair<char,int>('P',16));
    mp.insert(pair<char,int>('Q',17));
    mp.insert(pair<char,int>('R',18));
    mp.insert(pair<char,int>('S',19));
    mp.insert(pair<char,int>('T',20));
    mp.insert(pair<char,int>('U',21));
    mp.insert(pair<char,int>('V',22));
    mp.insert(pair<char,int>('W',23));
    mp.insert(pair<char,int>('X',24));
    mp.insert(pair<char,int>('Y',25));
    mp.insert(pair<char,int>('Z',26));


    int t;

    cin>>t;

    while(t--){
        string s;

        cin>>s;

        for(int i = 0; i <s.length(); i++){
            char p = s[i];
            cout<<mp[p];
        }

        cout<<endl;
    }

    return 0;

}