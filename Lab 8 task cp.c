/*
TASK NO 1:
#include<stdio.h>
int main() {
	int arr[2][3] = {
	{1,2,3},
	{4,5,6}
	}, rows,clms;
	
	for(rows=0; rows<2; rows++){
		for(clms=0; clms<3; clms++){
			printf("Array[%d][%d] = %d\n", rows,clms,arr[rows][clms]);
		}
	}
	return 0;
}
*/

/*
 TASK NO 2:
#include<stdio.h>
int main(){
	
	int arr[2][4];
	printf("enter 6 elements ");
	int i,j;
	for(i=0;i<2;i++){
		for(j=0;j<4;j++){
			scanf("%d", &arr[i][j]);
		}
	}

for(i=0;i<2;i++){
	for(j=0;j<4;j++){
printf("array[%d][%d] = %d\n", i,j,arr[i][j]);		
		
	}
}	
	return 0;
}
*/

/* TASK NO 3:
#include<stdio.h>
int main()  {
int m1[2][2], m2[2][2], m3[2][2];
int i,j;

printf("enter elements of m1: \n");
for(i=0;i<2;i++){
	for(j=0; j<2; j++){
		scanf("%d", &m1[i][j]);
	}
}	

printf("enter elements of m2: \n");
for(i=0;i<2;i++){
	for(j=0; j<2; j++){
		scanf("%d", &m2[i][j]);
	}
}	

for(i=0;i<2;i++){
	for(j=0; j<2; j++){
	m3[i][j] = m1[i][j] + m2[i][j];
	}
}	

printf("enter elements of m3: \n");
for(i=0;i<2;i++){
	for(j=0; j<2; j++){
		printf("%d ", m3[i][j]);
		printf("\n");
	}
}	

	return 0;
}

*/
/*  TASK No 4:
 	#include<stdio.h>
int main()
{
	int i,j,k;
    // enter the data of 1st matrix like order and rows clms
    int m;
    printf("Enter no of rows 1st matrix: ");
    scanf("%d",&m);
    int n;
    printf("Enter no of columns 1st matrix: ");
    scanf("%d",&n);
    int a[m][n];
     
    printf("\nEnter elements of 1st matrix:\n");
    for(i=0;i<m;i++)
    {
        for( j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    // enter the data of second matrix like order and rows clms
    int p;
    printf("\nEnter no of rows 2nd matrix: ");
    scanf("%d", &p);
    int q;
    printf("Enter no of columns 2nd matrix: ");
    scanf("%d", &q);
    int b[p][q];
    
    printf("\nEnter elements of 2nd matrix:\n");
    for(i=0;i<p;i++)
    {
        for( j=0;j<q;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    // check the condition if multiplication possible
    if(n!=p)
    {
        printf("\nMatrix multiplication NOT possible!\n");
        return 0;
    }

  
else{

    // Resultant matrix matrix 
    int res[m][q];
    
    // multiplication
    for( i=0;i<m;i++)
    {
        for( j=0;j< q;j++)
        {
            res[i][j] =0;
            for( k =0;k<n;k++)
            {
                res[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    // print result
    printf("\nResultant Matrix :\n");
    for( i=0;i<m;i++)
    {
        for( j=0;j<q;j++)
        {
            printf("%d ",res[i][j]);
        }
        printf("\n");
    }
}
    return 0;
}
*/

/*  TASK NO 5
#include<stdio.h>
int main(){
	int matrix[3][3];
printf("enter elemnts; ");
int i,j;
for(i=0; i<3; i++){
	for(j=0; j<3; j++){
		scanf("%d", &matrix[i][j]); }
	}
int maximum = 0;
for(i=0; i<3; i++){
	for(j=0; j<3; j++){
		if(matrix[i][j]>maximum)
		maximum = matrix[i][j];
		
	}
}
	printf("Maximum element in matrix is %d", maximum);
return 0;
}  */

/*  TASK NO 6:
#include<stdio.h>
int main(){
	int m[4][4];
	printf("Enter elements: ");
	int i,j;
	for(i=0; i<4; i++){
		for(j=0; j<4; j++){
			scanf("%d", &m[i][j]);
		}
	}
	
	for(i=0; i<4; i++){
		for(j=0; j<4; j++){
			printf("%d ", m[j][i]);
		}
		printf("\n");
	}
	
	return 0;
}

*/



















          
