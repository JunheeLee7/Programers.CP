◈ 문제 설명 링크

https://school.programmers.co.kr/learn/courses/30/lessons/120850

◈ 작성 코드

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(string my_string) 
{
    vector<int> answer;
    string s;
    for(int i = 0; i < my_string.size(); i++)
    {
        if(my_string[i] - '0' >= 0 && my_string[i] - '0' <= 9)
        {
            s += my_string[i];
            int t = stoi(s);
            answer.push_back(t);
            s = "";
        }
    }
    sort(answer.begin(), answer.end());
    return answer;
}

