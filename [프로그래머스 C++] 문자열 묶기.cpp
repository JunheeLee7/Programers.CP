◈ 문제 설명 링크

https://school.programmers.co.kr/learn/courses/30/lessons/181855

◈ 작성 코드

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int intArr[30];

int solution(vector<string> strArr) 
{
    int answer = 0;
    for(int i = 0; i < strArr.size(); i++)
    {
        int a = strArr[i].size();
        intArr[a]++;
        answer = max(answer,intArr[a]);
    }
    
    return answer;
}


