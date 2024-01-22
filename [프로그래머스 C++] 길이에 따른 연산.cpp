◈ 문제 설명 링크

https://school.programmers.co.kr/learn/courses/30/lessons/181879

◈ 작성 코드

#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) 
{
    int answer = 0;
    int a = 1;
    if(num_list.size() >= 11)
    {
        for(int i = 0; i < num_list.size(); i++)
        {
            answer += num_list[i];
        }
    }
    else if(num_list.size() < 11)
    {
        for(int j = 0; j < num_list.size(); j++)
        {
            a *= num_list[j];
        }
        answer += a;
    }
    return answer;
}
