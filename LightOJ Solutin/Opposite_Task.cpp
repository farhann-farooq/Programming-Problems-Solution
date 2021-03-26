#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, a;
    cin >> n;
    while(n--){
        cin >> a;
        if(a>10){
            
            cout << "10" << " " << a-10 << endl;
        }
        else{
            cout << a << " " << "0" << endl;
        }
    }
    return 0;
}