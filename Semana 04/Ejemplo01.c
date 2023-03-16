#include <stdio.h>

int global = 10;

int main(void)
{
	static int i = 100;
	return 0;
}

/*
#include <stdio.h>

int global; 

int main(void)
{
	return 0;
}

#include <stdio.h>

int global; 

int main(void)
{
	static int i; 
	return 0;
}

#include <stdio.h>

int global; 

int main(void)
{
	static int i = 100; 
	return 0;
}

#include <stdio.h>

int global = 10; 

int main(void)
{
	static int i = 100; 
	return 0;
}

*/