◈ 문제 설명 링크

https://school.programmers.co.kr/learn/courses/30/lessons/120829

◈ 작성 코드

#include <string>
#include <vector>

using namespace std;

int solution(int angle) 
{
    int answer = 0;
    if(angle < 90)
    {
        answer = 1;
    }
    else if(angle < 91)
    {
        answer = 2;
    }
    else if(angle > 90 && angle < 180)
    {
        answer = 3;
    }
    else
    {
        answer = 4;
    }
    return answer;
}

