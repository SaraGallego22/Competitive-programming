#include <bits/stdc++.h>

using namespace std;

int main(){
    int matriz[5][5];

    int x_one = 0;
    int y_one = 0;
    int x_center = 2;
    int y_center = 2;

    for(int row = 0; row < 5; ++row ){ //O(5)
        for(int col=0; col < 5; ++col){ //O(5)
            cin >> matriz[row][col];
            if(matriz[row][col] == 1){
                x_one = row;
                y_one = col;
            }
        }
    }
    int answer = abs(x_one - x_center) + abs(y_one - y_center);
    cout << answer << "n";

    return 0;
}
