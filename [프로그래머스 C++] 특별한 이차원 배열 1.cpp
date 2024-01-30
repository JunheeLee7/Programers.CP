◈ 문제 설명 링크

https://school.programmers.co.kr/learn/courses/30/lessons/181833

◈ 작성 코드

#include <string>
#include <vector>

using namespace std;

vector<vector<int>> solution(int n) 
{
    vector<vector<int>> answer(n, vector<int>(n,0));
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(i == j)
            {
                answer[i][j] = 1;
            }
            else
            {
                answer[i][j] = 0;
            }
        }
    }
    return answer;
}

