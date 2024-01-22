◈ 문제 설명 링크

https://school.programmers.co.kr/learn/courses/30/lessons/181883

◈ 작성 코드

#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> queries) 
{
    vector<int> answer;
    for(int i = 0; i < queries.size(); i++)
    {
        for(int j = queries[i][0]; j <= queries[i][1]; j++)
        {
            arr[j]++;
        }
    }
    return arr;
}


