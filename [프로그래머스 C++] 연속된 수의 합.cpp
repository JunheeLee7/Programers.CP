◈ 문제 설명 링크

https://school.programmers.co.kr/learn/courses/30/lessons/120923

◈ 작성 코드

#include <string>
#include <vector>

using namespace std;

vector<int> solution(int num, int total) 
{
    vector<int> answer;
    int ace = 0;
    int beta = 0;
    int act = 0;
    for(int i = 0; i < num; i++)
    {
        ace++;
        beta += i;
    }
    
    act = (total - beta) / ace;
    
    for(int j = 0; j < num; j++)
    {
        answer.push_back(act + j);
    }
    return answer;
}
