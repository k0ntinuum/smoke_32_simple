
void nl() {printf("\n");}
void spaces(unt n) { for (unt i = 0; i < n ; i++ ) printf(" ");}
void print_bit(unt b) { b == 0 ? printf("O") : printf("|"); }

void pbits(unt x) {
    for (int i = 0; i < L ; i++ ) print_bit( (x & ( 1 << i) ) >> i);
    printf("\n");
}

void print_p(unt p) {
    for (int i = 0; i < P ; i++ ) { print_bit( (p & ( 1 << i) ) >> i);spaces(S - 1);} nl();
}
void print_c_highlights(unt x) {
    rgb(100,100,100);
    for (int i = 0; i < L ; i++ ) {
        if (i % S == 0 && i < P*S) rgb(255,255,255);
        print_bit( (x & ( 1 << i) ) >> i);
        if (i % S == 0 && i < P*S) rgb(100,100,100);
    }
    rgb(255,255,255);
    printf("\n");
}

void print_bits(unt x) {
    for (int i = 0; i < L ; i++ ) print_bit( (x & ( 1 << i) ) >> i);
    printf("\n");
}
void p_rule_frag(unt r, unt b) {
    for (unt i = b ; i < b + 32; i++) printf("%-3d", i);
    nl();
    for (unt i = b ; i < b + 32; i++) { print_bit( (r & ( 1 << i) ) >> i); spaces(2);}
    nl();
}

void p_rule(unt r) {
    for (unt i = 0; i < R/32; i++) { p_rule_frag(r, 32*i);} nl();
}
    