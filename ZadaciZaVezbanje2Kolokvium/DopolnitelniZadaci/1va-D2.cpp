#include <cstdio>
#include <cstring>
#include <cctype>
int main()
{
    int n,flag;
    scanf("%d",&n);
    int maxDolzina=0;
    char maxNiza[81];
    while(n)
    {
        char niza[81];
        fgets(niza,80,stdin);
        niza[strlen(niza)-1]='\0';
        int i,j=0;
        int palindromFlag=0,specijalenZnak=0;
        for(i=(strlen(niza)-1);i>=0;i--,j++)
        {
            if(niza[i]!=niza[j])
                palindromFlag=1;
            if(ispunct(niza[i]))
                specijalenZnak=1;
        }
        if(!palindromFlag && specijalenZnak)
        {
            if(strlen(niza)>maxDolzina)
            {
                maxDolzina=strlen(niza);
                strcpy(maxNiza,niza);
            }
            flag=1;
        }
        n--;
    }
    if(!flag)
        printf("Nema!");
    else
        printf("%s",maxNiza);
    return 0;
}