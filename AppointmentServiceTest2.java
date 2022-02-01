package test;

import static org.junit.jupiter.api.Assertions.*;

import org.junit.jupiter.api.Assertions;
import org.junit.jupiter.api.Test;

import appointment.Appointment;
import appointment.AppointmentService2;

class AppointmentServiceTest2 {

	@Test
	void testAppointmentService() {
		
		Appointment appointment = new Appointment("18462", "06/01/21", "Doctor's Appointment");
		assertTrue(appointment.getAppointmentId().equals("18462"));
		assertTrue(appointment.getAppointmentDate().equals("06/01/21"));
		assertTrue(appointment.getDescription().equals("Doctor's Appointment"));
		
	}
	
	@Test
	void testAddAppointmentId() {
		Assertions.assertThrows(IllegalArgumentException.class, () -> {
			new Appointment("14594", "05/02/21", "Hiking Appointment" );
		}); }
	
	@Test
	void testDeleteAppointmentId() {
		Assertions.assertThrows(IllegalArgumentException.class, () -> {
			new Appointment("57285", "07/23/21", "Repair Shop Appointment" );
		}); }
	
	
	

}
