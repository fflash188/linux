#include <stdio.h>
#include <time.h>
int main(int argc, char const *argv[])
{
	time_t stamp;
	struct  tm * tm;
	char buf[256];
	time(&stamp);
	tm  = localtime(&stamp);
    strftime(buf,256,"%Y-%m-%M",tm);
		
	puts(buf);
	//printf("%s\n","hello" );
	return 0;
}