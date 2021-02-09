#include <iostream>

using namespace std;


int main(){
	string texte_chiffre="vx mrix wx vabyykxl ixnm xmkx ytvbexfxgm vtllx vtk ex vabyykx gx vtvax itl exl ykxjnxgvxllhnlctvxgmxl wxl wbyyxkxgml vtktvmxkxl wn mxqmx xg vetbk xg etgznx tgzetblx be gx ytnmitl ienl wx vtktvmxkxl wn mxqmx vabyykx totgm jn’ng uhg vkrimtgterlmx gx inbllxkxvhglmknbkx ex mxqmx xg vetbk ng tezhkbmafx zxgxkte ihnk vtllxk vx zxgkx wxvabyykx xlm wxvkbm wtgl ngx uhggx kxtebltmbhg lnkhkwbgtmxnk xlm whggxx wtgl ";
	for (int i=0;i<26;i++)
	{
		for(int j=0;j<texte_chiffre.length();j++)
		{
			if(texte_chiffre[j]!= ' ')
			{
				char a=char(int(texte_chiffre[j]+i-97)%26 +97); //97=a dans ASCII
				cout << a;
			}
			else
			{
				cout << ' ';
			}
		}
		cout << endl;
	}
	
	
	return 0;
}
