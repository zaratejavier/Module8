#include <iostream>
using namespace std;
#include <cstring>

int main()
{
    char *str = "Waldo is the best mascot in Utah"; //an array of characters of tyoe char
    int len = strlen(str);

    char *ptr;      //makes a pointer to char
    ptr = new char[len+1];  //set aside memory: string + '\0
    strcpy(ptr,str);
    cout<<"Original: "<<str<<endl;
    cout<<"copy: "<<ptr<<endl;

    delete [] ptr;      //release ptr's memory


    return 0;
}