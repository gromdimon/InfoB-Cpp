//
// Created by gromdimon on 15.04.23.
//

#include "train.h"
//#include "first.cpp"

#define LIN

#ifdef LIN
#define OS "Linux"
#else
#define OS "Windows"
#endif

#define massiv_size 10

int ifswitch(int);
int loops();
int massiv();
int strings();
float sum(float, float);
void print(int);


int ifswitch(int a) {

    // If operator
    cout << "Enter a number 'a': ";
    cin >> a;
    if (a == 5) {
        cout << "a is 5" << endl;
    } else if (a >= 6 && a <= 10) {
        cout << "a is not 5, but more" << endl;
    } else {
        cout << "a is not 5 or 6" << endl;
    }

    // Switch operator
    switch (a) {
        case 1:
            cout << "a is 1" << endl;
            break;
        case 2:
            cout << "a is 2" << endl;
            break;
        case 3:
            cout << "a is 3" << endl;
            break;
        default:
            cout << "a is not 1, 2 or 3" << endl;
            break;
    }

    return a;
}


int loops() {
    // While operator
    int S = 0;
    int i = 1;

    while (i <= 10) {
        S += i;
        i++;
    }
    cout << ": " << S << endl;

    S = 0; i = 1;
    while (S < 100 && i != 0) {
        cout << "Enter a number for second while loop:";
        cin >> i;
        S += i;
    }
    cout << "Sum: " << S << endl;

    // Short version of while
    double f, k, b;
    cout << "Enter k and b for linear function:";
    cin >> k >> b;
    for (double x = 0; x <= 1; x += 0.1) {
        cout << "f(" << x << ") = " << k * x + b << endl;
    }

    // Do while
    const int secret = 5;
    int code;
    do {
        cout << "Enter a secret number:";
        cin >> code;
        if (code == 3) continue;
        if (code == 4) break;
    } while (code != secret);

    return 0;
}


int massiv() {
    int data[massiv_size][massiv_size] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    cout << "data[0][0] = " << data[0][0] << endl;
    cout << "Data: " << data << endl;
    float massiv[massiv_size], k = 0.5, b = 0.5;

    for (int x = 0; x < massiv_size; ++x) {
        massiv[x] = k * x + b;
        cout << "massiv[" << x << "] = " << massiv[x] << endl;
    }

    short E[massiv_size][massiv_size];
    for (int i=0; i < massiv_size; i++) {
        for (int j=0; j < massiv_size; j++) {
            if (i == j) {
                E[i][j] = 1;
            } else {
                E[i][j] = 0;
            }
        }
    }
    cout << "E: " << E << endl;
    for (int i=0; i < massiv_size; i++) {
        for (int j=0; j < massiv_size; j++) {
            cout << E[i][j] << "  ";
        }
        cout << endl;
    }

    return 0;
}


int strings() {
    char a[100];
    strcpy(a, "Hello, World!");
    strcat(a, " I'm Gromdimon!");
    int len = strlen(a);
    cout << "a: " << a << endl;
    cout << "Length: " << len << endl;

    // Compare strings
    int cmp = strcmp(a, "Hello, World!");
    if (cmp == 0) {
        cout << "a == Hello, World!" << endl;
    } else {
        cout << "a != Hello, World!" << endl;
    }

    char a1[100];
    char a2[100];
    puts(a1);
    puts(a2);

    // Formated strings
    // %s - string
    // %d - integer
    // %f - float
    // %c - char
    // %x - hex
    // %o - octal
    // %e - float in scientific notation
    // %g - float in scientific notation or decimal
    // %p - pointer
    // %n - number of characters written so far
    // %% - percent sign
    int age = 20;
    char name[100] = "Gromdimon";
    double height = 1.75;
    char str[100];
    sprintf(str, "Name: %s, Age: %d, Height: %f", name, age, height);
    puts(str);

    // atoi - string to integer
    // atof - string to float
    int age1 = atoi("20");
    double height1 = atof("1.75");
    cout << "Age: " << age1 << endl;
    cout << "Height: " << height1 << endl;

    return 0;
}


float sum(float a, float b) {
    return a + b;
}


void print(int a) {
    cout << "Print: " << a << endl;
}


double sum_array(double *array, int size) {
    double sum = 0;
    for (int i = 0; i < size; ++i) {
        sum += array[i];
    }
    return sum;
}


