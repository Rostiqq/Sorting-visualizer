#include <SFML/Graphics.hpp>
#include <optional>

int main() {
    // Vytvorenie okna (rozlíšenie 800x600, názov okna)
    auto window = sf::RenderWindow(sf::VideoMode({800, 600}), "SFML 3 - Testovacie okno");
    window.setFramerateLimit(60);

    // Vytvorenie jednoduchého tvaru (zelený obdĺžnik / štvorec na test)
    sf::RectangleShape shape(sf::Vector2f(100.f, 100.f));
    shape.setFillColor(sf::Color::Red);
    shape.setPosition(sf::Vector2f(350.f, 250.f));

    // Hlavná slučka aplikácie
    while (window.isOpen()) {
        // Spracovanie udalostí (SFML 3 syntax)
        while (const std::optional event = window.pollEvent()) {
            if (event->is<sf::Event::Closed>()) {
                window.close();
            }
        }
 
        // Vykresľovanie
        window.clear(sf::Color::Blue); // Vyčistí okno na modro
        window.draw(shape);          // Vykreslí zelený štvorec
        window.display();            // Zobrazí nakreslené na obrazovke
    }

    return 0;
}