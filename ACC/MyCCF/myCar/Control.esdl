package MyCCF.myCar;

import MyCCF.resources.DriverMessages;
import MyCCF.resources.CarMessages;
import SystemLib.Miscellaneous.EdgeRising;

singleton class Control
writes DriverMessages.display, CarMessages.brake, CarMessages.power
reads DriverMessages.on, DriverMessages.brake, DriverMessages.power, CarMessages.v, DriverMessages.soll {

	ACC ACC_instance;
	EdgeRising EdgeRising_instance;
	Regler Regler_instance;
	Regler Regler_instance_2;

	@thread
	@generated("blockdiagram", "a3d22f1a")
	public void calc() {
		ACC_instance.aCCStatemachineTrigger(); // Main/calc 1
		ACC_instance.brake = DriverMessages.brake; // Main/calc 2
		DriverMessages.display = ACC_instance.accOn; // Main/calc 3
		if (ACC_instance.accOn) {
			CarMessages.brake = Regler_instance_2.bra; // Main/calc 4/if-then 1
			CarMessages.power = Regler_instance_2.pow; // Main/calc 4/if-then 2
		} else {
			CarMessages.brake = DriverMessages.brake; // Main/calc 4/if-else 1
			CarMessages.power = DriverMessages.power; // Main/calc 4/if-else 2
		} // Main/calc 4
		ACC_instance.on = EdgeRising_instance.value(); // Main/calc 5
		EdgeRising_instance.compute(DriverMessages.on); // Main/calc 6
		Regler_instance_2.calc(DriverMessages.brake, CarMessages.v, DriverMessages.soll); // Main/calc 7
	}
}