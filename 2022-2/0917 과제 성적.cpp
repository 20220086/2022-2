#include <iostream>

using namespace std;

int main()
{
    // �Է�
    int score1, score2, score3 = 0;

    cout << "ù ��° ������ ������ �Է����ּ��� : "; // 1-a
    cin >> score1;
    cout << "�� ��° ������ ������ �Է����ּ��� : "; // 1-b
    cin >> score2;
    cout << "�� ��° ������ ������ �Է����ּ��� : "; // 1-c
    cin >> score3;

    //ó��
    int maxScore, minScore = 0;
    double realScore = 0;

    if (score1 > score2)
    {
        maxScore = score1;
        minScore = score2;
    }
    else
    {
        maxScore = score2;
        minScore = score1;
    }
    if (maxScore > score3)
    {
        if (minScore > score3)
        {
            minScore = score3;
        }
    }
    if (maxScore < score3)
    {
        maxScore = score3;
    }
    realScore = (maxScore + minScore)/2;

    //���
    cout << "���� 1 : " << score1;
    cout << " / ���� 2 : " << score2;
    cout << " / ���� 3 : " << score3 << endl;
    cout << "�ְ� ���� : " << maxScore << endl;
    cout << "���� ���� : " << minScore << endl;
    cout << "���� : " << realScore << endl;

    return 0;
}
