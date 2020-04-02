#include <iostream>
#include <string>
#include "Shogi.h"

using namespace std;

void strupper(char* str);

int main()
{
    Board b;
    char input[80];
    char move[1];
    bool gameOver = false;
    bool newGame = true;
    cout<<" ________            _______  _______ _________ \n(  _____ \\|\\      /|(  ___  )(  ____ \\\\__   __/ \n| (     \\/| )    ( || (   ) || (    \\/   ) ( \n| (______ | (____) || |   | || |         | | \n(______  )|  ____  || |   | || | ____    | | \n       ) || (    ) || |   | || | \\_  )   | | \n/\\_____) || )    ( || (___) || (___) |___) (___ \n\\________)|/      \\|(_______)(_______)\\_______/"<<endl;
    cout<<"Enter any key to continue"<<std::endl;
    cin.getline(move, 1);
    while (newGame){
        b.setBoard();
        while (b.playGame());
        //if (gameOver == true){
        cout<<"Do you want to play again?"<<endl;
        cin.getline(input, sizeof(input));
        strupper(input);
        if (strcmp(input, "YES") == 0){
            newGame = true;
        }
        else if (strcmp(input, "NO") == 0){
            newGame = false;
        }
    }
    //}
    return 0;
}

void strupper(char* str){
    int len = strlen(str);
    for (int i = 0; i < len; i++){
        str[i] = toupper(str[i]);
    }
}
