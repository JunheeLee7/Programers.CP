◈ 문제 설명 링크

https://school.programmers.co.kr/learn/courses/30/lessons/120845

◈ 작성 코드

#include <string>
#include <vector>

using namespace std;

int solution(vector<int> box, int n) 
{
    int answer = 1;
    for(int i = 0; i < box.size(); i++)
    {
        int e = box[i] / n;
        answer *= e;
    }
    return answer;
}

