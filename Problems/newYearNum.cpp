#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base:: sync_with_stdio(false);
    int n;
    cin >> n;
    for(int i = 0; i< n; ++i){
        string answer = "NO";
        int num;
        cin >> num;
        if(num < 2020){
            cout << "NO" << "\n";
        }else{
            for(int i = 1; i< 1000 ; ++i){
                if(num >= i*2020 && num <= i*2021){
                   answer = "YES";
                   continue;
                }
            }
            cout << answer << "\n";
        }
    }
}
  
