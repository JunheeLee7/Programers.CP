◈ 문제 설명 링크

https://school.programmers.co.kr/learn/courses/30/lessons/120896

◈ 작성 코드

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string s) 
{
    sort(s.begin(),s.end());
    string answer;
    int ace;
    for(int i = 0; i < s.size(); i++)
    {
        ace = count(s.begin(), s.end(), s[i]);
        if(ace < 2)
        {
            answer.push_back(s[i]);
        }
    }
    return answer;
}
