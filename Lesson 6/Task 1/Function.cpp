#include "Function.h"
#include <exception>

int function(std::string anyWord, int forbiddenLength)
{
    if (forbiddenLength == anyWord.length())
    {
        throw std::exception("Âû ââåëè ñëîâî çàïðåòíîé äëèíû!Äî ñâèäàíèÿ.");
    };

    return static_cast<int>(anyWord.length());

}
