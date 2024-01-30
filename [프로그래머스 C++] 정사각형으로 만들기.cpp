◈ 문제 설명 링크

https://school.programmers.co.kr/learn/courses/30/lessons/181830

◈ 작성 코드

#include <string>
#include <vector>

using namespace std;

vector<vector<int>> solution(vector<vector<int>> arr) 
{
    int l = max(arr.size(),arr[0].size());
    vector<vector<int>> answer(l, vector<int>(l,0));
    for(int i = 0; i < arr.size(); i++)
    {
        for(int j = 0; j < arr[i].size(); j++)
        {
            answer[i][j] = arr[i][j];
        }
    }
    return answer;
}

