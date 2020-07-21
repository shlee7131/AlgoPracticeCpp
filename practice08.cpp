#include <stdio.h>

//°ýÈ£ ´ëÄª ¿©ºÎ ÆÇ´Ü 

int main()
{
	char a[31];
	scanf("%s",a);
	int flag = 0;
	
	for(int i =0 ; a[i] != '\0';i++)
	{
		
		if (a[i] == '(') flag += 1;
		else flag -= 1;
		if (flag <0) break;
	}
	
	if (flag == 0)
		printf("YES\n");
	else
		printf("NO\n");
	return 0;
}
