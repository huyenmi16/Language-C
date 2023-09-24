#include <stdio.h>
 #include <math.h> 

int main()
 { 
   float a,b,c; 
   scanf("%f%f%f",&a,&b,&c);
   if(a!=0)
   { 
    	float d=(b*b)-(4*a*c); 
  		if(d>0) 
		{
	   		float x1=(((-b)+sqrt(d))/(2*a)); 
			float x2=(((-b)-sqrt(d))/(2*a));
			printf("%.2f %.2f",x1,x2);
   		} 
  		 else if (d==0) 
		{ 
			printf("%.2f",-b/2*a);
    	}
		 else 
	
		{
	 		 printf("NO"); 
		} 
	} 
	else 
	{ 
		if(b!=0)
	 	{
		  	 printf("%.2f",-c/b);
		} 
		else
		{ 
			printf("NO");
			
	    }
	 }
 }