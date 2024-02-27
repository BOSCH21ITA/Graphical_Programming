package myCar;

import resources.curve_real;
import SystemLib.CounterTimer.StopWatch;
import resources.kmh;
import resources.DriverMessages;

singleton class KFDriver
writes DriverMessages.power, DriverMessages.on, DriverMessages.brake, DriverMessages.soll {

	characteristic curve_real power[12] = {
		{ 0.0, 1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0, 8.0, 9.0, 10.0, 11.0 },
		{ 0.0, 100.0, 100.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 }
	};
	StopWatch SW;
	characteristic real duration = 0.0;
	characteristic curve_real on[12] = {
		{ 0.0, 1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0, 8.0, 9.0, 10.0, 11.0 },
		{ 0.0, 0.0, 0.0, 0.0, 2.0, 2.0, 2.0, 2.0, 2.0, 0.0, 0.0, 0.0 }
	};
	characteristic curve_real brake[12] = {
		{ 0.0, 1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0, 8.0, 9.0, 10.0, 11.0 },
		{ 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 10.0, 0.0, 0.0, 0.0, 0.0, 0.0 }
	};
	characteristic curve_real soll[3] = {
		{ 0.0, 1.0, 2.0 },
		{ 0.0, 0.0, 0.0 }
	};

	@thread
	@generated("blockdiagram", "13d6f3f3")
	public void calc() {
		SW.compute(); // Main/calc 1
		if (SW.value() > duration) {
			SW.reset(); // Main/calc 2/if-then 1
		} // Main/calc 2
		DriverMessages.on = (on.getAt(SW.value()) > 1.0); // Main/calc 3
		DriverMessages.power = power.getAt(SW.value()); // Main/calc 4
		DriverMessages.brake = brake.getAt(SW.value()); // Main/calc 5
		DriverMessages.soll = (soll.getAt(SW.value()) * 1.0[kmh]); // Main/calc 6
	}
}