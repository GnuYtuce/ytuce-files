// MATRIX IN FUNCTION
#include <stdio.h>
int toplaMatv1(int **,int,int);
int toplaMatv2 (int [][3], int, int);
int toplaMatv2ForMat2 (int [][50], int, int);
int main()
{
	int mat[2][3]={{0,1,2},{3,4,5}};
	printf("toplamv1:%d\n",toplaMatv1(mat,2,3));
	printf("toplamv2:%d\n",toplaMatv2(mat,2,3));
	
	int mat2[50][50],i,j,n,m;
	printf("ikinci matrisin satir ve sutun sayisini veriniz\n");
	scanf("%d %d",&n,&m);
	printf("elemanlari veriniz\n");
	for (i=0;i<n;i++)
		for (j=0;j<m;j++)
			scanf("%d",&mat2[i][j]);
    printf("toplamv2:%d\n",toplaMatv2ForMat2(mat2,n,m));
			
}


int toplaMatv1 (int **mat, int dim1, int dim2)
{
	int topla=0,i,j;
	for (i=0;i<dim1;i++)
		for (j=0;j<dim2;j++)
			topla=topla+*((int *)mat+i*dim2+j);
			//topla=topla+*(*(mat+i)+j);  illegal kullanim boyutlari bilmeden scale yapilamaz
	return topla;	
}

int toplaMatv2 (int mat[][3], int dim1, int dim2)
{
	int topla=0,i,j;
	for (i=0;i<dim1;i++)
		for (j=0;j<dim2;j++)
			topla=topla+mat[i][j];
			
	printf("eleman 1-1:%d\n",*((int *)mat+1*dim2+1)); //legal
	return topla;	
}


int toplaMatv2ForMat2 (int mat[][50], int dim1, int dim2)
{
	int topla=0,i,j;
	for (i=0;i<dim1;i++)
		for (j=0;j<dim2;j++)
			topla=topla+mat[i][j];
			
	return topla;	
}
