◈ 문제 설명 링크

https://school.programmers.co.kr/learn/courses/30/lessons/86051

◈ 작성 코드

#include <string>
#include <vector>

using namespace std;

int solution(vector<int> numbers) 
{
    int answer = -1;
    int t = 45;
    int a = 0;
    for(int i = 0; i < numbers.size(); i++)
    {
        a += numbers[i];
    }
    return answer = t - a;
}

