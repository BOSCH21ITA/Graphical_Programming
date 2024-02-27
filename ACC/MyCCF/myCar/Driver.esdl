package MyCCF.myCar;

import MyCCF.resources.DriverMessages;

singleton class Driver
writes DriverMessages.on, DriverMessages.brake
reads DriverMessages.display {

	characteristic boolean controlACC = false;
	characteristic real brake = 0.0;

	@thread
	@generated("blockdiagram", "1bd37534")
	public void calc() {
		DriverMessages.on = controlACC; // Main/calc 1
		DriverMessages.brake = brake; // Main/calc 2
	}
}