// complexity kom er jono use korci 
long long funcall ( long long  mid ){

	long long x = sqrt(mid)+2; // 10 + 2 = 12

	while( x*x > mid ){ // 10 * 10 = 20 > mid  

		x--; // 10
	}

	return x; 
