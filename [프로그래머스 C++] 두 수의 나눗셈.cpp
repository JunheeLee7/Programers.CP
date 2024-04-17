◈ 문제 설명 링크

https://school.programmers.co.kr/learn/courses/30/lessons/120806

◈ 작성 코드

#include <string>
#include <vector>

using namespace std;

int solution(int num1, int num2) 
{
    int answer = 0;
    int c = num1 * 1000;
    answer = c / num2;
    
    return answer;
}
