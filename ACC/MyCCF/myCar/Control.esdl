package MyCCF.myCar;

import MyCCF.resources.DriverMessages;
import MyCCF.resources.CarMessages;

singleton class Control
writes DriverMessages.display, CarMessages.brake
reads DriverMessages.on, DriverMessages.brake {

	ACC ACC_instance;

	@thread
	@generated("blockdiagram", "d01377c7")
	public void calc() {
		ACC_instance.aCCStatemachineTrigger(); // Main/calc 1
		ACC_instance.on = DriverMessages.on; // Main/calc 2
		ACC_instance.brake = DriverMessages.brake; // Main/calc 3
		DriverMessages.display = ACC_instance.accOn; // Main/calc 4
		CarMessages.brake = DriverMessages.brake; // Main/calc 5
	}
}