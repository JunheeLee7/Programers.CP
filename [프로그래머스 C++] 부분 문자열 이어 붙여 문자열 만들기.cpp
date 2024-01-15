◈ 문제 설명 링크

https://school.programmers.co.kr/learn/courses/30/lessons/181911

◈ 작성 코드

#include <string>
#include <vector>

using namespace std;

string solution(vector<string> my_strings, vector<vector<int>> parts) 
{
    string answer = "";
    for(int i = 0; i < parts.size(); i++)
    {
        int a = parts[i][0];
        int b = parts[i][1];
        for(int j = a; j < b+1; j++)
        {
            answer += my_strings[i][j];
        }
    }
    return answer;
}
