#include <iostream>
#include <string>
#include "Chess.h"

int main()
{
    Board b;
    std::string s;
    bool newGame = true;
    std::cout<<"   _____ _    _ ______  _____ _____ \n  / ____| |  | |  ____|/ ____/ ____| \n | |    | |__| | |__  | (___| (___  \n | |    |  __  |  __|  \\___  \\___ \\ \n | |____| |  | | |____ ____) |___) | \n  \\_____|_|  |_|______|_____/_____/ \n"<<std::endl;
    std::cout<<"Enter any key to continue"<<std::endl;
    std::cin>>s;
    
    while (newGame){
        b.setBoard();
        while (b.playGame());
        std::cout<<"Do you want to play again?"<<std::endl;
        std::cin>>s;
        if (s != "yes"){
            newGame = false;
        }
    }
    return 0;
}
