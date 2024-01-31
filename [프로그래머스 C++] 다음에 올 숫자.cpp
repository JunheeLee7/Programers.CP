◈ 문제 설명 링크

https://school.programmers.co.kr/learn/courses/30/lessons/120924

◈ 작성 코드

#include <string>
#include <vector>

using namespace std;

int solution(vector<int> common) 
{
    int answer = 0;
    int a = common[0];
    int b = common[1];
    int c = common[2];
    if(c - b == b - a)
    {
        int t = c / b;
        answer = common[common.size() - 1] + t;
    }
    else
    {
        int k = c / b;
        answer = common[common.size() - 1] * k;
    }
    return answer;
}
