◈ 문제 설명 링크

https://school.programmers.co.kr/learn/courses/30/lessons/120907

◈ 작성 코드

#include <string>
#include <vector>
#include <sstream>

using namespace std;

vector<string> solution(vector<string> quiz) 
{
    vector<string> answer;
    for(int i = 0; i < quiz.size(); i++)
    {
        int a,b,c;
        char pm, re;
        
        stringstream ss;
        ss.str(quiz[i]);
        ss >> a >> pm >> b >> re >> c;
        
        if(pm == '+')
        {
            if(a + b == c)
            {
                answer.push_back("O");
            }
            else
            {
                answer.push_back("X");
            }
        }
        else
        {
            if(a - b == c)
            {
                answer.push_back("O");
            }
            else
            {
                answer.push_back("X");
            }
        }
        
    }
    return answer;
}

