#include<iostream>
using namespace std;
int main(){
    int even = 0,odd = 0;
    int NN = 0,num[NN+1];
    while(num[NN-1] != 0 or NN == 0){
            cout << "Enter an integer: ";
            cin >> num[NN];
            NN++;
    }
    if(num[NN-1] == 0){
        while(NN !=0){
        while((num[NN-1]%2) == 0 and NN != 0){
            even = even +1;
            NN--;
            }
        while((num[NN-1]%2) != 0 and NN != 0){
            odd = odd + 1;
            NN--;
            }
        }        
    }
    cout << "#Even numbers = "  << even-1;
    cout << endl;
    cout << "#Odd numbers = " << odd;
    return 0;
}    



