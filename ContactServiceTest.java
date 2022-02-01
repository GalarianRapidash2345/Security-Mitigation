package test;

import static org.junit.jupiter.api.Assertions.*;

import org.junit.jupiter.api.Assertions;
import org.junit.jupiter.api.Test;

import contact.Contact;

class ContactServiceTest {

	
	
	
	
	@Test
	void testContact() {
		Contact contact = new Contact("Anthony", "Bean", "5052341789","2234", "Blvd");
		assertTrue(contact.getFirstName().equals("Anthony"));
		assertTrue(contact.getLastName().equals("Bean"));
		assertTrue(contact.getId().equals("2234"));
		assertTrue(contact.getPhone().equals("5052341789"));
		assertTrue(contact.getAddress().equals("Blvd"));
	}
	@Test
	void testAddContactId() {
		Assertions.assertThrows(IllegalArgumentException.class, () -> {
			new Contact("Bob", "Jenkins", "36836325", "6582646355637", "Drive");
			});    }
		       
	@Test
	void testDeleteContactId() {
		Assertions.assertThrows(IllegalArgumentException.class, () -> {
		new Contact("Norris", "Osterhout", "3683", "65824672573", "Place");
		});    }
	
	@Test
	void testUpdateContactId() {
		Assertions.assertThrows(IllegalArgumentException.class, () -> {
		new Contact("Malus", "Norbertson", "3683587562", "658228", "Blvd");
		});    }
	
		}
	


