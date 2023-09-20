#include<stdio.h>
#include<string.h>

void Permute2(char str[], int startIndex, int lastIndex);
void Swap(char *a, char *b);

int main()
{
        char str[20];
        printf("Enter any String :: ");
        scanf("%s",str);
        
        printf("\nUsing Recursion :: \n\n");
        Permute2(str,0,strlen(str)-1);

        printf("\n");

        return 0;
}

void Permute2(char str[], int startIndex, int lastIndex)
{
        int i;
        if(startIndex==lastIndex)
        {
                for(i=0;i<=lastIndex;i++)
                        printf("%c",str[i]);
                printf("\t");
        }
        else
        for(i=startIndex;i<=lastIndex;i++)
        {
                Swap(&str[startIndex], &str[i]);
                Permute2(str,startIndex+1,lastIndex);
                Swap(&str[startIndex], &str[i]);
        }
}


void Swap(char *a, char *b)
{
        char temp = *a;  *a=*b; *b=temp;
}
