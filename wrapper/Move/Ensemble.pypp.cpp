// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 2 License

#include "boost/python.hpp"
#include "Ensemble.pypp.hpp"

namespace bp = boost::python;

#include "SireError/errors.h"

#include "SireStream/datastream.h"

#include "SireUnits/temperature.h"

#include "SireUnits/units.h"

#include "ensemble.h"

#include "tostring.h"

#include <QDebug>

#include <cmath>

#include "ensemble.h"

SireMove::Ensemble __copy__(const SireMove::Ensemble &other){ return SireMove::Ensemble(other); }

#include "Qt/qdatastream.hpp"

#include "Helpers/str.hpp"

void register_Ensemble_class(){

    { //::SireMove::Ensemble
        typedef bp::class_< SireMove::Ensemble, bp::bases< SireBase::Property > > Ensemble_exposer_t;
        Ensemble_exposer_t Ensemble_exposer = Ensemble_exposer_t( "Ensemble", bp::init< >() );
        bp::scope Ensemble_scope( Ensemble_exposer );
        Ensemble_exposer.def( bp::init< SireMove::Ensemble const & >(( bp::arg("other") )) );
        { //::SireMove::Ensemble::MuVT
        
            typedef ::SireMove::Ensemble ( *MuVT_function_type )( ::SireUnits::Dimension::Temperature const &,::SireUnits::Dimension::Pressure const & );
            MuVT_function_type MuVT_function_value( &::SireMove::Ensemble::MuVT );
            
            Ensemble_exposer.def( 
                "MuVT"
                , MuVT_function_value
                , ( bp::arg("temperature"), bp::arg("fugacity") ) );
        
        }
        { //::SireMove::Ensemble::MuVT
        
            typedef ::SireMove::Ensemble ( *MuVT_function_type )( ::SireUnits::Dimension::Temperature const &,::SireUnits::Dimension::MolarEnergy const & );
            MuVT_function_type MuVT_function_value( &::SireMove::Ensemble::MuVT );
            
            Ensemble_exposer.def( 
                "MuVT"
                , MuVT_function_value
                , ( bp::arg("temperature"), bp::arg("chemical_potential") ) );
        
        }
        { //::SireMove::Ensemble::NPT
        
            typedef ::SireMove::Ensemble ( *NPT_function_type )( ::SireUnits::Dimension::Temperature const &,::SireUnits::Dimension::Pressure const & );
            NPT_function_type NPT_function_value( &::SireMove::Ensemble::NPT );
            
            Ensemble_exposer.def( 
                "NPT"
                , NPT_function_value
                , ( bp::arg("temperature"), bp::arg("pressure") ) );
        
        }
        { //::SireMove::Ensemble::NVE
        
            typedef ::SireMove::Ensemble ( *NVE_function_type )(  );
            NVE_function_type NVE_function_value( &::SireMove::Ensemble::NVE );
            
            Ensemble_exposer.def( 
                "NVE"
                , NVE_function_value );
        
        }
        { //::SireMove::Ensemble::NVT
        
            typedef ::SireMove::Ensemble ( *NVT_function_type )( ::SireUnits::Dimension::Temperature const & );
            NVT_function_type NVT_function_value( &::SireMove::Ensemble::NVT );
            
            Ensemble_exposer.def( 
                "NVT"
                , NVT_function_value
                , ( bp::arg("temperature") ) );
        
        }
        { //::SireMove::Ensemble::canonical
        
            typedef ::SireMove::Ensemble ( *canonical_function_type )( ::SireUnits::Dimension::Temperature const & );
            canonical_function_type canonical_function_value( &::SireMove::Ensemble::canonical );
            
            Ensemble_exposer.def( 
                "canonical"
                , canonical_function_value
                , ( bp::arg("temperature") ) );
        
        }
        { //::SireMove::Ensemble::chemicalPotential
        
            typedef ::SireUnits::Dimension::MolarEnergy ( ::SireMove::Ensemble::*chemicalPotential_function_type)(  ) const;
            chemicalPotential_function_type chemicalPotential_function_value( &::SireMove::Ensemble::chemicalPotential );
            
            Ensemble_exposer.def( 
                "chemicalPotential"
                , chemicalPotential_function_value );
        
        }
        { //::SireMove::Ensemble::fugacity
        
            typedef ::SireUnits::Dimension::Pressure ( ::SireMove::Ensemble::*fugacity_function_type)(  ) const;
            fugacity_function_type fugacity_function_value( &::SireMove::Ensemble::fugacity );
            
            Ensemble_exposer.def( 
                "fugacity"
                , fugacity_function_value );
        
        }
        { //::SireMove::Ensemble::grandCanonical
        
            typedef ::SireMove::Ensemble ( *grandCanonical_function_type )( ::SireUnits::Dimension::Temperature const &,::SireUnits::Dimension::Pressure const & );
            grandCanonical_function_type grandCanonical_function_value( &::SireMove::Ensemble::grandCanonical );
            
            Ensemble_exposer.def( 
                "grandCanonical"
                , grandCanonical_function_value
                , ( bp::arg("temperature"), bp::arg("fugacity") ) );
        
        }
        { //::SireMove::Ensemble::grandCanonical
        
            typedef ::SireMove::Ensemble ( *grandCanonical_function_type )( ::SireUnits::Dimension::Temperature const &,::SireUnits::Dimension::MolarEnergy const & );
            grandCanonical_function_type grandCanonical_function_value( &::SireMove::Ensemble::grandCanonical );
            
            Ensemble_exposer.def( 
                "grandCanonical"
                , grandCanonical_function_value
                , ( bp::arg("temperature"), bp::arg("chemical_potential") ) );
        
        }
        { //::SireMove::Ensemble::isCanonical
        
            typedef bool ( ::SireMove::Ensemble::*isCanonical_function_type)(  ) const;
            isCanonical_function_type isCanonical_function_value( &::SireMove::Ensemble::isCanonical );
            
            Ensemble_exposer.def( 
                "isCanonical"
                , isCanonical_function_value );
        
        }
        { //::SireMove::Ensemble::isConstantChemicalPotential
        
            typedef bool ( ::SireMove::Ensemble::*isConstantChemicalPotential_function_type)(  ) const;
            isConstantChemicalPotential_function_type isConstantChemicalPotential_function_value( &::SireMove::Ensemble::isConstantChemicalPotential );
            
            Ensemble_exposer.def( 
                "isConstantChemicalPotential"
                , isConstantChemicalPotential_function_value );
        
        }
        { //::SireMove::Ensemble::isConstantEnergy
        
            typedef bool ( ::SireMove::Ensemble::*isConstantEnergy_function_type)(  ) const;
            isConstantEnergy_function_type isConstantEnergy_function_value( &::SireMove::Ensemble::isConstantEnergy );
            
            Ensemble_exposer.def( 
                "isConstantEnergy"
                , isConstantEnergy_function_value );
        
        }
        { //::SireMove::Ensemble::isConstantFugacity
        
            typedef bool ( ::SireMove::Ensemble::*isConstantFugacity_function_type)(  ) const;
            isConstantFugacity_function_type isConstantFugacity_function_value( &::SireMove::Ensemble::isConstantFugacity );
            
            Ensemble_exposer.def( 
                "isConstantFugacity"
                , isConstantFugacity_function_value );
        
        }
        { //::SireMove::Ensemble::isConstantNParticles
        
            typedef bool ( ::SireMove::Ensemble::*isConstantNParticles_function_type)(  ) const;
            isConstantNParticles_function_type isConstantNParticles_function_value( &::SireMove::Ensemble::isConstantNParticles );
            
            Ensemble_exposer.def( 
                "isConstantNParticles"
                , isConstantNParticles_function_value );
        
        }
        { //::SireMove::Ensemble::isConstantPressure
        
            typedef bool ( ::SireMove::Ensemble::*isConstantPressure_function_type)(  ) const;
            isConstantPressure_function_type isConstantPressure_function_value( &::SireMove::Ensemble::isConstantPressure );
            
            Ensemble_exposer.def( 
                "isConstantPressure"
                , isConstantPressure_function_value );
        
        }
        { //::SireMove::Ensemble::isConstantTemperature
        
            typedef bool ( ::SireMove::Ensemble::*isConstantTemperature_function_type)(  ) const;
            isConstantTemperature_function_type isConstantTemperature_function_value( &::SireMove::Ensemble::isConstantTemperature );
            
            Ensemble_exposer.def( 
                "isConstantTemperature"
                , isConstantTemperature_function_value );
        
        }
        { //::SireMove::Ensemble::isConstantVolume
        
            typedef bool ( ::SireMove::Ensemble::*isConstantVolume_function_type)(  ) const;
            isConstantVolume_function_type isConstantVolume_function_value( &::SireMove::Ensemble::isConstantVolume );
            
            Ensemble_exposer.def( 
                "isConstantVolume"
                , isConstantVolume_function_value );
        
        }
        { //::SireMove::Ensemble::isGrandCanonical
        
            typedef bool ( ::SireMove::Ensemble::*isGrandCanonical_function_type)(  ) const;
            isGrandCanonical_function_type isGrandCanonical_function_value( &::SireMove::Ensemble::isGrandCanonical );
            
            Ensemble_exposer.def( 
                "isGrandCanonical"
                , isGrandCanonical_function_value );
        
        }
        { //::SireMove::Ensemble::isIsothermalIsobaric
        
            typedef bool ( ::SireMove::Ensemble::*isIsothermalIsobaric_function_type)(  ) const;
            isIsothermalIsobaric_function_type isIsothermalIsobaric_function_value( &::SireMove::Ensemble::isIsothermalIsobaric );
            
            Ensemble_exposer.def( 
                "isIsothermalIsobaric"
                , isIsothermalIsobaric_function_value );
        
        }
        { //::SireMove::Ensemble::isMicroCanonical
        
            typedef bool ( ::SireMove::Ensemble::*isMicroCanonical_function_type)(  ) const;
            isMicroCanonical_function_type isMicroCanonical_function_value( &::SireMove::Ensemble::isMicroCanonical );
            
            Ensemble_exposer.def( 
                "isMicroCanonical"
                , isMicroCanonical_function_value );
        
        }
        { //::SireMove::Ensemble::isMuVT
        
            typedef bool ( ::SireMove::Ensemble::*isMuVT_function_type)(  ) const;
            isMuVT_function_type isMuVT_function_value( &::SireMove::Ensemble::isMuVT );
            
            Ensemble_exposer.def( 
                "isMuVT"
                , isMuVT_function_value );
        
        }
        { //::SireMove::Ensemble::isNPT
        
            typedef bool ( ::SireMove::Ensemble::*isNPT_function_type)(  ) const;
            isNPT_function_type isNPT_function_value( &::SireMove::Ensemble::isNPT );
            
            Ensemble_exposer.def( 
                "isNPT"
                , isNPT_function_value );
        
        }
        { //::SireMove::Ensemble::isNVE
        
            typedef bool ( ::SireMove::Ensemble::*isNVE_function_type)(  ) const;
            isNVE_function_type isNVE_function_value( &::SireMove::Ensemble::isNVE );
            
            Ensemble_exposer.def( 
                "isNVE"
                , isNVE_function_value );
        
        }
        { //::SireMove::Ensemble::isNVT
        
            typedef bool ( ::SireMove::Ensemble::*isNVT_function_type)(  ) const;
            isNVT_function_type isNVT_function_value( &::SireMove::Ensemble::isNVT );
            
            Ensemble_exposer.def( 
                "isNVT"
                , isNVT_function_value );
        
        }
        { //::SireMove::Ensemble::isothermalIsobaric
        
            typedef ::SireMove::Ensemble ( *isothermalIsobaric_function_type )( ::SireUnits::Dimension::Temperature const &,::SireUnits::Dimension::Pressure const & );
            isothermalIsobaric_function_type isothermalIsobaric_function_value( &::SireMove::Ensemble::isothermalIsobaric );
            
            Ensemble_exposer.def( 
                "isothermalIsobaric"
                , isothermalIsobaric_function_value
                , ( bp::arg("temperature"), bp::arg("pressure") ) );
        
        }
        { //::SireMove::Ensemble::merge
        
            typedef ::SireMove::Ensemble ( ::SireMove::Ensemble::*merge_function_type)( ::SireMove::Ensemble const & ) const;
            merge_function_type merge_function_value( &::SireMove::Ensemble::merge );
            
            Ensemble_exposer.def( 
                "merge"
                , merge_function_value
                , ( bp::arg("other") ) );
        
        }
        { //::SireMove::Ensemble::merge
        
            typedef ::SireMove::Ensemble ( *merge_function_type )( ::SireMove::Ensemble const &,::SireMove::Ensemble const & );
            merge_function_type merge_function_value( &::SireMove::Ensemble::merge );
            
            Ensemble_exposer.def( 
                "merge"
                , merge_function_value
                , ( bp::arg("e0"), bp::arg("e1") ) );
        
        }
        { //::SireMove::Ensemble::microcanonical
        
            typedef ::SireMove::Ensemble ( *microcanonical_function_type )(  );
            microcanonical_function_type microcanonical_function_value( &::SireMove::Ensemble::microcanonical );
            
            Ensemble_exposer.def( 
                "microcanonical"
                , microcanonical_function_value );
        
        }
        { //::SireMove::Ensemble::name
        
            typedef ::QString ( ::SireMove::Ensemble::*name_function_type)(  ) const;
            name_function_type name_function_value( &::SireMove::Ensemble::name );
            
            Ensemble_exposer.def( 
                "name"
                , name_function_value );
        
        }
        Ensemble_exposer.def( bp::self != bp::self );
        { //::SireMove::Ensemble::operator=
        
            typedef ::SireMove::Ensemble & ( ::SireMove::Ensemble::*assign_function_type)( ::SireMove::Ensemble const & ) ;
            assign_function_type assign_function_value( &::SireMove::Ensemble::operator= );
            
            Ensemble_exposer.def( 
                "assign"
                , assign_function_value
                , ( bp::arg("other") )
                , bp::return_self< >() );
        
        }
        Ensemble_exposer.def( bp::self == bp::self );
        { //::SireMove::Ensemble::pressure
        
            typedef ::SireUnits::Dimension::Pressure ( ::SireMove::Ensemble::*pressure_function_type)(  ) const;
            pressure_function_type pressure_function_value( &::SireMove::Ensemble::pressure );
            
            Ensemble_exposer.def( 
                "pressure"
                , pressure_function_value );
        
        }
        { //::SireMove::Ensemble::shortHand
        
            typedef ::QString ( ::SireMove::Ensemble::*shortHand_function_type)(  ) const;
            shortHand_function_type shortHand_function_value( &::SireMove::Ensemble::shortHand );
            
            Ensemble_exposer.def( 
                "shortHand"
                , shortHand_function_value );
        
        }
        { //::SireMove::Ensemble::temperature
        
            typedef ::SireUnits::Dimension::Temperature ( ::SireMove::Ensemble::*temperature_function_type)(  ) const;
            temperature_function_type temperature_function_value( &::SireMove::Ensemble::temperature );
            
            Ensemble_exposer.def( 
                "temperature"
                , temperature_function_value );
        
        }
        { //::SireMove::Ensemble::toString
        
            typedef ::QString ( ::SireMove::Ensemble::*toString_function_type)(  ) const;
            toString_function_type toString_function_value( &::SireMove::Ensemble::toString );
            
            Ensemble_exposer.def( 
                "toString"
                , toString_function_value );
        
        }
        { //::SireMove::Ensemble::typeName
        
            typedef char const * ( *typeName_function_type )(  );
            typeName_function_type typeName_function_value( &::SireMove::Ensemble::typeName );
            
            Ensemble_exposer.def( 
                "typeName"
                , typeName_function_value );
        
        }
        Ensemble_exposer.staticmethod( "MuVT" );
        Ensemble_exposer.staticmethod( "NPT" );
        Ensemble_exposer.staticmethod( "NVE" );
        Ensemble_exposer.staticmethod( "NVT" );
        Ensemble_exposer.staticmethod( "canonical" );
        Ensemble_exposer.staticmethod( "grandCanonical" );
        Ensemble_exposer.staticmethod( "isothermalIsobaric" );
        Ensemble_exposer.staticmethod( "merge" );
        Ensemble_exposer.staticmethod( "microcanonical" );
        Ensemble_exposer.staticmethod( "typeName" );
        Ensemble_exposer.def( "__copy__", &__copy__);
        Ensemble_exposer.def( "__deepcopy__", &__copy__);
        Ensemble_exposer.def( "clone", &__copy__);
        Ensemble_exposer.def( "__rlshift__", &__rlshift__QDataStream< ::SireMove::Ensemble >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        Ensemble_exposer.def( "__rrshift__", &__rrshift__QDataStream< ::SireMove::Ensemble >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        Ensemble_exposer.def( "__str__", &__str__< ::SireMove::Ensemble > );
        Ensemble_exposer.def( "__repr__", &__str__< ::SireMove::Ensemble > );
    }

}
