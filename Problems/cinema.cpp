#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base:: sync_with_stdio(false);
    int n;
    cin >> n;
    int ticket = 25;
    int array[n];
    int anteriores[3];
    string text = "NO";

    for(int i = 0; i<n; ++i){
        int t;
        cin >> t;
        array[i] = t;
    }
    for(int i = 0; i < n; ++i){
        
        if(i ==0 and array[i]!= 25){
            cout << "NO";
            return 0;
        }else if(i ==0 and array[i] ==25){
            anteriores[0] +=1;
            continue;
        }else if(array[i]== 25){
            anteriores[0] += 1;
        }else if(array[i]== 50){
            anteriores[1] += 1;
        }
        else if(array[i]== 100){
            anteriores[2] += 1;
        }
    }
    for(int i = 0; i < n; ++i){
        if(array[i]==50 and anteriores[0] <= 2){
            text = "YES";
            anteriores[0] = anteriores[0]-2;
        }if(array[i]==50 and anteriores[0] > 2){
            text = "NO";
            return 0;
        }if(array[i]==100 and anteriores[0] > 4 or anteriores[1] >2){
            if(anteriores[0] > 4){
                anteriores[0]= anteriores[0] - 4;
            }else if(anteriores[1] > 2){
                anteriores[1]= anteriores[1] - 2;
            }
            text = "YES";
        }if(array[i]==100 and anteriores[0] < 4 or anteriores[1] <2){
            text = "NO";
            return 0;
        }
    }
    cout << text;
}



#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base:: sync_with_stdio(false);
    int n;
    cin >> n;
    int ticket = 25;
    int array[n];
    int anteriores[n];
    for(int i = 0; i<n; ++i){
        int t;
        cin >> t;
        array[i] = t;
    }
    for(int i = 0; i < n; ++i){
        if(i ==0 and array[i]!= 25){
            cout << "NO";
            return 0;
        }else if(array[i]== 25){
            anteriores[i] = array[i];
        }else if(array[i]!=0){
            string text = "NO";
            for(int j = 0; j<n; ++j){
                if(array[i]-25 == anteriores[j]){
                    text = "YES";
                    anteriores[j]= anteriores[j]-25;
                    cout << anteriores[j];
                    break;
                }
            }
        cout << text;
        return 0;
        }else{
            cout << "NO";
        }

    }
}