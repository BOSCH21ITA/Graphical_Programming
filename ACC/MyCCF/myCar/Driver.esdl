package MyCCF.myCar;

import MyCCF.resources.DriverMessages;
import MyCCF.resources.kmh;

singleton class Driver
writes DriverMessages.on, DriverMessages.brake, DriverMessages.ignition, DriverMessages.power, DriverMessages.soll
reads DriverMessages.display {

	characteristic boolean controlACC = false;
	characteristic real brake = 0.0;
	characteristic boolean ignition = false;
	characteristic real power = 0.0;
	characteristic kmh targetSpeed = 0.0[kmh];

	@thread
	@generated("blockdiagram", "4a6bd189")
	public void calc() {
		DriverMessages.on = controlACC; // Main/calc 1
		DriverMessages.brake = brake; // Main/calc 2
		DriverMessages.ignition = ignition; // Main/calc 3
		DriverMessages.power = power; // Main/calc 4
		DriverMessages.soll = targetSpeed; // Main/calc 5
	}
}