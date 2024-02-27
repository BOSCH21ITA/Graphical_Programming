package myCar;

import resources.CarMessages;
import resources.DriverMessages;
import resources.kmh;
import SystemLib.Miscellaneous.EdgeRising;
import SystemLib.CounterTimer.StopWatch;

singleton class Driver
writes CarMessages.power, DriverMessages.power, DriverMessages.on, DriverMessages.soll, DriverMessages.brake
reads CarMessages.v {

	characteristic real mypower = 0.0;
	characteristic kmh mysoll = 70.0[kmh];
	characteristic boolean myon = false;
	characteristic boolean automatic = false;
	EdgeRising EdgeRising_instance;
	StopWatch StopWatch_instance;
	EdgeRising R;

	@thread
	@generated("blockdiagram", "6b61c8b1")
	public void calc() {
		if (automatic) {
			EdgeRising_instance.compute((CarMessages.v > mysoll)); // Main/calc 1/if-then 1
			if (EdgeRising_instance.value()) {
				DriverMessages.on = true; // Main/calc 1/if-then 2/if-then 1
				StopWatch_instance.reset(); // Main/calc 1/if-then 2/if-then 2
			} // Main/calc 1/if-then 2
			DriverMessages.power = 100.0; // Main/calc 1/if-then 3
			DriverMessages.soll = 70.0[kmh]; // Main/calc 1/if-then 4
			StopWatch_instance.compute(); // Main/calc 1/if-then 5
			if (R.value()) {
				DriverMessages.brake = 10.0; // Main/calc 1/if-then 6/if-then 1
			} // Main/calc 1/if-then 6
			R.compute((StopWatch_instance.value() > 2.0)); // Main/calc 1/if-then 7
		} else {
			DriverMessages.power = mypower; // Main/calc 1/if-else 1
			DriverMessages.soll = mysoll; // Main/calc 1/if-else 2
			DriverMessages.on = myon; // Main/calc 1/if-else 3
		} // Main/calc 1
	}
}