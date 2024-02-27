package MyCCF.myCar;

import MyCCF.resources.DriverMessages;

singleton class Driver
writes DriverMessages.on
reads DriverMessages.display {

	characteristic boolean controlACC = false;

	@thread
	@generated("blockdiagram", "4e5a461f")
	public void calc() {
		DriverMessages.on = controlACC; // Main/calc 1
	}
}