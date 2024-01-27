◈ 문제 설명 링크

https://school.programmers.co.kr/learn/courses/30/lessons/181859

◈ 작성 코드

#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) 
{
    vector<int> answer;
    for(int i = 0; i < arr.size(); ++i)
    {
        if(answer.size() == 0)
        {
            answer.push_back(arr[i]);
        }
        else if(answer[answer.size()-1] != arr[i])
        {
            answer.push_back(arr[i]);
        }
        else if(answer[answer.size()-1] == arr[i])
        {
            answer.erase(answer.begin() + answer.size() - 1);
        }
    }
    if(answer.size() == 0)
    {
        answer.push_back(-1);
    }
    return answer;
}


