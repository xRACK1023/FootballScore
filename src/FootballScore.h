#ifndef FOOTBALLSCORE_FOOTBALLSCORE_H
#define FOOTBALLSCORE_FOOTBALLSCORE_H


class FootballScore{

public:
	FootballScore();
	void setTouchdowns(unsigned int&);
	void setExtraPoints(unsigned int&);
	void setTwoPointConversion(unsigned int&);
	void setFieldGoals(unsigned int&);
	void setSafeties(unsigned int&);
	int getFinalScore()
	~FootballScore(void);
private:
	const int TOUCHDOWN_WORTH = 6;
	const int EXTRA_POINT_WORTH = 1;
	const int TWO_POINT_WORTH = 2;
	const int FIELD_GOAL_WORTH = 3;
	const int SAFETY_WORTH = 2;
	unsigned int finalScore, touchdowns, extraPoints, twoPoints, fieldGoals, safeties;
	void calculateFinalScore();
};

#endif //FOOTBALLSCORE_FOOTBALLSCORE_H
