#include<stdio.h>
#define MAX 50
int main(){
    int page[MAX],ps,n,off,f,pno,i;
    int choice=0;

    printf("enter the no of pages in memory: ");
    scanf("%d",&n);

    printf("enter the page size: ");
    scanf("%d",&ps);

    printf("enter no. of frames: ");
    scanf("%d",&f);

    for(i=0;i<n;i++)
    {
        page[i]=-1;
    }

    printf("enter the page table\n");
    printf("(enter frame no. as -1 if that page is not present in any frame)\n\n");
    for(i=0;i<n;i++)
    {
        printf("\n\n%d\t\t",i);
        scanf("%d",&page[i]);
    }
    do{
          printf("enter the logical address:(i.e, page no. and offset no.)");
          scanf("%d%d",&pno,&off);

          if(page[pno]==-1)
          {
            printf("\n\nthe required page is not available in any of the frames");

          }
          else{
            printf("\n\nphysical address(i.e,frame no and offset):%d%d",page[pno],off);
        
          }
          printf("\n do you want to continue or not?(1/0):");
          scanf("%d",&choice);


    }
    while(choice==1);
    return 0;
}