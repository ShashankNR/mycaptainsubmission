#include <stdio.h>
#include<conio.h>
struct cricket
{
    int runs_per_over[10];
    char batsmen[20],bowler[20];
    int wickets_per_over[10];
    char team1[20],team2[20];
};
int main()
{
    struct cricket play;
    int i,j, overs=0;
    int totalruns=0, totalwickets=0, runrate=0;
    printf(" INDIA Vs Bangladesh \n");
    printf("*********************\n");
    printf("INDIA FIRST BATTING\n");
    for(i=0;i<10;i++)
    {
        printf("Enter the runs for the over %d: \n", i);
        scanf("%d", &play.runs_per_over[i]);
        printf("Enter the wickets for the over %d: \n", i);
        scanf("%d", &play.wickets_per_over[i]);
        printf("Over %d Runs: %d \n", i, play.runs_per_over[i]);
        printf("Over %d Wickets: %d \n", i, play.wickets_per_over[i]);
        printf("*******************\n");
        totalruns += play.runs_per_over[i];
        totalwickets += play.wickets_per_over[i];
        overs += 1;
        printf("Total Score: %d\n", totalruns);
        printf("Total Wickets: %d\n", totalwickets);
        runrate = totalruns/overs;
        printf("Run rate : %d\n", runrate);
        printf("*******************\n");
    }
    printf("Batting over!");
    return 0;
}
