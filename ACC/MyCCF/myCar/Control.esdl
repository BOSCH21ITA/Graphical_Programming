package MyCCF.myCar;

import MyCCF.resources.DriverMessages;

singleton class Control
writes DriverMessages.display
reads DriverMessages.on {

	@thread
	@generated("blockdiagram", "e9182095")
	public void calc() {
		DriverMessages.display = DriverMessages.on; // Main/calc 1
	}
}