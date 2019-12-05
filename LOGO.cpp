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
	alp[0][0]="",alp[0][1]="    лл     ",alp[0][2]="   оллн    ",alp[0][3]="   лнол    ",alp[0][4]="  ол  лн   ";
	alp[0][5]="  лн  ол   ",alp[0][6]=" ол    лн  ",alp[0][7]=" лллллллл  ",alp[0][8]="ол      лн ",alp[0][9]="лн      ол ";
	alp[1][0]="",alp[1][1]="олллллн  ",alp[1][2]="ол   ол  ",alp[1][3]="ол    лн ",alp[1][4]="ол   ол  ";
	alp[1][5]="олллллн  ",alp[1][6]="ол   ол  ",alp[1][7]="ол    лн ",alp[1][8]="ол   ол  ",alp[1][9]="олллллн  ";
	alp[2][0]="",alp[2][1]=" оллллн  ",alp[2][2]=" лн  ол  ",alp[2][3]="ол    лн ",alp[2][4]="лн       ";
	alp[2][5]="лн       ",alp[2][6]="лн       ",alp[2][7]="ол    лн ",alp[2][8]=" лн  ол  ",alp[2][9]=" оллллн  ";
	alp[3][0]="",alp[3][1]="оллллл   ",alp[3][2]="ол   лн  ",alp[3][3]="ол   ол  ",alp[3][4]="ол    лн ";
	alp[3][5]="ол    лн ",alp[3][6]="ол    лн ",alp[3][7]="ол   ол  ",alp[3][8]="ол   лн  ",alp[3][9]="оллллл   ";
	alp[4][0]="",alp[4][1]="олллллл ",alp[4][2]="ол      ",alp[4][3]="ол      ",alp[4][4]="ол      ";
	alp[4][5]="олллллл ",alp[4][6]="ол      ",alp[4][7]="ол      ",alp[4][8]="ол      ",alp[4][9]="олллллл ";
	alp[5][0]="",alp[5][1]="олллллл ",alp[5][2]="ол      ",alp[5][3]="ол      ",alp[5][4]="ол      ";
	alp[5][5]="олллллл ",alp[5][6]="ол      ",alp[5][7]="ол      ",alp[5][8]="ол      ",alp[5][9]="ол      ";
	alp[6][0]="",alp[6][1]=" оллллн  ",alp[6][2]=" лн  ол  ",alp[6][3]="ол    лн ",alp[6][4]="лн       ";
	alp[6][5]="лн       ",alp[6][6]="лн оллн  ",alp[6][7]="ол онол  ",alp[6][8]=" лн  ол  ",alp[6][9]=" оллллн  ";
	alp[7][0]="",alp[7][1]="ол    лн ",alp[7][2]="ол    лн ",alp[7][3]="ол    лн ",alp[7][4]="ол    лн ";
	alp[7][5]="оллллллн ",alp[7][6]="ол    лн ",alp[7][7]="ол    лн ",alp[7][8]="ол    лн ",alp[7][9]="ол    лн ";
	alp[8][0]="",alp[8][1]="оллллл ",alp[8][2]="  ол   ",alp[8][3]="  ол   ",alp[8][4]="  ол   ";
	alp[8][5]="  ол   ",alp[8][6]="  ол   ",alp[8][7]="  ол   ",alp[8][8]="  ол   ",alp[8][9]="оллллл ";
	alp[9][0]="",alp[9][1]="лллллллл ",alp[9][2]="л     ол ",alp[9][3]="      ол ",alp[9][4]="      ол ";
	alp[9][5]="      ол ",alp[9][6]="      ол ",alp[9][7]="ол    ол ",alp[9][8]=" лн   лн ",alp[9][9]=" оллллл  ";
	alp[10][0]="",alp[10][1]="ол  ол ",alp[10][2]="ол  лн ",alp[10][3]="ол ол  ",alp[10][4]="ол лн  ";
	alp[10][5]="оллл   ",alp[10][6]="ол лн  ",alp[10][7]="ол ол  ",alp[10][8]="ол  лн ",alp[10][9]="ол  ол ";
	alp[11][0]="",alp[11][1]="ол      ",alp[11][2]="ол      ",alp[11][3]="ол      ",alp[11][4]="ол      ";
	alp[11][5]="ол      ",alp[11][6]="ол      ",alp[11][7]="ол      ",alp[11][8]="ол      ",alp[11][9]="олллллл ";
	alp[12][0]="",alp[12][1]="оллн    оллн ",alp[12][2]="олол    лнлн ",alp[12][3]="ол лн  ол лн ",alp[12][4]="ол ол  лн лн ";
	alp[12][5]="ол  лнол  лн ",alp[12][6]="ол  оллн  лн ",alp[12][7]="ол   он   лн ",alp[12][8]="ол        лн ",alp[12][9]="ол        лн ";
	alp[13][0]="",alp[13][1]="оллн   ол ",alp[13][2]="олол   ол ",alp[13][3]="ол лн  ол ",alp[13][4]="ол ол  ол ";
	alp[13][5]="ол  лн ол ",alp[13][6]="ол  ол ол ",alp[13][7]="ол   лнол ",alp[13][8]="ол   олол ",alp[13][9]="ол    ллл ";
	alp[14][0]="",alp[14][1]=" оллллн  ",alp[14][2]=" лн  ол  ",alp[14][3]="ол    лн ",alp[14][4]="лн    ол ";
	alp[14][5]="лн    ол ",alp[14][6]="лн    ол ",alp[14][7]="ол    лн ",alp[14][8]=" лн  ол  ",alp[14][9]=" оллллн  ";
	alp[15][0]="",alp[15][1]="олллллн  ",alp[15][2]="ол   ол  ",alp[15][3]="ол    лн ",alp[15][4]="ол   ол  ";
	alp[15][5]="олллллн  ",alp[15][6]="ол       ",alp[15][7]="ол       ",alp[15][8]="ол       ",alp[15][9]="ол       ";
	alp[16][0]="",alp[16][1]=" оллллн   ",alp[16][2]=" лн  ол   ",alp[16][3]="ол    лн  ",alp[16][4]="лн    ол  ";
	alp[16][5]="лн    ол  ",alp[16][6]="лн  лнол  ",alp[16][7]="ол  оллн  ",alp[16][8]=" лн  оллн ",alp[16][9]=" оллллнол ";
	alp[17][0]="",alp[17][1]="олллллн  ",alp[17][2]="ол   ол  ",alp[17][3]="ол    лн ",alp[17][4]="ол   ол  ";
	alp[17][5]="олллллн  ",alp[17][6]="ол лн    ",alp[17][7]="ол ол    ",alp[17][8]="ол  лн   ",alp[17][9]="ол  ол   ";
	alp[18][0]="",alp[18][1]="  лллллн  ",alp[18][2]=" ол   ол  ",alp[18][3]=" лн    лн ",alp[18][4]=" ол       ";
	alp[18][5]="  ллллл   ",alp[18][6]="      лн  ",alp[18][7]="ол    ол  ",alp[18][8]=" лн   лн  ",alp[18][9]=" оллллл   ";
	alp[19][0]="",alp[19][1]="оллллллллл ",alp[19][2]="    ол     ",alp[19][3]="    ол     ",alp[19][4]="    ол     ";
	alp[19][5]="    ол     ",alp[19][6]="    ол     ",alp[19][7]="    ол     ",alp[19][8]="    ол     ",alp[19][9]="    ол     ";
	alp[20][0]="",alp[20][1]="ол     лн ",alp[20][2]="ол     лн ",alp[20][3]="ол     лн ",alp[20][4]="ол     лн ";
	alp[20][5]="ол     лн ",alp[20][6]="ол     лн ",alp[20][7]="ол     лн ",alp[20][8]=" лн   ол  ",alp[20][9]=" олллллн  ";
	alp[21][0]="",alp[21][1]="ол      лн ",alp[21][2]="ол      лн ",alp[21][3]="ол      лн ",alp[21][4]=" лн    ол  ";
	alp[21][5]=" ол    лн  ",alp[21][6]="  лн  ол   ",alp[21][7]="  ол  лн   ",alp[21][8]="   лнол    ",alp[21][9]="   оллн    ";
	alp[22][0]="",alp[22][1]="ол        лн ",alp[22][2]="ол   он   лн ",alp[22][3]="ол  оллн  лн ",alp[22][4]="ол  лнол  лн ";
	alp[22][5]="ол ол  лн лн ",alp[22][6]="ол лн  ол лн ",alp[22][7]="олол    лнлн ",alp[22][8]="оллн    оллн ",alp[22][9]="олл      ллн ";
	alp[23][0]="",alp[23][1]="ол    лн ",alp[23][2]=" лн  ол  ",alp[23][3]=" ол  лн  ",alp[23][4]="  лнол   ";
	alp[23][5]="  оллн   ",alp[23][6]="  лнол   ",alp[23][7]=" ол  лн  ",alp[23][8]=" лн  ол  ",alp[23][9]="ол    лн ";
	alp[24][0]="",alp[24][1]="ол    лн ",alp[24][2]=" лн  ол  ",alp[24][3]=" ол  лн  ",alp[24][4]="  лнол   ";
	alp[24][5]="  оллн   ",alp[24][6]="   лл    ",alp[24][7]="   лл    ",alp[24][8]="   лл    ",alp[24][9]="   лл    ";
	alp[25][0]="",alp[25][1]="лллллллл ",alp[25][2]="      лл ",alp[25][3]="     лл  ",alp[25][4]="    лл   ";
	alp[25][5]="   лл    ",alp[25][6]="  лл     ",alp[25][7]=" лл      ",alp[25][8]="лл       ",alp[25][9]="лллллллл ";
	///////////////////////////////////////
	//Writing logo
	int line=0;//logo lenght
	for(int i=0;i<strlen(index);i++)//strlen(index) total characters in index
		line+=alp[int(index[i])-97][1].capacity();
	if(logo_no==1)
	{	
		//line
		writefile<<"\n\n\nvoid logo1()\n{\n\tsystem(\"cls\");\n\tcout<<\"\\t\\t кФФ";
		for(int i=1;i<=line+2;i++)
			writefile<<"Ф";
		writefile<<"ФФП \\n\";\n";
		//line
		writefile<<"\tcout<<\"\\t\\t Г к";
		for(int i=1;i<=line+2;i++)
			writefile<<"Ф";
		writefile<<"П Г \\n\";\n";
		//line
		for(int j=1;j<10;j++)//Start j=1 because first line was null of every character in file
		{
			writefile<<"\tcout<<\"\\t\\t Г Г ";
			for(int i=0;i<strlen(index);i++)//strlen(index) total characters in index
				writefile<<alp[int(index[i])-97][j];
			writefile<<" Г Г \\n\";\n";
		}
		//line
		writefile<<"\tcout<<\"\\t\\t Г Р";
		for(int i=1;i<=((line+2)-34)/2;i++)
			writefile<<"Ф";
		writefile<<"ТФФФФФФФФФФФФФФФФФФФФФФФФФФФФФФФФТ";
		for(int i=1;i<=((line+3)-34)/2;i++)
			writefile<<"Ф";
		writefile<<"й Г \\n\";\n";
		//line
		writefile<<"\tcout<<\"\\t\\t РФФ";
		for(int i=1;i<=((line+2)-34)/2;i++)
			writefile<<"Ф";
		writefile<<"ДM A N E G M E N T    S Y S T E MУ";
		for(int i=1;i<=((line+3)-34)/2;i++)
			writefile<<"Ф";
		writefile<<"ФФй \\n\";\n";
		//line
		writefile<<"\tcout<<\"\\t\\t    ";
		for(int i=1;i<=((line+2)-34)/2;i++)
			writefile<<" ";
		writefile<<"РФФФФФФФФФФФФФФФФФФФФФФФФФФФФФФФФй\\n\";\n}";
	}
	if(logo_no==2)
	{
		writefile<<"\n\n\nvoid logo2()\n{\n\tsystem(\"cls\");\n\tcout<<\"\\t\\t Щ";
		for(int i=1;i<=line+1;i++)
			writefile<<"Э";
		writefile<<"Л \\n\";\n";
		//line
		for(int j=1;j<10;j++)//Start j=1 because first line was null of every character in file
		{
			writefile<<"\tcout<<\"\\t\\t К ";
			for(int i=0;i<strlen(index);i++)//strlen(index) total characters in index
				writefile<<alp[int(index[i])-97][j];
			writefile<<"К \\n\";\n";
		}
		//line
		writefile<<"\tcout<<\"\\t\\t Ш";
		for(int i=1;i<=line+1;i++)
			writefile<<"Э";
		writefile<<"М \\n\";\n";
		//line
		writefile<<"\tcout<<\"\\t\\t  ";
		for(int i=1;i<=((line+2)-34)/2;i++)
			writefile<<" ";
		writefile<<"M A N E G M E N T    S Y S T E M\\n\";\n}";
	}
	if(logo_no==3)
	{
		//line
		writefile<<"\n\n\nvoid logo3()\n{\n\tsystem(\"cls\");\n\tcout<<\"\\t\\t ј";
		for(int i=1;i<=((line)/2)+1;i++)
			writefile<<" ј";
		writefile<<" \\n\";\n";
		//line
		for(int j=1;j<10;j++)//Start j=1 because first line was null of every character in file
		{
			writefile<<"\tcout<<\"\\t\\t ј ";
			for(int i=0;i<strlen(index);i++)//strlen(index) total characters in index
				writefile<<alp[int(index[i])-97][j];
			writefile<<"ј \\n\";\n";
		}
		//line
		writefile<<"\tcout<<\"\\t\\t ј";
		for(int i=1;i<=((line)/2)+1;i++)
			writefile<<" ј";
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
			writefile<<"ь";
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
			writefile<<"ь";
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
			writefile<<"Џ";
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
			writefile<<"Ў";
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
