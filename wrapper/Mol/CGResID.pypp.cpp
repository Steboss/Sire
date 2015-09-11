// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 2 License

#include "boost/python.hpp"
#include "CGResID.pypp.hpp"

namespace bp = boost::python;

#include "SireStream/datastream.h"

#include "groupgroupids.h"

#include "groupgroupids.h"

SireMol::GroupGroupID<SireMol::CGID, SireMol::ResID> __copy__(const SireMol::GroupGroupID<SireMol::CGID, SireMol::ResID> &other){ return SireMol::GroupGroupID<SireMol::CGID, SireMol::ResID>(other); }

#include "Qt/qdatastream.hpp"

#include "Helpers/str.hpp"

void register_CGResID_class(){

    { //::SireMol::GroupGroupID< SireMol::CGID, SireMol::ResID >
        typedef bp::class_< SireMol::GroupGroupID< SireMol::CGID, SireMol::ResID >, bp::bases< SireMol::GroupAtomIDBase, SireMol::AtomID, SireID::ID > > CGResID_exposer_t;
        CGResID_exposer_t CGResID_exposer = CGResID_exposer_t( "CGResID", bp::init< >() );
        bp::scope CGResID_scope( CGResID_exposer );
        CGResID_exposer.def( bp::init< SireMol::CGID const &, SireMol::ResID const & >(( bp::arg("group0"), bp::arg("group1") )) );
        CGResID_exposer.def( bp::init< SireMol::GroupGroupID< SireMol::CGID, SireMol::ResID > const & >(( bp::arg("other") )) );
        { //::SireMol::GroupGroupID< SireMol::CGID, SireMol::ResID >::hash
        
            typedef SireMol::GroupGroupID< SireMol::CGID, SireMol::ResID > exported_class_t;
            typedef ::uint ( ::SireMol::GroupGroupID< SireMol::CGID, SireMol::ResID >::*hash_function_type)(  ) const;
            hash_function_type hash_function_value( &::SireMol::GroupGroupID< SireMol::CGID, SireMol::ResID >::hash );
            
            CGResID_exposer.def( 
                "hash"
                , hash_function_value );
        
        }
        { //::SireMol::GroupGroupID< SireMol::CGID, SireMol::ResID >::isNull
        
            typedef SireMol::GroupGroupID< SireMol::CGID, SireMol::ResID > exported_class_t;
            typedef bool ( ::SireMol::GroupGroupID< SireMol::CGID, SireMol::ResID >::*isNull_function_type)(  ) const;
            isNull_function_type isNull_function_value( &::SireMol::GroupGroupID< SireMol::CGID, SireMol::ResID >::isNull );
            
            CGResID_exposer.def( 
                "isNull"
                , isNull_function_value );
        
        }
        { //::SireMol::GroupGroupID< SireMol::CGID, SireMol::ResID >::map
        
            typedef SireMol::GroupGroupID< SireMol::CGID, SireMol::ResID > exported_class_t;
            typedef ::QList< SireMol::AtomIdx > ( ::SireMol::GroupGroupID< SireMol::CGID, SireMol::ResID >::*map_function_type)( ::SireMol::MolInfo const & ) const;
            map_function_type map_function_value( &::SireMol::GroupGroupID< SireMol::CGID, SireMol::ResID >::map );
            
            CGResID_exposer.def( 
                "map"
                , map_function_value
                , ( bp::arg("molinfo") ) );
        
        }
        CGResID_exposer.def( bp::self != bp::self );
        CGResID_exposer.def( bp::self == bp::other< SireID::ID >() );
        CGResID_exposer.def( bp::self == bp::self );
        { //::SireMol::GroupGroupID< SireMol::CGID, SireMol::ResID >::toString
        
            typedef SireMol::GroupGroupID< SireMol::CGID, SireMol::ResID > exported_class_t;
            typedef ::QString ( ::SireMol::GroupGroupID< SireMol::CGID, SireMol::ResID >::*toString_function_type)(  ) const;
            toString_function_type toString_function_value( &::SireMol::GroupGroupID< SireMol::CGID, SireMol::ResID >::toString );
            
            CGResID_exposer.def( 
                "toString"
                , toString_function_value );
        
        }
        { //::SireMol::GroupGroupID< SireMol::CGID, SireMol::ResID >::typeName
        
            typedef SireMol::GroupGroupID< SireMol::CGID, SireMol::ResID > exported_class_t;
            typedef char const * ( *typeName_function_type )(  );
            typeName_function_type typeName_function_value( &::SireMol::GroupGroupID< SireMol::CGID, SireMol::ResID >::typeName );
            
            CGResID_exposer.def( 
                "typeName"
                , typeName_function_value );
        
        }
        { //::SireMol::GroupGroupID< SireMol::CGID, SireMol::ResID >::what
        
            typedef SireMol::GroupGroupID< SireMol::CGID, SireMol::ResID > exported_class_t;
            typedef char const * ( ::SireMol::GroupGroupID< SireMol::CGID, SireMol::ResID >::*what_function_type)(  ) const;
            what_function_type what_function_value( &::SireMol::GroupGroupID< SireMol::CGID, SireMol::ResID >::what );
            
            CGResID_exposer.def( 
                "what"
                , what_function_value );
        
        }
        CGResID_exposer.staticmethod( "typeName" );
        CGResID_exposer.def( "__copy__", &__copy__);
        CGResID_exposer.def( "__deepcopy__", &__copy__);
        CGResID_exposer.def( "clone", &__copy__);
        CGResID_exposer.def( "__rlshift__", &__rlshift__QDataStream< ::SireMol::GroupGroupID<SireMol::CGID, SireMol::ResID> >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        CGResID_exposer.def( "__rrshift__", &__rrshift__QDataStream< ::SireMol::GroupGroupID<SireMol::CGID, SireMol::ResID> >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        CGResID_exposer.def( "__str__", &__str__< ::SireMol::GroupGroupID<SireMol::CGID, SireMol::ResID> > );
        CGResID_exposer.def( "__repr__", &__str__< ::SireMol::GroupGroupID<SireMol::CGID, SireMol::ResID> > );
    }

}
