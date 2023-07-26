#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<bool> vec;
        int k;
        while(n--){
            cin >> k;
            vec.push_back(k-1);
        }
        vector<vector<char>> ans(vec.size(),vector<char>(vec.size(), ' '));
        //for (int a:vec){
        for(int i = 0; i < vec.size() ; ++i){
            if(vec[i] ==1){
                for(int j = 0; j < vec.size() ; ++j){
                    ans[i][j] = '=';
                    ans[j][i] = '=';
                }
            }
        }
        for(int i = 0; i < vec.size() ; ++i){
            if(vec[i] == 2){
                for(int j = 0; j < vec.size() ; ++j){
                    if(ans[i][j == ' ']){
                        ans[i][j] = '+';
                        ans[j][i] = '-';
                    }
                }
            }
        }
    }
    return 0; 
}