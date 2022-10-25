#include<iostream>
using namespace std;
char board[3][3]= {{'1','2','3'},{'4','5','6'},{'7','8','9'}};
int i,j,row,column,choices;
char turn='0';
bool draw = false;
void display_board()
{
    cout<<"\t"<<board[0][0]<< " | "<< board[0][1]<< " | "<< board[0][2]<<"\n\t-- --- ---\n\t"<<board[1][0] <<" | "<< board[1][1] <<" | "<< board[1][2]<<"\n\t-- --- ---\n\t"<<board[2][0] <<" | "<< board[2][1] <<" | "<< board[2][2]<<"\n";
}
void turn_order()
{
    if(turn=='x')
    {
        turn='0';
    }
    else if(turn=='0')
    {
        turn='x';
    }

}
void player_turn()
{
    if(turn=='x')
    {
        cout<<"player 1[x]turn:";
    }
    else if(turn=='0')
    {
        cout<<"player 2[0]turn:";
    }

    cin>>choices;
    switch(choices)
    {
    case 1:
        row=0;
        column=0;
        break;
    case 2:
        row=0;
        column=1;
        break;
    case 3:
        row=0;
        column=2;
        break;
    case 4:
        row=1;
        column=0;
        break;
    case 5:
        row=1;
        column=1;
        break;
    case 6:
        row=1;
        column=2;
        break;
    case 7:
        row=2;
        column=0;
        break;
    case 8:
        row=2;
        column=1;
        break;
    case 9:
        row=2;
        column=2;
        break;
    default:
        cout<<"invalid choice";
    }
    if(turn=='x'&&board[row][column]!='x'&&board[row][column]!='0')
    {
        board[row][column]='x';
    }
    else if(turn=='0'&&board[row][column]!='x'&&board[row][column]!='0')
    {
        board[row][column]='0';
    }
    else
    {
        cout<<"the position is already filled";
        player_turn();
        display_board();
    }


}
bool gameover()
{
    for(i=0; i<3; i++)
    {
        if(board[i][0]==board[i][1]&&board[i][0]==board[i][2]||board[0][i]==board[1][i]&&board[0][i]==board[2][i])
        {
            return false;
        }
        if(board[0][0]==board[1][1]&&board[0][0]==board[2][2]||board[0][2]==board[1][1]&&board[0][2]==board[2][0])
        {
            return false;
        }

    }
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            if(board[i][j]!='x'&&board[i][j]!='0')
            {
                return true;

            }
        }
    }
    if (draw = true)
    {
        return true;
    }

}
int main()
{
    cout<<"                    TIC TAC TOE\n\n ";

    cout<<"                    for 2 players\n\n";

    cout<<"                    player 1[X]\n\n";

    cout<<"                    player 2[0]\n\n";
    while(gameover())
    {
        display_board();
        turn_order();
        player_turn();

    }
    if(turn=='x'&&draw==false)
    {
        cout<<"player 1 is the winner of this game!!!";
    }
    else if(turn=='0'&&draw==false)
    {
        cout<<"player 2 is the winner of this game!!!";
    }
    else
    {
        cout<<"this game is draw no one is a winner!!!";
    }
    return 0;
}
