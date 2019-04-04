#include <stdio.h>
#include <stdlib.h>
#include <time.h>
using namespace std;
int main()
{
    int num_random;
    srand(time(NULL));
    num_random=rand()%10+1;
    printf("%",num_random);
	return 0
}
