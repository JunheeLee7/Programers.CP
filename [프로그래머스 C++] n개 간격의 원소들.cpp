◈ 문제 설명 링크

https://school.programmers.co.kr/learn/courses/30/lessons/181888

◈ 작성 코드

#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> num_list, int n) 
{
    vector<int> answer;
    for(int i = 0; i < num_list.size(); i += n)
    {
        answer.push_back(num_list[i]);
    }
    return answer;
}
