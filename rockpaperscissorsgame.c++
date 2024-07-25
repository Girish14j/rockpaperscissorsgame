#include <iostream>
#include <ctime>
using namespace std;

char getUserChoice();
char getComputerChoice();
void showChoice(char choice);
void chooseWinner(char player, char computer);

int main()
{
    char player;
    char computer;

    player = getUserChoice();
    cout << "your choice: ";
    showChoice(player);

    computer = getComputerChoice();
    cout << "Computer's choice: ";
    showChoice(computer);

    chooseWinner(player, computer);

    return 0;
}

char getUserChoice()
{
    char player;
    cout << "ROck--Paper--Scissors Game!" << endl;

    do
    {
        cout << "Choose one of the following..." << endl;
        cout << "*******************************" << endl;
        cout << "'r' for rock" << endl;
        cout << "'p' for paper" << endl;
        cout << "'s' for Scissors" << endl;
        cin >> player;
    } while (player != 'r' && player != 'p' && player != 's');

    return player;
}

char getComputerChoice()
{
    srand(time(0));
    int num = rand() % 3 + 1;

    switch (num)
    {
    case 1:
        return 'r';
    case 2:
        return 'p';
    case 3:
        return 's';
    }

    return 0;
}

void showChoice(char choice)
{
    switch (choice)
    {
    case 'r':
        cout << "Rock" << endl;
        break;
    case 'p':
        cout << "Paper" << endl;
        break;
    case 's':
        cout << "scissors" << endl;
        break;
    }
}

void chooseWinner(char player, char computer)
{
    switch (player)
    {
    case 'r':
        if (computer == 'r')
        {
            cout << "It's a Tie" << endl;
        }
        else if (computer == 'p')
        {
            cout << "You lose" << endl;
        }
        else
        {
            cout << "You win!" << endl;
        }
        break;
    case 'p':
        if (computer == 'r')
        {
            cout << "You win!" << endl;
        }
        else if (computer == 'p')
        {
            cout << "It's a Tie" << endl;
        }
        else
        {
            cout << "You lose" << endl;
        }
        break;
    case 's':
        if (computer == 'r')
        {
            cout << "You lose" << endl;
        }
        else if (computer == 'p')
        {
            cout << "You win!" << endl;
        }
        else
        {
            cout << "It's a Tie" << endl;
        }
        break;
    }
}
