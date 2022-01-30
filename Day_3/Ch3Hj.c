# include <stdio.h>

int main(){
    float men = 52, women, men_edu = 35, total_edu = 48, women_edu, women_ill, men_ill;

    women = 100 - men;
    women_edu = total_edu - men_edu;
    women_ill = women - women_edu;
    men_ill = men - men_edu;
    printf("Men Illiterate: %f", (men_ill*800));
    printf("Women Illiterate: %f", (women_ill*800));
}