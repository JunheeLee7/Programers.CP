◈ 문제 설명 링크

https://school.programmers.co.kr/learn/courses/30/lessons/181912

programmers.co.kr

◈ 작성 코드

#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> intStrs, int k, int s, int l) 
{
    vector<int> answer;
    for(int i = 0; i < intStrs.size(); i++)
    {
        string cash = "";
        for(int j = s; j < s + l; j++)
        {
            cash = cash + intStrs[i][j];
        }
        if(stoi(cash) > k)
        {
            answer.push_back(stoi(cash));
        }
    }
    return answer;
}


