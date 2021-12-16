#include <bits/stdc++.h>
using namespace std;

int main(){
    int n1;
    cin >> n1;
    for(int j = 0; j < n1 ; ++j){
        int n;
        cin >> n;
        int arr[n];   
        for(int i = 0; i < n ; ++i){
            int num;
            cin>> num;
            arr[i] = num;
        }
        for(int i = 0; i < n ; ++i){
            if(i!=n && i!=0){
             if(arr[i]!=arr[i+1] && arr[i]!=arr[i-1]){
                 if(j==n){
                        cout << i+1;
                    }
                    else{
                        cout << i+1 << endl;
                    }

                }
            } else if(i==0){
                if(arr[i]!=arr[i+1] && arr[i]!=arr[i+2]){
                    if(j==n){
                        cout << i+1;
                    }
                    else{
                        cout << i+1 << endl;
                    }
                    
                }
            }else if(i==n){
                if(arr[i]!=arr[i-1] && arr[i]!=arr[i-2]){
                    if(j==n){
                        cout << i+1;
                    }
                    else{
                        cout << i+1 << endl;
                    }
                }
            }
        }
    }
}