◈ 문제 설명 링크

https://school.programmers.co.kr/learn/courses/30/lessons/120922

◈ 작성 코드

#include <string>
#include <vector>

using namespace std;

int solution(int M, int N) 
{
    int answer = ((M - 1) + ((N - 1) * M));
    return answer;
}

