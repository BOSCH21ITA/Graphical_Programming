package MyCCF.myCar;

import MyCCF.resources.kmh;

class Regler {

	characteristic real p = 0.0;
	@get
	real pow;
	@get
	real bra;

	@generated("blockdiagram", "0192c280")
	public void calc(real in brake, kmh in v, kmh in soll) {
		bra = 0.0; // calc_spec/calc 1
		pow = p; // calc_spec/calc 2
	}
}