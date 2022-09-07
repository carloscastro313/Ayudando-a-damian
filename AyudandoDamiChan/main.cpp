#include <iostream>

using namespace std;

int main()
{
    int i = 0;
    while(i <= 5){

        if(i == 3){
            cout << "Seba gei";
        }else if(i == 1){
            cout << "Toro gei" << endl;
        }
        else{
            cout << "Hello world!" << endl;
        }

        i++;
    }

    return 0;
}
