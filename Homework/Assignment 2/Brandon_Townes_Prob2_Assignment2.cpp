#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int crapsRoll();

bool checkWin(int n);

int main()
{
    srand(time(0));

    int gameRoll = crapsRoll();
    bool gameWin = checkWin(gameRoll);

    if(gameWin == true)
    {
        cout << "You Win!" << endl;
    }
    else
    {
        cout << "You Loose!" << endl;
    }

    return 0;
}

//A function that sets up the inital roll 
int crapsRoll()
{
    int roll1 = 1 + rand() % 6;
    int roll2 = 1 + rand() % 6;

    int sum = roll1 + roll2;

    cout << "You rolled " << roll1 << " + " << roll2 << " = " << sum << endl;
    
    return sum;
}

//A function that check if the first roll meets the win or loose conditions
bool checkWin(int n)
{
    bool didWin;
    int reRoll;

    if (n == 2 || n == 3 || n == 12)
    {
        didWin = false;
    }
    else if (n == 7 || n == 11)
    {
        didWin = true;
    }

    //If the first roll doesn't meet the win condition, print out your current points and re roll the dice until you meet the win or loose conditon condition
    else
    {
        cout << "Point is " << n << endl;

        do
        {
            reRoll = crapsRoll();
            if (reRoll == n)
            {
                didWin = true;
                break;
            }
            else if (reRoll == 7)
            {
                didWin = false;
                break;
            }
        }while(reRoll != n || reRoll != 7);

    }

    return didWin;
}