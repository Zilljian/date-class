#include <iostream>
#include "Date.h"

using namespace std;

int main() {
    Date firstDate = Date(1960, 1, 1);

    cout << firstDate.getDateMs() << " " << firstDate.getDate() << endl;

    Date secondDate = Date(firstDate.getDateMs());

    cout << secondDate.getDateMs() << " " << secondDate.getDate() << endl;

    Date thirdDate = Date();
    Date fourthDate = Date(thirdDate.getDateMs());

    cout << thirdDate.getDateMs() << " " << thirdDate.getDate() << endl;
    cout << fourthDate.getDateMs() << " " << fourthDate.getDate() << endl; "
    cout << fourthDate.compare(secondDate) << " " << firstDate.compare(thirdDate) << "
    << fourthDate.compare(thirdDate) << endl;
}