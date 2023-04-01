#include "../main.h"

int main(void)
{
	    int len;
	    int i, len2;
    unsigned int ui;
    void *addr;
    char str[2048];
    for (i = 0 ; i< 2048 ; i++)
	    str[i] = 'A';
    len = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");
    ui = (unsigned int)INT_MAX + 1024;
    addr = (void *)0x7ffe637541f0;
    _printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);
    _printf("Negative:[%d]\n", -762534);
    printf("Negative:[%d]\n", -762534);
    _printf("Unsigned:[%u]\n", ui);
    printf("Unsigned:[%u]\n", ui);
    _printf("Unsigned octal:[%o]\n", ui);
    printf("Unsigned octal:[%o]\n", ui);
    _printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    _printf("Character:[%c]\n", 'H');
    printf("Character:[%c]\n", 'H');
    _printf("String:[%s]\n", "I am a string ! ");
    printf("String:[%s]\n", "I am a string !");
    _printf("Address:[%p]\n", addr);
    printf("Address:[%p]\n", addr);
    len = _printf("Percent:[%%]\n");
    len2 = printf("Percent:[%%]\n");
    _printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);
    _printf("Unknown:[%r]\n");
    printf("Unknown:[%r]\n");
    len2 = _printf("Len in binary: [%b]\n", len);
    _printf("len2 in long hexa: [%ltd]\n", len2);
    _printf("len2 in long hexa: [%lod]\n", len2);
    _printf("len2 in long hexa: [%lxd]\n", len2);

    printf("printing (%c)null str %s%c\n",65, NULL, '\0');
    _printf("printing (%c) null str %s%c\n",65 ,NULL, '\0');
    printf("len2 in long hexsa: [%lxd]\n", len2);

   len =  _printf("%c%cth %s%s a%cg%s: Y%sou %s no%ching%s Snow.%c", 'W', 'i', "some ", "more", 'r', "s", "", "know", 't', ", Jon", '\n');
   len2  = printf("%c%cth %s%s a%cg%s: Y%sou %s no%ching%s Snow.%c", 'W', 'i', "some ", "more", 'r', "s", "", "know", 't', ", Jon", '\n');
   _printf("len1 [%d]\nlen2 [%d]\n", len, len2);
   printf("len1 [%d]\nlen2 [%d]\n", len, len2); 
   len =  _printf("man gcc\n%s\n",str);
   len2 = printf("man gcc\n%s\n", str);
   printf("\nlen %d\n" , len);
   printf("len2 %d\n" , len2);
   len = printf(NULL);
   len2 =_printf(NULL);
   printf("%d\n%d\n", len, len2);
   len = printf("%");
   len2 = _printf("%");
   _printf("\nlen %d\n",len);
   _printf("len2 %d\n",len2);
   return (0);
}
