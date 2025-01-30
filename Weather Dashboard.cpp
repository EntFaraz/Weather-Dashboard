#include <iostream>
#include <string>
#include <map>

using namespace std;

class WeatherDashboard {
private:
    map<string, string> weatherData; // Simulated weather data

public:
    WeatherDashboard() {
        // Simulated weather data for a few cities in Pakistan
        weatherData["Karachi"] = "Sunny, 30°C";
        weatherData["Lahore"] = "Partly Cloudy, 28°C";
        weatherData["Islamabad"] = "Rainy, 24°C";
        weatherData["Peshawar"] = "Sunny, 32°C";
        weatherData["Quetta"] = "Cool, 20°C";
    }

    void fetchWeather(const string& city) {
        // Check if the city exists in the simulated data
        if (weatherData.find(city) != weatherData.end()) {
            cout << "Fetching weather for " << city << "..." << endl;
        } else {
            cout << "Weather data for " << city << " is not available." << endl;
        }
    }

    void displayWeather(const string& city) const {
        // Display the weather for the specified city
        if (weatherData.find(city) != weatherData.end()) {
            cout << "Current weather in " << city << ": " << weatherData.at(city) << endl;
        } else {
            cout << "Weather data for " << city << " is not available." << endl;
        }
    }
};

int main() {
    WeatherDashboard dashboard;
    string city;

    cout << "Enter city name (Karachi, Lahore, Islamabad, Peshawar, Quetta): ";
    getline(cin, city);

    dashboard.fetchWeather(city);
    dashboard.displayWeather(city);

    return 0;
}
