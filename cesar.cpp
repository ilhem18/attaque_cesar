#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;
int occ (string m, char c){
	int i=0, n=0;
	for(i=0;i<m.length();i++)
	{
		if(m.at(i)==c)
		{
			n++;
		}
	}
	return n;
}
int main(){
	string cipher_message="vx mrix wx vabyykxl ixnm xmkx ytvbexfxgm vtllx vtk ex vabyykx gx vtvax itl exl ykxjnxgvxllhnlctvxgmxl wxl wbyyxkxgml vtktvmxkxl wn mxqmx xg vetbk xg etgznx tgzetblx be gx ytnmitl ienl wx vtktvmxkxl wn mxqmx vabyykx totgm jn’ng uhg vkrimtgterlmx gx inbllxkxvhglmknbkx ex mxqmx xg vetbk ng tezhkbmafx zxgxkte ihnk vtllxk vx zxgkx wxvabyykx xlm wxvkbm wtgl ngx uhggx kxtebltmbhg lnkhkwbgtmxnk xlm whggxx wtgl "; 
	char alph[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
	int a=occ(cipher_message,alph[0]);
	int b=occ(cipher_message,alph[1]);
	int c=occ(cipher_message,alph[2]);
	int d=occ(cipher_message,alph[3]);
	int e=occ(cipher_message,alph[4]);
	int f=occ(cipher_message,alph[5]);
	int g=occ(cipher_message,alph[6]);
	int h=occ(cipher_message,alph[7]);
	int i=occ(cipher_message,alph[8]);
	int j=occ(cipher_message,alph[9]);
	int k=occ(cipher_message,alph[10]);
	int l=occ(cipher_message,alph[11]);
	int m=occ(cipher_message,alph[12]);
	int n=occ(cipher_message,alph[13]);
	int o=occ(cipher_message,alph[14]);
	int p=occ(cipher_message,alph[15]);
	int q=occ(cipher_message,alph[16]);
	int r=occ(cipher_message,alph[17]);
	int s=occ(cipher_message,alph[18]);
	int t=occ(cipher_message,alph[19]);
	int u=occ(cipher_message,alph[20]);
	int v=occ(cipher_message,alph[21]);
	int w=occ(cipher_message,alph[22]);
	int x=occ(cipher_message,alph[23]);
	int y=occ(cipher_message,alph[24]);
	int z=occ(cipher_message,alph[25]);
	
	int nb_occ[26]={a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z};
	int max=0,nb=0;
	for(int j=0;j<26;j++)
	{
		if(max<nb_occ[j])
		{
			max=nb_occ[j];
			nb=j;
		}
	}
	int key=nb-4;

	for (int x=0;x<cipher_message.length();x++)
	{
		for(int y=0;y<26;y++) 
		{
			if(cipher_message.at(x)==alph[y])
			{
				int c=(y-key)%25;
				char message_clair=alph[c];	
				cout << message_clair;
			}	
		}
		cout << endl;
			
	}
	return 0;
}
