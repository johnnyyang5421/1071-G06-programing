#ifndef FUNCTION_2_H_INCLUDED
#define FUNCTION_2_H_INCLUDED

void randomseat2(int seatQQ[max][max],int seat[max][max],int people,int rightseat,int peopleQQ[100])
{
    int i,j;

    for(int p=1; p<=people; p++)
    {
        if(peopleQQ[p]==0)
        {
            do
            {
                i=(rand()%rightseat);
                j=(rand()%rightseat);
            }
            while(seatQQ[i][j]==-1);

            seat[i][j]=p;
            seatQQ[i][j]=-1;
            peopleQQ[p]=-1;
        }
    }
}

#endif // FUNCTION_2_H_INCLUDED
