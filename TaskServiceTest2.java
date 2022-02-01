package test;

import static org.junit.jupiter.api.Assertions.*;

import org.junit.jupiter.api.Assertions;
import org.junit.jupiter.api.Test;

import task.Task;
import task.TaskService2; 

class TaskServiceTest2 {

	@Test
	void testTaskService() {
		Task task = new Task("19562", "Anthony", "Watching Hamtaro");
		assertTrue(task.getTaskId().equals("19562"));
		assertTrue(task.getName().equals("Anthony"));
		assertTrue(task.getDescription().equals("Watching Hamtaro"));
	}

	@Test
	void testAddTaskId() {
		Assertions.assertThrows(IllegalArgumentException.class, () -> {
			new Task("18562", "Bob", "Eating Pizza");
			});    }
		       
	@Test
	void testDeleteTaskId() {
		Assertions.assertThrows(IllegalArgumentException.class, () -> {
		new Task("17482", "Malus", "Playing Castlevania");
		});    }
	
	@Test
	void testUpdateTaskId() {
		Assertions.assertThrows(IllegalArgumentException.class, () -> {
		new Task("18561", "Hamtaro", "Eating Sunflower Seeds");
		});    }
}
