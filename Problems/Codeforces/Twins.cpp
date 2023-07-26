// Online C++ compiler to run C++ program online
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int n;
    cin >> n;
    int arr[n];
    int S, S2,S_new,coins;
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    for(int i=0; i<n; i++){
        S += arr[i];
    }
    S2=S/2;
    sort(arr, arr + n, greater<int>());
    for(int i=0; i<n; i++){
        S_new += arr[i];
        if(S_new > S/2){
            coins = i+1;
            cout << coins;
            return 0;
        }
    }
    
}