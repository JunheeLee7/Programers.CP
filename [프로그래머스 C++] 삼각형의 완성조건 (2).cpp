◈ 문제 설명 링크

https://school.programmers.co.kr/learn/courses/30/lessons/120868

◈ 작성 코드

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> sides) 
{
    int answer = 0;
    sort(sides.begin(), sides.end());
    
    int a = sides[0];
    int b = sides[0] - 1; 
    return answer = a + b;
}

