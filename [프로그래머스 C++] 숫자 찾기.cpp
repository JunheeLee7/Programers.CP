◈ 문제 설명 링크

https://school.programmers.co.kr/learn/courses/30/lessons/120904

◈ 작성 코드

#include <string>
#include <vector>

using namespace std;

int solution(int num, int k) 
{
    int answer = -1;
    string nums = to_string(num);

    for(int i = 0; i < nums.size(); i++)
    {
        if(nums[i] - '0' == k)
        {
            answer = i + 1;
            break;
        }
    }
    return answer;
}

