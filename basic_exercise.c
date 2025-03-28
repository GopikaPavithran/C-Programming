/* Q: Ramesh’s basic salary is input through the keyboard. His dearness allowance is 40% of basic salary, and house rent 
allowance is 20% of basic salary. Write a program to calculate his gross salary.*/

/*main()
{
    int bs,da,hra,gs;
    printf("Enter Basic Salary:");
    scanf("%d",&bs);
    da=bs/100*40;
    hra=bs/100*20;
    gs=bs+da+hra;
    printf("Gross Salary=%d",gs);    // use ampersand sign(&) only in scanf
}*/




/* Q:The distance between two cities (in km.) is input through the keyboard. Write a program to convert and print this distance 
in meters, feet, inches and centimeters.*/

/*main()
{
    float km,m,ft,in,cm;   
    printf("Enter distance between two cities in kilometer:");
    scanf("%f",&km);
    m=km*1000;
    cm=m*100;
    ft=cm/30.48;
    in=ft*12;
    printf("Distance in meters=%f\nDistance in centimeters=%f\nDistance in feet=%f\nDistance in inches=%f",m,cm,ft,in);
}*/




/* Q: If the marks obtained by a student in five different subjects are input through the keyboard, find out the aggregate marks 
and percentage marks obtained by the student. Assume that the maximum marks that can be obtained by a student in each subject is 
100.*/

/*main()
{
    int m1,m2,m3,m4,m5,a;
    float p;
    printf("Enter mark in pysics:");
    scanf("%d",&m1);
    printf("Enter mark in chemistry:");
    scanf("%d",&m2);
    printf("Enter mark in biology:");
    scanf("%d",&m3);
    printf("Enter mark in maths:");
    scanf("%d",&m4);
    printf("Enter mark in english:");
    scanf("%d",&m5);
    a=m1+m2+m3+m4+m5;
    p=(float)a/500*100;   // a should convert into float otherwise when a get value less than 500 it will divide and convert into
                         // integer as 0 (450/500=0.9 converts to integer as 0.)
    printf("Aggregate mark=%d",a);
    printf("\nPercentage=%f",p);
}*/




/* Q: Temperature of a city in Fahrenheit degrees is input through the keyboard. Write a program to convert this temperature 
into Centigrade degrees.*/

/*main()
{
    float f,c;
    printf("Enter tempreature in Fahrenheit:");
    scanf("%f",&f);
    c=(float)5/(float)9*(f-32.0);   // (float)5 = 5.0 or 5.f
    printf("Temperature in Celsius=%f",c);
}*/




/* Q: The length & breadth of a rectangle and radius of a circle are input through the keyboard. Write a program to calculate the 
area & perimeter of the rectangle, and the area & circumference of the circle.*/

/*main()
{
    int l,b,r,ar,pr;
    float ac,cc;
    printf("Enter legth and breadth of the rectangle:");
    scanf("%d%d",&l,&b);
    printf("Enter radius of the circle:");
    scanf("%d",&r);
    ar=l*b;
    pr=2*(l+b);
    ac=3.14*(float)r*(float)r;
    cc=2.0*3.14*(float)r;
    printf("Area of rectangle=%d \nPerimeter of rectangle=%d \nArea of circle=%f \nCircumference of circle=%f",ar,pr,ac,cc);
}*/




/* Q: Two numbers are input through the keyboard into two locations C and D. Write a program to interchange the 
contents of C and D.*/

/*main()
{
    int c,d,e;
    printf("Enter vale of c:");
    scanf("%d",&c);
    printf("Enter value of d:");
    scanf("%d",&d);
    e=d;
    d=c;
    c=e;
    printf("C=%d\nD=%d",c,d);
}*/




/* Q: If a five-digit number is input through the keyboard, write a program to calculate the sum of its digits.*/

/*main()
{
    int n,r,s=0;
    printf("Enter a 5 digit number:");
    scanf("%d",&n);
    r=n%10;
    s+=r;
    n/=10;
    r=n%10;
    s+=r;
    n/=10;
    r=n%10;
    s+=r;
    n/=10;
    r=n%10;
    s+=r;
    n/=10;
    r=n%10;
    s+=r;
    n/=10;
    printf("Sum of digits =%d",s);
}*/




