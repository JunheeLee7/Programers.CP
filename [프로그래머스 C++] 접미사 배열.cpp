◈ 문제 설명 링크

https://school.programmers.co.kr/learn/courses/30/lessons/181909

◈ 작성 코드

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<string> solution(string my_string) 
{
    vector<string> answer;
    for(int i = my_string.size() - 1; i >= 0; i--)
    {
        string a = "";
        
        for(int j = i; j < my_string.size(); j++)
        {
            a += my_string[j];
        }
        answer.push_back(a);
    }
    sort(answer.begin(), answer.end());
    return answer;
}
