#include <iostream>
#include "Date.h"

using namespace std;

int main() {
    Date firstDate = Date(1960, 1, 1);
    Date secondDate = Date(firstDate.getDateMs());
    Date second = Date();

    Date sum1 = 235534245345455 + second;
    cout << sum1;
    Date sum = firstDate + 41546000000;
    Date sub = second - firstDate;
    Date sub3 = Date(second.getDateMs() - firstDate.getDateMs() + 100000000000000);
    Date sub4 = Date(3452345234623462436);
    Date sub2 = second - sum.getDateMs();

    cout << sum << endl << sub << endl << sub3 << endl << sub4 << endl << sub2 << endl;
}