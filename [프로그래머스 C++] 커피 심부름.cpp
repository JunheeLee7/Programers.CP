◈ 문제 설명 링크

https://school.programmers.co.kr/learn/courses/30/lessons/181837

◈ 작성 코드

#include <string>
#include <vector>

using namespace std;

int solution(vector<string> order) 
{
    int answer = 0;
    for(int i = 0; i < order.size(); i++)
    {
        if(order[i].find("latte") != string::npos)
        {
            answer += 5000;
        }
        else
        {
            answer += 4500;
        }
    }
    return answer;
}

