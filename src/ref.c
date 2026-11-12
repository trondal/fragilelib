void sum_ref(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}