package MyCCF.myCar;

import MyCCF.resources.CarMessages;
import MyCCF.resources.a;
import SystemLib.Miscellaneous.DeltaTimeService;
import MyCCF.resources.s;
import MyCCF.resources.DriverMessages;

static class myCar
reads CarMessages.steering, CarMessages.power, CarMessages.brake, DriverMessages.ignition
writes CarMessages.v, CarMessages.x, CarMessages.y, CarMessages.bearing {

	myDrive_3 myVehicle;
	characteristic a g = 9.81[a];
	characteristic boolean ignition = false;

	@thread
	@generated("blockdiagram", "ad658d24")
	public void calc() {
		CarMessages.v = myVehicle.v; // Main/calc 1
		CarMessages.y = myVehicle.y; // Main/calc 2
		CarMessages.bearing = myVehicle.bearing; // Main/calc 3
		CarMessages.x = myVehicle.x; // Main/calc 4
		if (DriverMessages.ignition) {
			myVehicle.move(CarMessages.power, CarMessages.brake, (DeltaTimeService.deltaT * 1.0[s]), g, CarMessages.steering); // Main/calc 5/if-then 1
		} // Main/calc 5
	}
}