◈ 문제 설명 링크

https://school.programmers.co.kr/learn/courses/30/lessons/181869

◈ 작성 코드

#include <string>
#include <vector>

using namespace std;

vector<string> solution(string my_string) 
{
    vector<string> answer;
    string ans = "";
    for(int i = 0; i < my_string.size(); i++)
    {
        if(my_string[i] == ' ')
        {
            answer.push_back(ans);
            ans = "";
        }
        else
        {
            ans.push_back(my_string[i]);
        }
    }
    answer.push_back(ans);
    return answer;
}
