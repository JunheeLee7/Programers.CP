◈ 문제 설명 링크

https://school.programmers.co.kr/learn/courses/30/lessons/120912

◈ 작성 코드

#include <string>
#include <vector>

using namespace std;

int solution(vector<int> array) 
{
    int answer = 0;
    for(int i = 0; i < array.size(); i++)
    {
        string a = to_string(array[i]);
        for(int j = 0; j < a.size(); j++)
        {
            if(a[j] == '7')
            {
                answer++;
            }
        }
    }
    return answer;
}

