// Copyright (c) 2013 Vasili Baranau
// Distributed under the MIT software license
// See the accompanying file License.txt or http://opensource.org/licenses/MIT

#ifndef Generation_Geometries_Headers_CircleGeometry_h
#define Generation_Geometries_Headers_CircleGeometry_h

#include "BaseGeometry.h"
#include "Core/Headers/Macros.h"

namespace Geometries
{
    // Represents a tube with circular cross-section.
    class CircleGeometry : public BaseGeometry
    {
    public:
        explicit CircleGeometry(const Model::SystemConfig& config);

        OVERRIDE Core::FLOAT_TYPE GetTotalVolume() const;

        OVERRIDE void EnsurePeriodicConditions(Model::DomainParticle* firstParticle, Model::DomainParticle* secondParticle) const;

        OVERRIDE void EnsureBoundaries(const Model::DomainParticle& initialParticle, Model::DomainParticle* movedParticle, Core::FLOAT_TYPE minNormalizedDistance) const;

        virtual ~CircleGeometry();

    private:
        DISALLOW_COPY_AND_ASSIGN(CircleGeometry);
    };
}


#endif /* Generation_Geometries_Headers_CircleGeometry_h */

