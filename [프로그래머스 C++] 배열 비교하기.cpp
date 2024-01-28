◈ 문제 설명 링크

https://school.programmers.co.kr/learn/courses/30/lessons/181856

◈ 작성 코드

#include <string>
#include <vector>

using namespace std;

int solution(vector<int> arr1, vector<int> arr2) 
{
    int answer = 0;
    int a = 0;
    int b = 0;
    if(arr1.size() == arr2.size())
    {
        for(int i = 0; i < arr1.size(); i++)
        {
            a += arr1[i];
        }
        
        for(int j = 0; j < arr2.size(); j++)
        {
            b += arr2[j];
        }
    }
    if(arr1.size() > arr2.size() || a > b)
    {
        answer = 1;
    }
    else if(arr1.size() < arr2.size() || a < b)
    {
        answer = -1;
    }
    else if(arr1.size() == arr2.size() && a == b)
    {
        answer = 0;
    }
    return answer;
}
