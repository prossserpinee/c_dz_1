#include <iostream>
#include <string>
#include <math.h>
using namespace std;
int ploshad_trapetsii(int b1, int b2, int h) /* task 1*/
{
    int ploshad = 0.5*(b1+b2)*h;
    return ploshad;
}

float dlina_okruzhnosti(int r) /* task 2_1*/
{
    float dlina =2*3.14*r;
    return dlina;
}

float ploshad_kruga(int r) /* task 2_2*/
{
    float ploshad_kruga = 3.14*r*r;
    return ploshad_kruga;
}

float ploshad_treug(int k1, int k2) /* task 3_1*/
{
    int ploshadd = 0.5*k1*k2;
    return ploshadd;
}

float gypothenusa(int k1, int k2) /* task 3_2*/
{
    int gypotenusa_in_sguare = k1*k1 + k2*k2;
    return sqrt(gypotenusa_in_sguare);
}

int summa_chifr (int chislo) /* task 4*/
{
    int summa = chislo/1000 + chislo/100%10 + chislo/10%10 + chislo%10;
    return summa;
}

float koor_r_polar (float x, float y) /* task 5_1 */
{
    float koor_r = sqrt(x*x + y*y);
    return koor_r;
}

float koor_fi_polar (float x, float y) /* task 5_2 */
{
    float koor_fi = atan(y/x);
    return koor_fi;
}

float koor_x_dekart (float r, float fi) /* task 6_1 */
{
    float x = r*cos(fi);
    return x;
}

float koor_y_dekart (float r, float fi) /* task 6_2 */
{
    float y = r*sin(fi);
    return y;
}


float discriminant_raven0 (float koeff_a, float koeff_b, float koeff_c) /* task 7_1 */
{
    return -koeff_b/(2*koeff_a);
}

float discriminant_bolshe0_1 (float koeff_a, float koeff_b, float koeff_c) /* task 7_2 */
{
    float discriminantt = koeff_b*koeff_b - 4*koeff_a*koeff_c;
    return (-koeff_b+sqrt(discriminantt))/(2*koeff_a);
}

float discriminant_bolshe0_2 (float koeff_a, float koeff_b, float koeff_c) /* task 7_3 */
{
    float discriminantt = koeff_b*koeff_b - 4*koeff_a*koeff_c;
    return (-koeff_b-sqrt(discriminantt))/(2*koeff_a);
}

string discriminant_menshe0 (float koeff_a, float koeff_b, float koeff_c) /* task 7_4 */
{
    return "korney net";
}

float mediana (float a, float b, float c) /* task 8_1 */
{
    float mediana = 0.5 * sqrt(2*b*b + 2*c*c - a*a);
    return mediana;
}

bool suchestvovanie (int a, int b, int c) /* task 8_2 */
{
    if ((a+b>c)&&(a+c>b)&&(b+c>a))
    {
        return true;
    }
    else
    {
        return false;
    }
}

int hours (int sek) /* task 9_1 */
{
    int hours = sek/3600;
    return hours;
}

int minutes (int sek) /* task 9_2 */
{
    int ostatok = sek%3600;
    int minutes = ostatok/60;
    return minutes;
}

bool ravnobedrennost (int a, int b, int c) /* task 10*/
{
    if (a == b||b == c||a == c)
    {
        return true;
    }
    else
        return false;
}
double stoimost_pokupki (double price) /* task 11*/
{
    if (price > 1000)
        return (price * 0.9);
    else
        return price;
}
int idealniy_ves(int rost, int ves) /* task 12*/
{
    int idealniy_ves = rost - 100-ves;
    return idealniy_ves;
}
bool udacha(int chislo) /* task 13*/
{
    int start_randoma = 1;
    int end_randoma = 9;
    int random_value1 = rand() % (end_randoma - start_randoma + 1) + start_randoma;
    int random_value2 = rand() % (end_randoma - start_randoma + 1) + start_randoma;
    return (random_value1 * random_value2 == chislo);
}
double schet_peregovorov(int price_per_day, int time, int nachalo_peregovorov) /* task 14*/
{
    double itogovaya_price = 0;
    while (time != 0)
    {
        if (nachalo_peregovorov == 6 || nachalo_peregovorov == 7)
            itogovaya_price += price_per_day * 0.8;
        else
            itogovaya_price += price_per_day;
        nachalo_peregovorov += 1;
        if (nachalo_peregovorov > 7)
            nachalo_peregovorov -= 7;
        time-=1;
    }
    return itogovaya_price;
}

