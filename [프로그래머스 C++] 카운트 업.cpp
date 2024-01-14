◈ 문제 설명 링크
https://school.programmers.co.kr/learn/courses/30/lessons/181920

◈ 작성 코드

#include <string>
#include <vector>

using namespace std;

vector<int> solution(int start_num, int end_num) 
{
    vector<int> answer((end_num - start_num) + 1);
    for(int i = 0; i < (end_num - start_num) + 1; i++)
    {
        answer[i] = start_num + i;
    }
    return answer;
}


