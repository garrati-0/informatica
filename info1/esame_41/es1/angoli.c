#include "angoli.h"

struct angolo somma_angoli(struct angolo a, struct angolo b)
{
    struct angolo ris;
    ris.gradi = a.gradi + b.gradi;
    if (ris.gradi >= 360)
    {
        for (; ris.gradi >= 360;)
        {
            ris.gradi = ris.gradi - 360;
        }
    }

    ris.primi = a.primi + b.primi;
    if (ris.primi >= 60)
    {

        for (; ris.primi >= 60;)
        {
            ris.primi = ris.primi - 60;
            ris.gradi++;
        }
    }

    ris.secondi = a.secondi + b.secondi;
    if (ris.secondi >= 60)
    {

        for (; ris.secondi >= 60;)
        {
            ris.secondi = ris.secondi - 60;
            ris.primi++;
        }
    }

    return ris;
}