◈ 문제 설명 링크

https://school.programmers.co.kr/learn/courses/30/lessons/120897

◈ 작성 코드

#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n) 
{
    vector<int> answer;
    for(int i = 1; i < n + 1; i ++)
    {
        if(n % i == 0)
        {
            answer.push_back(i);
        }
    }
    return answer;
}

