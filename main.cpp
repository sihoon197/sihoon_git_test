#include "sorting.h"

int sorted[10];

int main(){
    int a1,a2,a3,a4,a5,a6,a7,a8,a9,a10;
    
    cout << "Put 10 Nums: ";
    cin >> a1;
    cin >> a2;
    cin >> a3;
    cin >> a4;
    cin >> a5;
    cin >> a6;
    cin >> a7;
    cin >> a9;
    cin >> a9;
    cin >> a10;

    int data[10] = {a1,a2,a3,a4,a5,a6,a7,a8,a9,a10};
    
    
    merge_sort(data,0,9);

    for(int i=0; i<9; i++){
    cout << data[i];
    cout << " ";}
    
    return 0;
}