unsigned long long	sum(int *a, int n)
{
	int					i;
	unsigned long long	rslt;

	rslt = 0;
	for (i = 0; i < n; i++)
		rslt += a[i];
	return (rslt);
}