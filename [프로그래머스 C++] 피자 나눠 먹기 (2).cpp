◈ 문제 설명 링크

https://school.programmers.co.kr/learn/courses/30/lessons/120815

◈ 작성 코드

#include <string>
#include <vector>

using namespace std;

int solution(int n) 
{
    int answer = 1;
    while(answer * 6 % n != 0)
    {
        answer++;
    }
    return answer;
}

