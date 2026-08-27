#include <iostream>

int main(){

    using std::cout;
    using std::string;
    using std::cin;

    char board[3][3] ={
        {' ',' ',' '},
        {' ',' ',' '},
        {' ',' ',' '}
    };

    char player1 ='X';
    char player2 = 'O';
    char currentplayer = player1;
    int r = -1;
    int s = -1;

    for(int i =0;i<9;i++){
        cout<<board[0][0] <<" | "<< board[0][1] << " | " << board[0][2]<<"\n";
        cout<<board[1][0] <<" | "<< board[1][1] << " | " << board[1][2]<<"\n";
        cout<<board[2][0] <<" | "<< board[2][1] << " | " << board[2][2]<<"\n";

        cout<<"current player is: "<< currentplayer;
        cin>> r >> s;
        board[r][s] = currentplayer;
        currentplayer = (currentplayer == player1) ? player2 : player1;
    }
    
    return 0;
}