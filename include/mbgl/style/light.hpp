// This file is generated. Do not edit.

#pragma once

#include <mbgl/style/light_properties.hpp>

namespace mbgl {

class RenderLight;

namespace style {

class LightObserver;

class Light {
public:

    void setObserver(LightObserver* observer);

    static LightAnchorType getDefaultAnchor();
    PropertyValue<LightAnchorType> getAnchor() const;
    void setAnchor(PropertyValue<LightAnchorType>);
    void setAnchorTransition(const TransitionOptions&);
    TransitionOptions getAnchorTransition() const;

    static Position getDefaultPosition();
    PropertyValue<Position> getPosition() const;
    void setPosition(PropertyValue<Position>);
    void setPositionTransition(const TransitionOptions&);
    TransitionOptions getPositionTransition() const;

    static Color getDefaultColor();
    PropertyValue<Color> getColor() const;
    void setColor(PropertyValue<Color>);
    void setColorTransition(const TransitionOptions&);
    TransitionOptions getColorTransition() const;

    static float getDefaultIntensity();
    PropertyValue<float> getIntensity() const;
    void setIntensity(PropertyValue<float>);
    void setIntensityTransition(const TransitionOptions&);
    TransitionOptions getIntensityTransition() const;

private:
    IndexedTuple<LightProperties, LightProperties> properties;
    LightObserver* observer = nullptr;

    friend class mbgl::RenderLight;
};

} // namespace style
} // namespace mbgl
