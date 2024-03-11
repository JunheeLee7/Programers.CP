◈ 문제 설명 링크

https://school.programmers.co.kr/learn/courses/30/lessons/120841

◈ 작성 코드

#include <string>
#include <vector>

using namespace std;

int solution(vector<int> dot) 
{
    int answer = 0;
    if(dot[0] > 0)
    {
        if(dot[1] > 0)
        {
            answer = 1;
        }
        else
        {
            answer = 4;
        }
    }
    else
    {
        if(dot[1] > 0)
        {
            answer = 2;
        }
        else
        {
            answer = 3;
        }
    }
    return answer;
}

