#include<stdio.h>
#include<stdlib.h>

#define SIZE 7

int main(void)
{
	int face, roll;
	int freqency[SIZE] = { 0 };

	srand(time(NULL));

	for (roll = 1; roll <= 6000; roll++)
	{
		face = 1 + rand() % 6;
		++freqency[face];
	}

	printf("%s%17\n", "Face", "Freqency");

	for (face = 1; face < SIZE; face++)
	{
		printf("%4d%17d\n", face, freqency[face]);
	}
	system("pause");
	return 0;
}