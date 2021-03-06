#ifndef SETTINGSSTATE_HPP
#define SETTINGSSTATE_HPP

#include "../Application/Application.hpp"
#include "../Application/State.hpp"
#include "States.hpp"

#include <SFGUI/SFGUI.hpp>
#include <SFGUI/Widgets.hpp>

#include <SFML/Graphics/Sprite.hpp>

#include "../Game.hpp"

class SettingsState : public ah::State
{
    public:
        SettingsState(ah::StateManager& manager);
        virtual ~SettingsState();

        bool handleEvent(sf::Event const& event);
        bool update(sf::Time dt);
        void render(sf::RenderTarget& target, sf::RenderStates states);

        void onActivate();
        void onDeactivate();

    private:
        sfg::SFGUI mSfgui;
        sfg::Desktop mDesktop;

        sfg::Scale::Ptr mGlobalS;
        sfg::Scale::Ptr mMusicS;
        sfg::Scale::Ptr mSoundS;
        sfg::Label::Ptr mGlobalL;
        sfg::Label::Ptr mMusicL;
        sfg::Label::Ptr mSoundL;
        sfg::ComboBox::Ptr mRes;
        sfg::Window::Ptr mWindow;
        sfg::CheckButton::Ptr mVerticalSync;
        sfg::CheckButton::Ptr mFullscreen;

        int mKeySelected;
        sfg::Button::Ptr mKey1;
        sfg::Button::Ptr mKey2;
        sfg::Button::Ptr mKey3;
        sfg::Button::Ptr mKey4;
        sfg::Button::Ptr mKey5;
        sfg::Button::Ptr mKey6;
        sfg::Button::Ptr mKey7;
        sfg::Button::Ptr mKey8;
        sfg::Button::Ptr mKey9;
        sfg::Button::Ptr mKeyPause;

        sf::Sprite mBackground;
};

#endif // SETTINGSSTATE_HPP
