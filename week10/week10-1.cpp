#include <Stdio.h>
char name[100][30];
int grade[100];
int main()
{
    FILE*fin=fopen("input.txt","r");
    int N;
    ///scanf("%d",&N);
    fscanf(fin,"%d",&N);
    ///�u�O���Uprintf("Ū��N�O: %d\n",N);
    for(int i=0;i<20;i++){
        ///scanf("%s %d",name[i],&grade[i]);
           fscanf(fin,"%s %d",name[i],&grade[i]);
           ///�u�O���Uprintf("Ū��F %s %d\n",name[i],grade[i]);
        }
        for(int i=0;i<20;i++){
            printf("%s %d\n",name[i],grade[i]);
        }
}
