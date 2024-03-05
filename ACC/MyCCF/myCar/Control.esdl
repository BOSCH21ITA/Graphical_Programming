package MyCCF.myCar;

import MyCCF.resources.DriverMessages;
import MyCCF.resources.CarMessages;

singleton class Control
writes DriverMessages.display, CarMessages.brake
reads DriverMessages.on, DriverMessages.brake {

	ACC ACC_instance;

	@thread
	@generated("blockdiagram", "f44c8bb1")
	public void calc() {
		CarMessages.brake = DriverMessages.brake; // Main/calc 1
		ACC_instance.aCCStatemachineTrigger(); // Main/calc 2
		ACC_instance.on = DriverMessages.on; // Main/calc 3
		ACC_instance.brake = DriverMessages.brake; // Main/calc 4
		DriverMessages.display = ACC_instance.accOn; // Main/calc 5
	}
}