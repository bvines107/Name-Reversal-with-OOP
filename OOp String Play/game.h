#ifndef GAME_H
#define GAME_H
#include <iostream>
#include <string>
#include <algorithm>


using namespace std;

class Game
{
    public:
        void setName(); //sets the name by accepting user input
        Game Reversal(); // function that performs the name reversal
        void showResults(); //displays the reversed name

    private:
        string fname; //string that holds the users first name
        string lname; // string that holds the user's last name

};

#endif // GAME_H