void variables() {
    // Local variables zone
    {
        double array[2] = {1.0, 2.0};
        double S = sum_array(array, 2);
        cout << "Sum: " << S << endl;
    }
    extern short extern_var;
    const short const_var = 10;
    static short static_var = 10;
    cout << "Extern var: " << extern_var << endl;
    cout << "Const var: " << const_var << endl;
    cout << "Static var: " << static_var << endl;
}

short extern_var = 10;


int bit_operations() {
    unsigned short a = 0b0000000000000001;
    unsigned short b = 0b0000000000001000;
    cout << "a: " << a << endl;
    cout << "b: " << b << endl;

    unsigned char var = 153;   // 10011001
    cout << "var: " << (int)var << endl;

    unsigned char not_var = ~var;   // 01100110
    cout << "not_var: " << (int)not_var << endl;

    unsigned char and_var = var & not_var;   // 00000000
    cout << "and_var: " << (int)and_var << endl;

    unsigned char or_var = var | not_var;   // 11111111
    cout << "or_var: " << (int)or_var << endl;

    unsigned char xor_var = var ^ not_var;   // 11111111
    cout << "xor_var: " << (int)xor_var << endl;

    unsigned char shift_var = var << 2;   // 01100100
    cout << "shift_var: " << (int)shift_var << endl;

    unsigned char shift_var2 = var >> 2;   // 00100110
    cout << "shift_var2: " << (int)shift_var2 << endl;

    return 0;
}


int code_decode(char msg[], unsigned char key = 177) {
    int len = strlen(msg);

    // encode
    for (int i = 0; i < len; ++i) {
        msg[i] = msg[i] ^ key;
    }
    for (int i = 0; i < len; ++i) {
        cout << msg[i];
    }
    cout << endl;

    // decode
    for (int i = 0; i < len; ++i) {
        msg[i] = msg[i] ^ key;
    }
    for (int i = 0; i < len; ++i) {
        cout << msg[i];
    }
    cout << endl;

    return 0;
}


struct Person {
    char name[100];
    int age;
    double height;
};


void display_structure(struct Person person) {
    cout << "Name: " << person.name << endl;
    cout << "Age: " << person.age << endl;
    cout << "Height: " << person.height << endl;
}


int structures() {

    Person person;
    strcpy(person.name, "Gromdimon");
    person.age = 20;
    person.height = 1.75;

    display_structure(person);

    return 0;
}


union tag_value {
    int vi;
    double vd;
    char vc;
};

struct tag_var {
    char name[100];
    union tag_value value;
    short type_var;  // 0 - vi, 1 - vd, 2 - vc
};


int pointers() {
    int a = 10;
    int *pa = &a;
    cout << "a: " << a << endl;
    cout << "pa: " << pa << endl;
    cout << "*pa: " << *pa << endl;

    int b = 20;
    pa = &b;
    cout << "a: " << a << endl;
    cout << "b: " << b << endl;
    cout << "pa: " << pa << endl;
    cout << "*pa: " << *pa << endl;

    *pa = 30;
    cout << "a: " << a << endl;
    cout << "b: " << b << endl;
    cout << "pa: " << pa << endl;
    cout << "*pa: " << *pa << endl;

    return 0;
}


int main() {
    setlocale(LC_ALL, "English");
    cout << "Hello, World!" << endl;
    cout << "We use " << OS << endl;

//    first();

//    int a = 0;
//    ifswitch(a);
//    loops();
//    massiv();
//    strings();
//    float res = sum(7.0, 5.6);
//    print(res);
//    variables();
//    bit_operations();

//    char msg[100];
//    cout << "Enter message: ";
//    cin >> msg;
//    code_decode(msg);

//    structures();

//    struct tag_var var[3];
//    var[0].type_var = 0;
//    var[0].value.vi = 10;
//    var[1].type_var = 1;
//    var[1].value.vd = 1.75;
//    var[2].type_var = 2;
//    var[2].value.vc = 'A';
//    for (int i = 0; i < 3; ++i) {
//        switch (var[i].type_var) {
//            case 0:
//                cout << "int: " << var[i].value.vi << endl;
//                break;
//            case 1:
//                cout << "double: " << var[i].value.vd << endl;
//                break;
//            case 2:
//                cout << "char: " << var[i].value.vc << endl;
//                break;
//            default:
//                cout << "Unknown type" << endl;
//                break;
//        }
//    }

    pointers();

    return 0;
}

