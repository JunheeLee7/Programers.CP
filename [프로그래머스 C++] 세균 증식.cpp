◈ 문제 설명 링크

https://school.programmers.co.kr/learn/courses/30/lessons/120910

◈ 작성 코드

#include <string>
#include <vector>

using namespace std;

int solution(int n, int t) 
{
    int answer = n;
    for(int i = 0; i < t; i++)
    {
        answer = answer * 2;
    }
    return answer;
}

