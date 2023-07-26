#include <iostream>
using namespace std;
int main() {
    string S,S2;
    while(cin>>S) ;
    char vo[6] = {'a', 'o', 'y', 'e', 'u', 'i'};
    for (int i = 0; i < S.length(); i++) {
        S[i] = tolower(S[i]);
    }
    for(int i=0; i<S.length();i++){
        if(S[i]==vo[0] || S[i]==vo[1] || S[i]==vo[2] || S[i]==vo[3] || S[i]==vo[4] || S[i]==vo[5] ){
            continue;
        }
        cout << "." << S[i];
    }
    return 0;
}