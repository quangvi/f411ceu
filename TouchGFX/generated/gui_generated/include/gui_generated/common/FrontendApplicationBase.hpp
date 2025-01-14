/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#ifndef FRONTENDAPPLICATIONBASE_HPP
#define FRONTENDAPPLICATIONBASE_HPP

#include <mvp/MVPApplication.hpp>
#include <gui/model/Model.hpp>

class FrontendHeap;

class FrontendApplicationBase : public touchgfx::MVPApplication
{
public:
    FrontendApplicationBase(Model& m, FrontendHeap& heap);
    virtual ~FrontendApplicationBase() { }

    virtual void changeToStartScreen()
    {
        gotoPressureScreenScreenNoTransition();
    }

    // MainScreen
    void gotoMainScreenScreenSlideTransitionWest();

    // ClockScreen
    void gotoClockScreenScreenSlideTransitionEast();

    // TemperatureScreen
    void gotoTemperatureScreenScreenSlideTransitionEast();

    // PressureScreen
    void gotoPressureScreenScreenNoTransition();

    void gotoPressureScreenScreenSlideTransitionEast();

    // COScreen
    void gotoCOScreenScreenSlideTransitionEast();

protected:
    touchgfx::Callback<FrontendApplicationBase> transitionCallback;
    FrontendHeap& frontendHeap;
    Model& model;

    // MainScreen
    void gotoMainScreenScreenSlideTransitionWestImpl();

    // ClockScreen
    void gotoClockScreenScreenSlideTransitionEastImpl();

    // TemperatureScreen
    void gotoTemperatureScreenScreenSlideTransitionEastImpl();

    // PressureScreen
    void gotoPressureScreenScreenNoTransitionImpl();

    void gotoPressureScreenScreenSlideTransitionEastImpl();

    // COScreen
    void gotoCOScreenScreenSlideTransitionEastImpl();
};

#endif // FRONTENDAPPLICATIONBASE_HPP