string vremya_goda(int month) /*task 15*/
{
    switch (month)
    {
        case 1:
            return "January, Winter ";
        case 2:
            return "February, Winter";
        case 3:
            return "March, Spring";
        case 4:
            return "April, Spring";
        case 5:
            return "May, Spring";
        case 6:
            return "June, Summer";
        case 7:
            return "July, Summer";
        case 8:
            return "August, Summer";
        case 9:
            return "September, Autumn";
        case 10:
            return "October, Autumn";
        case 11:
            return "November,Autumn";
        case 12:
            return "December,Winter";
    }
}

bool chastlivyi_bilet(int nomer) /* task 16*/
{
    return (nomer/100000+ nomer/10000%10 + nomer/1000%10 == nomer%10 +nomer/10%10+nomer/100%10);
}
string padezh(int kolvo) /* task 17*/
{
    switch (kolvo) {
        case 1: case 21: case 31: case 41: case 51: case 61: case 71: case 81: case 91:
            return "kopeyka";
        case 2: case 3: case 4: case 22: case 23: case 24: case 32: case 33: case 34: case 42: case 43: case 44: case 52: case 53: case 54: case 62: case 63: case 64: case 72: case 73: case 74: case 82: case 83: case 84: case 92: case 93: case 94:
            return "kopeyki";
        default:
            return "kopeek";
    }
}
bool polindrom(int chislo) /* task 18*/
{
    return (((chislo/1000) == (chislo%10)) && ((chislo/10%10) == (chislo/100%10)));
}
bool proizvedenie_bolshe_chisla (int a, int b) /* task 19.1*/
{
    return ((a/100)*(a/10%10)*(a%10)>b);
}
bool kratnost_7(int a) /* task 19.2*/
{
    return (((a/100)+(a/10%10)+(a%10))%7==0);
}
bool pomeshaetsta_pryamougolnik(double a, double b, double c, double d) /* task 20*/
{
    return (a < c && b < d) || (a < d && b < c);
}
void size_types() /* task 21*/
{
    std::cout << "bool: " << sizeof(bool ) << " bytes " << "char: " << sizeof(char) << " bytes "  << "int: " << sizeof(int) << " bytes " << "float: " << sizeof(float) << " bytes " << "double: " << sizeof(double) << " bytes "  << std::endl;
}

