#include<iostream>
using namespace std;

int main (){
    int n;
    cout <<" No of rows = ";
    cin >> n;

for(int row = 0; row < n; row = row + 1){
        for(int col = 0; col < row + 1; col++){
            cout << "* ";
        }
        cout << endl;
    }
}

