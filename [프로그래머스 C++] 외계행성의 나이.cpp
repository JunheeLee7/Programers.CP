◈ 문제 설명 링크

https://school.programmers.co.kr/learn/courses/30/lessons/120834

◈ 작성 코드

#include <string>
#include <vector>

using namespace std;

string solution(int age) 
{
    string answer = "";
    vector<string> finds = {"a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "k", "l", "m", "n", "o", "p", "q", "r", "s", "t", "u", "v", "w", "x", "y", "z"};
    
    if(age >= 1 && age < 10)
    {
        answer = finds[age];
    }
    else if(age >= 10 && age < 100)
    {
        int a = age / 10;
        int b = age % 10;
        answer = finds[a] + finds[b];
    }
    else if(age >= 100 && age < 1000)
    {
        int a = age / 100;
        int b = age % 100;
        int c = b / 10;
        int d = b % 10;
        answer = finds[a] + finds[c] + finds[d];
    }
    else
    {
        answer = "baaa";
    }
    
    return answer;
}

