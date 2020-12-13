#include<stdio.h>

int main()
{
    int n, m, c,k, d, first[10][10], second[10][10], sum[10][10], diff[10][10],multiply[10][10],sumn=0;
    printf("\nEnter the number of rows and columns of the first matrix \n\n");
    scanf("%d%d", &m, &n);

    printf("\nEnter the %d elements of the first matrix \n\n", m*n);
    for(c = 0; c < m; c++)   
        for(d = 0; d < n; d++)   
            scanf("%d", &first[c][d]);

    printf("\nEnter the %d elements of the second matrix \n\n", m*n);
    for(c = 0; c < m; c++)   
        for(d = 0; d < n; d++)   
            scanf("%d", &second[c][d]);

    
    printf("\n\nThe first matrix is: \n\n");
    for(c = 0; c < m; c++)   
    {
        for(d = 0; d < n; d++)   
        {
            printf("%d\t", first[c][d]);
        }
    printf("\n");
    }

    
    printf("\n\nThe second matrix is: \n\n");
    for(c = 0; c < m; c++)   
    {
        for(d = 0; d < n; d++)  
        {
            printf("%d\t", second[c][d]);
        }
    printf("\n");
    }

    
    for(c = 0; c < m; c++)
        for(d = 0; d < n; d++)
            sum[c][d] = first[c][d] + second[c][d];

    
    printf("\n\nThe sum of the two entered matrices is: \n\n");
    for(c = 0; c < m; c++)
    {
        for(d = 0; d < n; d++)
        {
            printf("%d\t", sum[c][d]);
        }
        printf("\n");
    }

    for(c = 0; c < m; c++)
        for(d = 0; d < n; d++)
            diff[c][d] = first[c][d] - second[c][d];

    
    printf("\n\nThe subtraction of the two entered matrices is: \n\n");
    for(c = 0; c < m; c++)
    {
        for(d = 0; d < n; d++)
        {
            printf("%d\t", diff[c][d]);
        }
        printf("\n");
    }
    for (c = 0; c < m; c++)
      for (d = 0; d < n; d++)
 
    for (c = 0; c < m; c++) {
      for (d = 0; d < n; d++) {
        for (k = 0; k < m; k++) {
          sumn = sumn + first[c][k]*second[k][d];
        }
 
        multiply[c][d] = sumn;
        sumn = 0;
}}
    printf("\n\nThe multiplication of the two entered matrices is: \n\n");
    for (c = 0; c < m; c++) {
      for (d = 0; d < n; d++)
        printf("%d\t", multiply[c][d]);
 
      printf("\n");
    }
    
    return 0;
}
