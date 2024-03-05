package MyCCF.tests;

import MyCCF.resources.DriverMessages;
import MyCCF.resources.CarMessages;
import MyCCF.resources.TestMessages;
import SystemLib.CounterTimer.StopWatch;
import MyCCF.resources.curve_real;
import SystemLib.Miscellaneous.EdgeFalling;

singleton class TestDriverBRAKE
writes DriverMessages.brake, DriverMessages.on, TestMessages.testBRAKEGood
reads CarMessages.brake, DriverMessages.display {

	StopWatch SW;
	characteristic curve_real brake_curve[10] = {
		{ 0.0, 1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0, 8.0, 9.0 },
		{ 0.0, 0.0, 0.0, 3.0, 3.0, 3.0, 3.0, 3.0, 0.0, 0.0 }
	};
	characteristic curve_real on_curve[10] = {
		{ 0.0, 1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0, 8.0, 9.0 },
		{ 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0, 0.0, 0.0, 0.0 }
	};
	characteristic boolean ^start = false;
	EdgeFalling EdgeFalling_instance;

	@thread
	@generated("blockdiagram", "38a0f6a3")
	public void calc() {
		if (^start) {
			SW.compute(); // Main/calc 1/if-then 1
			DriverMessages.brake = brake_curve.getAt(SW.value()); // Main/calc 1/if-then 2
			DriverMessages.on = (on_curve.getAt(SW.value()) == 1.0); // Main/calc 1/if-then 3
		} // Main/calc 1
		if (on_curve.getAt(SW.value()) == 1.0) {
			TestMessages.testBRAKEGood = ((!DriverMessages.display) && (brake_curve.getAt(SW.value()) == CarMessages.brake)); // Main/calc 2/if-then 1
		} // Main/calc 2
		EdgeFalling_instance.compute(^start); // Main/calc 3
		if (EdgeFalling_instance.value()) {
			SW.reset(); // Main/calc 4/if-then 1
			TestMessages.testBRAKEGood = false; // Main/calc 4/if-then 2
		} // Main/calc 4
	}
}