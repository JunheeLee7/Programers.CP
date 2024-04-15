◈ 문제 설명 링크

https://school.programmers.co.kr/learn/courses/30/lessons/120807

◈ 작성 코드

#include <string>
#include <vector>

using namespace std;

int solution(int num1, int num2) 
{
    int answer = 0;
    if(num1 >= num2 && num1 < num2 + 1) // num1 == num2
    {
        answer = 1;
    }
    else
    {
        answer = -1;
    }
    return answer;
}

