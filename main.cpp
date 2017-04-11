#include <iostream>
#include <string>//string
#include <fstream>// read/write file
#include <cstdlib>
#include <stdio.h>
#include <algorithm>
using namespace std;

int main(){
	int n = 0;//to get how many cow
	int x = 0;//index
	int weight = 0;
	int cow[10000];//save the heavest 4 cow
	int cow_in;//get the new cow
	ifstream inFile("file.in", ios::in);
	if(!inFile) {
		cerr << "Failed opening" << endl;
		exit(1);
	}
	inFile >> n;
	for(x=0;x<n;++x){
		inFile >> cow_in;
		cow[x]=cow_in;
	}
	sort(cow,cow+n);
	for(x=0;x<5;++x){
		weight+=cow[n-x-1];
	}
	cout << weight << endl;
	return 0;
}
