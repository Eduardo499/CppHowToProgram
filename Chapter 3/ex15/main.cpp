#include <iostream>
#include "Date.h"

using namespace std;

int main() {
    Date date1 = Date(1, 1, 2020);
    Date date2 = Date(13, 1, 2020);

    date1.displayDate();
    date2.displayDate();

    date1.setMonth(2);
    date2.setMonth(12);

    date1.displayDate();
    date2.displayDate();

    return 0;
}