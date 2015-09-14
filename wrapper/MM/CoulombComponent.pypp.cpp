// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 2 License

#include "boost/python.hpp"
#include "Helpers/clone_const_reference.hpp"
#include "CoulombComponent.pypp.hpp"

namespace bp = boost::python;

#include "SireStream/datastream.h"

#include "cljcomponent.h"

#include "cljcomponent.h"

SireMM::CoulombComponent __copy__(const SireMM::CoulombComponent &other){ return SireMM::CoulombComponent(other); }

#include "Qt/qdatastream.hpp"

#include "Helpers/str.hpp"

void register_CoulombComponent_class(){

    { //::SireMM::CoulombComponent
        typedef bp::class_< SireMM::CoulombComponent, bp::bases< SireFF::FFComponent, SireCAS::Symbol, SireCAS::ExBase > > CoulombComponent_exposer_t;
        CoulombComponent_exposer_t CoulombComponent_exposer = CoulombComponent_exposer_t( "CoulombComponent", bp::init< bp::optional< SireFF::FFName const & > >(( bp::arg("ffname")=SireFF::FFName() )) );
        bp::scope CoulombComponent_scope( CoulombComponent_exposer );
        CoulombComponent_exposer.def( bp::init< SireFF::FFName const &, QString const & >(( bp::arg("ffname"), bp::arg("suffix") )) );
        CoulombComponent_exposer.def( bp::init< SireCAS::Symbol const & >(( bp::arg("symbol") )) );
        CoulombComponent_exposer.def( bp::init< SireMM::CoulombComponent const & >(( bp::arg("other") )) );
        { //::SireMM::CoulombComponent::changeEnergy
        
            typedef void ( ::SireMM::CoulombComponent::*changeEnergy_function_type)( ::SireFF::FF &,::SireMM::CoulombEnergy const & ) const;
            changeEnergy_function_type changeEnergy_function_value( &::SireMM::CoulombComponent::changeEnergy );
            
            CoulombComponent_exposer.def( 
                "changeEnergy"
                , changeEnergy_function_value
                , ( bp::arg("ff"), bp::arg("ljnrg") ) );
        
        }
        { //::SireMM::CoulombComponent::setEnergy
        
            typedef void ( ::SireMM::CoulombComponent::*setEnergy_function_type)( ::SireFF::FF &,::SireMM::CoulombEnergy const & ) const;
            setEnergy_function_type setEnergy_function_value( &::SireMM::CoulombComponent::setEnergy );
            
            CoulombComponent_exposer.def( 
                "setEnergy"
                , setEnergy_function_value
                , ( bp::arg("ff"), bp::arg("ljnrg") ) );
        
        }
        { //::SireMM::CoulombComponent::symbols
        
            typedef ::SireCAS::Symbols ( ::SireMM::CoulombComponent::*symbols_function_type)(  ) const;
            symbols_function_type symbols_function_value( &::SireMM::CoulombComponent::symbols );
            
            CoulombComponent_exposer.def( 
                "symbols"
                , symbols_function_value );
        
        }
        { //::SireMM::CoulombComponent::total
        
            typedef ::SireMM::CoulombComponent const & ( ::SireMM::CoulombComponent::*total_function_type)(  ) const;
            total_function_type total_function_value( &::SireMM::CoulombComponent::total );
            
            CoulombComponent_exposer.def( 
                "total"
                , total_function_value
                , bp::return_value_policy<bp::clone_const_reference>() );
        
        }
        { //::SireMM::CoulombComponent::typeName
        
            typedef char const * ( *typeName_function_type )(  );
            typeName_function_type typeName_function_value( &::SireMM::CoulombComponent::typeName );
            
            CoulombComponent_exposer.def( 
                "typeName"
                , typeName_function_value );
        
        }
        { //::SireMM::CoulombComponent::what
        
            typedef char const * ( ::SireMM::CoulombComponent::*what_function_type)(  ) const;
            what_function_type what_function_value( &::SireMM::CoulombComponent::what );
            
            CoulombComponent_exposer.def( 
                "what"
                , what_function_value );
        
        }
        CoulombComponent_exposer.staticmethod( "typeName" );
        CoulombComponent_exposer.def( "__copy__", &__copy__);
        CoulombComponent_exposer.def( "__deepcopy__", &__copy__);
        CoulombComponent_exposer.def( "clone", &__copy__);
        CoulombComponent_exposer.def( "__rlshift__", &__rlshift__QDataStream< ::SireMM::CoulombComponent >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        CoulombComponent_exposer.def( "__rrshift__", &__rrshift__QDataStream< ::SireMM::CoulombComponent >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        CoulombComponent_exposer.def( "__str__", &__str__< ::SireMM::CoulombComponent > );
        CoulombComponent_exposer.def( "__repr__", &__str__< ::SireMM::CoulombComponent > );
    }

}
