◈ 문제 설명 링크

https://school.programmers.co.kr/learn/courses/30/lessons/120821

◈ 작성 코드

#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> num_list) 
{
    vector<int> answer;
    for(int i = num_list.size() - 1; i >= 0; i--)
    {
        answer.push_back(num_list[i]);
    }
    return answer;
}

