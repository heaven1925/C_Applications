
#include "stdio.h"
#include <iostream>


int data[11] = { 999 , 870 , 800, 710 , 709 , 701  , 707  ,706  ,705  ,704 , 703};

int main()
{
	int lowestData = data[0];
	printf("%d \n", lowestData);
	
	for (int i = 1; i < 11; i++)
	{
		if ( lowestData > data[i])
		{
			lowestData = data[i];
		}
	}

	printf("%d gerilime sahip %d 'inci pil en dusuktur \n", lowestData );



}

