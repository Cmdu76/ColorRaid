#ifndef INTROSTATE_HPP
#define INTROSTATE_HPP

#include "../NodeEngine/Application/Application.hpp"
#include "../NodeEngine/Application/State.hpp"
#include "States.hpp"

#include <SFML/System/Clock.hpp>
#include <SFML/Graphics/Text.hpp>

class IntroState : public ah::State
{
    public:
        IntroState(ah::StateManager& manager);
        virtual ~IntroState();

        bool handleEvent(sf::Event const& event);
        bool update(sf::Time dt);
        void render(sf::RenderTarget& target, sf::RenderStates states);

        void onActivate();
        void onDeactivate();

    protected:
        sf::Time mDuration;
        sf::Clock mClock;
        sf::Sprite mBackground;
        sf::Text mAtmogText;
        sf::Text mAtmogShadow;
};

#endif // INTROSTATE_HPP
