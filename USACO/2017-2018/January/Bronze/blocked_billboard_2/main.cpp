#include<iostream>
#include<fstream>
#include<cmath>
using namespace std;

int main(){
    ofstream fout ("billboard.out");
    ifstream fin ("billboard.in");
    int a1, b1, a2, b2; fin >> a1 >> b1 >> a2 >> b2;
    int c1, d1, c2, d2; fin >> c1 >> d1 >> c2 >> d2;
    if (a1 == c1 && b1==d1&&a2==c2 && b2==d2) fout << 0;
    int area = (b2-b1)*(a2-a1);
    if (b1==d1&&b2==d2){
    	if (a1<c1&&a2<c2){
    		int x = (c1-a1)*(b2-b1);
    		fout << x;
    	}
    	if (a1>c1&&a2>c2){
    		int x = (c2-a2)*(b2-b1);
    		fout << x;
    	}
    	if (a1<c1&&a2>c2){
    		int x= (a2-a1)*(b2-b1);
    		fout << x;
    	}
    	if (c1<a1&&c2>a2){
    		fout << 0;
    	}
    	if (a1==c1&&a2>c2){
    		int x = (a2-c2)*(b2-b1);

    	}
    	if (a1==c1&&c2>a2){
    		fout << 0;
    	}
    	if (a2==c2&&a1<c1){
    		int x= (c1-a1)*(b2-b1);
    	}
    	if (a2==c2&&c1<a1){
    		fout << 0;
    	}

    }
    if (a1==c1&&a2==c2){
    	if (d1<b1&&d2<b2){
    		int x = (b2-d2)*(a2-a1);
    		fout << x;
    	}
    	if (d1>b1&&d2>b2){
    		int x = (d1-b1)*(a2-a1);
    	}
    	if (b1<d1&&b2>d2){
    		int x = (b2-b1)*(a2-a1);
    		fout << x;
    	}
    	if (d1<b1&&d2>b2){
    		fout << 0;
    	}
    	if (b1==d1&&b2>d2){
    		int x = (b2-d2)*(a2-a1);
    	}
    	if (b1==d1&&d2>b2){
    		fout << 0;
    	}
    	if (b2==d2&&b1<d1){
    		int x = (d1-b1)*(a2-a1);
    		fout << x;
    	}
    	if (b2==d2&&d1<b1){
    		fout << 0;
    	}
    }
    if (a1!=c1&&b1!=d1&&a2!=c2&&b2!=d2){
    	if (a1<c1&&a2>c1&&b1<d1&&b2>d2) fout << area;
    	if (a1>c1&&a2<c2&&b1>d1&&b2<d2) fout << 0;
    	if (a1>c1&&b1<d1&&a2>c2&&b2<d2) fout << area;
    	if (a1<c1&&b1>d1&&a2<c2&&b2>d2) fout << area;
    	if (a1<c1&&b1<d1&&a2<c2&&b2<d2) fout << area;
    	if (a1>c1&&b1>d1&&a2>c2&&b2>d2) fout << area;
    	if (a1>c1&&b1<d1&&a2<c1&&b2<d2){
    		int x = (d1-b1)*(a2-a1);
    		fout << x;
    	}
    	if (a1>c1&&b1>d1&&a2<c2&&b2>d2){
    		int x = (b2-d2)*(a2-a1);
    		fout << x;
    	}
    	if (a1>c1&&b1>d1&&a2>c2&&b2<d2){
    		int x= (a2-c2)*(b2-b1);
    		fout << x;
    	}
    	if (a1<c1&&b1>d1&&a2<c2&&b2<d2){
    		int x = (c1-a1)*(b2-b1);
    		fout << x;
    	}
    	if (a1>c1&&b1<d1&&a2>c2&&b2>d2){
    		fout << area;
    	}
    	if (a1<c1&&b1<d1&&a2<c2&&b2>d2){
    		fout << area;
    	}
    	if (a1<c1&&b1>d1&&a2>c2&&b2>d2){
    		fout << area;
    	}
    	if (a1<c1&&b1<d1&&a2>c2&&b2<d2){
    		fout << area;
    	}
    	if (a1>c1&&b1<d1&&a2<c2&&b2<d2){
    		int x= (a2-a1)*(d1-b1);
    		fout << x;
    	}
    	if (a1>c1&&b1>d1&&a2<c2&&b2>d2){
    		int x= (a2-a1)*(b2-d2);
    		fout << x;
    	}
    	if (a1>c1&&b1>d1&&a2>c2&&b2<d2){
    		int x = (a2-c2)*(b2-b1);
    		fout << x;
    	}
    	if (a1<c1&&b1>d1&&a2<c1&&b2<d2){
    		int x = (c1-a1)*(b2-b1);
    		fout << x;
    	}


    }

    return 0;
}