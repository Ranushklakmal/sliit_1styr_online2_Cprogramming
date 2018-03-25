 
#include <stdio.h>

int main ()
{
  int unit, cust_type;
  float amount, amount1, sur_charge, total;


  printf ("Customer Type : ");
  scanf ("%d", &cust_type);

  printf ("Enter unit : ");
  scanf ("%d", &unit);

  if (cust_type == 1)
    {
      if (unit < 100)
	{
	  amount1 = (unit * 10);
	  sur_charge = 0;
	}
      else if (unit >= 100)
	{

	  amount = (unit - 100) * 30;  
	  amount1 = 100 * 10;
	  sur_charge = 0.20;
	  sur_charge = (amount + amount1) * sur_charge;

      }
      else
	{
	  printf ("enter invalid unit !!!");
	}


    }
  else if (cust_type == 2)
    {				//this is a Samurdhi Customer

      if (unit <= 100)
	{

	  amount = 10 * unit;


	}
      else if (unit > 100)
	{

	  amount = 30 * unit;


	}
      else
	{
	  printf ("You are Entered Invalid Unit Value !!");
	}
    }
  else
    {
      printf ("Invalid Input !!");
    }

  total = amount + amount1 + sur_charge;
	
  printf ("monthly Charge : %.2f", total);
  return 0;
}
