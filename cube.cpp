#include <iostream>
#include <string>

#include <stdlib.h>
#include <time.h>
#include "cube.h"

int random()//функция для рандомных значений
{
    srand(time(NULL));

    return rand() % 6 + 1;
};

std::string cube_name(int cube_result)
{
    try
    {
        switch (cube_result)
        {
        case 1:
        {
            return "cube1.png";
            break;
        };

        case 2:
        {
            return "cube2.png";
            break;
        };

        case 3:
        {
            return "cube3.png";
            break;
        };

        case 4:
        {
            return "cube4.png";
            break;
        };

        case 5:
        {
            return "cube5.png";
            break;
        };

        case 6:
        {
            return "cube6.png";
            break;
        };

        default:
            std::cout << "not expected result"
                      << "\n";
            break;
        };
    }
    catch (std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
};
