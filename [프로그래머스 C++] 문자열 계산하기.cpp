◈ 문제 설명 링크

https://school.programmers.co.kr/learn/courses/30/lessons/120902

◈ 작성 코드

#include <string>
#include <vector>
#include <sstream>

using namespace std;

int solution(string my_string) 
{
    int answer = 0;
    stringstream ss;
    ss.str(my_string);
    ss >> answer;       // 여기서 answer에 ss의 초기값을 넣기
    
    int a;
    char pm;
    while(ss >> pm >> a)
    {
        if(pm == '+')
        {
            answer += a;
        }
        else
        {
            answer -= a;
        }
    }
    return answer;
}

