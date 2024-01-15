◈ 문제 설명 링크

https://school.programmers.co.kr/learn/courses/30/lessons/181913

◈ 작성 코드

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string my_string, vector<vector<int>> queries) 
{
    string answer = my_string;
    for(auto& query : queries)
    {
        reverse(answer.begin() + query[0], answer.begin() + query[1] + 1);
    }
    return answer;
}


