// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 2 License

#include "boost/python.hpp"
#include "CLJDelta.pypp.hpp"

namespace bp = boost::python;

#include "SireError/errors.h"

#include "SireMol/moleculeview.h"

#include "SireStream/datastream.h"

#include "SireStream/shareddatastream.h"

#include "cljdelta.h"

#include "cljdelta.h"

SireMM::CLJDelta __copy__(const SireMM::CLJDelta &other){ return SireMM::CLJDelta(other); }

#include "Qt/qdatastream.hpp"

#include "Helpers/str.hpp"

void register_CLJDelta_class(){

    { //::SireMM::CLJDelta
        typedef bp::class_< SireMM::CLJDelta > CLJDelta_exposer_t;
        CLJDelta_exposer_t CLJDelta_exposer = CLJDelta_exposer_t( "CLJDelta", bp::init< >() );
        bp::scope CLJDelta_scope( CLJDelta_exposer );
        CLJDelta_exposer.def( bp::init< qint32, SireMM::CLJAtoms const &, SireMM::CLJAtoms const & >(( bp::arg("idnum"), bp::arg("oldatoms"), bp::arg("newatoms") )) );
        CLJDelta_exposer.def( bp::init< SireMM::CLJDelta const & >(( bp::arg("other") )) );
        { //::SireMM::CLJDelta::ID
        
            typedef ::qint32 ( ::SireMM::CLJDelta::*ID_function_type)(  ) const;
            ID_function_type ID_function_value( &::SireMM::CLJDelta::ID );
            
            CLJDelta_exposer.def( 
                "ID"
                , ID_function_value );
        
        }
        { //::SireMM::CLJDelta::assertIdenticalTo
        
            typedef void ( ::SireMM::CLJDelta::*assertIdenticalTo_function_type)( ::SireMM::CLJDelta const & ) const;
            assertIdenticalTo_function_type assertIdenticalTo_function_value( &::SireMM::CLJDelta::assertIdenticalTo );
            
            CLJDelta_exposer.def( 
                "assertIdenticalTo"
                , assertIdenticalTo_function_value
                , ( bp::arg("other") ) );
        
        }
        { //::SireMM::CLJDelta::changedAtoms
        
            typedef ::SireMM::CLJAtoms ( ::SireMM::CLJDelta::*changedAtoms_function_type)(  ) const;
            changedAtoms_function_type changedAtoms_function_value( &::SireMM::CLJDelta::changedAtoms );
            
            CLJDelta_exposer.def( 
                "changedAtoms"
                , changedAtoms_function_value );
        
        }
        { //::SireMM::CLJDelta::isEmpty
        
            typedef bool ( ::SireMM::CLJDelta::*isEmpty_function_type)(  ) const;
            isEmpty_function_type isEmpty_function_value( &::SireMM::CLJDelta::isEmpty );
            
            CLJDelta_exposer.def( 
                "isEmpty"
                , isEmpty_function_value );
        
        }
        { //::SireMM::CLJDelta::isNull
        
            typedef bool ( ::SireMM::CLJDelta::*isNull_function_type)(  ) const;
            isNull_function_type isNull_function_value( &::SireMM::CLJDelta::isNull );
            
            CLJDelta_exposer.def( 
                "isNull"
                , isNull_function_value );
        
        }
        { //::SireMM::CLJDelta::merge
        
            typedef ::boost::tuples::tuple< SireMM::CLJAtoms, SireMM::CLJAtoms, SireMM::CLJAtoms, boost::tuples::null_type, boost::tuples::null_type, boost::tuples::null_type, boost::tuples::null_type, boost::tuples::null_type, boost::tuples::null_type, boost::tuples::null_type > ( *merge_function_type )( ::SireMM::CLJDelta const *,int );
            merge_function_type merge_function_value( &::SireMM::CLJDelta::merge );
            
            CLJDelta_exposer.def( 
                "merge"
                , merge_function_value
                , ( bp::arg("deltas"), bp::arg("count") ) );
        
        }
        { //::SireMM::CLJDelta::merge
        
            typedef ::boost::tuples::tuple< SireMM::CLJAtoms, SireMM::CLJAtoms, SireMM::CLJAtoms, boost::tuples::null_type, boost::tuples::null_type, boost::tuples::null_type, boost::tuples::null_type, boost::tuples::null_type, boost::tuples::null_type, boost::tuples::null_type > ( *merge_function_type )( ::QVector< SireMM::CLJDelta > const & );
            merge_function_type merge_function_value( &::SireMM::CLJDelta::merge );
            
            CLJDelta_exposer.def( 
                "merge"
                , merge_function_value
                , ( bp::arg("deltas") ) );
        
        }
        { //::SireMM::CLJDelta::mergeChanged
        
            typedef ::SireMM::CLJAtoms ( *mergeChanged_function_type )( ::SireMM::CLJDelta const *,int );
            mergeChanged_function_type mergeChanged_function_value( &::SireMM::CLJDelta::mergeChanged );
            
            CLJDelta_exposer.def( 
                "mergeChanged"
                , mergeChanged_function_value
                , ( bp::arg("deltas"), bp::arg("count") ) );
        
        }
        { //::SireMM::CLJDelta::mergeChanged
        
            typedef ::SireMM::CLJAtoms ( *mergeChanged_function_type )( ::QVector< SireMM::CLJDelta > const & );
            mergeChanged_function_type mergeChanged_function_value( &::SireMM::CLJDelta::mergeChanged );
            
            CLJDelta_exposer.def( 
                "mergeChanged"
                , mergeChanged_function_value
                , ( bp::arg("deltas") ) );
        
        }
        { //::SireMM::CLJDelta::mergeNew
        
            typedef ::SireMM::CLJAtoms ( *mergeNew_function_type )( ::SireMM::CLJDelta const *,int );
            mergeNew_function_type mergeNew_function_value( &::SireMM::CLJDelta::mergeNew );
            
            CLJDelta_exposer.def( 
                "mergeNew"
                , mergeNew_function_value
                , ( bp::arg("deltas"), bp::arg("count") ) );
        
        }
        { //::SireMM::CLJDelta::mergeNew
        
            typedef ::SireMM::CLJAtoms ( *mergeNew_function_type )( ::QVector< SireMM::CLJDelta > const & );
            mergeNew_function_type mergeNew_function_value( &::SireMM::CLJDelta::mergeNew );
            
            CLJDelta_exposer.def( 
                "mergeNew"
                , mergeNew_function_value
                , ( bp::arg("deltas") ) );
        
        }
        { //::SireMM::CLJDelta::mergeOld
        
            typedef ::SireMM::CLJAtoms ( *mergeOld_function_type )( ::SireMM::CLJDelta const *,int );
            mergeOld_function_type mergeOld_function_value( &::SireMM::CLJDelta::mergeOld );
            
            CLJDelta_exposer.def( 
                "mergeOld"
                , mergeOld_function_value
                , ( bp::arg("deltas"), bp::arg("count") ) );
        
        }
        { //::SireMM::CLJDelta::mergeOld
        
            typedef ::SireMM::CLJAtoms ( *mergeOld_function_type )( ::QVector< SireMM::CLJDelta > const & );
            mergeOld_function_type mergeOld_function_value( &::SireMM::CLJDelta::mergeOld );
            
            CLJDelta_exposer.def( 
                "mergeOld"
                , mergeOld_function_value
                , ( bp::arg("deltas") ) );
        
        }
        { //::SireMM::CLJDelta::newAtoms
        
            typedef ::SireMM::CLJAtoms ( ::SireMM::CLJDelta::*newAtoms_function_type)(  ) const;
            newAtoms_function_type newAtoms_function_value( &::SireMM::CLJDelta::newAtoms );
            
            CLJDelta_exposer.def( 
                "newAtoms"
                , newAtoms_function_value );
        
        }
        { //::SireMM::CLJDelta::oldAtoms
        
            typedef ::SireMM::CLJAtoms ( ::SireMM::CLJDelta::*oldAtoms_function_type)(  ) const;
            oldAtoms_function_type oldAtoms_function_value( &::SireMM::CLJDelta::oldAtoms );
            
            CLJDelta_exposer.def( 
                "oldAtoms"
                , oldAtoms_function_value );
        
        }
        CLJDelta_exposer.def( bp::self != bp::self );
        { //::SireMM::CLJDelta::operator=
        
            typedef ::SireMM::CLJDelta & ( ::SireMM::CLJDelta::*assign_function_type)( ::SireMM::CLJDelta const & ) ;
            assign_function_type assign_function_value( &::SireMM::CLJDelta::operator= );
            
            CLJDelta_exposer.def( 
                "assign"
                , assign_function_value
                , ( bp::arg("other") )
                , bp::return_self< >() );
        
        }
        CLJDelta_exposer.def( bp::self == bp::self );
        { //::SireMM::CLJDelta::toString
        
            typedef ::QString ( ::SireMM::CLJDelta::*toString_function_type)(  ) const;
            toString_function_type toString_function_value( &::SireMM::CLJDelta::toString );
            
            CLJDelta_exposer.def( 
                "toString"
                , toString_function_value );
        
        }
        { //::SireMM::CLJDelta::typeName
        
            typedef char const * ( *typeName_function_type )(  );
            typeName_function_type typeName_function_value( &::SireMM::CLJDelta::typeName );
            
            CLJDelta_exposer.def( 
                "typeName"
                , typeName_function_value );
        
        }
        { //::SireMM::CLJDelta::what
        
            typedef char const * ( ::SireMM::CLJDelta::*what_function_type)(  ) const;
            what_function_type what_function_value( &::SireMM::CLJDelta::what );
            
            CLJDelta_exposer.def( 
                "what"
                , what_function_value );
        
        }
        CLJDelta_exposer.staticmethod( "merge" );
        CLJDelta_exposer.staticmethod( "mergeChanged" );
        CLJDelta_exposer.staticmethod( "mergeNew" );
        CLJDelta_exposer.staticmethod( "mergeOld" );
        CLJDelta_exposer.staticmethod( "typeName" );
        CLJDelta_exposer.def( "__copy__", &__copy__);
        CLJDelta_exposer.def( "__deepcopy__", &__copy__);
        CLJDelta_exposer.def( "clone", &__copy__);
        CLJDelta_exposer.def( "__rlshift__", &__rlshift__QDataStream< ::SireMM::CLJDelta >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        CLJDelta_exposer.def( "__rrshift__", &__rrshift__QDataStream< ::SireMM::CLJDelta >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        CLJDelta_exposer.def( "__str__", &__str__< ::SireMM::CLJDelta > );
        CLJDelta_exposer.def( "__repr__", &__str__< ::SireMM::CLJDelta > );
    }

}
