#include <iostream>
#include <string>
using namespace std;

int main()
{
	short M, N, i, u, v;
	cin >> N >> M;
	short **matrix=new short*[N];
	for(i=0; i<N; ++i) {
		matrix[i]=new short[M];
		for(u=0; u<M; ++u)
			matrix[i][u]=0;
	}
	for(i=0; i<M; ++i) {
		cin >> u >> v;
		matrix[u-1][i]=1;
		matrix[v-1][i]=1;
	}
	for(i=0; i<N; ++i) {
		for(u=0; u<M; ++u) 
			cout << matrix [i][u] << " ";
		cout.seekp(-1, ios_base::cur);
		cout.clear();
		cout << endl;
	}
	return 0;
}

