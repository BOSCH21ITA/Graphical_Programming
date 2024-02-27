package MyCCF.myCar;

import MyCCF.resources.DriverMessages;

singleton class Control
writes DriverMessages.display
reads DriverMessages.on, DriverMessages.brake {

	ACC ACC_instance;

	@thread
	@generated("blockdiagram", "e066133b")
	public void calc() {
		ACC_instance.aCCStatemachineTrigger(); // Main/calc 1
		ACC_instance.on = DriverMessages.on; // Main/calc 2
		ACC_instance.brake = DriverMessages.brake; // Main/calc 3
		DriverMessages.display = ACC_instance.accOn; // Main/calc 4
	}
}