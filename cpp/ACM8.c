#include <stdio.h>
char state(int score);
int main()
{
	int score;
	scanf("%d",&score);
	printf("%c",state(score));
}
char state(int score)
{
	int temp=score/10;
	switch(temp)
	{
		case 10:
			return 'A';
			break;
		case 9:
			return 'A';
			break;
		case 8:
			return 'B';
			break;
		case 7:
			return 'C';
			break;
		case 6:
			return 'D';
			break;
		default:
			return 'E';
	}
}
