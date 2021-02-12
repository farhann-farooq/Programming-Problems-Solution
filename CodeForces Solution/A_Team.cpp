#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, count1=0, x, y, z;
    cin >> n;
    while(n--){
        cin >> x >> y >> z;
        if(x+y+z >= 2){
            count1++;
        }
    }
    cout << count1 << endl;
    return 0;
}