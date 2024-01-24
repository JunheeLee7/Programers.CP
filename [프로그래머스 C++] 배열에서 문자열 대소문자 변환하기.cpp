◈ 문제 설명 링크

https://school.programmers.co.kr/learn/courses/30/lessons/181875

◈ 작성 코드

#include <string>
#include <vector>

using namespace std;

vector<string> solution(vector<string> strArr) 
{
    vector<string> answer = strArr;
    for(int i= 0; i < answer.size(); i++)
    {
        if(i % 2 == 0)
        {
            for(int j = 0; j < answer[i].size(); j++)
            {
                answer[i][j] = tolower(answer[i][j]);
            }
        }
        else
        {
            for(int k = 0; k < answer[i].size(); k++)
            {
                answer[i][k] = toupper(answer[i][k]);
            }
        }
    }
    return answer;
}


