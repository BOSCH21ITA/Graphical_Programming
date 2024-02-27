package myCar;

import resources.CarMessages;
import resources.DriverMessages;

singleton class Control
reads DriverMessages.brake, DriverMessages.power, CarMessages.v, DriverMessages.on, DriverMessages.soll
writes CarMessages.brake, CarMessages.power {

	Regler Regler_instance;
	CSM CSM_instance;

	@thread
	@generated("blockdiagram", "2d329eac")
	public void calc() {
		Regler_instance.calc(DriverMessages.brake, CarMessages.v, DriverMessages.soll); // Main/calc 1
		CSM_instance.bra = DriverMessages.brake; // Main/calc 2
		CSM_instance.on = DriverMessages.on; // Main/calc 3
		CSM_instance.cSMStatemachineTrigger(); // Main/calc 4
		if (!CSM_instance.isOn) {
			CarMessages.brake = DriverMessages.brake; // Main/calc 5/if-then 1
			CarMessages.power = DriverMessages.power; // Main/calc 5/if-then 2
		} else {
			CarMessages.brake = Regler_instance.bra; // Main/calc 5/if-else 1
			CarMessages.power = Regler_instance.pow; // Main/calc 5/if-else 2
		} // Main/calc 5
	}
}