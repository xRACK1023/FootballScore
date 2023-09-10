#include <stdio.h>

int main(){
	
	int NumberTouchdowns, ExtraPoints, Conversions, FieldGoals, Safties;
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
	scanf("%i", &Safties);

	FinalScore= (NumberTouchdowns * 6) + ExtraPoints + (Conversions * 2) + (FieldGoals * 3) + (Safties * 2);
	
	printf("Final score: %i\n", FinalScore);

	return 0;
}

