//��� = (1 + ����)
//�¼� = ���^�Ⱓ
//�̷�_��ġ = ������_��ġ �� �¼�
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
	invest = getInput("���� �ݾ� : ");
	rate = getInput("�ų� ���� : ");
	term = getInput("�� �� : ");
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
	cout << endl << "���� ����" << endl;
	cout << "���� �ݾ� : " << fixed << setprecision(2) << invest << endl;
	cout << "����" << rate << fixed << setprecision(2);
	cout << "% �� ����" << endl;
	cout << "�Ⱓ : " << term << "��" << endl;
}

void printResult(double multiplier, double futureValue)
{
	cout << "������ �¼� = " << fixed << setprecision(8);
	cout << multiplier << endl;
	cout << "�̷� ��ġ = " << fixed << setprecision(2);
	cout << futureValue << endl;
}