#include <iostream>
using namespace std;
char plan [10]={ '0','1', '2', '3', '4', '5', '6', '7', '8' ,'9' };
unsigned x, y, i;
bool GameOver = false;
bool CheckBoar = true;
bool Draw = false;

//Building the board
void   board() {  
    cout << "___________________" << endl;
    cout << "|     |     |     |" << endl;
    cout << "|  " << plan[1]<< "  |  " << plan[2]<< "  |  " << plan[3]<< "  |  " << endl;
    cout << "|_____|_____|_____|" << endl;
    cout << "|     |     |     |" << endl;
    cout << "|  " << plan[4]<< "  |  " << plan[5]<< "  |  " << plan[6]<< "  |  " << endl;
    cout << "|_____|_____|_____|" << endl;
    cout << "|     |     |     |" << endl;
    cout << "|  " << plan[7]<< "  |  " << plan[8]<< "  |  " << plan[9]<< "  |  " << endl;
    cout << "|_____|_____|_____|" << endl;
    }   
//Check for win bcs i hate my life
void CheckWin() {
    if (plan[1] == 'x'  && plan[2] == 'x'  && plan[3] == 'x' ) {
        GameOver = true;
        cout << "Congratz Player 1 you won!" << endl;
    }
    if (plan[1] == 'x'  && plan[4] == 'x'  && plan[7] == 'x' ) {
        GameOver = true;
        cout << "Congratz Player 1 you won!" << endl;
    }
    if (plan[2] == 'x'  && plan[5] == 'x'  && plan[8] == 'x' ) {
        GameOver = true;
        cout << "Congratz Player 1 you won!" << endl;
    }
    if (plan[3] == 'x'  && plan[6] == 'x'  && plan[9] == 'x' ) {
        GameOver = true;
        cout << "Congratz Player 1 you won!" << endl;
    }
    if (plan[7] == 'x'  && plan[8] == 'x'  && plan[9] == 'x' ) {
        GameOver = true;
        cout << "Congratz Player 1 you won!" << endl;
    }
    if (plan[4] == 'x'  && plan[5] == 'x'  && plan[6] == 'x' ) {
        GameOver = true;
        cout << "Congratz Player 1 you won!" << endl;
    }
    if (plan[1] == 'x'  && plan[5] == 'x'  && plan[9] == 'x' ) {
        GameOver = true;
        cout << "Congratz Player 1 you won!" << endl;
    }
    if (plan[3] == 'x'  && plan[5] == 'x'  && plan[7] == 'x' ) {
        GameOver = true;
        cout << "Congratz Player 1 you won!" << endl;
    }


    if (plan[1] == 'o' && plan[2] == 'o'  && plan[3] == 'o' ) {
        GameOver = true;
        cout << "Congratz Player 2 you won!" << endl;
    }
    if (plan[1] == 'o'  && plan[4] == 'o'  && plan[7] == 'o' ) {
        GameOver = true;
        cout << "Congratz Player 2 you won!" << endl;
    }
    if (plan[2] == 'o'  && plan[5] == 'o'  && plan[8] == 'o' ) {
        GameOver = true;
        cout << "Congratz Player 2 you won!" << endl;
    }
    if (plan[3] == 'o'  && plan[6] == 'o'  && plan[9] == 'o' ) {
        GameOver = true;
        cout << "Congratz Player 2 you won!" << endl;
    }
    if (plan[7] == 'o'  && plan[8] == 'o'  && plan[9] == 'o' ) {
        GameOver = true;
        cout << "Congratz Player 2 you won!" << endl;
    }
    if (plan[4] == 'o'  && plan[5] == 'o'  && plan[6] == 'o') {
        GameOver = true;
        cout << "Congratz Player 2 you won!" << endl;
    }
    if (plan[1] == 'o'  && plan[5] == 'o'  && plan[9] == 'o' ) {
        GameOver = true;
        cout << "Congratz Player 2 you won!" << endl;
    }
    if (plan[3] == 'o'  && plan[5] == 'o'  && plan[7] == 'o' ) {
        GameOver = true;
        cout << "Congratz Player 2 you won!" << endl;
    }
}
//Check draw coz who likes fun
void CheckDraw() {
    if (plan[1] != ' ' && plan[2] != ' ' && plan[3] != ' ' && plan[4] != ' ' && plan[5] != ' ' && plan[6] != ' ' && plan[7] != ' ' && plan[8] != ' ' && plan[9] != ' ') {
        cout << "You drew and wasted hrs of my work, gj" << endl;
        Draw = true;
    }
}

int main()
{
    //Title
    system("title TicTacToe");
    cout << "Made by @LexGit-Hub\n\n\n";
    //board
    board();

    //Rules

    cout << "\n1.Start the game by typing '1'.\n";
    cout << "2.Player one is 'X' and player two is 'O',to play press the number coresponding to the square u want.\n3.Have Fun!\n\n";

    //start
    cout << "start?" << endl;
     cin >> x;
     if (x == 1) {
         plan[0] = ' ';
         plan[1] = ' ';
         plan[2] = ' ';
         plan[3] = ' ';
         plan[4] = ' ';
         plan[5] = ' ';
         plan[6] = ' ';
         plan[7] = ' ';
         plan[8] = ' ';
         plan[9] = ' ';
         plan[10] = ' ';
         system("cls");
         board();
     }
    //player one
    while (GameOver != true && Draw !=true) {
        cout << "Player's 1 turn" << endl;
        cin >> i;
        
        while ( plan[i] == 'x' || plan[i] == 'o') {
                system("cls");
                board();
                cout << "I spent 3 hrs on this js enter a valid number" << endl;
                cout << "Player's 1 turn" << endl;
                cin >> i;

            }
        
        

        
        plan[i] = 'x';
        system("cls");
        board();
        CheckWin();
        CheckDraw();
        //player two
        if (Draw == true) {
            system("pause");
            return 0;
        }
        if (GameOver == true) {
            system("pause");
            return 0;
        }
            cout << "Player's 2 turn" << endl;
            cin >> i;
            while (plan[i] == 'x' || plan[i] == 'o') {
                if (plan[i] != ' ') {
                    system("cls");
                    board();
                    cout << "I spent 3 hrs on this js enter a valid number" << endl;
                    cout << "Player's 2 turn" << endl;
                    cin >> i;

                }
            }
            

        
        plan[i] = 'o';
        system("cls");
        board();
        CheckWin();
        CheckDraw();
    }

    
        
    system("pause");
   
}
