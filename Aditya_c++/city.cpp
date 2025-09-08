#include<iostream>
#include<string>
using namespace std;
class City
{
    public:
    string name;
    
    int population;
    void acceptData()
    {
        cout<<"Enter city name: ";
        getline(cin , name);
        cout<<"Enter population: ";
        cin>>population;
        cin.ignore();
    }
};
int main()
{
    City obj[5];
    int i,maxindex;
    int max=obj[0].population;
    for(i=0;i<5;i++)
    {
        cout<<"Enter data for city "<<i+1<<":"<<endl;
        obj[i].acceptData();
    }
    for ( i = 0; i < 5; i++)
    {
        if(obj[i].population > max)
        {
            max=obj[i].population;
            maxindex=i;
        }
    }
    cout<<"City with maximum population is:"<<obj[maxindex].name<<endl;
    cout<<"Maximum population is: "<<max<<endl;
    return 0;
}