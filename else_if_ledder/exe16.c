
#include <stdio.h>

int main() 
{

    int day, month;

    
    printf("Enter your birth day (1-31): ");
    scanf("%d", &day);

    printf("Enter your birth month (1-12): ");
    scanf("%d", &month);

    
    if (day < 1 || day > 31 || month < 1 || month > 12) 
    {
        printf("Invalid date. Please enter a valid day and month.\n");
        return 1; 
    }

    
    if ((month == 3 && day >= 21) || (month == 4 && day <= 19)) {
        printf("Your Rashi is Aries (Mesha).\n");
    }
    else if ((month == 4 && day >= 20) || (month == 5 && day <= 20)) {
        printf("Your Rashi is Taurus (Vrishabha).\n");
    }
    else if ((month == 5 && day >= 21) || (month == 6 && day <= 20)) {
        printf("Your Rashi is Gemini (Mithuna).\n");
    }
    else if ((month == 6 && day >= 15) || (month == 8 && day <= 22)) {
        printf("Your Rashi is Cancer (Karka).\n");
    }
    else if ((month == 7 && day >= 23) || (month == 8 && day <= 22)) {
        printf("Your Rashi is Leo (Simha).\n");
    }
    else if ((month == 8 && day >= 23) || (month == 9 && day <= 22)) {
        printf("Your Rashi is Virgo (Kanya).\n");
    }
    else if ((month == 9 && day >= 23) || (month == 10 && day <= 22)) {
        printf("Your Rashi is Libra (Tula).\n");
    }
    else if ((month == 10 && day >= 23) || (month == 11 && day <= 21)) {
        printf("Your Rashi is Scorpio (Vrishchika).\n");
    }
    else if ((month == 11 && day >= 22) || (month == 12 && day <= 21)) {
        printf("Your Rashi is Sagittarius (Dhanus).\n");
    }
    else if ((month == 12 && day >= 22) || (month == 1 && day <= 19)) {
        printf("Your Rashi is Capricorn (Makara).\n");
    }
    else if ((month == 1 && day >= 20) || (month == 2 && day <= 18)) {
        printf("Your Rashi is Aquarius (Kumbha).\n");
    }
    else if ((month == 2 && day >= 19) || (month == 3 && day <= 20)) {
        printf("Your Rashi is Pisces (Meena).\n");
    }
    else {
        printf("Invalid date for Rashi calculation.\n");
    }

    return 0;
}