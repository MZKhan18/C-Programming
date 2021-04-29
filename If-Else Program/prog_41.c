/*41. An Insurance company follows following rules to calculate premium.

(1) If a person’s health is excellent and the person is between 25 and 35 years of
 age and lives in a city and is a male then the premium is Rs. 4 per thousand
 and his policy amount cannot exceed Rs. 2 lakhs.
(2) If a person satisfies all the above conditions except that the sex is female then the
 premium is Rs. 3 per thousand and her policy amount cannot exceed Rs. 1 lakh.
 (3) If a person’s health is poor and the person is between 25 and 35 years of age and
 lives in a village and is a male then the premium is Rs. 6 per thousand and his
 policy cannot exceed Rs. 10,000.
 (4) In all other cases the person is not insured.
Write a program to output whether the person should be insured or not, his/her premium rate and
maximum amount for which he/she can be insured. */
#include<stdio.h>
int main()
{
    int age, prem, max;
    char place, gender, health;
    printf("Enter Age, Gender(m/f), Residence(c(city)/v(village)) and Health(e(excellent)/p(poor)): ");
    scanf("%d %c %c %c", &age, &gender, &place, &health);
    if(health=='e' && age >=25 && age<=35 && place=='c' && gender=='m'){
        printf("The person will be insured.");
        printf("\nPremium = Rs 4 per thousand.");
        printf("\nMaximum amount to b insured = Rs 2 lakhs.");
}
    else if(health=='e' && age >=25 && age<=35 && place=='c' && gender=='f'){
        printf("The person will be insured.");
        printf("\nPremium = Rs 3 per thousand.");
        printf("\nMaximum amount to b insured = Rs 1 lakhs.");
}
    else if(health=='p' && age >=25 && age<=35 && place=='v' && gender=='m'){
        printf("The person will be insured.");
        printf("\nPremium = Rs 6 per thousand.");
        printf("\nMaximum amount to b insured = Rs 10,000.");
}
    else{
        printf("The person can not be insured.");
    }

    return 0;
}
