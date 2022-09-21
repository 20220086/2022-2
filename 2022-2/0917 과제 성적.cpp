#include <iostream>

using namespace std;

int main()
{
    // 입력
    int score1, score2, score3 = 0;

    cout << "첫 번째 과목의 점수를 입력해주세요 : "; // 1-a
    cin >> score1;
    cout << "두 번째 과목의 점수를 입력해주세요 : "; // 1-b
    cin >> score2;
    cout << "세 번째 과목의 점수를 입력해주세요 : "; // 1-c
    cin >> score3;

    //처리
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

    //출력
    cout << "점수 1 : " << score1;
    cout << " / 점수 2 : " << score2;
    cout << " / 점수 3 : " << score3 << endl;
    cout << "최고 점수 : " << maxScore << endl;
    cout << "최저 점수 : " << minScore << endl;
    cout << "성적 : " << realScore << endl;

    return 0;
}
