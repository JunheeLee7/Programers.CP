◈ 문제 설명 링크

https://school.programmers.co.kr/learn/courses/30/lessons/120842

◈ 작성 코드

#include <string>
#include <vector>

using namespace std;

vector<vector<int>> solution(vector<int> num_list, int n) 
{
    vector<vector<int>> answer;
    vector<int> t;
    for(int i = 0; i < num_list.size(); i+= n)
    {
        for(int j = i; j < i + n; j++)
        {
            t.push_back(num_list[j]);
        }
        answer.push_back(t);
        t = {};
    }
    return answer;
}

