#include "../main.h"

int main(void)
{
	int l1,l2,l3,l4,l5,l6, n3,n4,n5,n6;
	n3= -3456;
	n4= 3456;
	n5 =INT_MAX;
	n6= INT_MIN;

	l1=printf("%d\n",n3);	
	l2=printf("%d\n",n4);
	l3=printf("%d\n",n5);
	l4=printf("%d\n",n6);
	printf("%d\t%d\t%d/t%d\n",l1,l2,l3,l4);
	l1=_printf("%d\n",n3);	
	l2=_printf("%d\n",n4);
	l3=_printf("%d\n",n5);
	l4=_printf("%d\n",n6);
	_printf("%d\t%d\t%d\t%d\n",l1,l2,l3,l4);

	n3 = 1, n4 = 100001, n5 = UINT_MAX, n6 = INT_MIN;
	l1=_printf("%b\n",n3);	
	l2=_printf("%b\n",n4);
	l3=_printf("%b + %b = %b\n",n4,n3,n4 + n3);
	l4=_printf("%b\n",n5);
	l5=_printf("%b\n",n6);
	l6=_printf("%b byts is in %b byts\n", 1, 1024);
	_printf("%d\t%d\t%d\t%d\t%d\t%d\n",l1,l2,l3,l4,l5,l6);


	return (0);
}
