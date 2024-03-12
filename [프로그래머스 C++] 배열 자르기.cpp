◈ 문제 설명 링크

https://school.programmers.co.kr/learn/courses/30/lessons/120833

◈ 작성 코드

#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> numbers, int num1, int num2) 
{
    vector<int> answer;
    for(int i = num1; i <= num2; i++)
    {
        answer.push_back(numbers[i]);
    }
    return answer;
}

