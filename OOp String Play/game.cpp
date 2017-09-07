#include "game.h"
#include <iostream>
#include <string>
#include <algorithm>


using namespace std;


    void Game::setName(){ //sets the first and last name by accepting input from the user
        cout <<"Enter in your first name: " << endl;
        cin >> fname;
        cout<<"Enter in your last name: " << endl;
        cin >> lname;
    }
    Game Reversal(string fname, string lname){ //function that reverses the user's first and last name

    reverse(lname.begin(),lname.end());
    reverse(fname.begin(),fname.end());

    }
    void Game::showResults(){ //displays the names reversed
    cout <<"Your name reversed is : " << lname << " " << fname << endl;

}



