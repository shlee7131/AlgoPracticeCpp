#include <stdio.h>
//ANAGRAM

int main()
{
	char word[101];
	char comp[101];
	int alphabet[52] = {0}; // 소문자 + 대문자 26 + 26 = 52
	
	
	scanf("%s",word);
	scanf("%s",comp);
	// 알파벳 별 숫자 더하기  
	for(int i = 0 ; word[i] != '\0';i++)
	{
		if(65 <= word[i] && word[i]<=90)
		{
			alphabet[word[i]-65] += 1;
		}
		else
		{
			alphabet[word[i]-97+26] += 1; // 대문자 26개 다음에 소문자 시작 
		}
	}
	// 알파벳 별 숫자 빼기 
	for(int i = 0 ; comp[i] != '\0';i++)
	{
		if(65 <= comp[i] && comp[i]<=90)
		{
			alphabet[comp[i]-65] -= 1;
		}
		else
		{
			alphabet[comp[i]-97+26] -= 1; // 대문자 26개 다음에 소문자 시작 
		}
	}
	
	for(int i = 0 ; i < 42; i++){
		if(alphabet[i] < 0) 
		{
			printf("NO");
			return 0;
		}
	}
	printf("YES");	
	return 0;
} 

