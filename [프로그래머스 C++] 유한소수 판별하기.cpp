◈ 문제 설명 링크

https://school.programmers.co.kr/learn/courses/30/lessons/120878

◈ 작성 코드

#include <string>
#include <vector>

using namespace std;

int solution(int a, int b) 
{
    int answer = 0;
    while(1)
    {
        if(b % 2 == 0)
        {
            b /= 2;
        }
        else if(b % 5 == 0)
        {
            b /= 5;
        }
        else
        {
            break;
        }
    }
    
    if(b == 1 || a % b == 0)
    {
        answer = 1;
    }
    else
    {
        answer = 2;
    }
    return answer;
}

