#include <stdio.h>

int  matprint(float a[][10],int n){
  for (int i = 0;i < n; i++) {
     printf("\n");
     for (int j = 0;j < n; j++) {
        printf("%f ", a[i][j]);
     }
  }
}
int  matread(float a[][10]){
  int i,j,n;
  printf("Enter the order of the Matrix : ");
  scanf("%d", &n);
  printf("Enter the elements of the %dX%d Matrix row-wise: \n", n, n);
  for (i = 0;i < n; i++) {
     for (j = 0;j < n; j++) {
        scanf("%f", &a[i][j]);
     }
  }
  return n;
}

void matmul(float a[][10], float b[][10], float c[][10], int n){
  for (int i = 0;i < n; i++) {
     for (int j = 0;j < n; j++) {
        for (int k=0; k< n ; k++ )
		c[i][j]+=a[i][k]*b[k][j];
     }
  }
}

int main(){
	float a[10][10],b[10][10],c[10][10];
	int n;
	n=matread(a);
	n=matread(b);
	matmul(a,b,c,n);
	matprint(c,n);
}
