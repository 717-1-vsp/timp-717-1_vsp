#include <stdio.h>

int main(){
int n, a, res;
scanf("%d", &n);
for (int i = 0; i < n; i++)
{
	scanf("%d", &a);
	if (i == 0){
		res = a;	
	} else {
		res +=a;
	}
}
printf("%d\n", res);
return 0;
}

