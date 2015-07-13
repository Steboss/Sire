// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 2 License

#include "boost/python.hpp"
#include "NullProbe.pypp.hpp"

namespace bp = boost::python;

#include "SireError/errors.h"

#include "SireStream/datastream.h"

#include "probe.h"

#include "probe.h"

SireFF::NullProbe __copy__(const SireFF::NullProbe &other){ return SireFF::NullProbe(other); }

#include "Qt/qdatastream.hpp"

#include "Helpers/str.hpp"

void register_NullProbe_class(){

    { //::SireFF::NullProbe
        typedef bp::class_< SireFF::NullProbe, bp::bases< SireFF::Probe, SireBase::Property > > NullProbe_exposer_t;
        NullProbe_exposer_t NullProbe_exposer = NullProbe_exposer_t( "NullProbe", bp::init< >() );
        bp::scope NullProbe_scope( NullProbe_exposer );
        NullProbe_exposer.def( bp::init< SireFF::NullProbe const & >(( bp::arg("other") )) );
        NullProbe_exposer.def( bp::self != bp::self );
        { //::SireFF::NullProbe::operator=
        
            typedef ::SireFF::NullProbe & ( ::SireFF::NullProbe::*assign_function_type )( ::SireFF::NullProbe const & ) ;
            assign_function_type assign_function_value( &::SireFF::NullProbe::operator= );
            
            NullProbe_exposer.def( 
                "assign"
                , assign_function_value
                , ( bp::arg("other") )
                , bp::return_self< >() );
        
        }
        NullProbe_exposer.def( bp::self == bp::self );
        { //::SireFF::NullProbe::typeName
        
            typedef char const * ( *typeName_function_type )(  );
            typeName_function_type typeName_function_value( &::SireFF::NullProbe::typeName );
            
            NullProbe_exposer.def( 
                "typeName"
                , typeName_function_value );
        
        }
        NullProbe_exposer.staticmethod( "typeName" );
        NullProbe_exposer.def( "__copy__", &__copy__);
        NullProbe_exposer.def( "__deepcopy__", &__copy__);
        NullProbe_exposer.def( "clone", &__copy__);
        NullProbe_exposer.def( "__rlshift__", &__rlshift__QDataStream< ::SireFF::NullProbe >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        NullProbe_exposer.def( "__rrshift__", &__rrshift__QDataStream< ::SireFF::NullProbe >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        NullProbe_exposer.def( "__str__", &__str__< ::SireFF::NullProbe > );
        NullProbe_exposer.def( "__repr__", &__str__< ::SireFF::NullProbe > );
    }

}