#include <stdio.h>

int main (void) {

int x, y, n, i;

printf ("\nThis program calculates a control digit, using an ISO 7064 (MOD 11, 10) algorithm, for an arbitrary number of entered digits.\n\n");

printf ("How many digits will you enter? ");
scanf ("%d", &n);

x=10;

for (i=0;i<n;i++) {
	printf ("enter %d. digit: ", i+1);
	scanf ("%d", &y);
	x+=y;
	if (x%=10);
	else x=10;
	x=x*2%11; }

printf ("\nThe control digit is: %d\n\n", (x==1 ? 0 : 11-x));

return (0); }