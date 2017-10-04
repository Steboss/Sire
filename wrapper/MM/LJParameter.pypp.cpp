// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 2 License

#include "boost/python.hpp"
#include "LJParameter.pypp.hpp"

namespace bp = boost::python;

#include "SireMaths/maths.h"

#include "SireStream/datastream.h"

#include "ljpair.h"

#include "ljparameter.h"

#include "ljparameter.h"

SireMM::LJParameter __copy__(const SireMM::LJParameter &other){ return SireMM::LJParameter(other); }

#include "Qt/qdatastream.hpp"

#include "Helpers/str.hpp"

void register_LJParameter_class(){

    { //::SireMM::LJParameter
        typedef bp::class_< SireMM::LJParameter > LJParameter_exposer_t;
        LJParameter_exposer_t LJParameter_exposer = LJParameter_exposer_t( "LJParameter", "", bp::init< >("Construct a dummy LJ parameter") );
        bp::scope LJParameter_scope( LJParameter_exposer );
        bp::enum_< SireMM::LJParameter::CombiningRules>("CombiningRules")
            .value("ARITHMETIC", SireMM::LJParameter::ARITHMETIC)
            .value("GEOMETRIC", SireMM::LJParameter::GEOMETRIC)
            .export_values()
            ;
        LJParameter_exposer.def( bp::init< SireUnits::Dimension::Length, SireUnits::Dimension::MolarEnergy >(( bp::arg("sigma"), bp::arg("epsilon") ), "Construct a LJParameter that has the specified sigma and epsilon") );
        LJParameter_exposer.def( bp::init< SireMM::LJPair const & >(( bp::arg("ljpair") ), "Construct from an LJPair") );
        LJParameter_exposer.def( bp::init< SireMM::LJParameter const & >(( bp::arg("param") ), "Copy constructor") );
        { //::SireMM::LJParameter::A
        
            typedef double ( ::SireMM::LJParameter::*A_function_type)(  ) const;
            A_function_type A_function_value( &::SireMM::LJParameter::A );
            
            LJParameter_exposer.def( 
                "A"
                , A_function_value
                , "Return the LJ A parameter" );
        
        }
        { //::SireMM::LJParameter::B
        
            typedef double ( ::SireMM::LJParameter::*B_function_type)(  ) const;
            B_function_type B_function_value( &::SireMM::LJParameter::B );
            
            LJParameter_exposer.def( 
                "B"
                , B_function_value
                , "Return the LJ B parameter" );
        
        }
        { //::SireMM::LJParameter::combine
        
            typedef ::SireMM::LJParameter ( ::SireMM::LJParameter::*combine_function_type)( ::SireMM::LJParameter const &,::SireMM::LJParameter::CombiningRules ) const;
            combine_function_type combine_function_value( &::SireMM::LJParameter::combine );
            
            LJParameter_exposer.def( 
                "combine"
                , combine_function_value
                , ( bp::arg("other"), bp::arg("rules") )
                , "Return the LJParameter that is this parameter combined with other according\nto the passed combining rules" );
        
        }
        { //::SireMM::LJParameter::combineArithmetic
        
            typedef ::SireMM::LJParameter ( ::SireMM::LJParameter::*combineArithmetic_function_type)( ::SireMM::LJParameter const & ) const;
            combineArithmetic_function_type combineArithmetic_function_value( &::SireMM::LJParameter::combineArithmetic );
            
            LJParameter_exposer.def( 
                "combineArithmetic"
                , combineArithmetic_function_value
                , ( bp::arg("other") )
                , "Return the LJParameter that is this parameter combined with other\nusing arithmetic combining rules" );
        
        }
        { //::SireMM::LJParameter::combineGeometric
        
            typedef ::SireMM::LJParameter ( ::SireMM::LJParameter::*combineGeometric_function_type)( ::SireMM::LJParameter const & ) const;
            combineGeometric_function_type combineGeometric_function_value( &::SireMM::LJParameter::combineGeometric );
            
            LJParameter_exposer.def( 
                "combineGeometric"
                , combineGeometric_function_value
                , ( bp::arg("other") )
                , "Return the LJParameter that is this parameter combined with other\nusing geometric combining rules" );
        
        }
        { //::SireMM::LJParameter::dummy
        
            typedef ::SireMM::LJParameter ( *dummy_function_type )(  );
            dummy_function_type dummy_function_value( &::SireMM::LJParameter::dummy );
            
            LJParameter_exposer.def( 
                "dummy"
                , dummy_function_value
                , "Return a dummy CLJParameter" );
        
        }
        { //::SireMM::LJParameter::epsilon
        
            typedef ::SireUnits::Dimension::MolarEnergy ( ::SireMM::LJParameter::*epsilon_function_type)(  ) const;
            epsilon_function_type epsilon_function_value( &::SireMM::LJParameter::epsilon );
            
            LJParameter_exposer.def( 
                "epsilon"
                , epsilon_function_value
                , "" );
        
        }
        { //::SireMM::LJParameter::fromAAndB
        
            typedef ::SireMM::LJParameter ( *fromAAndB_function_type )( double,double );
            fromAAndB_function_type fromAAndB_function_value( &::SireMM::LJParameter::fromAAndB );
            
            LJParameter_exposer.def( 
                "fromAAndB"
                , fromAAndB_function_value
                , ( bp::arg("a"), bp::arg("b") )
                , "Return a LJ parameter that corresponds to the passed LJ parameters A and B,\nE(r) = A r-12  - B r-6\n" );
        
        }
        { //::SireMM::LJParameter::fromRMinAndEpsilon
        
            typedef ::SireMM::LJParameter ( *fromRMinAndEpsilon_function_type )( ::SireUnits::Dimension::Length,::SireUnits::Dimension::MolarEnergy );
            fromRMinAndEpsilon_function_type fromRMinAndEpsilon_function_value( &::SireMM::LJParameter::fromRMinAndEpsilon );
            
            LJParameter_exposer.def( 
                "fromRMinAndEpsilon"
                , fromRMinAndEpsilon_function_value
                , ( bp::arg("rmin"), bp::arg("epsilon") )
                , "Return a LJ parameter that corresponds to the curve that has a minimum at\nrmin, and a well-depth of epsilon.\nE(r) = 4 epilson [ (sigmar)^12 - (sigmar)^6 ], where\nrmin = 2^(16) sigma\n" );
        
        }
        { //::SireMM::LJParameter::fromSigmaAndEpsilon
        
            typedef ::SireMM::LJParameter ( *fromSigmaAndEpsilon_function_type )( ::SireUnits::Dimension::Length,::SireUnits::Dimension::MolarEnergy );
            fromSigmaAndEpsilon_function_type fromSigmaAndEpsilon_function_value( &::SireMM::LJParameter::fromSigmaAndEpsilon );
            
            LJParameter_exposer.def( 
                "fromSigmaAndEpsilon"
                , fromSigmaAndEpsilon_function_value
                , ( bp::arg("sigma"), bp::arg("epsilon") )
                , "Return a LJ parameter that corresponds to the passed values of sigma and epsilon,\nE(r) = 4 epsilon [ (sigmar)^12 - (sigmar)^6 ]\n" );
        
        }
        { //::SireMM::LJParameter::isDummy
        
            typedef bool ( ::SireMM::LJParameter::*isDummy_function_type)(  ) const;
            isDummy_function_type isDummy_function_value( &::SireMM::LJParameter::isDummy );
            
            LJParameter_exposer.def( 
                "isDummy"
                , isDummy_function_value
                , "" );
        
        }
        LJParameter_exposer.def( bp::self != bp::self );
        LJParameter_exposer.def( bp::self == bp::self );
        { //::SireMM::LJParameter::rmin
        
            typedef ::SireUnits::Dimension::Length ( ::SireMM::LJParameter::*rmin_function_type)(  ) const;
            rmin_function_type rmin_function_value( &::SireMM::LJParameter::rmin );
            
            LJParameter_exposer.def( 
                "rmin"
                , rmin_function_value
                , "Return the LJ rmin parameter - this is the location of the minimum.\nrmin = 2^(16)  sigma\n" );
        
        }
        { //::SireMM::LJParameter::sigma
        
            typedef ::SireUnits::Dimension::Length ( ::SireMM::LJParameter::*sigma_function_type)(  ) const;
            sigma_function_type sigma_function_value( &::SireMM::LJParameter::sigma );
            
            LJParameter_exposer.def( 
                "sigma"
                , sigma_function_value
                , "" );
        
        }
        { //::SireMM::LJParameter::sqrtEpsilon
        
            typedef double ( ::SireMM::LJParameter::*sqrtEpsilon_function_type)(  ) const;
            sqrtEpsilon_function_type sqrtEpsilon_function_value( &::SireMM::LJParameter::sqrtEpsilon );
            
            LJParameter_exposer.def( 
                "sqrtEpsilon"
                , sqrtEpsilon_function_value
                , "" );
        
        }
        { //::SireMM::LJParameter::sqrtSigma
        
            typedef double ( ::SireMM::LJParameter::*sqrtSigma_function_type)(  ) const;
            sqrtSigma_function_type sqrtSigma_function_value( &::SireMM::LJParameter::sqrtSigma );
            
            LJParameter_exposer.def( 
                "sqrtSigma"
                , sqrtSigma_function_value
                , "" );
        
        }
        { //::SireMM::LJParameter::toString
        
            typedef ::QString ( ::SireMM::LJParameter::*toString_function_type)(  ) const;
            toString_function_type toString_function_value( &::SireMM::LJParameter::toString );
            
            LJParameter_exposer.def( 
                "toString"
                , toString_function_value
                , "Return a string representation of the CLJ parameter" );
        
        }
        { //::SireMM::LJParameter::typeName
        
            typedef char const * ( *typeName_function_type )(  );
            typeName_function_type typeName_function_value( &::SireMM::LJParameter::typeName );
            
            LJParameter_exposer.def( 
                "typeName"
                , typeName_function_value
                , "" );
        
        }
        { //::SireMM::LJParameter::what
        
            typedef char const * ( ::SireMM::LJParameter::*what_function_type)(  ) const;
            what_function_type what_function_value( &::SireMM::LJParameter::what );
            
            LJParameter_exposer.def( 
                "what"
                , what_function_value
                , "" );
        
        }
        { //::SireMM::LJParameter::zeroLJ
        
            typedef bool ( ::SireMM::LJParameter::*zeroLJ_function_type)(  ) const;
            zeroLJ_function_type zeroLJ_function_value( &::SireMM::LJParameter::zeroLJ );
            
            LJParameter_exposer.def( 
                "zeroLJ"
                , zeroLJ_function_value
                , "" );
        
        }
        LJParameter_exposer.staticmethod( "dummy" );
        LJParameter_exposer.staticmethod( "fromAAndB" );
        LJParameter_exposer.staticmethod( "fromRMinAndEpsilon" );
        LJParameter_exposer.staticmethod( "fromSigmaAndEpsilon" );
        LJParameter_exposer.staticmethod( "typeName" );
        LJParameter_exposer.def( "__copy__", &__copy__);
        LJParameter_exposer.def( "__deepcopy__", &__copy__);
        LJParameter_exposer.def( "clone", &__copy__);
        LJParameter_exposer.def( "__rlshift__", &__rlshift__QDataStream< ::SireMM::LJParameter >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        LJParameter_exposer.def( "__rrshift__", &__rrshift__QDataStream< ::SireMM::LJParameter >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        LJParameter_exposer.def( "__str__", &__str__< ::SireMM::LJParameter > );
        LJParameter_exposer.def( "__repr__", &__str__< ::SireMM::LJParameter > );
    }

}
