◈ 문제 설명 링크

https://school.programmers.co.kr/learn/courses/30/lessons/120817

◈ 작성 코드

#include <string>
#include <vector>

using namespace std;

double solution(vector<int> numbers) 
{
    double answer = 0;
    double a = 0;
    for(int i = 0; i < numbers.size(); i++)
    {
        a += numbers[i];
    }
    answer = a / numbers.size();
    return answer;
}

