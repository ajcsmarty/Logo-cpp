#include<iostream>
#include<conio.h>
#include<fstream>
#include<string.h>
using namespace std;

	void design_ok(char index[],int logo_no,string filename)
{
	//i=no of characters
	//j=line of characters
	//reading Characters from fil
	ofstream writefile;
	writefile.open((filename+".txt").c_str(),ios::app);
	ifstream file;
	string alp[26][10];
	alp[0][0]="",alp[0][1]="    ��     ",alp[0][2]="   ����    ",alp[0][3]="   ����    ",alp[0][4]="  ��  ��   ";
	alp[0][5]="  ��  ��   ",alp[0][6]=" ��    ��  ",alp[0][7]=" ��������  ",alp[0][8]="��      �� ",alp[0][9]="��      �� ";
	alp[1][0]="",alp[1][1]="�������  ",alp[1][2]="��   ��  ",alp[1][3]="��    �� ",alp[1][4]="��   ��  ";
	alp[1][5]="�������  ",alp[1][6]="��   ��  ",alp[1][7]="��    �� ",alp[1][8]="��   ��  ",alp[1][9]="�������  ";
	alp[2][0]="",alp[2][1]=" ������  ",alp[2][2]=" ��  ��  ",alp[2][3]="��    �� ",alp[2][4]="��       ";
	alp[2][5]="��       ",alp[2][6]="��       ",alp[2][7]="��    �� ",alp[2][8]=" ��  ��  ",alp[2][9]=" ������  ";
	alp[3][0]="",alp[3][1]="������   ",alp[3][2]="��   ��  ",alp[3][3]="��   ��  ",alp[3][4]="��    �� ";
	alp[3][5]="��    �� ",alp[3][6]="��    �� ",alp[3][7]="��   ��  ",alp[3][8]="��   ��  ",alp[3][9]="������   ";
	alp[4][0]="",alp[4][1]="������� ",alp[4][2]="��      ",alp[4][3]="��      ",alp[4][4]="��      ";
	alp[4][5]="������� ",alp[4][6]="��      ",alp[4][7]="��      ",alp[4][8]="��      ",alp[4][9]="������� ";
	alp[5][0]="",alp[5][1]="������� ",alp[5][2]="��      ",alp[5][3]="��      ",alp[5][4]="��      ";
	alp[5][5]="������� ",alp[5][6]="��      ",alp[5][7]="��      ",alp[5][8]="��      ",alp[5][9]="��      ";
	alp[6][0]="",alp[6][1]=" ������  ",alp[6][2]=" ��  ��  ",alp[6][3]="��    �� ",alp[6][4]="��       ";
	alp[6][5]="��       ",alp[6][6]="�� ����  ",alp[6][7]="�� ����  ",alp[6][8]=" ��  ��  ",alp[6][9]=" ������  ";
	alp[7][0]="",alp[7][1]="��    �� ",alp[7][2]="��    �� ",alp[7][3]="��    �� ",alp[7][4]="��    �� ";
	alp[7][5]="�������� ",alp[7][6]="��    �� ",alp[7][7]="��    �� ",alp[7][8]="��    �� ",alp[7][9]="��    �� ";
	alp[8][0]="",alp[8][1]="������ ",alp[8][2]="  ��   ",alp[8][3]="  ��   ",alp[8][4]="  ��   ";
	alp[8][5]="  ��   ",alp[8][6]="  ��   ",alp[8][7]="  ��   ",alp[8][8]="  ��   ",alp[8][9]="������ ";
	alp[9][0]="",alp[9][1]="�������� ",alp[9][2]="�     �� ",alp[9][3]="      �� ",alp[9][4]="      �� ";
	alp[9][5]="      �� ",alp[9][6]="      �� ",alp[9][7]="��    �� ",alp[9][8]=" ��   �� ",alp[9][9]=" ������  ";
	alp[10][0]="",alp[10][1]="��  �� ",alp[10][2]="��  �� ",alp[10][3]="�� ��  ",alp[10][4]="�� ��  ";
	alp[10][5]="����   ",alp[10][6]="�� ��  ",alp[10][7]="�� ��  ",alp[10][8]="��  �� ",alp[10][9]="��  �� ";
	alp[11][0]="",alp[11][1]="��      ",alp[11][2]="��      ",alp[11][3]="��      ",alp[11][4]="��      ";
	alp[11][5]="��      ",alp[11][6]="��      ",alp[11][7]="��      ",alp[11][8]="��      ",alp[11][9]="������� ";
	alp[12][0]="",alp[12][1]="����    ���� ",alp[12][2]="����    ���� ",alp[12][3]="�� ��  �� �� ",alp[12][4]="�� ��  �� �� ";
	alp[12][5]="��  ����  �� ",alp[12][6]="��  ����  �� ",alp[12][7]="��   ��   �� ",alp[12][8]="��        �� ",alp[12][9]="��        �� ";
	alp[13][0]="",alp[13][1]="����   �� ",alp[13][2]="����   �� ",alp[13][3]="�� ��  �� ",alp[13][4]="�� ��  �� ";
	alp[13][5]="��  �� �� ",alp[13][6]="��  �� �� ",alp[13][7]="��   ���� ",alp[13][8]="��   ���� ",alp[13][9]="��    ��� ";
	alp[14][0]="",alp[14][1]=" ������  ",alp[14][2]=" ��  ��  ",alp[14][3]="��    �� ",alp[14][4]="��    �� ";
	alp[14][5]="��    �� ",alp[14][6]="��    �� ",alp[14][7]="��    �� ",alp[14][8]=" ��  ��  ",alp[14][9]=" ������  ";
	alp[15][0]="",alp[15][1]="�������  ",alp[15][2]="��   ��  ",alp[15][3]="��    �� ",alp[15][4]="��   ��  ";
	alp[15][5]="�������  ",alp[15][6]="��       ",alp[15][7]="��       ",alp[15][8]="��       ",alp[15][9]="��       ";
	alp[16][0]="",alp[16][1]=" ������   ",alp[16][2]=" ��  ��   ",alp[16][3]="��    ��  ",alp[16][4]="��    ��  ";
	alp[16][5]="��    ��  ",alp[16][6]="��  ����  ",alp[16][7]="��  ����  ",alp[16][8]=" ��  ���� ",alp[16][9]=" �������� ";
	alp[17][0]="",alp[17][1]="�������  ",alp[17][2]="��   ��  ",alp[17][3]="��    �� ",alp[17][4]="��   ��  ";
	alp[17][5]="�������  ",alp[17][6]="�� ��    ",alp[17][7]="�� ��    ",alp[17][8]="��  ��   ",alp[17][9]="��  ��   ";
	alp[18][0]="",alp[18][1]="  ������  ",alp[18][2]=" ��   ��  ",alp[18][3]=" ��    �� ",alp[18][4]=" ��       ";
	alp[18][5]="  �����   ",alp[18][6]="      ��  ",alp[18][7]="��    ��  ",alp[18][8]=" ��   ��  ",alp[18][9]=" ������   ";
	alp[19][0]="",alp[19][1]="���������� ",alp[19][2]="    ��     ",alp[19][3]="    ��     ",alp[19][4]="    ��     ";
	alp[19][5]="    ��     ",alp[19][6]="    ��     ",alp[19][7]="    ��     ",alp[19][8]="    ��     ",alp[19][9]="    ��     ";
	alp[20][0]="",alp[20][1]="��     �� ",alp[20][2]="��     �� ",alp[20][3]="��     �� ",alp[20][4]="��     �� ";
	alp[20][5]="��     �� ",alp[20][6]="��     �� ",alp[20][7]="��     �� ",alp[20][8]=" ��   ��  ",alp[20][9]=" �������  ";
	alp[21][0]="",alp[21][1]="��      �� ",alp[21][2]="��      �� ",alp[21][3]="��      �� ",alp[21][4]=" ��    ��  ";
	alp[21][5]=" ��    ��  ",alp[21][6]="  ��  ��   ",alp[21][7]="  ��  ��   ",alp[21][8]="   ����    ",alp[21][9]="   ����    ";
	alp[22][0]="",alp[22][1]="��        �� ",alp[22][2]="��   ��   �� ",alp[22][3]="��  ����  �� ",alp[22][4]="��  ����  �� ";
	alp[22][5]="�� ��  �� �� ",alp[22][6]="�� ��  �� �� ",alp[22][7]="����    ���� ",alp[22][8]="����    ���� ",alp[22][9]="���      ��� ";
	alp[23][0]="",alp[23][1]="��    �� ",alp[23][2]=" ��  ��  ",alp[23][3]=" ��  ��  ",alp[23][4]="  ����   ";
	alp[23][5]="  ����   ",alp[23][6]="  ����   ",alp[23][7]=" ��  ��  ",alp[23][8]=" ��  ��  ",alp[23][9]="��    �� ";
	alp[24][0]="",alp[24][1]="��    �� ",alp[24][2]=" ��  ��  ",alp[24][3]=" ��  ��  ",alp[24][4]="  ����   ";
	alp[24][5]="  ����   ",alp[24][6]="   ��    ",alp[24][7]="   ��    ",alp[24][8]="   ��    ",alp[24][9]="   ��    ";
	alp[25][0]="",alp[25][1]="�������� ",alp[25][2]="      �� ",alp[25][3]="     ��  ",alp[25][4]="    ��   ";
	alp[25][5]="   ��    ",alp[25][6]="  ��     ",alp[25][7]=" ��      ",alp[25][8]="��       ",alp[25][9]="�������� ";
	///////////////////////////////////////
	//Writing logo
	int line=0;//logo lenght
	for(int i=0;i<strlen(index);i++)//strlen(index) total characters in index
		line+=alp[int(index[i])-97][1].capacity();
	if(logo_no==1)
	{	
		//line
		writefile<<"\n\n\nvoid logo1()\n{\n\tsystem(\"cls\");\n\tcout<<\"\\t\\t ���";
		for(int i=1;i<=line+2;i++)
			writefile<<"�";
		writefile<<"�Ŀ \\n\";\n";
		//line
		writefile<<"\tcout<<\"\\t\\t � �";
		for(int i=1;i<=line+2;i++)
			writefile<<"�";
		writefile<<"� � \\n\";\n";
		//line
		for(int j=1;j<10;j++)//Start j=1 because first line was null of every character in file
		{
			writefile<<"\tcout<<\"\\t\\t � � ";
			for(int i=0;i<strlen(index);i++)//strlen(index) total characters in index
				writefile<<alp[int(index[i])-97][j];
			writefile<<" � � \\n\";\n";
		}
		//line
		writefile<<"\tcout<<\"\\t\\t � �";
		for(int i=1;i<=((line+2)-34)/2;i++)
			writefile<<"�";
		writefile<<"����������������������������������";
		for(int i=1;i<=((line+3)-34)/2;i++)
			writefile<<"�";
		writefile<<"� � \\n\";\n";
		//line
		writefile<<"\tcout<<\"\\t\\t ���";
		for(int i=1;i<=((line+2)-34)/2;i++)
			writefile<<"�";
		writefile<<"�M A N E G M E N T    S Y S T E M�";
		for(int i=1;i<=((line+3)-34)/2;i++)
			writefile<<"�";
		writefile<<"��� \\n\";\n";
		//line
		writefile<<"\tcout<<\"\\t\\t    ";
		for(int i=1;i<=((line+2)-34)/2;i++)
			writefile<<" ";
		writefile<<"����������������������������������\\n\";\n}";
	}
	if(logo_no==2)
	{
		writefile<<"\n\n\nvoid logo2()\n{\n\tsystem(\"cls\");\n\tcout<<\"\\t\\t �";
		for(int i=1;i<=line+1;i++)
			writefile<<"�";
		writefile<<"� \\n\";\n";
		//line
		for(int j=1;j<10;j++)//Start j=1 because first line was null of every character in file
		{
			writefile<<"\tcout<<\"\\t\\t � ";
			for(int i=0;i<strlen(index);i++)//strlen(index) total characters in index
				writefile<<alp[int(index[i])-97][j];
			writefile<<"� \\n\";\n";
		}
		//line
		writefile<<"\tcout<<\"\\t\\t �";
		for(int i=1;i<=line+1;i++)
			writefile<<"�";
		writefile<<"� \\n\";\n";
		//line
		writefile<<"\tcout<<\"\\t\\t  ";
		for(int i=1;i<=((line+2)-34)/2;i++)
			writefile<<" ";
		writefile<<"M A N E G M E N T    S Y S T E M\\n\";\n}";
	}
	if(logo_no==3)
	{
		//line
		writefile<<"\n\n\nvoid logo3()\n{\n\tsystem(\"cls\");\n\tcout<<\"\\t\\t �";
		for(int i=1;i<=((line)/2)+1;i++)
			writefile<<" �";
		writefile<<" \\n\";\n";
		//line
		for(int j=1;j<10;j++)//Start j=1 because first line was null of every character in file
		{
			writefile<<"\tcout<<\"\\t\\t � ";
			for(int i=0;i<strlen(index);i++)//strlen(index) total characters in index
				writefile<<alp[int(index[i])-97][j];
			writefile<<"� \\n\";\n";
		}
		//line
		writefile<<"\tcout<<\"\\t\\t �";
		for(int i=1;i<=((line)/2)+1;i++)
			writefile<<" �";
		writefile<<" \\n\";\n";
		//line
		writefile<<"\tcout<<\"\\t\\t  ";
		for(int i=1;i<=((line+2)-34)/2;i++)
			writefile<<" ";
		writefile<<"M A N E G M E N T    S Y S T E M\\n\";\n}";
	}
	if(logo_no==4)
	{
		//line
		writefile<<"\n\n\nvoid logo4()\n{\n\tsystem(\"cls\");\n\tcout<<\"\\t\\t ";
		for(int i=1;i<=line+1;i++)
			writefile<<"�";
		writefile<<" \\n\";\n";
		//line
		for(int j=1;j<10;j++)//Start j=1 because first line was null of every character in file
		{
			writefile<<"\tcout<<\"\\t\\t  ";
			for(int i=0;i<strlen(index);i++)//strlen(index) total characters in index
				writefile<<alp[int(index[i])-97][j];
			writefile<<" \\n\";\n";
		}
		//line
		writefile<<"\tcout<<\"\\t\\t ";
		for(int i=1;i<=line+1;i++)
			writefile<<"�";
		writefile<<" \\n\";\n";
		//line
		writefile<<"\tcout<<\"\\t\\t  ";
		for(int i=1;i<=((line+2)-34)/2;i++)
			writefile<<" ";
		writefile<<"M A N E G M E N T    S Y S T E M\\n\";\n}";
	}
	if(logo_no==5)
	{
		//line
		writefile<<"\n\n\nvoid logo5()\n{\n\tsystem(\"cls\");\n\tcout<<\"\\t\\t ";
		for(int i=1;i<=line+1;i++)
			writefile<<"�";
		writefile<<" \\n\";\n";
		//line
		for(int j=1;j<10;j++)//Start j=1 because first line was null of every character in file
		{
			writefile<<"\tcout<<\"\\t\\t  ";
			for(int i=0;i<strlen(index);i++)//strlen(index) total characters in index
				writefile<<alp[int(index[i])-97][j];
			writefile<<" \\n\";\n";
		}
		//line
		writefile<<"\tcout<<\"\\t\\t ";
		for(int i=1;i<=line+1;i++)
			writefile<<"�";
		writefile<<" \\n\";\n";
		//line
		writefile<<"\tcout<<\"\\t\\t  ";
		for(int i=1;i<=((line+2)-34)/2;i++)
			writefile<<" ";
		writefile<<"M A N E G M E N T    S Y S T E M\\n\";\n}";
	}
	writefile.close();
}
int main()
{
	char index[30];
	cout<<"Enter the NAME of your MANAGEMENT PROJECT for its LOGO : ";
	cin>>index;
	for(int i=1;i<6;i++) 
		design_ok(index,i,index);
}
