#include<iostream>

using namespace std;

int main ()
{
    for(int r = 0; r<3; r = r + 1){
        if(r == 0 || r == 2){
            for(int col = 0; col < 5; col = col +1){
                cout <<"* ";
            }
        }
        else{
            cout <<"* ";
            for(int s = 0; s < 3; s++){
                cout <<"  ";
            }
            cout <<"* ";
        }
        cout << endl;
    }
    
}
