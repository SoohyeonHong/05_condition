	
int main(int argc, char *argv[]) {

	int num = 0;
	char c;
	//getchar(); // ���� ���� 
	
	printf("���ڿ��� �Է��ϼ���: ");
	
	while((c = getchar()) != '\n')
	{
		if (c <= '9' && c >= '0')
		{
			num++;
		}
	}
	
	printf("���ڿ��� �ִ� ������ ������ %d���Դϴ�.\n", num);
	
	return 0;
}
