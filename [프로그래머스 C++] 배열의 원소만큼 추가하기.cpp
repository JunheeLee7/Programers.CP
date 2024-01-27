◈ 문제 설명 링크

https://school.programmers.co.kr/learn/courses/30/lessons/181861

◈ 작성 코드

#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) 
{
    vector<int> answer;
    int a1 = 0;
    for(int i = 0; i < arr.size(); i++)
    {
        a1 = arr[i];
        for(int j = 0; j < a1; j++)
        {
            answer.push_back(arr[i]);
        }
    }
    return answer;
}


