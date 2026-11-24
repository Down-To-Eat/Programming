//week2s1ceQ1
void Growth(double *population, double initial_growth, double time,double growth_rate){
    // * exp(growth_rate * time);
    *population = initial_growth * exp(growth_rate * time);    
}
