// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 2 License

#include "boost/python.hpp"
#include "AtomFunction.pypp.hpp"

namespace bp = boost::python;

#include "SireMol/moleculedata.h"

#include "SireMol/moleculeinfodata.h"

#include "SireStream/datastream.h"

#include "SireStream/shareddatastream.h"

#include "atomfunctions.h"

#include "atomfunctions.h"

#include "Qt/qdatastream.hpp"

const char* pvt_get_name(const SireMM::AtomFunction&){ return "SireMM::AtomFunction";}

void register_AtomFunction_class(){

    { //::SireMM::AtomFunction
        typedef bp::class_< SireMM::AtomFunction, boost::noncopyable > AtomFunction_exposer_t;
        AtomFunction_exposer_t AtomFunction_exposer = AtomFunction_exposer_t( "AtomFunction", "", bp::no_init );
        bp::scope AtomFunction_scope( AtomFunction_exposer );
        { //::SireMM::AtomFunction::function
        
            typedef ::SireCAS::Expression const & ( ::SireMM::AtomFunction::*function_function_type)(  ) const;
            function_function_type function_function_value( &::SireMM::AtomFunction::function );
            
            AtomFunction_exposer.def( 
                "function"
                , function_function_value
                , bp::return_value_policy< bp::copy_const_reference >()
                , "" );
        
        }
        AtomFunction_exposer.def( "__rlshift__", &__rlshift__QDataStream< ::SireMM::AtomFunction >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        AtomFunction_exposer.def( "__rrshift__", &__rrshift__QDataStream< ::SireMM::AtomFunction >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        AtomFunction_exposer.def( "__str__", &pvt_get_name);
        AtomFunction_exposer.def( "__repr__", &pvt_get_name);
    }

}
