#ifndef function 1_H_INCLUDED
#define function 1_H_INCLUDED

void showseat(int rt,int seat[max][max])
{
    printf("    ");
	 for(int k=1; k<=rt; k++)
    {
        printf("  %d  ",k-1);
    }
    printf("\n   ");
    for(int k=1; k<=rt; k++)
    {
        printf("-----");
    }
    printf("\n");

    for(int i=0; i<rt; i++)
    {   printf(" %d ",i);
        printf("|");
        for(int j=0; j<rt; j++)
        {
            printf("%3d ",seat[i][j]);
            printf("|");
        }

        printf("\n   ");
        for(int k=1; k<=rt; k++)
        {
            printf("-----");
        }
        printf("\n");
    }
}


#endif // ·F§A®Q´Á¥½_H_INCLUDED

