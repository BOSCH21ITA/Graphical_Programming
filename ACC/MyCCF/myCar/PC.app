application {
	class MyCCF.myCar.myCar
	class MyCCF.myCar.Driver
	class MyCCF.myCar.Control
	class SystemLib.Miscellaneous.DeltaTimeService
	class MyCCF.tests.TestDriverBRAKE
}
schedule {
	startup {
	}
	shutdown {
	}
	task Task0 priority 0 period 10ms delay 0ms {
		process MyCCF.myCar.Driver.calc
		process MyCCF.tests.TestDriverBRAKE.calc
		process MyCCF.myCar.Control.calc
		process MyCCF.myCar.myCar.calc
	}
}