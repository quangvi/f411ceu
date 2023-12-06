/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#ifndef TEMPERATURESCREENVIEWBASE_HPP
#define TEMPERATURESCREENVIEWBASE_HPP

#include <gui/common/FrontendApplication.hpp>
#include <mvp/View.hpp>
#include <gui/temperaturescreen_screen/TemperatureScreenPresenter.hpp>
#include <touchgfx/widgets/Box.hpp>
#include <touchgfx/widgets/TextAreaWithWildcard.hpp>
#include <touchgfx/widgets/TextArea.hpp>
#include <touchgfx/widgets/Gauge.hpp>
#include <touchgfx/widgets/ButtonWithIcon.hpp>

class TemperatureScreenViewBase : public touchgfx::View<TemperatureScreenPresenter>
{
public:
    TemperatureScreenViewBase();
    virtual ~TemperatureScreenViewBase();
    virtual void setupScreen();

protected:
    FrontendApplication& application() {
        return *static_cast<FrontendApplication*>(touchgfx::Application::getInstance());
    }

    /*
     * Member Declarations
     */
    touchgfx::Box __background;
    touchgfx::TextAreaWithOneWildcard TemperatureData;
    touchgfx::TextArea Temperature_text;
    touchgfx::Gauge TemperatureGauge;
    touchgfx::ButtonWithIcon back;

    /*
     * Wildcard Buffers
     */
    static const uint16_t TEMPERATUREDATA_SIZE = 4;
    touchgfx::Unicode::UnicodeChar TemperatureDataBuffer[TEMPERATUREDATA_SIZE];

private:

    /*
     * Callback Declarations
     */
    touchgfx::Callback<TemperatureScreenViewBase, const touchgfx::AbstractButton&> buttonCallback;

    /*
     * Callback Handler Declarations
     */
    void buttonCallbackHandler(const touchgfx::AbstractButton& src);

};

#endif // TEMPERATURESCREENVIEWBASE_HPP
