◈ 문제 설명 링크

https://school.programmers.co.kr/learn/courses/30/lessons/181839

◈ 작성 코드

#include <string>
#include <vector>

using namespace std;

int solution(int a, int b) 
{
    int answer = 0;
    if(a % 2 != 0 && b % 2 != 0)    // 홀홀
    {
        answer = (a*a) + (b*b);
    }
    else if((a % 2 != 0 && b % 2 == 0) || (a % 2 == 0 && b % 2 != 0))   // 홀짝 / 짝홀
    {
        answer = 2 * (a + b);
    }
    else    // 짝짝
    {
        answer = a - b;
    }
    
    if(answer < 0)
    {
        answer *= -1;
    }
    return answer;
}

