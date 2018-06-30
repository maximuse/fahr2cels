#include <stdio.h>
//#include <stdlib.h>

/*#define LOWER -100
#define UPPER 400
#define STEP 10
#define F2C(f) ((5. / 9.) * ((f) - 32))

int main() {
    for(int f = LOWER; f <= UPPER; f += STEP) {
        printf("fahr = %d\t cels = %f\n", f, F2C(f));
    }

    return 0;
}*/

double f2c(double f) {
    return 5. / 9. * (f - 32);
}

int main() {
    const int lower = -100;
    const int upper = 400;
    const int step = 10;

    for(int f = lower; f <= upper; f += step) {
        printf("fahr = %d\t cels = %f\n", f, f2c(f));
    }

    //system("PAUSE");
    return 0;
}