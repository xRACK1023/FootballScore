#include "FootballScore.h"
#include <iostream>

FootballScore::FootballScore()
{
	finalScore = 0;
	touchdowns = 0;
	extraPoints = 0;
	twoPoints = 0;
	fieldGoals = 0;
	safeties = 0;
}

void FootballScore::setTouchdowns(unsigned int &x)
{
	while (x) {
		try {
			touchdowns = x > 0 ? x : 0;
		}
		catch (const std::invalid_argument& e) {
			std::cout << e.what() << "\n";
		}
		catch (const std::out_of_range& e) {
			std::cout << e.what() << "\n";
		}
	}
}

void FootballScore::setExtraPoints(unsigned int &x)
{
	while (x) {
		try {
			extraPoints = x > 0 ? x : 0;
		}
		catch (const std::invalid_argument& e) {
			std::cout << e.what() << "\n";
		}
		catch (const std::out_of_range& e) {
			std::cout << e.what() << "\n";
		}
	}
}

void FootballScore::setTwoPointConversion(unsigned int &x)
{	
	while (x) {
		try {
			twoPoints = x > 0 ? x : 0;
		}
		catch (const std::invalid_argument& e) {
			std::cout << e.what() << "\n";
		}
		catch (const std::out_of_range& e) {
			std::cout << e.what() << "\n";
		}
	}
}

void FootballScore::setFieldGoals(unsigned int &x)
{	
	while (x) {
		try {
			fieldGoals = x > 0 ? x : 0;
		}
		catch (const std::invalid_argument& e) {
			std::cout << e.what() << "\n";
		}
		catch (const std::out_of_range& e) {
			std::cout << e.what() << "\n";
		}
	}
}

void FootballScore::setSafeties(unsigned int &x)
{	
	while (x) {
		try {
			safeties = x > 0 ? x : 0;
		}
		catch (const std::invalid_argument& e) {
			std::cout << e.what() << "\n";
		}
		catch (const std::out_of_range& e) {
			std::cout << e.what() << "\n";
		}
	}
}

int FootballScore::getFinalScore()
{
	calculateFinalScore;
	return finalScore;
}

FootballScore::~FootballScore(void)
{
}

void FootballScore::calculateFinalScore()
{
	finalScore = (TOUCHDOWN_WORTH * touchdowns) + (EXTRA_POINT_WORTH * extraPoints) + (TWO_POINT_WORTH * twoPoints) + (FIELD_GOAL_WORTH * fieldGoals) + (SAFETY_WORTH * safeties);
}
