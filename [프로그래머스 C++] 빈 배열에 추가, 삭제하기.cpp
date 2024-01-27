◈ 문제 설명 링크

https://school.programmers.co.kr/learn/courses/30/lessons/181860

◈ 작성 코드

#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<bool> flag) 
{
    vector<int> answer;
    for(int i = 0; i < arr.size(); i++)
    {
        if(flag[i] == true)
        {
            for(int j = 0; j < arr[i] * 2; j++)
            {
                answer.push_back(arr[i]);
            }
        }
        else if(flag[i] == false)
        {
            answer.erase(answer.end() - arr[i], answer.end());
        }
    }
    return answer;
}


