// nums.c
#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(void) {
    // char 1����Ʈ (����)
    char ch = 'A';
    printf("char:\n");
    printf("value: %c\n", ch);
    printf("MAX: %d\n", CHAR_MAX);
    printf("MIN: %d\n", CHAR_MIN);

    // signed short int 2����Ʈ (����)
    signed short int sshort = 1234;
    printf("\nsigned short int:\n");
    printf("value: %d\n", sshort);
    printf("MAX: %d\n", SHRT_MAX);
    printf("MIN: %d\n", SHRT_MIN);

    // unsigned short int 2����Ʈ (����)
    unsigned short int ushort = 1234;
    printf("\nunsigned short int:\n");
    printf("value: %u\n", ushort);
    printf("MAX: %u\n", USHRT_MAX);

    // unsigned int 4����Ʈ (����)
    unsigned int uint = 12345U;
    printf("\nunsigned int:\n");
    printf("value: %u\n", uint);
    printf("MAX: %u\n", UINT_MAX);

    // signed int 4����Ʈ (����)
    signed int sint = -12345;
    printf("\nsigned int:\n");
    printf("value: %d\n", sint);
    printf("MAX: %d\n", INT_MAX);
    printf("MIN: %d\n", INT_MIN);

    // signed long int 4����Ʈ (����)
    signed long int slong = 123456L;
    printf("\nsigned long int:\n");
    printf("value: %ld\n", slong);
    printf("MAX: %ld\n", LONG_MAX);
    printf("MIN: %ld\n", LONG_MIN);

    // unsigned long int 4����Ʈ (����)
    unsigned long int ulong = 123456UL;
    printf("\nunsigned long int:\n");
    printf("value: %lu\n", ulong);
    printf("MAX: %lu\n", ULONG_MAX);

    // float 4����Ʈ (�׻� ��ȣ ����)
    float f = 3.141592f;
    printf("\nfloat:\n");
    printf("value: %f\n", f);
    printf("MAX: %e\n", FLT_MAX);
    printf("MIN: %e\n", FLT_MIN);

    // double 8����Ʈ (�׻� ��ȣ ����)
    double d = 3.141592653589793;
    printf("\ndouble:\n");
    printf("value: %.3f\n", d);
    printf("MAX: %e\n", DBL_MAX);
    printf("MIN: %e\n", DBL_MIN);

    return 0;
}
