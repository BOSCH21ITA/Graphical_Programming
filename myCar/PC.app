application {
	class myCar.myCar
	class myCar.Driver
	class SystemLib.Miscellaneous.DeltaTimeService
	class myCar.Control
}
schedule {
	startup {
	}
	shutdown {
	}
	task Task0 priority 0 period 10ms delay 0ms {
		process myCar.Driver.calc
		process myCar.Control.calc
		process myCar.myCar.calc
	}
}