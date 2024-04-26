/**********************************************************************************************************************
This file is part of the Control Toolbox (https://github.com/ethz-adrl/control-toolbox), copyright by ETH Zurich.
Licensed under the BSD-2 license (see LICENSE file in main directory)
**********************************************************************************************************************/

#ifndef INCLUDE_CT_CORE_CORE_H_
#define INCLUDE_CT_CORE_CORE_H_

#include <iosfwd>
#include <vector>
#include <functional>
#include <algorithm>
#include <cstdlib>

#ifdef CPPADCG
#include <cppad/cg.hpp>
#endif

#ifdef CPPAD
#include <cppad/cppad.hpp>
#include <cppad/example/cppad_eigen.hpp>
#include <cppad/example/atomic_two/eigen_mat_inv.hpp>
#include "internal/autodiff/CppadParallel.h"
#endif

// Include file for convenience
#include <Eigen/Core>
#include <Eigen/Dense>
#include <Eigen/Sparse>
#include <Eigen/StdVector>
#include <unsupported/Eigen/MatrixFunctions>

// Declarations
#include "common/common_includes.h"
#include "types/types_includes.h"

#include "control/continuous_time/mimo/LinearFunctions.h"
#include "control/continuous_time/siso/PIDController-impl.h"
#include "control/continuous_time/siso/PIDController.h"
#include "control/continuous_time/siso/StepInputController.h"
#include "control/continuous_time/ConstantController-impl.h"
#include "control/continuous_time/ConstantController.h"
#include "control/continuous_time/ConstantStateFeedbackController.h"
#include "control/continuous_time/ConstantTrajectoryController.h"
#include "control/continuous_time/Controller.h"
#include "control/discrete_time/DiscreteController.h"
#include "control/StateFeedbackController-impl.h"
#include "control/StateFeedbackController.h"


#include "systems/continuous_time/linear/ADCodegenLinearizer.h"
#include "systems/continuous_time/linear/AutoDiffLinearizer.h"
#include "systems/continuous_time/linear/LinearSystem.h"
#include "systems/continuous_time/linear/LTISystem.h"
#include "systems/continuous_time/linear/SwitchedLinearSystem.h"
#include "systems/continuous_time/linear/SystemLinearizer.h"
#include "systems/continuous_time/ControlledSystem.h"
#include "systems/continuous_time/SecondOrderSystem.h"
#include "systems/continuous_time/SwitchedControlledSystem.h"
#include "systems/continuous_time/SymplecticSystem.h"
#include "systems/continuous_time/System.h"
#include "systems/discrete_time/linear/DiscreteLinearSystem.h"
#include "systems/discrete_time/linear/DiscreteLTISystem.h"
#include "systems/discrete_time/linear/DiscreteSystemLinearizer.h"
#include "systems/discrete_time/linear/DiscreteSystemLinearizerAD.h"
#include "systems/discrete_time/linear/DiscreteSystemLinearizerADCG.h"
#include "systems/discrete_time/linear/SwitchedDiscreteLinearSystem.h"
#include "systems/discrete_time/DiscreteControlledSystem.h"
#include "systems/discrete_time/DiscreteSystem.h"
#include "systems/discrete_time/SwitchedDiscreteControlledSystem.h"
#include "systems/discrete_time/SystemDiscretizer-impl.h"
#include "systems/discrete_time/SystemDiscretizer.h"
#include "systems/linearizer/DynamicsLinearizerAD.h"
#include "systems/linearizer/DynamicsLinearizerADBase.h"
#include "systems/linearizer/DynamicsLinearizerADCG.h"
#include "systems/linearizer/DynamicsLinearizerNumDiff.h"

#include "integration/EventHandlers/KillIntegrationEventHandler.h"
#include "integration/EventHandlers/MaxStepsEventHandler.h"
#include "integration/EventHandlers/SubstepRecorder.h"
#include "integration/internal/StepperBase.h"
#include "integration/internal/SteppersCT.h"
#include "integration/internal/SteppersODEInt.h"
#include "integration/internal/SteppersODEIntDefinitions.h"
#include "integration/sensitivity/Sensitivity.h"
#include "integration/sensitivity/SensitivityApproximation.h"
#include "integration/sensitivity/SensitivityIntegrator.h"
#include "integration/eigenIntegration.h"
#include "integration/EventHandler.h"
#include "integration/Integrator-impl.h"
#include "integration/Integrator.h"
#include "integration/IntegratorSymplectic-impl.h"
#include "integration/IntegratorSymplectic.h"
#include "integration/Observer-impl.h"
#include "integration/Observer.h"
#include "integration/Integrator-impl.h"
#include "integration/Integrator.h"
#include "integration/IntegratorSymplectic-impl.h"


#include "geometry/Ellipsoid.h"
#include "geometry/Plane.h"
#include "geometry/PlaneEstimator.h"

#include "internal/autodiff/ADHelpers.h"
#include "internal/autodiff/CGHelpers.h"
#include "internal/autodiff/CppadParallel.h"
#include "internal/autodiff/SparsityPattern.h"
#include "internal/traits/CppADCodegenTrait.h"
#include "internal/traits/CppADDoubleTrait.h"
#include "internal/traits/DoubleTrait.h"
#include "internal/traits/FloatTrait.h"
#include "internal/traits/TraitSelector.h"
#include "internal/traits/TraitSelectorSpecs.h"

#include "math/Derivatives.h"
#include "math/DerivativesCppad.h"
#include "math/DerivativesCppadCG.h"
#include "math/DerivativesCppadJIT-impl.h"
#include "math/DerivativesCppadJIT.h"
#include "math/DerivativesCppadSettings.h"
#include "math/DerivativesNumDiff.h"
#include "math/Inverses.h"

#include "plot/plot.h"

#include "simulation/ControlSimulator.h"

#include "switching/Switching.h"

#include "templateDir.h"

#ifdef PLOTTING_ENABLED
#include "plot/plot.h"
#endif


// Implementations
#include "Common-impl"
#include "Types-impl"
#include "Control-impl"
#include "Systems-impl"
#include "Integration-impl"
#include "Internal-impl"
#include "Math-impl"
#include "Geometry-impl"
#include "Simulation-impl"

// keep standard header guard (easy debugging)
// header guard is identical to the one in core-prespec.h
#endif  // INCLUDE_CT_CORE_CORE_H_
