◈ 문제 설명 링크

https://school.programmers.co.kr/learn/courses/30/lessons/120854

◈ 작성 코드

#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> strlist) 
{
    vector<int> answer;
    for(int i = 0; i < strlist.size(); i++)
    {
        int t = strlist[i].size();
        answer.push_back(t);
    }
    return answer;
}

