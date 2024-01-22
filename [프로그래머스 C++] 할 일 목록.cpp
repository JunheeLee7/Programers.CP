◈ 문제 설명 링크

https://school.programmers.co.kr/learn/courses/30/lessons/181885

◈ 작성 코드

#include <string>
#include <vector>

using namespace std;

vector<string> solution(vector<string> todo_list, vector<bool> finished) 
{
    vector<string> answer;
    for(int i = 0; i < finished.size(); i++)
    {
        if(finished[i] == 0)
        {
            answer.push_back(todo_list[i]);
        }
    }
    return answer;
}


