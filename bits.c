
void shuffle(unt* f, unt l) {
    unt j = 0;unt t = 0;
    for (unt i = l - 1; i > 0; i -= 1) {
        j = arc4random_uniform(i+1);
        t = f[i];f[i] = f[j];f[j] = t;
    }
}
void perm(unt* t, int L) {
    for (unt i = 0; i < L ; i++) t[i] = i;
    shuffle(t, L);
}

unt permute_bits(unt x, unt* p) {
    unt y = 0;
    for (unt i = 0; i < L; i++) y |= ((x & (1 << i)) >> i) << p[i];
    return y;
}
unt bit_count(unt x) {
    unt y = 0;
    for (unt i = 0; i < L; i++) y += ((x & (1 << i)) >> i);
    return y;
}
unt bal_rule() {
    unt y = (1 << (L/2)) - 1;
    unt p[L];
    perm(p,L);
    y = permute_bits(y,p);
    return y;
}
unt ith_bit(unt i, unt x) {
    return (x & ( 1 << i))  >> i;
}
unt first_P_bits(unt x) {
    return ((1 << P) - 1) & x;
}

unt spaced_bits(unt x) {
    unt y = 0;
    for (unt i = 0; i < P ; i++) {
        y |= ith_bit(S*i, x) << i;
    }
    return y;
}