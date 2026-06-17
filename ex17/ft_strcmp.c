int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 == *s2 && *s1 != '\0')
	{
		s1++;
		s2++;
	}
	return ((int)((unsigned char)*s1 - (unsigned char)*s2));
}

/*
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void test(char *name, char *s1, char *s2) {
    int res_org = strcmp(s1, s2);
    int res_ft = ft_strcmp(s1, s2);

	printf("\n%s\n", name);
	printf("res_org = %d\n", res_org);
	printf("res_ft = %d\n", res_ft);
}

int main() {
    // basic
    test("Equal strings", "kotlet", "kotlet");

    // in lasr one
    test("Limit n before difference", "krowa", "krowz");

    // difference in middle
    test("Difference before n", "kalosz", "kaposz");

    //  one string is a prefix of the other
    test("Prefix string", "Hello", "Hello World");
    test("Prefix string (longer n)", "Hello", "Hello World");

    //  null in s1
    test("n 0", "\0kot", "pies");
    //  null in s1
    test("n 0", "kot", "\0pies");
	// null terminator inside
    test("null inside", "ABC\0DEF", "ABC\0GHI");
	// unsigned char check
	// \200 (128) should be greater than \0 (0)
	char s1[] = { (char)128, '\0' };
	char s2[] = { (char)0, '\0' };
	test("Unsigned comparison", s1, s2);

    return 0;
}*/
