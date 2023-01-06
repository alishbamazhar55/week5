#include <iostream>
using namespace std;
float pyramids(float length,float width,float height ,string unit);
main()
{
    float length;
    float width;
    float height;
    string unit;
    cin >> length;
    cin >> width;
    cin >> height;
    cin >> unit;
    float calculate;
    calculate=pyramids(length,width,height,unit);
    cout  << calculate;

}

float pyramids(float length,float width,float height ,string unit)
{
    float total;
    float result;
    float final_volume;
    total=length*width*height;
    result=total/3;
    if(unit=="centimeter")
    {
        
         final_volume=result*1000000;
       return final_volume;
    }

    if(unit=="kilometer")
    {
        
         final_volume=result/1000000000;
       return final_volume;
    }
 if(unit=="milimeter")
    {
        
         final_volume=result*1000000000.0;
       return final_volume;
    }


    return 0;
}