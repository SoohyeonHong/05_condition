	
int main(int argc, char *argv[]) {

	int num = 0;
	char c;
	//getchar(); // 버퍼 비우기 
	
	printf("문자열을 입력하세요: ");
	
	while((c = getchar()) != '\n')
	{
		if (c <= '9' && c >= '0')
		{
			num++;
		}
	}
	
	printf("문자열에 있는 문자의 개수는 %d개입니다.\n", num);
	
	return 0;
}
