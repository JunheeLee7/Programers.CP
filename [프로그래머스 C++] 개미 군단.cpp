◈ 문제 설명 링크

https://school.programmers.co.kr/learn/courses/30/lessons/120837

◈ 작성 코드

#include <string>
#include <vector>

using namespace std;

int solution(int hp) 
{
    int answer = 0;
    if(hp > 5)
    {
        while(hp >= 5)
        {
            hp -= 5;
            answer++;
        }
    }
    
    if(hp >= 3 && hp < 5)
    {
        hp -=3;
        answer++;
    }
    if(hp > 0)
    {
        while(hp > 0)
        {
            hp -= 1;
            answer++;
        }
    }
    return answer;
}