int main() {
    /* Task 1 */
    std::cout << "Enter osnovanie 1: ";
    int b1 = 0;
    std::cin >> b1;

    std::cout << "Enter osnovanie 2: ";
    int b2 = 0;
    std::cin >> b2;

    std::cout << "Enter visoty: ";
    int h = 0;
    std::cin >> h;

    std::cout << "Result for Task 1: " << ploshad_trapetsii(b1, b2, h) << std::endl;

    /* Task 2 */
    std::cout << "Enter radius: ";
    int radius = 0;
    std::cin >> radius;

    std::cout << "Result for Task 2: " << dlina_okruzhnosti(radius) << " " << ploshad_kruga(radius) << std::endl;

    /* Task 3 */
    std::cout << "Enter katet 1: ";
    int katet_1 = 0;
    std::cin >> katet_1;

    std::cout << "Enter katet 2: ";
    int katet_2 = 0;
    std::cin >> katet_2;

    std::cout << "Result for Task 3: " << ploshad_treug(katet_1, katet_2) << " " << gypothenusa(katet_1, katet_2) << std::endl;

    /* Task 4 */
    std::cout << "Enter chislo: ";
    int chislo = 0;
    std::cin >> chislo;

    std::cout << "Result for Task 4: " << summa_chifr(chislo) << std:: endl;

    /* Task 5 (задача решается в радианах) */
    std::cout << "Enter x: ";
    float x = 0;
    std::cin >> x;

    std::cout << "Enter y: ";
    float y = 0;
    std::cin >> y;

    std:: cout << "Result for Task 5: " << koor_r_polar(x, y)<< " " << koor_fi_polar(x, y)<< std::endl;

    /* Task 6 (задача решается в радианах) */
    std::cout << "Enter r: ";
    float r_1 = 0;
    std::cin >> r_1;

    std::cout << "Enter fi: ";
    float fi_1 = 0;
    std::cin >> fi_1;

    std::cout << "Result for Task 6: " << koor_x_dekart(r_1, fi_1)<< " " << koor_y_dekart(r_1, fi_1)<< std::endl;

    /* Task 7 */
    std::cout << "Enter koefficient a: ";
    float koef_a = 0;
    std::cin >> koef_a;

    std::cout << "Enter koefficient b: ";
    float koef_b = 0;
    std::cin >> koef_b;

    std::cout << "Enter koefficient c: ";
    float koef_c = 0;
    std::cin >> koef_c;

    float discriminant = koef_b*koef_b - 4*koef_a*koef_c;
    if (discriminant > 0)
    {
        std::cout << "Result for Task 7: " << discriminant_bolshe0_1(koef_a, koef_b, koef_c) << " " << discriminant_bolshe0_2(koef_a, koef_b, koef_c) << std::endl;
    }
    if (discriminant == 0)
    {
        std::cout << "Result for Task 7: " << discriminant_raven0(koef_a, koef_b, koef_c) << std::endl;
    }
    if (discriminant < 0)
    {
        std::cout << "Result for Task 7: " << discriminant_menshe0(koef_a, koef_b, koef_c) << std::endl;
    }

    /* Task 8 */
    std::cout << "Enter storona a: ";
    float storona_a = 0;
    std::cin >> storona_a;
    std::cout << "Enter storona b: ";
    float storona_b = 0;
    std::cin >> storona_b;
    std::cout << "Enter storona c: ";
    float storona_c = 0;
    std::cin >> storona_c;

    float mediana_aa = mediana(storona_b, storona_c, storona_a);
    float mediana_bb = mediana(storona_a, storona_c, storona_b);
    float mediana_cc = mediana(storona_a, storona_b, storona_c);

    if (suchestvovanie(mediana_aa, mediana_bb, mediana_cc) == true)
    {
        std::cout << "Result for Task 8: " << mediana(mediana_bb, mediana_cc, mediana_aa) << " " << mediana(mediana_aa, mediana_cc, mediana_bb) << " " << mediana(mediana_aa, mediana_bb, mediana_cc) << std::endl;
    }
    else
    {
        std::cout << "Result for Task 8: iz dannix median nelzya postroit treugolnik" << std::endl;
    }

    /* Task 9 */
    std::cout << "Enter sekunda: ";
    int sekunda = 0;
    std::cin >> sekunda;

    std::cout << "Result for Task 9: " << hours(sekunda) << " hours " << minutes(sekunda) << " minutes" << std::endl;


    /* Task 10 */
    std::cout << "Enter storona a: ";
    int storona_a_1 = 0;
    std::cin >> storona_a_1;

    std::cout << "Enter storona b: ";
    int storona_b_1 = 0;
    std::cin >> storona_b_1;

    std::cout << "Enter storona c: ";
    int storona_c_1 = 0;
    std::cin >> storona_c_1;

    if (ravnobedrennost(storona_a_1, storona_b_1, storona_c_1) == 1)
    {
        std::cout << "Result for Task 10: yes" << std::endl;
    }
    else
    {
        std::cout << "Result for Task 10: no" << std:: endl;
    }


    /* Task 11 */
    std::cout << "Enter price " << std::endl;
    double price = 0;
    std::cin >> price;
    std::cout << "Result for Task 11: " << stoimost_pokupki(price) << std::endl;


    /* Task 12*/
    std::cout << "Enter rost " << std::endl;
    int rost = 0;
    std::cin >> rost;

    std::cout << "Enter ves " << std::endl;
    int ves = 0;
    std::cin >> ves;
    if (idealniy_ves(rost,ves) < 0)
        std::cout << "Result for Task 12: " << "neobhodimo poxudet na " << abs(idealniy_ves(rost,ves)) <<" kg" << std::endl;
    else
        if (idealniy_ves(rost,ves) == 0)
            std::cout << "Result for Task 12: Pozdravlaem! U vas idealniy ves" << std::endl;
        else
            std::cout << "Result for Task 12: " << "neobhodimo popravitsa na " << idealniy_ves(rost,ves) <<" kg" << std::endl;


    /* Task 13*/
    std::cout << "Enter chislo " << std::endl;
    int chislo1 = 0;
    std::cin >> chislo1;
    if (udacha(chislo1) == 0)
        std::cout << "Result for Task 13: Oshibka"  << std::endl;
    else
        std::cout << "Result for Task 13: Pravilno"  << std::endl;


    /* Task 14*/
    std::cout << "Enter price_per_day " << std::endl;
    int price_per_day = 0;
    std::cin >> price_per_day;

    std::cout << "Enter time " << std::endl;
    int time = 0;
    std::cin >> time;

    std::cout << "Enter nachalo_peregovorov " << std::endl;
    int nachalo_peregovorov = 0;
    std::cin >> nachalo_peregovorov;
    std::cout << "Result for Task 14: " << schet_peregovorov(price_per_day,time,nachalo_peregovorov) << std::endl;


    /* Task 15 */
    std::cout << "Enter month " << std::endl;
    int month = 0;
    std::cin >> month;
    std::cout << "Result for Task 15: " << vremya_goda(month) << std::endl;


    /* Task 16*/
    std::cout << "Enter nomer " << std::endl;
    int nomer = 0;
    std::cin >> nomer;
    if (chastlivyi_bilet(nomer)== 0)
        std::cout << "Result for Task 16: Nechastliviy " << std::endl;
    else
        std::cout << "Result for Task 16: Chastliviy " << std::endl;


    /* Task 17*/
    std::cout << "Enter kolvo kopeek " << std::endl;
    int kolvo = 0;
    std::cin >> kolvo;
    std::cout << "Result for Task 17: " << kolvo << " " << padezh(kolvo) << std::endl;


    /* Task 18*/
    std::cout << "Enter chislo " << std::endl;
    int chislo4 = 0;
    std::cin >> chislo4;
    if (polindrom(chislo4)== 0)
        std::cout << "Result for Task 18: Ne polindrom " << std::endl;
    else
        std::cout << "Result for Task 18: Polindrom " << std::endl;


    /* Task 19*/
    std::cout << "Enter chislo a" << std::endl;
    int a = 0;
    std::cin >> a;

    std::cout << "Enter chislo b" << std::endl;
    int b = 0;
    std::cin >> b;
    if (proizvedenie_bolshe_chisla(a,b)== 0)
        std::cout << "Result for Task 19.1: Net " << std::endl;
    else
        std::cout << "Result for Task 19.1: Da " << std::endl;
    if (kratnost_7(a)== 0)
        std::cout << "Result for Task 19.2: Ne kratno " << std::endl;
    else
        std::cout << "Result for Task 19.2: kratno " << std::endl;


    /* Task 20*/
    std::cout << "Enter storoni perovogo pryamougolnika" << std::endl;
    double first = 0;
    double second = 0;
    std::cin >> first;
    std::cin >> second;

    std::cout << "Enter storoni vtorogo pryamougolnika" << std::endl;
    double third = 0;
    double fourth = 0;
    std::cin >> third;
    std::cin >> fourth;
    if (pomeshaetsta_pryamougolnik(first,second,third,fourth)== 0)
        std::cout << "Result for Task 20: Net " << std::endl;
    else
        std::cout << "Result for Task 20: Da " << std::endl;
    /* Task 21*/
    std::cout << "Result for Task 21: ";
    size_types();
    std::cout << "bool and char zanimayut minimalniy razmer, double - maksimalniy" << std::endl;
    
    return 0;
}
