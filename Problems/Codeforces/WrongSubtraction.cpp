#include "iostream"
#include "string"
 
using namespace std; 
int main()
{
    int n,k;
    cin >> n >> k;
    //cin >> k;
    for(int i =0;i<k; i++ ){
        if(n%10 == 0){
            n = n/10;
        }
        else{
            n = n-1;
        }
    }

    cout << n;
   return 0;
}