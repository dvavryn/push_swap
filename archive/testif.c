	if (get_pos(min, stacks) - 1 < stacks->sa - get_pos(min, stacks))
	{
		if (get_pos(max, stacks) - 1 < stacks->sa - get_pos(max, stacks))
		{
			if ((get_pos(min, stacks) - 1) < (get_pos(max, stacks) - 1))
			{
				printf("Das Minimum (Position %d) ist naeher an einem der Enden.\n", get_pos(min, stacks));
			}
			else if ((get_pos(max, stacks) - 1) < (get_pos(min, stacks) - 1))
			{
				printf("Das Maximum (Position %d) ist naeher an einem der Enden.\n", get_pos(max, stacks));
			}
			else
			{
				printf("Das Minimum (Position %d) und das Maximum (Position %d) sind gleich weit von ihren naechsten Enden entfernt.\n", get_pos(min, stacks), get_pos(max, stacks));
			}
		}
		else
		{
			if ((get_pos(min, stacks) - 1) < (stacks->sa - get_pos(max, stacks)))
			{
				printf("Das Minimum (Position %d) ist naeher an einem der Enden.\n", get_pos(min, stacks));
			}
			else if ((stacks->sa - get_pos(max, stacks)) < (get_pos(min, stacks) - 1))
			{
				printf("Das Maximum (Position %d) ist naeher an einem der Enden.\n", get_pos(max, stacks));
			}
			else
			{
				printf("Das Minimum (Position %d) und das Maximum (Position %d) sind gleich weit von ihren naechsten Enden entfernt.\n", get_pos(min, stacks), get_pos(max, stacks));
			}
		}
	}
	else
	{
		if (get_pos(max, stacks) - 1 < stacks->sa - get_pos(max, stacks))
		{
			if ((stacks->sa - get_pos(min, stacks)) < (get_pos(max, stacks) - 1))
			{
				printf("Das Minimum (Position %d) ist naeher an einem der Enden.\n", get_pos(min, stacks));
			}
			else if ((get_pos(max, stacks) - 1) < (stacks->sa - get_pos(min, stacks)))
			{
				printf("Das Maximum (Position %d) ist naeher an einem der Enden.\n", get_pos(max, stacks));
			}
			else
			{
				printf("Das Minimum (Position %d) und das Maximum (Position %d) sind gleich weit von ihren naechsten Enden entfernt.\n", get_pos(min, stacks), get_pos(max, stacks));
			}
		}
		else
		{
			if ((stacks->sa - get_pos(min, stacks)) < (stacks->sa - get_pos(max, stacks)))
			{
				printf("Das Minimum (Position %d) ist naeher an einem der Enden.\n", get_pos(min, stacks));
			}
			else if ((stacks->sa - get_pos(max, stacks)) < (stacks->sa - get_pos(min, stacks)))
			{
				printf("Das Maximum (Position %d) ist naeher an einem der Enden.\n", get_pos(max, stacks));
			}
			else
			{
				printf("Das Minimum (Position %d) und das Maximum (Position %d) sind gleich weit von ihren naechsten Enden entfernt.\n", get_pos(min, stacks), get_pos(max, stacks));
			}
		}
	}













	#include <stdio.h> // Notwendig für printf

// Annahme: Diese Funktionen geben die Positionen der Elemente zurück.
// Passen Sie diese an Ihre tatsächliche Implementierung an.
int get_pos_min() {
    return 4; // Beispielwert
}

int get_pos_max() {
    return 14; // Beispielwert
}

int main() {
    // Die Gesamtanzahl der Plätze in der Tabelle
    // ACHTUNG: Hier muss die tatsächliche Größe Ihrer Tabelle rein!
    int size = 20; // Beispielwert für die Größe

    // Berechnung des kürzesten Abstands für das Minimum
    // Wir vergleichen (Abstand zum Anfang) mit (Abstand zum Ende)
    // get_pos_min() - 1   <   size - get_pos_min()
    // Wenn ersteres wahr, ist das Minimum näher am Anfang, sonst am Ende.
    // Dasselbe gilt für das Maximum.
    if ((get_pos_min() - 1 < size - get_pos_min() ? get_pos_min() - 1 : size - get_pos_min()) <
        (get_pos_max() - 1 < size - get_pos_max() ? get_pos_max() - 1 : size - get_pos_max())) {
        printf("Das Minimum (Position %d) ist naeher an einem der Enden.\n", get_pos_min());
    }
    // Ist der kürzeste Abstand des Maximums kleiner?
    else if ((get_pos_max() - 1 < size - get_pos_max() ? get_pos_max() - 1 : size - get_pos_max()) <
             (get_pos_min() - 1 < size - get_pos_min() ? get_pos_min() - 1 : size - get_pos_min())) {
        printf("Das Maximum (Position %d) ist naeher an einem der Enden.\n", get_pos_max());
    }
    // Sonst sind sie gleich weit entfernt
    else {
        printf("Das Minimum (Position %d) und das Maximum (Position %d) sind gleich weit von ihren naechsten Enden entfernt.\n", get_pos_min(), get_pos_max());
    }

    return 0;
}