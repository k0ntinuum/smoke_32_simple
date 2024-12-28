unt enc(unt f, unt p) {
	unt c;
	for (size_t i = 0; i < A; i++) {
		c = arc4random();
		if (spaced_bits(ca_n(f, c, E)) == p) return c;
	}
	return 0;
}

unt dec(unt f, unt c) {
	return spaced_bits(ca_n(f, c , E));
}



