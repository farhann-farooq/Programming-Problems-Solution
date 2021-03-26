#include<bits/stdc++.h>
using namespace std;
int main() {
    string s;
    cin >> s;
    int zero = 0;
    int one = 0;
    int ter = 0;
    for (int i=0; i<s.length(); i++){
        if(s[i]=='1'){
            one++;
            zero = 0;
        }
        else{
            zero++;
            one = 0;
        }

        if(zero==7 || one==7){
            ter=1;
            break;
        }
    }

    if(ter == 1){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
    return 0;
}
