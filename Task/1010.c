#include <stdio.h>

int method01(int profit){
    float bonus;
    printf("\n利润为：%d", profit);

    if (profit<=100000)
    {
        bonus = profit * 10 / 100; 
    }else{
        bonus = 100000 * 10 / 100;

        if ( profit <= 200000)
        {
            bonus += (profit - 100000) * 7.5 / 100;
        }else{
            bonus += (200000 - 100000) * 7.5 / 100;

            if(profit <= 400000){
                bonus += (profit - 200000) * 5 / 100;
            }else{
                bonus += (400000 - 200000) * 5 / 100;

                if (profit <= 600000)
                {
                    bonus += (profit - 400000) * 3 / 100;
                }else{

                    bonus += (600000 - 400000) * 3 / 100;
                    if (profit <= 1000000)
                    {
                        bonus += (profit - 600000) * 1.5 / 100;
                    }else{
                        bonus += (1000000 - 600000) * 1.5 / 100;
                        bonus += (profit - 1000000) * 1 / 100;
                    }                    
                }                
            }
        }
    }

    return bonus;
}

int method02(int profit){
    float rate_01 = 0.1, rate_02 = 0.075, rate_03 = 0.05, rate_04 = 0.03, rate_05 = 015, rate_06 = 0.01;
    float bonus,
          bonus_01 = 100000 * rate_01,
          bonus_02 = (200000 - 100000) * rate_02,
          bonus_03 = (400000 - 200000) * rate_03,
          bonus_04 = (600000 - 400000) * rate_04,
          bonus_05 = (1000000 - 600000) * rate_05;
    
    if (profit<=100000)
    {
        bonus = profit * rate_01;
    }else if(profit > 100000 && profit <= 200000){
        bonus += bonus_01 + (profit - 100000) * rate_02;
    }else if(profit > 200000 && profit <= 400000){
        bonus += bonus_01 + bonus_02 + (profit - 200000) * rate_03;
    }else if(profit > 400000 && profit <= 600000){
        bonus += bonus_01 + bonus_02 + bonus_03 + (profit - 400000) * rate_04;
    }else if(profit > 600000 && profit <= 1000000){
        bonus += bonus_01 + bonus_02 + bonus_03 + bonus_04 + (profit - 600000) * rate_05;
    }else{
        bonus += bonus_01 + bonus_02 + bonus_03 + bonus_04 + bonus_05 + (profit - 1000000) * rate_06;
    }
    
    return bonus;
}

void main(){

    int profit;
    float bonus;

    printf("\n请输入利润：");
    scanf("%d", &profit);
    bonus = method01(profit);
    printf("\n奖金为：%f", bonus);
    bonus = method02(profit);
    printf("\n奖金为：%f", bonus);

    return;
}