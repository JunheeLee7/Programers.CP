◈ 문제 설명 링크

https://school.programmers.co.kr/learn/courses/30/lessons/120903

◈ 작성 코드

#include <string>
#include <vector>

using namespace std;

int solution(vector<string> s1, vector<string> s2) 
{
    int answer = 0;
    for(int i = 0; i < s1.size(); i++)
    {
        for(int j = 0; j < s2.size(); j++)
        {
            if(s1[i] == s2[j])
            {
                answer++;
            }
        }
    }
    return answer;
}
