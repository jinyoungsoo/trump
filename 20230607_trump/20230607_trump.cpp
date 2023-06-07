// 20230607_trump.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.

#include <iostream>
#include <time.h>
#include <Windows.h>



void DescShuffle();
void CardPatterntest();

int main()
{
    DescShuffle();
    CardPatterntest();
}

void CardPatterntest()
{
    ////쓸 수 있는 인원 사용하기
    //char CardPattern[4][8] = { "spade", "clover", "heart", "Diamond" };
   

    ////이거 쓸 수 있나?
    //char cardPattern_spade[8] = "spade";
    //char cardPattern_Diamond[8] = "Diamond";
    //char cardPattern_Heart[8] = "Heart";
    //char cardPattern_Clover[8] = "Clover";

    //

    //std::cout << CardPattern[0] << std::endl;
}


char trump1[4][8] = {"Spade", "Diamond", "Heart", "Clover"};
char trump2[13] = { 'A', '2', '3', '4', '5', '6', '7', '8', '9', 'T', 'J', 'Q', 'K' };

void DescShuffle()
{
  

    int numbers[52] = { 0, };
    for (int i = 0; i < 52; i++)
    {
        numbers[i] = i + 1;

    }

    srand(time(NULL));

    int random = (rand() % 52) + 1;
    int randomCard = numbers[random];

    int trumpCard1 = randomCard / 13;  
    int trumpCard2 = randomCard % 13;  

    std::cout << trump1[trumpCard1] << " / " << trump2[trumpCard2] << std::endl;


    
    
}



