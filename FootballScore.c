#include <stdio.h>

int main(){
	
	int NumberTouchdowns, ExtraPoints, Conversions, FieldGoals, Safeties;
	int FinalScore;

	printf("How many touchdowns: ");
	scanf("%i", &NumberTouchdowns);
	printf("How many extra points: ");
	scanf("%i", &ExtraPoints);
	printf("How many 2-pt conversions: ");
	scanf("%i", &Conversions);
	printf("How many field goals: ");
	scanf("%i", &FieldGoals);
	printf("How many safties: ");
	scanf("%i", &Safeties);

	FinalScore = (NumberTouchdowns * 6) + ExtraPoints + (Conversions * 2) + (FieldGoals * 3) + (Safeties * 2);
	
	printf("Final score: %i\n", FinalScore);

	return 0;
}

