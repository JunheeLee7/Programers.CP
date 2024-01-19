◈ 문제 설명 링크

https://school.programmers.co.kr/learn/courses/30/lessons/181895

◈ 작성 코드

#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> intervals) 
{
    vector<int> answer;
    for(int i = intervals[0][0]; i < intervals[0][1] + 1; i++)
    {
        answer.push_back(arr[i]);
    }
    
    for(int j = intervals[1][0]; j < intervals[1][1] + 1; j++)
    {
        answer.push_back(arr[j]);
    }
        
    return answer;
}
