// Code for Rock Paper Scissors in C++
#include <iostream>
#include <ctime>

using namespace std;

// Function to declare if the user wins
void you_win() 
{
    cout << "You win!" << endl;
}

// Function to declare if the user loses
void you_lose()
{
    cout << "You lose!" << endl;
}

// Function to declare if there is a draw
void draw()
{
    cout << "It's a draw!" << endl;
}

int main()
{
    srand(time(NULL)); // To seed random sequences at a given point of time
    cout << "Welcome! You are playing : ROCK PAPER SCISSORS" << endl;
    cout << "Select any one of the three: \n 1) ROCK\n 2) PAPER\n 3) SCISSORS\n" << endl;
    cout << "Pick a move: " << endl;

    int userChoice;
    cin >> userChoice;

    if (userChoice > 3)
    {
        cout << "Invalid Choice" << endl;
    }

    int cpuChoice = (rand() % 3) + 1; // To determine a choice by the CPU

    if (userChoice == 1)
    {
        cout << "You picked Rock" << endl;
    }
    else if (userChoice == 2)
    {
        cout << "You picked Paper" << endl;
    }
    else if (userChoice == 3)
    {
        cout << "You picked Scissors" << endl;
    }

    if (cpuChoice == 1)
    {
        cout << "CPU picked Rock" << endl;
    }
    else if (cpuChoice == 2)
    {
        cout << "CPU picked Paper" << endl;
    }
    else if (cpuChoice == 3)
    {
        cout << "CPU picked Scissors" << endl;
    }

    if (userChoice == cpuChoice)
    {
        draw();
    }

    if (userChoice == 1)
    {
        if (cpuChoice == 2)
        {
            you_lose();
        }
        else if (cpuChoice == 3)
        {
            you_win();
        }
    }

    else if (userChoice == 2)
    {
        if (cpuChoice == 3)
        {
            you_lose();
        }
        else if (cpuChoice == 1)
        {
            you_win();
        }
    }

    else if (userChoice == 3)
    {
        if (cpuChoice == 1)
        {
            you_lose();
        }
        else if (cpuChoice == 2)
        {
            you_win();
        }
    }

    cout << "Thanks for playing!!" << endl;
    return 0;
}
