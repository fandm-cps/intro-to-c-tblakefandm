#include <iostream>
using namespace std;

//what we need to use: cin/cout = done, while loop = done, if-statements = done, a hard coded reference number = done
int main(){
    int givennum = 19;
    int guessnum = 0;

    while(givennum != guessnum){
        cout << "Please guess an integer." << endl;
        cin >> guessnum;

        if(guessnum > givennum){
            cout << "Incorrect Guess. You are too high." << endl;
        }
        if(guessnum < givennum){
            cout << "Incorrect Guess. You are too low." << endl;
        }
        if(guessnum == givennum){
            cout << "Correct!" << endl;
        }
        
    }
    
    return 0;
    

}