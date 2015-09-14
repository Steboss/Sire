// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 2 License

#include "boost/python.hpp"
#include "FFID.pypp.hpp"

namespace bp = boost::python;

#include "SireFF/errors.h"

#include "SireStream/datastream.h"

#include "ffid.h"

#include "ffidx.h"

#include "ffname.h"

#include "forcefields.h"

#include "ffid.h"

#include "forcefields.h"

#include "ffidx.h"

#include "Helpers/str.hpp"

void register_FFID_class(){

    { //::SireFF::FFID
        typedef bp::class_< SireFF::FFID, bp::bases< SireID::ID >, boost::noncopyable > FFID_exposer_t;
        FFID_exposer_t FFID_exposer = FFID_exposer_t( "FFID", bp::no_init );
        bp::scope FFID_scope( FFID_exposer );
        { //::SireFF::FFID::map
        
            typedef ::QList< SireFF::FFIdx > ( ::SireFF::FFID::*map_function_type)( ::SireFF::ForceFields const & ) const;
            map_function_type map_function_value( &::SireFF::FFID::map );
            
            FFID_exposer.def( 
                "map"
                , map_function_value
                , ( bp::arg("ffields") ) );
        
        }
        FFID_exposer.def( bp::self & bp::self );
        { //::SireFF::FFID::operator()
        
            typedef ::SireID::Specify< SireFF::FFID > ( ::SireFF::FFID::*__call___function_type)( int ) const;
            __call___function_type __call___function_value( &::SireFF::FFID::operator() );
            
            FFID_exposer.def( 
                "__call__"
                , __call___function_value
                , ( bp::arg("i") ) );
        
        }
        { //::SireFF::FFID::operator()
        
            typedef ::SireID::Specify< SireFF::FFID > ( ::SireFF::FFID::*__call___function_type)( int,int ) const;
            __call___function_type __call___function_value( &::SireFF::FFID::operator() );
            
            FFID_exposer.def( 
                "__call__"
                , __call___function_value
                , ( bp::arg("i"), bp::arg("j") ) );
        
        }
        FFID_exposer.def( bp::self * bp::self );
        FFID_exposer.def( bp::self + bp::self );
        { //::SireFF::FFID::operator[]
        
            typedef ::SireID::Specify< SireFF::FFID > ( ::SireFF::FFID::*__getitem___function_type)( int ) const;
            __getitem___function_type __getitem___function_value( &::SireFF::FFID::operator[] );
            
            FFID_exposer.def( 
                "__getitem__"
                , __getitem___function_value
                , ( bp::arg("i") ) );
        
        }
        FFID_exposer.def( bp::self | bp::self );
        { //::SireFF::FFID::typeName
        
            typedef char const * ( *typeName_function_type )(  );
            typeName_function_type typeName_function_value( &::SireFF::FFID::typeName );
            
            FFID_exposer.def( 
                "typeName"
                , typeName_function_value );
        
        }
        FFID_exposer.staticmethod( "typeName" );
        FFID_exposer.def( "__str__", &__str__< ::SireFF::FFID > );
        FFID_exposer.def( "__repr__", &__str__< ::SireFF::FFID > );
    }

}
