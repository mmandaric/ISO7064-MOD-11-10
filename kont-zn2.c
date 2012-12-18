#include <stdio.h>
#include <stdlib.h>

int main (void) {

int x=10, y, n, i;
int* a;

printf ("\nThis program uses an ISO 7064 (MOD 11, 10) algorithm, for an arbitrary number of entered digits.\n\n");

printf ("How many digits will you enter? ");
scanf ("%d", &n);

a=(int*)malloc(n*sizeof(int));

for (i=0;i<n-1;i++) {
	printf ("enter %d. digit: ", i+1);
	scanf ("%d", &a[i]);
	x+=a[i];
	if (x%=10);
	else x=10;
	x=x*2%11; }

y=(x==1 ? 0 : 11-x);

printf ("enter %d. digit: ", i+1);
scanf ("%d", &a[i]);
x+=a[i];
if (x%=10);
else x=10;
x=x*2%11;

if (a[i]==y) printf ("\nThe last digit of your string already satisfies an ISO 7064 (MOD 11, 10) algorithm. However...\n\n");

printf ("The entire string with its new control digit is:\n");

for (i=0;i<n;i++)
	printf ("%d", a[i]);
printf ("%d\n\n", (x==1 ? 0 : 11-x));

free(a);

return (0); }