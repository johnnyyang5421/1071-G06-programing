#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<time.h>
#include<math.h>
#define max 10

#include "function 1.h"
#include "function 2.h"
#include "function 3.h"
FILE *fp;



struct classmate
{
    char sex;
    char *name;
};

int main()
{
    int people;
    int *rightseat;
    rightseat=(int *)malloc(sizeof(80));
    int choose1;
    char cont='Y';
    while(cont=='Y')
    {
        printf("1.enter the program\n2.exit ==> ");
        scanf("%d",&choose1);
        srand(time(NULL));
        switch(choose1)
        {

        case 1:
        {

            printf("Enter how many people you want: ");

            int n1 ;
            float n2;
            char cont1;
            scanf("%d",&people);
            *rightseat=sakforhowpeoeple(people,n1,n2);
            int seat[max][max]= {0};
            int seatQQ[max][max]= {0};
            int peopleQQ[100]={0};
            srand(time(NULL));

            int choose2;
            showseat(*rightseat,seat);
            printf("Which kind do you want?\n1.random seat\n2.Designation someone seat frist(can be contniune)\n ");
            scanf("%d",&choose2);

            switch(choose2)
            {
            case 1:

                randomseat2(seatQQ,seat,people,*rightseat,peopleQQ);
                showseat(*rightseat,seat);
                break;


            case 2:
            {
                int set;
                int setj,seti;
                char cont2='Y';
                while(cont2=='Y')
                {
                    printf("which peson number you want to set?");
                    scanf("%d",&set);
                    if(peopleQQ[set]==-1)
                    {
                     printf("This number's seat had set!");
                    }
                    else
                    {
                    printf("which seat you want to set(i,j)?\n");
                    showseat( *rightseat,seat);
                    scanf("%d %d",&setj,&seti);
                    seat[seti][setj]=set;
                    seatQQ[seti][setj]=-1;
                    peopleQQ[set]=-1;
                    }
                    showseat( *rightseat,seat);
                    printf("Enter Y to continue another one seat ==> ");
                    cont2 = getchar();

                    cont2 = toupper(getchar());

                }
                randomseat2(seatQQ,seat,people,*rightseat,peopleQQ);
                showseat(*rightseat,seat);

                break;
            }
            default:

                printf("you enter the error number");
                break;

            }
            //writingfiles(n);

            break;
        }
        case 2:
            return 0;
            break;

        default:

            printf("Error number\n");
            break;

        }
        printf("Enter Y to continue ==> ");
        cont = getchar();

        cont = toupper(getchar());
    }
    return 0;
}
