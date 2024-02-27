package myCar;

import resources.kmh;

class Regler {

	@get
	real pow;
	@get
	real bra;

	@generated("blockdiagram", "433b644b")
	public void calc(real in brake, kmh in v, kmh in soll) {
		if (v < soll) {
			bra = 0.0; // Main/calc 1/if-then 1
			pow = 100.0; // Main/calc 1/if-then 2
		} else {
			bra = 100.0; // Main/calc 1/if-else 1
			pow = 0.0; // Main/calc 1/if-else 2
		} // Main/calc 1
	}
}