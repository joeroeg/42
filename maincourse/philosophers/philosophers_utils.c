#include "philosophers.h"

// Convert seconds to milliseconds and add microseconds converted to milliseconds
long long get_current_timestamp_ms() {
    struct timeval now;
    gettimeofday(&now, NULL);
    return (now.tv_sec * 1000LL) + (now.tv_usec / 1000);
}

void	ft_usleep(long long time)
{
	long long	start;

	start = get_current_timestamp_ms();
	while (get_current_timestamp_ms() < start + time)
		usleep(10);
}

void action_print(t_philosopher *philosopher, const char *action) {
    pthread_mutex_lock(&(philosopher->shared->status_mutex));
    if (!philosopher->shared->someone_died) {
        long long current_timestamp = get_current_timestamp_ms();
        long long elapsed_time = current_timestamp - philosopher->shared->start_time;
        printf("\033[0;30m%lld\033[0m %lli %d %s\n", current_timestamp % MULTIPLIER, elapsed_time, philosopher->id, action);
    }
    pthread_mutex_unlock(&(philosopher->shared->status_mutex));
}

void print_simulation_state(const t_simulation *sim) {
    if (!sim) {
        printf("Simulation pointer is NULL.\n");
        return;
    }

	printf("-----------------------------------------------------------\n");
    printf("Shared Resources:\n");
    printf("            Philosophers: %d\n", sim->shared_resources.nb_philo);
    printf("             Time to Die: %d\n", sim->shared_resources.time_to_die);
    printf("             Time to Eat: %d\n", sim->shared_resources.time_to_eat);
    printf("           Time to Sleep: %d\n", sim->shared_resources.time_to_sleep);
    printf("               Max Meals: %d\n", sim->shared_resources.max_meals);
    printf("              Start Time: %lld\n", sim->shared_resources.start_time % MULTIPLIER);
    printf("                 All Ate: %d\n", sim->shared_resources.all_ate);
    printf("           So meone Died: %d\n", sim->shared_resources.someone_died);
    // Note: Mutexes are not printed as their state isn't easily represented in a simple printout

    printf("\nPhilosophers:\n");
    for (int i = 0; i < sim->shared_resources.nb_philo; i++) {
        printf("      Philosopher %d:\n", sim->philosophers[i].id);
        printf("         Meals Eaten: %d\n", sim->philosophers[i].meals_eaten);
        printf("      Last Meal Time: %lld\n", sim->philosophers[i].last_meal_time % MULTIPLIER);
		printf("Expected Time to Die: %lld\n", (sim->philosophers[i].last_meal_time % MULTIPLIER)+ sim->shared_resources.time_to_die % 10000);
        // Not printing the 'shared' pointer as it points to the shared_resources already printed
        // Not printing the thread ID as it's not easily represented in a printout
    }
	printf("-----------------------------------------------------------\n");
}