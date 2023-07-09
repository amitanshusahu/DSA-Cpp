#include <iostream>
using namespace std;

void showBoxPartten(int n) {
    for( int i = 0; i < n; i++) {
        for( int j = 0; j < n; j++) {
            cout<<" * ";
        }
        cout<<endl;
    }
}

void showTriangelPartten(int n) {
    for (int i = 1; i <= n; i++) {
        for(int j = 1; j <= i; j++){
            cout<<" * ";
        }
        cout<<endl;
    }
}

void showTriangeWithColNum(int n) {
    for (int i = 1; i <= n; i++) {
        for(int j = 1; j <= i; j++){
            cout<< " " << j << " ";
        }
        cout<<endl;
    }
}

void showTriangeWithRowNum(int n) {
    for (int i = 1; i <= n; i++) {
        for(int j = 1; j <= i; j++){
            cout<< " " << i << " ";
        }
        cout<<endl;
    }
}

void showInvertedTriangle(int n) {
    for (int i = n; i >= 1; i--) {
        for(int j = 1; j <= i; j++){
            cout<<" * ";
        }
        cout<<endl;
    }
}

void showInvertedTriangleWithColNum(int n) {
    for (int i = n; i >= 1; i--) {
        for(int j = 1; j <= n; j++){
            cout<< " " << j << " " ;
        }
        cout<<endl;
    }
}

void showPiramid(int n) {
    for( int i = 1; i <= n; i++) {
        for( int j = 1; j <= (n-i); j++){
            cout<< "   "  ;
        }
        for (int k = 1; k <= ((2*i)-1); k++) {
            cout<< " * ";
        }
        for(int j = 1; j <= (n-i); j++) {
            cout<< "   ";
        }
        cout<<endl;
    }
}

void showInvertedPiramid(int n) {
    for( int i = 1; i <= n; i++) {
        for( int j = 1; j <= (i - 1); j++){
            cout<< "   "  ;
        }
        for (int k = 0; k < ((2*n) - ((2*i) - 1)); k++) {
            cout<< " * ";
        }
        for(int j = 1; j <= (i - 1); j++) {
            cout<< "   ";
        }
        cout<<endl;
    }
}

int main() {

    int n = 5;
    
    cout<< "\n Box Pattern  \n";
    showBoxPartten(n);

    cout<< "\n Triangle Pattern \n";
    showTriangelPartten(n);

    cout<< "\n Triangle With Col Num \n";
    showTriangeWithColNum(n);

    cout<< "\n Triangle with Row num \n";
    showTriangeWithRowNum(n);

    cout<< "\n Inverted Trinagle \n";
    showInvertedTriangle(n);

    cout << "\n Inveted Triangle with  num \n";
    showInvertedTriangleWithColNum(n);

    cout<< "\n Piramid \n";
    showPiramid(n);

    cout<< "\n Inverted Piramid \n";
    showInvertedPiramid(n);

}
