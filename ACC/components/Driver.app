application {
	class components.Driver
}
schedule {
	startup {
	}
	shutdown {
	}
	task Task0 priority 0 period 10ms delay 0ms {
		process components.Driver.proc_10ms
	}
}