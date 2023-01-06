#include <iostream>
using namespace std;
float taxcalculator(char type, float price);
main()
{
char type;
float price;
float result;
cout << "enter vehicle code:";
cin >> type;
cout << " enter price: ";
cin >> price;
result= taxcalculator( type, price);
cout << result;
}
float taxcalculator(char type, float price)
{
float total;
float taxamount;
float finalprice;
if(type=='M')
{
taxamount=price*6;
total=taxamount/100;
finalprice=price+total;
return finalprice;
}
if(type=='E')
{
taxamount=price*8;
total=taxamount/100;
finalprice=price+total;
return finalprice;
}
if(type=='S')
{
taxamount=price*10;
total=taxamount/100;
finalprice=price+total;
return finalprice;
}
if(type=='V')
{
taxamount=price*12;
total=taxamount/100;
finalprice=price+total;
return finalprice;
}
if(type=='T')
{
taxamount=price*15;
total=taxamount/100;
finalprice=price+total;
return finalprice;
}
}