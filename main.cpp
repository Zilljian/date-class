#include <iostream>
#include "Date.h"

using namespace std;

int main() {
    Date firstDate = Date(1960, 1, 1);
    Date secondDate = Date(firstDate.getDateMs());

    Date second = Date();

    cout << firstDate.getDateMs() << " " << second.getDateMs() << endl;

    cout << second.getDate() << endl;

    if (firstDate < second) cout << second.getDate() << endl;
    if (firstDate == secondDate) cout << secondDate.getDate() << endl;

    Date sum = firstDate + 12421421434;
    Date sub = second - firstDate;
    Date sub2 = second - firstDate.getDateMs();

    cout << firstDate << " ";
    cin >> second;
    cout << second << endl;
}