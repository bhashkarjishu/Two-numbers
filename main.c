#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    long int a,b,n,m;
	    scanf("%ld%ld%ld",&a,&b,&n);
	    if(n%2==0)
	    {
	        if(a>b)
	        printf("%ld\n",a/b);
	        else
	        printf("%ld\n",b/a);
	     }
	     else
	     {
	         m=a*2;
	         if(m>b)
	         printf("%ld\n",m/b);
	         else
	         printf("%ld\n",b/m);
	     }
	}
	return 0;
}