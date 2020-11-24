
    #include <stdio.h>
    int main()
    {
    	int i;
    	char ch;
    	int sum=0;
    	 printf("This program sums a series of integers.\n");
    printf("Enter integers (0 to terminate):");
    	//一直到输入的值是整数的时候进入while循环,当输入字符时，scanf返回0，什么都不读，然后再次调用scanf
    	while (scanf("%d",&i)==1)
    	{
    		sum += i;
    		while ((ch = getchar()) == ' ')//屏蔽空格
    			;
    		if (ch == '\n')
    		{
    			break;
    		}
    		ungetc(ch,stdin);//将变量ch中存放的字符退回给stdin输入流，获取多的退回
    	}
    	printf("The sum is: %d\n",sum);
    	return 0;
    }