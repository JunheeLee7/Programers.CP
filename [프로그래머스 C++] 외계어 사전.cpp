◈ 문제 설명 링크

https://school.programmers.co.kr/learn/courses/30/lessons/120869

◈ 작성 코드

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<string> spell, vector<string> dic) 
{
    int answer = 2;
    int t = 0;
    for(int i = 0; i < dic.size(); i++)
    {
        for(int j = 0; j < spell.size(); j++)
        {
            if(dic[i].find(spell[j]) != string::npos)
            {
                t++;
            }
        }
        if(t >= spell.size())
        {
            answer = 1;
            break;
        }
        t = 0;
    }
    return answer;
}
