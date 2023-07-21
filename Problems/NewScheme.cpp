#include "iostream"
#include "string"
 
using namespace std;
int main()
{
    int n1,n2,n3,n4,n5,n6,n7,n8;
    int cont;
    cin >> n1 >> n2 >> n3 >> n4 >> n5 >> n6 >> n7 >> n8;
    int vector[8] ={n1,n2,n3,n4,n5,n6,n7,n8};
    for(int i = 1; i < 8 ; i++ ){
        if( vector[i] < 100 || vector[i] > 675 || vector[i-1]<100 || vector[i-1] > 675){
            cont +=1;
        }
        if(vector[i] < vector[i-1]){
            cont += 1;
        }
        if(vector[i]%25 != 0){
            cont += 1;
        }
    }
    if(cont == 0){
        cout << "Yes";
    }
    else{
        cout << "No";
    }
   return 0;
}