//요소 = (1 + 이율)
//승수 = 요소^기간
//미래_가치 = 투자한_가치 × 승수
#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
using namespace std;

void input(double& invest, double& rate, double& term);
void process(double invest, double rate, double term,
	double& multiplier, double& futureValue);
void output(double invest, double rate, double term,
	double& multiplier, double& futureValue);

double getInput(string message);
double findMultiplier(double rate, double period);
void printData(double invest, double rate, double term);
void printResult(double multiplier, double value);

int main()
{
	double invest, rate, term;
	double multiplier, futureValue;
	input(invest, rate, term);
	process(invest, rate, term, multiplier, futureValue);
	output(invest, rate, term, multiplier, futureValue);
	return 0;
}
void input(double& invest, double& rate, double& term)
{
	invest = getInput("투자 금액 : ");
	rate = getInput("매년 이율 : ");
	term = getInput("년 수 : ");
}

void process(double invest, double rate, double term,
	double& multiplier, double& futureValue)
{
	multiplier = findMultiplier(rate, term);
	futureValue = multiplier * invest;
}

void output(double invest, double rate, double term,
	double& multiplier, double& futureValue)
{
	printData(invest, rate, term);
	printResult(multiplier, futureValue);
}

double getInput(string message)
{
	double input;
	do
	{
		cout << message;
		cin >> input;
	} while (input < 0.0);
	return input;
}

double findMultiplier(double rate, double term)
{
	double factor = 1 + rate / 100;
	return pow(factor, term);
}

void printData(double invest, double rate, double term)
{
	cout << endl << "투자 정보" << endl;
	cout << "투자 금액 : " << fixed << setprecision(2) << invest << endl;
	cout << "이율" << rate << fixed << setprecision(2);
	cout << "% 연 마다" << endl;
	cout << "기간 : " << term << "년" << endl;
}

void printResult(double multiplier, double futureValue)
{
	cout << "투자의 승수 = " << fixed << setprecision(8);
	cout << multiplier << endl;
	cout << "미래 가치 = " << fixed << setprecision(2);
	cout << futureValue << endl;
}