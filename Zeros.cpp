#include <stdio.h>
#include <iostream>
using namespace std;
int get_response();
int main()
{
    unsigned ff_cnt = 0, fl_cnt = 0, fi_cnt = 0;

    char ch;
    while (cin >> ch)
    {
        switch (ch)
        {
            case 'f':
                while (cin >> ch)
                {
                    switch (ch)
                    {
                        case 'f':
                            ff_cnt++;
                            break;
                        case 'l':
                            fl_cnt++;
                            break;
                        case 'i':
                            fi_cnt++;
                            break;
                        default:
                            break;

                    }
                    break;
                }
                break;
            default:
                break;
        }
    }
    std::cout << "Hello World!\n";

    cout << ff_cnt << " " << fl_cnt << " " << fi_cnt << endl;

    //ret

    //dp while test

    //it's false
    /*
    do
    {

    } while (int ival = get_response());
    */
    cin.clear();
    int ival = 0;
    do
    {
        printf("%d\n", ival);

    } while (ival = get_response());//check not zero for loop
    return 0;
}
int get_response()
{
    cout << "Enter an integer:";
    int ival;
    cin >> ival;
    return ival;
}