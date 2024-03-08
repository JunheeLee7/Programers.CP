◈ 문제 설명 링크

https://school.programmers.co.kr/learn/courses/30/lessons/120843

◈ 작성 코드

#include <string>
#include <vector>

using namespace std;

int solution(vector<int> numbers, int k) 
{
    int answer = 0;
    int t = 0;
    int c = 0;
    while(t < k - 1)
    {
        c += 2;
        if(c > numbers.size() - 1)
        {
            c -= (numbers.size());
        }
        t++;
        answer = numbers[c];
    }
    
    return answer;
}

