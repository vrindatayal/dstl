
/* MATRIX IS SYMMETRIC OR NOT */

#include<stdio.h>
#include<math.h>
void main()
{
    int a[10][10],b[10][10],flag=0,r,c,i,j;
    printf("enter the number of rows :");
    scanf("%d",&r);
    printf("enter the number of columns :");
    scanf("%d",&c);
    if (r!=c)
    { 
    printf("not a valid matrix");
    }
    else
    printf("enter the elements of the matrix :\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
     for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            b[c][r]=a[r][c];
        }
    }
    
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(a[r][c]!=b[c][r])
            {
                flag++;
            }
        }
    }
    if(flag==0)
    {
        printf("given matrix is not a symmetric matrix");
    }
    else
    {
        printf("given matrix is a symmetric matrix");
    }
}