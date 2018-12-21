#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<time.h>
#include<math.h>
#define max 100
FILE *fp;

/*void readFiles()
{
    char filename[80];
    printf("Enter the file name: ");
    scanf("%s",filename);
    fp = fopen(filename,"r");
    if(fp==NULL)
    {
        fprintf(fp,"file reading false\n");
    }
    int i=0;
    while(fread(&iplotto, sizeof(Lotto), 1, fp)==1)
    {
        lottos[i].date.year = iplotto.date.year;
        lottos[i].date.month = iplotto.date.month;
        lottos[i].date.day = iplotto.date.day;
        for(int j=0; j<6; j++)
            lottos[i].num[j] = iplotto.num[j];
        i++;
    }
    counter = i;
    printf("%d lotto data read successfully from file %s",i,filename);
    fclose(fp);
}

void writingfiles(,int n)
{
    int choise;
    char filename[80];
    printf("Enter the file name: ");
    scanf("%s",filename);
    printf("choise 1. writing in the file 2.append => ");
    scanf("%d",&choise);
    if(choise==1)
        fp = fopen(filename,"w");
    else
        fp = fopen(filename,"a");

    if(fp==NULL)
        fprintf(fp,"file writting false\n");

    for(int i=0; i<n; i++)
    {
        fwrite(lottos+i, sizeof(Lotto),1,fp);
    }
    printf("%d lotto data read successfully from file %s\n",counter,filename);
    fclose(fp);
}

/*以上為程式儲存*/

struct classmate
{
    int id;
    char sex;
    char *name;
};

void inputname()
{

}

void yesorno()
{

}

int main()
{
    int choose1;
    char cont='Y';
    while(cont=='Y')
    {
        printf("Please choose your select\n1.read the file\n2.write or build the file\n3.exit ==> ");
        scanf("%d",&choose1);
        srand(time(NULL));
        switch(choose1)
        {
        case 1:

            //readFiles();

            break;

        case 2:
            {

            printf("Enter how many people you want: ");
            int people = 0;
            int n1 = 0;
            float n2;
            char cont1;
            scanf("%d",&people);
            n2 = sqrt(people);
            n1 = sqrt(people);
            if(n2>n1)
            {
                n1=n1+1;
            }
            printf("your sit %d x %d \n",n1,n1);

            //writingfiles();
            break;
            }
        case 3:

            return 0;

        default:

            printf("Error number :");
            break;
        }
        printf("Enter Y to continue ==> ");
        cont = getchar();

        cont = toupper(getchar());
    }
    return 0;
}



