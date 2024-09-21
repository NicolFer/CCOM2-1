int main() {

    int A[] = {2,4,8,1,3,5};
    int* p = A;
    int* q = A;

    while ((q + 1)) { 
        q++;
        cout<<q<<endl;
    }
    q = p + (q - p) / 2;
    cout << "Primer elemento (p): " << p << endl;
    cout << "Elemento medio (q): " <<q << endl;
    merge(p , q);
    cout << "Array despues del merge: ";
    for (int i = 0; i < 10; i++) {
        cout << A[i] << " ";
    }
    cout <<endl;

  return 0;
}
