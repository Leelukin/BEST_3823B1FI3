long long change(int a, int b, int c, int d) {
    long long cena = (long long)a * 100 + (long long)b, plata = (long long)c * 100 + (long long)d;
    
    if (cena > plata)
        return -1;

    return plata - cena;
}