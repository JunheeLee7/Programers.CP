◈ 문제 설명 링크

https://school.programmers.co.kr/learn/courses/30/lessons/181893

◈ 작성 코드

#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<int> query) 
{
    vector<int> answer;
    for(int i = 0; i < query.size(); i++)
    {
        if(i% 2 == 0)
        {
            arr.erase(arr.begin() + query[i] + 1, arr.end());
        }
        else
        {
            arr.erase(arr.begin(), arr.begin() + query[i]);
        }
    }
    answer = arr;
    return answer;
}


