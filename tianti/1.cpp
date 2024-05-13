unsigned float_i2f(int num)
{
    int cnt = 0, exponent = 0;
    unsigned result;

    if (num == 0)
        return 0;
	
	int is_negative = 0;
	if (num < 0)
	{
		is_negative = 1;
		num = -num;
	} 

    unsigned temp = num;
    while (!(temp & 0x80000000))
    {
        temp <<= 1;
        cnt++;
    }

    temp = temp << 1;

    int fraction = 31 - cnt;
    exponent = 127 + fraction;
	
    int flag = 0;
    if ((temp & 0x1ff) > 0x100 || (temp & 0x3ff) == 0x300)
        flag = 1;

    return (is_negative << 31) | (exponent << 23) | (temp >> 9) + flag;
}


int main()
{
	float_i2f(0xffffffff - 0xfff);
}