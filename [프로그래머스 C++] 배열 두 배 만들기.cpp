◈ 문제 설명 링크

https://school.programmers.co.kr/learn/courses/30/lessons/120809

◈ 작성 코드

#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> numbers) 
{
    vector<int> answer;
    for(int i = 0; i < numbers.size(); i++)
    {
        int t = numbers[i] * 2;
        answer.push_back(t);
    }
    return answer;
}
