◈ 문제 설명 링크

https://school.programmers.co.kr/learn/courses/30/lessons/120811

◈ 작성 코드

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> array) 
{
    int answer = 0;
    sort(array.begin(),array.end());
    int a = (array.size() - 1) / 2;
    return answer = array[a];
}

