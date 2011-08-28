#ifndef Magnum_Math_Vector2_h
#define Magnum_Math_Vector2_h
/*
    Copyright © 2010, 2011 Vladimír Vondruš <mosra@centrum.cz>

    This file is part of Magnum.

    Magnum is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License version 2
    only, as published by the Free Software Foundation.

    Magnum is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
    GNU Lesser General Public License version 2 for more details.
*/

/** @file
 * @brief Class Magnum::Math::Vector2
 */

#include "Vector.h"

namespace Magnum { namespace Math {

/** @brief Vector (three-component) */
template<class T> class Vector2: public Vector<T, 2> {
    public:
        /** @copydoc Vector::Vector */
        inline Vector2() {}

        /** @copydoc Vector::Vector(const T*) */
        inline Vector2(const T* data): Vector<T, 2>(data) {}

        /** @copydoc Vector::Vector(const Vector&)  */
        inline Vector2(const Vector<T, 2>& other): Vector<T, 2>(other) {}

        /**
         * @brief Constructor
         * @param x     X value
         * @param y     Y value
         */
        inline Vector2(T x, T y) {
            setX(x); setY(y);
        }

        inline T x() const { return Vector<T, 2>::at(0); } /**< @brief X component */
        inline T y() const { return Vector<T, 2>::at(1); } /**< @brief Y component */

        inline void setX(T value) { set(0, value); } /**< @brief Set X component */
        inline void setY(T value) { set(1, value); } /**< @brief Set Y component */

        /** @copydoc Vector::operator=() */
        inline Vector2<T>& operator=(const Vector<T, 2>& other) { return Vector<T, 2>::operator=(other); }

        /** @copydoc Vector::operator*(const Vector<T, size>&) */
        inline T operator*(const Vector<T, 2>& other) const { return Vector<T, 2>::operator*(other); }

        /** @copydoc Vector::operator*(T) */
        inline Vector2<T> operator*(T number) const { return Vector<T, 2>::operator*(number); }

        /** @copydoc Vector::operator/() */
        inline Vector2<T> operator/(T number) const { return Vector<T, 2>::operator/(number); }

        /** @copydoc Vector::operator+() */
        inline Vector2<T> operator+(const Vector<T, 2>& other) const { return Vector<T, 2>::operator+(other); }

        /** @copydoc Vector::operator-(const Vector<T, size>&) */
        inline Vector2<T> operator-(const Vector<T, 2>& other) const { return Vector<T, 2>::operator-(other); }

        /** @copydoc Vector::operator-() */
        inline Vector2<T> operator-() const { return Vector<T, 2>::operator-(); }

        /** @copydoc Vector::normalized() */
        inline Vector2<T> normalized() const { return Vector<T, 2>::normalized(); }
};

}}

#endif
