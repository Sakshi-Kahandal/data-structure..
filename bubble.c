#include<stdio.h>
void disp(int a[20],int n)
{
	int i;
	printf("\n array element=");
	for(i=0;i<n;i++)
	printf("%d\t",a[i]);
}
   void bubble(int a[20],int n)
   {
   	   int i,t,pass;
	   for(pass=1;pass<n;pass++)
	  	for(i=0;i<n-pass;i++)
	  	{
	  		if(a[i]>a[i+1])
		  {
		  t=a[i];
		  a[i]=a[i+1];
		  a[i+1]=t;
            } 
		  }
		  disp(a,n);
		}
	
		 int main()
		 {
		 	int a[20],i ,n;
		 	printf("enter limit::");
		 	scanf("%d",&n);
		 	printf("enter array element::");
		 	for(i=0;i<n;i++)
		 	 {
		 	 	scanf("%d",&a[i]);
			  }
             bubble(a,n);
			 }
  
