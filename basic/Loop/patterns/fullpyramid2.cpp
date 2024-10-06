#include<iostream>

using namespace std;

int main(){

    int n;
    cout << "Enter the value of n = ";
    cin >> n;

    //rows - outer loop
    for (int row = 0; row < n; row++){

        // spaces 
        for (int col = 0 ; col < n - (row + 1); col++){
            cout <<" ";
        }

        // stars 
        for(int col = 0; col < 2*row + 1; col++){
            cout << "*";
        }

        cout << endl;
    }
   

}