#include<iostream>
using namespace std;

#define N 8
//N代表皇后数
void queen()
{
	int Count=0;		 //计算总共的解的数量
	int column[N+1];     //column[m]=n 表示第m列，第n行放置了皇后,这里下表并从0开始
	int row[N+1];		 //row[m]=1表示第m行没有皇后，=0表示有皇后
	int b[2*N+1];		 //b[m]=1表示第m条主对角线没有皇后，
	int c[2*N+1];        //c[m]=1表示第m条次对角线没有皇后，=0表示有皇后
	int numQueen=1;		 //计数已经放置的皇后数目，当numQueen=N时候则表示已经完成探测
	int good=1;			 //good=1表示没有发生冲突,good=0表示发生冲突
	
	//初始化这些标记
	for(int j=0;j<N+1;++j)
	{
		row[j]=1; //没有皇后 
	}
	for(int j=0;j<2*N+1;++j)
	{
		b[j]=c[j]=1;
	}
	column[1]=1;
	column[0]=0;          //初始化第一行第一列，第二行第二列放置皇后
	do
	{
		//没有发生冲突，则继续向下探测，增加皇后或者判断当前是否是解
		if(good)
		{
			//当前皇后数是解，打印，继续向下探测
			if(numQueen==N)
			{
				Count++;
				cout<<"找到解"<<endl;
				for(int j=1;j<N+1;++j)
				{
					cout<<j<<"列"<<column[j]<<"行"<<endl;
				}
				//最后一个棋子向下移动,移动到本列最后一个
				while(column[numQueen]==N)
				{
					numQueen--;			//皇后数减1，即列数减1，回溯
					//回溯后将该列以及该列最后一行状态位修改
					//第numQueen列column[numQueen]行处状态位置修改
					row[column[numQueen]]=1;
					b[numQueen+column[numQueen]]=1;
					c[N+numQueen-column[numQueen]]=1;
				}
				column[numQueen]++;		//回溯至上一行，向上一行的下一列继续探测
			}
			//当前不是解，那么继续向下探测
			else
			{
				//改变该位置对应标志
				row[column[numQueen]]=0;
				b[numQueen+column[numQueen]]=0;
				c[N+numQueen-column[numQueen]]=0;
				//本次位置没有发生冲突，也不是正确解，那么就应该向下探测下一列的第一行
				column[++numQueen]=1;
			}
		}
		//如果当前发生了冲突，就在本列继续向下，如果到了本列最后一行，则回溯到上一列
		else
		{
			while(column[numQueen]==N) //到了本列最后一行，还是冲突，那么回溯到上一列
			{
				numQueen--;
				row[column[numQueen]]=1;
				b[numQueen+column[numQueen]]=1;
				c[N+numQueen-column[numQueen]]=1;
			}
			column[numQueen]++;	//发生冲突了，又没有到本列的最后一行，那么在本列继续向下一行探测
		}
		//检测放置了这个位置后是否冲突
		good=row[column[numQueen]]&b[numQueen+column[numQueen]]&c[N+numQueen-column[numQueen]];
	}while(numQueen);
	cout<<N<<"皇后总共找到解："<<Count<<"个"<<endl;
}
int  main()
{
	queen();
	return 0;
}

