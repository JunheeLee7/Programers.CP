◈ 문제 설명 링크

https://school.programmers.co.kr/learn/courses/30/lessons/120905

◈ 작성 코드

#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n, vector<int> numlist) 
{
    vector<int> answer;
    for(int i = 0; i < numlist.size(); i++)
    {
        if(numlist[i] % n == 0)
        {
            answer.push_back(numlist[i]);
        }
    }
    return answer;
}

