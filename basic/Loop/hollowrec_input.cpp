#include<iostream>

using namespace std;

int main ()
{
    int rowCount, colCount;
    cout <<"Row Count: ";
    cin >> rowCount;
    cout <<"Col Count: "; 
    cin >> colCount;

    for(int r = 0; r < rowCount; r++){
        if(r ==0 || r == rowCount-1){
            for(int c = 0; c< colCount;c++){
                cout <<"* ";
            }  
        }
        else{
            cout <<"* ";
            for(int c = 0; c< colCount - 2; c++){
                cout << "  ";
            }
            cout <<"* ";
        }
        cout <<endl;
    }
    
}
