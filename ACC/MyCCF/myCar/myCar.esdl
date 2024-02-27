package MyCCF.myCar;

import MyCCF.resources.CarMessages;
import MyCCF.resources.a;
import SystemLib.Miscellaneous.DeltaTimeService;
import MyCCF.resources.s;

static class myCar
reads CarMessages.steering, CarMessages.power, CarMessages.brake
writes CarMessages.v, CarMessages.x, CarMessages.y, CarMessages.bearing {

	myDrive_3 myVehicle;
	characteristic a g = 9.81[a];

	@thread
	@generated("blockdiagram", "f8c1693c")
	public void calc() {
		myVehicle.move(CarMessages.power, CarMessages.brake, (DeltaTimeService.deltaT * 1.0[s]), g, CarMessages.steering); // Main/calc 1
		CarMessages.v = myVehicle.v; // Main/calc 2
		CarMessages.y = myVehicle.y; // Main/calc 3
		CarMessages.bearing = myVehicle.bearing; // Main/calc 4
		CarMessages.x = myVehicle.x; // Main/calc 5
	}
}