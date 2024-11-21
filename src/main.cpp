#include <SFML/Graphics.hpp>

int main() {
    sf::RenderWindow window(sf::VideoMode(800, 600), "SFML Test Window");

    // Create a green circle
    sf::CircleShape circle(50); // Radius of 50 pixels
    circle.setFillColor(sf::Color::Green); // Set its color to green
    circle.setPosition(375, 275); // Center the circle in the window

    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed) {
                window.close();
            }
        }

        // Clear the window with a black background
        window.clear(sf::Color::Black);

        // Draw the circle
        window.draw(circle);

        // Display the updated content
        window.display();
    }

    return 0;
}