/* Q: If a five-digit number is input through the keyboard, write a program to reverse the number.*/

/*main()
{
    int n,rem,rev;
    printf("Enter a 5 digit number:");
    scanf("%d",&n);
    rem=n%10;
    rev=rem;
    n/=10;
    rem=n%10;
    rev=rev*10+rem;
    n/=10;
    rem=n%10;
    rev=rev*10+rem;
    n/=10;
    rem=n%10;
    rev=rev*10+rem;
    n/=10;
    rem=n%10;
    rev=rev*10+rem;
    n/=10;
    printf("Revers=%d",rev);
}*/




/* Q: If a four-digit number is input through the keyboard, write a program to obtain the sum of the first and last digit of this 
number.*/

/*main()
{
    int n,f,l,s;
    printf("Enter a 4 digit number:");
    scanf("%d",&n);
    f=n/1000;
    l=n%10;
    s=f+l;
    printf("Sum=%d",s);
}*/




/* Q: In a town, the percentage of men is 52. The percentage of total literacy is 48. If total percentage of literate men is 35 of 
the total population, write a program to find the total number of illiterate men and women if the population of the town is 
80,000.*/

/*main()
{
    int men,women,literate,literate_men,illiterate_men,literate_women,illiterate_women;
    men=52.0/100*80000;
    women=80000-men;
    literate=48.0/100*80000;
    literate_men=35.0/100*80000;
    illiterate_men=(men - literate_men);
    literate_women=(literate - literate_men);
    illiterate_women=(women - literate_women);
    printf("illiterate men=%d\nilliterate women=%d",illiterate_men,illiterate_women);
}*/




/* Q: A cashier has currency notes of denominations 10, 50 and 100. If the amount to be withdrawn is input through the 
keyboard in hundreds, find the total number of currency notes of each denomination the cashier will have to give to the 
withdrawer.*/

/*main()
{
    int amount,note_100,note_50,note_10;
    printf("Enter the amount:");
    scanf("%d",&amount);
    note_100=amount/100;
    amount-=note_100*100;
    note_50=amount/50;
    amount-=note_50*50;
    note_10=amount/10;
    printf("Note 100:%d\nNote 50:%d\nNote 10:%d",note_100,note_50,note_10);
}*/




/* Q: If the total selling price of 15 items and the total profit earned on them is input through the keyboard, write a program to 
find the cost price of one item.*/

/*main()
{
    int price,profit,cost;
    printf("Enter price of 15 items:");
    scanf("%d",&price);
    printf("Enter profit of 15 items:");
    scanf("%d",&profit);
    cost=(price - profit)/15;
    printf("Cost for one item=%d",cost);
}*/




/* Q: If a five-digit number is input through the keyboard, write a program to print a new number by adding one to each of its 
digits. For example if the number that is input is 12391 then the output should be displayed as 23402.*/

main() 
{
    int n,new;
    int digit1, digit2, digit3, digit4, digit5;

    printf("Enter a 5-digit number: ");
    scanf("%d", &n);

    // Extract digits
    digit1 = n / 10000;
    digit2 = (n / 1000) % 10;    // if n=45753 --> n/1000=45 , 45%10=5
    digit3 = (n / 100) % 10;
    digit4 = (n / 10) % 10;
    digit5 = n % 10;

    // Add 1 to each digit and handle 9+1=10
    digit1 = (digit1 + 1) % 10;
    digit2 = (digit2 + 1) % 10;     
    digit3 = (digit3 + 1) % 10;   // using modulus : if digit = 9 , 9+1=10 will be added to the number.(45953-->57064 insted                                        
    digit4 = (digit4 + 1) % 10;   //                                          of 56064) so by taking modulus digit will be 0
    digit5 = (digit5 + 1) % 10;

    // Construct the new number
    new = digit1 * 10000 + digit2 * 1000 + digit3 * 100 + digit4 * 10 + digit5;

    printf("New number: %d\n", new);
}