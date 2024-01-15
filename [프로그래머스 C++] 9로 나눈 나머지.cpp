◈ 문제 설명 링크

https://school.programmers.co.kr/learn/courses/30/lessons/181914

◈ 작성 코드

#include <string>
#include <vector>

using namespace std;

int solution(string number) 
{
    int answer = 0;
    for(int i = 0; i < number.size(); i++)
    {
        answer += number[i] - '0';
    }
    answer %= 9;
    return answer;
}


