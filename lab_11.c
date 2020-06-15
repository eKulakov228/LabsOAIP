#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

const int n=3;
double a[3][3] ={{0.66,-1.44, -0.18},
         		{0.48, -0.24, 0.37},
        		{0.86, 0.43, 0.64}};
 
double b[3]={1.83, -0.84, 0.64};
 
int main()
{
	int i,j,e;
 
	double x[3], c[3]={0,0,0};
	printf("\n");
 
	for(e=1;e<8;e++)
	{
		printf("%d : ", e);
 		for(i=0;i<n;i++)
  		{   
	  		x[i]=0;
      		for(j=0;j<n;j++)
			{
    			if(i!=j)
    			x[i]+=a[i][j]*c[j];
   			}
   		c[i]=(b[i]-x[i])/a[i][i];
   		printf("%f ", c[i]);
  		}
  		printf("\n\n");
}
 
return 0;
}
