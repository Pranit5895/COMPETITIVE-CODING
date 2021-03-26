#define	INT_MAX (2147483647)
#define	INT_MIN (2147483648)

class Solution {

	public:

		int			reverse(int x)
		{
			long	num;
			long	rev;
			int		sign;

			num   =  x;
			rev   =  0;
			sign  =  (x < 0)   ?  1 : 0;
			num	  =  (num < 0) ?  -num : num;
			while (num > 0)
			{
				rev = (rev * 10) + (num % 10);
				if ((sign && rev > INT_MIN) || (!sign && rev > INT_MAX))
					return (0);
				num /= 10;
			}
			return ((sign) ? -rev : rev);
		}

};

