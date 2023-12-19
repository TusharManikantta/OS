#include<stdio.h>

int main(){
    int i,j,n,x,base,off,seg,a[10][2],b[100],size;

    printf("enter the number of segments: ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("enter the size of the segment %d: ",i+1);
        scanf("%d",&size);

        a[i][0]=size;

        printf("enter the base address of the segment  %d: ",i+1);
        scanf("%d",&base);

        a[i][1]=base;

        
        for(j=base;j<base+size;j++)
        {
            printf("enter the element at the address %d: ",j);
            scanf("%d",&x);

            b[j]=x;
        }

    }

    printf("enter the segment number and the offset value: ");
    scanf("%d%d",&seg,&off);

    if(seg>=0 && seg<n && off<a[seg][0])
    {
        int abs=a[seg][1]+off;
        printf("the offset is less than %d\n",a[seg][0]);
        printf("%d+%d=%d\n",a[seg][1],off,abs); 
        printf("the element at %d is at %d\n",b[abs],abs);

    }
    else{
        printf("error in locating");
    }
    return 0;
}