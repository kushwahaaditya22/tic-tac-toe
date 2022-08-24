#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=0,b,c=1,d,i,j,f=0;
    char ab[]={'1','2','3','4','5','6','7','8','9'};
    for (i=3;i<=9;i=i+3){
        for(j=a;j<i;j++){
            printf("%c | ",ab[j]);
        }
        a=i;
        printf("\n");
        printf("-----------");
        printf("\n");
    }
    while (c!=0){
        a=0;
        printf("\nfor 1st player:- \nenter the number:");
        scanf("%d",&b);
        ab[b-1]='x';
        for (i=3;i<=9;i=i+3){
            for(j=a;j<i;j++){
                printf("%c | ",ab[j]);
            }
            a=i;
            printf("\n");
            printf("-----------");
            printf("\n");
        }
        if ((ab[0]=='x'&& ab[3]=='x' && ab[6]=='x') || (ab[1]=='x' && ab[4]=='x' && ab[7]=='x') || (ab[2]=='x' && ab[5]=='x' && ab[8]=='x') || (ab[0]=='x' && ab[4]=='x' && ab[8]=='x') || (ab[2]=='x' && ab[4]=='x' && ab[6]=='x') || (ab[0]=='x' && ab[1]=='x' && ab[2]=='x') || (ab[3]=='x' && ab[4]=='x' && ab[5]=='x') || (ab[6]=='x' && ab[7]=='x' && ab[8]=='x')){
            printf("!!!!!player 1 win!!!!!");
            c=0;
            goto end;
        }
        printf("\nfor 2nd player:- \nenter the number:");
        scanf("%d",&d);
        ab[d-1]='o';
        a=0;
        for (i=3;i<=9;i=i+3){
            for(j=a;j<i;j++){
                printf("%c | ",ab[j]);
            }
            a=i;
            printf("\n");
            printf("-----------");
            printf("\n");
        }
        if ((ab[0]=='o'&& ab[3]=='o' && ab[6]=='o') || (ab[1]=='o' && ab[4]=='o' && ab[7]=='o') || (ab[2]=='o' && ab[5]=='o' && ab[8]=='o') || (ab[0]=='o' && ab[4]=='o' && ab[8]=='o') || (ab[2]=='o' && ab[4]=='o' && ab[6]=='o') || (ab[0]=='o' && ab[1]=='o' && ab[2]=='o') || (ab[3]=='o' && ab[4]=='o' && ab[5]=='o') || (ab[6]=='o' && ab[7]=='o' && ab[8]=='o')){
            printf("!!!!!player 2 win!!!!!");
            c=0;
        }
        end:
        f=1;
    }

    return 0;
}


