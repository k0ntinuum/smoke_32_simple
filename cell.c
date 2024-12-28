unt lcs(unt x, unt i) { return (x << (L - i ) | (x >> i));}
unt rcs(unt x, unt i) { return ( x << i | x >> (L - i ));}
unt val(unt x, unt i) { return lcs(rcs(M, i) & x , i);}
unt ca(unt r, unt x) {
    unt y = 0, b;
    for (unt i = 0; i < L; i++) { b = val(x, i); y |= ((r & 1 << b) >> b) << i;}
    return y;
}
unt ca_n(unt r, unt x, unt n) {
    unt y = x;
    for (unt i = 0; i < n; i++) y = ca(r,y);
    return y;
}
unt ca_set(unt* f, unt j, unt x) {
    for (unt i = 0 ; i < E; i++) x = ca(f[(i + j) % L], x); 
    return x;
}
