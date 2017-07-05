#include <cstdio>
#include <cstring>
#include <cctype>
char input[100];
char output[100];
int num[127];

int main()
{
	gets(input);
	gets(output);
	for(int i=0; i<strlen(input); i++)
		input[i] = toupper(input[i]);
	for(int i=0; i<strlen(output); i++)
		output[i] = toupper(output[i]);
	//strupr();
	//strlwr();
	int pos1=0, pos2=0;
	for(int i=0; i<strlen(input); i++)
	{
		if(input[pos1]!=output[pos2])
		{
			if(num[input[pos1]]==0)
			{
				printf("%c",input[pos1]);
				num[input[pos1]]++;
			}
			pos1++;
			continue;
		}
		pos1++;
		pos2++;
	}
}
