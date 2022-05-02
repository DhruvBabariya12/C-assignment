#ifndef BASIC_h
#define BASIC_h

int check_prime(int num)
{
	int i=0;

	if(num<2)
		return 0;

	for(i=2;i<num;i++)
	{
		if(num%i==0)
			break; 
	}

	if(i==num)
		return 1;
	return 0;

}


#endif
