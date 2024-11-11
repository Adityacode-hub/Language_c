#include<stdio.h>
void display_score_board(int [][4]);
void update_score_board(int ,int,int,int [][4]);
void score_board(int [][4]);
int get_winner(int [][4]);
void update_score_board(int result,int p1,int p2,int score_board[][4] )
{
    score_board[p1][p2]=result;
    score_board[p2][p1]=2-result;
}
void score_board(int score_board[][4])
{
    int i,j;
    printf("\n enter the score baord:\n");
    for(i=0;i<=3;i++)
    {
        for(j=0;j<=3;j++)
        {
            scanf("%d",&score_board[i][j]);
        }
    }
}
void display_score_board(int score_board[][4])
{
    int i,j;
    for(i=0;i<=3;i++)
    {
        for(j=0;j<=3;j++)
        {
            printf("%d",score_board[i][j]);
        }
        printf("\n");
    }
   
}
int get_players_score(int player,int score_board[][4])
{
    int i,sum;
    for(i=0;i<=3;i++)
    {
       sum=sum+score_board[player][i];

    }
    return sum;
}
int get_winner(int score_board[][4])
{
   int point[4]={0};
   int winner=0;
   for(int i=0;i<=3;i++)
   {
      if(point[i]>point[winner])
      {
        winner=i;
      }
   }
   return winner +1;




}

int main() {
    int score_board[4][4] = {0};

    // input_score_board(score_board);
    printf("\nScore Board:\n");
    display_score_board(score_board);

    int winner = get_winner(score_board);
    printf("Player %d is the winner.\n", winner);

    return 0;
}
