#include <stdio.h>

int count[10];
int main (void)
{
	int i,n;
	scanf ("%d",&n);
	if (n==0 || n==1) printf ("-1");
	else {
		for (i=9;i>=0;i++) {
			if (i==1) {
				printf ("-1\n");
				return 0;
			}
			if (n%i == 0) {
				count[i]=n/i;
				n/=i;
			}

		}
	}

}
