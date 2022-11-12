#include <stdio.h>
int main (){
	int i = 6, x,y,r;
	scanf ("%d",&x);
	scanf ("%d",&y);
	while (i>=0){
		if (i% 2==0)
		++x;
		else
		++y;
		--i;
		}
		r=x+y;
		printf ("%d",r);
		return 0 ;
}
