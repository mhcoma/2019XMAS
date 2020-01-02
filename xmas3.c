#include <stdio.h>

int main() {
	int alpha;
	alpha -= alpha;
	alpha++;
	int beta;
	beta -= beta;
	beta += alpha;
	alpha += ++alpha;
	int gamma;
	gamma -= gamma;
	gamma += alpha;
	gamma--;
	alpha += ++alpha;
	int delta;
	delta -= delta;
	delta += alpha;
	int epsilon;
	epsilon -= epsilon;
	epsilon += alpha;
	alpha += ++alpha;
	alpha += alpha;
	alpha += alpha;
	int zeta[gamma];
	int eta;
	eta -= eta;
	zeta[eta] -= zeta[eta];
	zeta[eta] += alpha;
	alpha -= ++delta;
	eta++;
	zeta[eta] -= zeta[eta];
	zeta[eta] += alpha;
	alpha -= ++delta;
	eta++;
	zeta[eta] -= zeta[eta];
	zeta[eta] += alpha;
	alpha += --delta;
	--delta;
	--delta;
	--delta;
	alpha += --delta;
	eta++;
	zeta[eta] -= zeta[eta];
	zeta[eta] += alpha;
	eta -= eta;
	alpha -= alpha;
	++alpha;
	alpha += alpha;
	alpha += alpha;
	alpha += alpha;
	alpha += alpha;
	alpha += alpha;
	int theta;
	int iota;
	for (; beta <= epsilon; beta++) {
		theta -= theta;
		iota -= iota--;
		iota += epsilon;
		iota -= beta;
		for (; theta <= iota; theta++) {
			putc(alpha, stdout );
		}
		theta -= theta;
		iota -= iota;
		theta++;
		iota += beta;
		iota += beta;
		iota--;
		for (; theta <= iota; theta++) {
			putc(zeta[eta], stdout);
			for (; eta >= gamma; eta--) {
				eta -= eta;
			}
			eta++;
		}
		putc(epsilon, stdout);
	}
	beta -= beta;
	beta += epsilon;
	beta -= gamma;
	for (; eta <= gamma; eta++) {
		delta -= delta;
		delta--;
		for (; delta <= beta; delta++) {
			putc(alpha, stdout);
		}
		putc(zeta[eta], stdout);
		putc(epsilon, stdout);
	}
	;
	;
	;
	;
	;
}
