#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base:: sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    for(int i = 1; i<= n; ++i){
        int a, b, c, d, e;
        cin >> a >> b >> c;
        e = abs(a-b)*2;
        if( a <= e && b <= e && c <= e){
            if(c > e/2){
                d = c - e/2;
            }else{
                d = c + e/2;
            }
            cout << d << "\n";
        }else{
            cout << "-1" << "\n";
        }
    }
}