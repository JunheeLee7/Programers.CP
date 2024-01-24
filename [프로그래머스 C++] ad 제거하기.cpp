◈ 문제 설명 링크

https://school.programmers.co.kr/learn/courses/30/lessons/181870

◈ 작성 코드

#include <string>
#include <vector>

using namespace std;

vector<string> solution(vector<string> strArr) 
{
    vector<string> answer;
    for(int i = 0; i < strArr.size(); i++)
    {
        if(strArr[i].find("ad") == string::npos)
        {
            answer.push_back(strArr[i]);
        }
    }
    return answer;
}


