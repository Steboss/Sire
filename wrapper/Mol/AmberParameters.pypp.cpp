// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 2 License

#include "boost/python.hpp"
#include "AmberParameters.pypp.hpp"

namespace bp = boost::python;

#include "SireMol/angleid.h"

#include "SireMol/atomidx.h"

#include "SireMol/bondid.h"

#include "SireMol/dihedralid.h"

#include "SireMol/improperid.h"

#include "SireMol/molecule.h"

#include "SireMol/partialmolecule.h"

#include "SireStream/datastream.h"

#include "SireStream/shareddatastream.h"

#include "amberparameters.h"

#include "amberparameters.h"

SireMol::AmberParameters __copy__(const SireMol::AmberParameters &other){ return SireMol::AmberParameters(other); }

#include "Qt/qdatastream.hpp"

#include "Helpers/str.hpp"

void register_AmberParameters_class(){

    { //::SireMol::AmberParameters
        typedef bp::class_< SireMol::AmberParameters, bp::bases< SireMol::MoleculeProperty, SireMol::MolViewProperty, SireBase::Property > > AmberParameters_exposer_t;
        AmberParameters_exposer_t AmberParameters_exposer = AmberParameters_exposer_t( "AmberParameters", bp::init< >() );
        bp::scope AmberParameters_scope( AmberParameters_exposer );
        AmberParameters_exposer.def( bp::init< SireMol::MoleculeData const & >(( bp::arg("molecule") )) );
        AmberParameters_exposer.def( bp::init< SireMol::AmberParameters const & >(( bp::arg("other") )) );
        { //::SireMol::AmberParameters::add
        
            typedef void ( ::SireMol::AmberParameters::*add_function_type)( ::SireMol::BondID const &,double const &,double const & ) ;
            add_function_type add_function_value( &::SireMol::AmberParameters::add );
            
            AmberParameters_exposer.def( 
                "add"
                , add_function_value
                , ( bp::arg("bond"), bp::arg("k"), bp::arg("ro") ) );
        
        }
        { //::SireMol::AmberParameters::add
        
            typedef void ( ::SireMol::AmberParameters::*add_function_type)( ::SireMol::AngleID const &,double const &,double const & ) ;
            add_function_type add_function_value( &::SireMol::AmberParameters::add );
            
            AmberParameters_exposer.def( 
                "add"
                , add_function_value
                , ( bp::arg("angle"), bp::arg("k"), bp::arg("theta0") ) );
        
        }
        { //::SireMol::AmberParameters::add
        
            typedef void ( ::SireMol::AmberParameters::*add_function_type)( ::SireMol::DihedralID const &,double const &,double const &,double const & ) ;
            add_function_type add_function_value( &::SireMol::AmberParameters::add );
            
            AmberParameters_exposer.def( 
                "add"
                , add_function_value
                , ( bp::arg("dihedral"), bp::arg("v"), bp::arg("periodicity"), bp::arg("phase") ) );
        
        }
        { //::SireMol::AmberParameters::add
        
            typedef void ( ::SireMol::AmberParameters::*add_function_type)( ::SireMol::ImproperID const &,double const &,double const &,double const & ) ;
            add_function_type add_function_value( &::SireMol::AmberParameters::add );
            
            AmberParameters_exposer.def( 
                "add"
                , add_function_value
                , ( bp::arg("improper"), bp::arg("v"), bp::arg("periodicity"), bp::arg("phase") ) );
        
        }
        { //::SireMol::AmberParameters::add14Pair
        
            typedef void ( ::SireMol::AmberParameters::*add14Pair_function_type)( ::SireMol::BondID const &,double const &,double const & ) ;
            add14Pair_function_type add14Pair_function_value( &::SireMol::AmberParameters::add14Pair );
            
            AmberParameters_exposer.def( 
                "add14Pair"
                , add14Pair_function_value
                , ( bp::arg("pair"), bp::arg("cscl"), bp::arg("ljscl") ) );
        
        }
        { //::SireMol::AmberParameters::get14PairParams
        
            typedef ::QList< double > ( ::SireMol::AmberParameters::*get14PairParams_function_type)( ::SireMol::BondID const & ) ;
            get14PairParams_function_type get14PairParams_function_value( &::SireMol::AmberParameters::get14PairParams );
            
            AmberParameters_exposer.def( 
                "get14PairParams"
                , get14PairParams_function_value
                , ( bp::arg("pair") ) );
        
        }
        { //::SireMol::AmberParameters::getAll14Pairs
        
            typedef ::QList< SireMol::BondID > ( ::SireMol::AmberParameters::*getAll14Pairs_function_type)(  ) ;
            getAll14Pairs_function_type getAll14Pairs_function_value( &::SireMol::AmberParameters::getAll14Pairs );
            
            AmberParameters_exposer.def( 
                "getAll14Pairs"
                , getAll14Pairs_function_value );
        
        }
        { //::SireMol::AmberParameters::getAllAngles
        
            typedef ::QList< SireMol::AngleID > ( ::SireMol::AmberParameters::*getAllAngles_function_type)(  ) ;
            getAllAngles_function_type getAllAngles_function_value( &::SireMol::AmberParameters::getAllAngles );
            
            AmberParameters_exposer.def( 
                "getAllAngles"
                , getAllAngles_function_value );
        
        }
        { //::SireMol::AmberParameters::getAllBonds
        
            typedef ::QList< SireMol::BondID > ( ::SireMol::AmberParameters::*getAllBonds_function_type)(  ) ;
            getAllBonds_function_type getAllBonds_function_value( &::SireMol::AmberParameters::getAllBonds );
            
            AmberParameters_exposer.def( 
                "getAllBonds"
                , getAllBonds_function_value );
        
        }
        { //::SireMol::AmberParameters::getAllDihedrals
        
            typedef ::QList< SireMol::DihedralID > ( ::SireMol::AmberParameters::*getAllDihedrals_function_type)(  ) ;
            getAllDihedrals_function_type getAllDihedrals_function_value( &::SireMol::AmberParameters::getAllDihedrals );
            
            AmberParameters_exposer.def( 
                "getAllDihedrals"
                , getAllDihedrals_function_value );
        
        }
        { //::SireMol::AmberParameters::getAllImpropers
        
            typedef ::QList< SireMol::ImproperID > ( ::SireMol::AmberParameters::*getAllImpropers_function_type)(  ) ;
            getAllImpropers_function_type getAllImpropers_function_value( &::SireMol::AmberParameters::getAllImpropers );
            
            AmberParameters_exposer.def( 
                "getAllImpropers"
                , getAllImpropers_function_value );
        
        }
        { //::SireMol::AmberParameters::getParams
        
            typedef ::QList< double > ( ::SireMol::AmberParameters::*getParams_function_type)( ::SireMol::BondID const & ) ;
            getParams_function_type getParams_function_value( &::SireMol::AmberParameters::getParams );
            
            AmberParameters_exposer.def( 
                "getParams"
                , getParams_function_value
                , ( bp::arg("bond") ) );
        
        }
        { //::SireMol::AmberParameters::getParams
        
            typedef ::QList< double > ( ::SireMol::AmberParameters::*getParams_function_type)( ::SireMol::AngleID const & ) ;
            getParams_function_type getParams_function_value( &::SireMol::AmberParameters::getParams );
            
            AmberParameters_exposer.def( 
                "getParams"
                , getParams_function_value
                , ( bp::arg("angle") ) );
        
        }
        { //::SireMol::AmberParameters::getParams
        
            typedef ::QList< double > ( ::SireMol::AmberParameters::*getParams_function_type)( ::SireMol::DihedralID const & ) ;
            getParams_function_type getParams_function_value( &::SireMol::AmberParameters::getParams );
            
            AmberParameters_exposer.def( 
                "getParams"
                , getParams_function_value
                , ( bp::arg("dihedral") ) );
        
        }
        { //::SireMol::AmberParameters::getParams
        
            typedef ::QList< double > ( ::SireMol::AmberParameters::*getParams_function_type)( ::SireMol::ImproperID const & ) ;
            getParams_function_type getParams_function_value( &::SireMol::AmberParameters::getParams );
            
            AmberParameters_exposer.def( 
                "getParams"
                , getParams_function_value
                , ( bp::arg("improper") ) );
        
        }
        { //::SireMol::AmberParameters::info
        
            typedef ::SireMol::MoleculeInfoData const & ( ::SireMol::AmberParameters::*info_function_type)(  ) const;
            info_function_type info_function_value( &::SireMol::AmberParameters::info );
            
            AmberParameters_exposer.def( 
                "info"
                , info_function_value
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::SireMol::AmberParameters::isCompatibleWith
        
            typedef bool ( ::SireMol::AmberParameters::*isCompatibleWith_function_type)( ::SireMol::MoleculeInfoData const & ) const;
            isCompatibleWith_function_type isCompatibleWith_function_value( &::SireMol::AmberParameters::isCompatibleWith );
            
            AmberParameters_exposer.def( 
                "isCompatibleWith"
                , isCompatibleWith_function_value
                , ( bp::arg("molinfo") ) );
        
        }
        AmberParameters_exposer.def( bp::self != bp::self );
        { //::SireMol::AmberParameters::operator=
        
            typedef ::SireMol::AmberParameters & ( ::SireMol::AmberParameters::*assign_function_type)( ::SireMol::AmberParameters const & ) ;
            assign_function_type assign_function_value( &::SireMol::AmberParameters::operator= );
            
            AmberParameters_exposer.def( 
                "assign"
                , assign_function_value
                , ( bp::arg("other") )
                , bp::return_self< >() );
        
        }
        AmberParameters_exposer.def( bp::self == bp::self );
        { //::SireMol::AmberParameters::remove
        
            typedef void ( ::SireMol::AmberParameters::*remove_function_type)( ::SireMol::BondID const & ) ;
            remove_function_type remove_function_value( &::SireMol::AmberParameters::remove );
            
            AmberParameters_exposer.def( 
                "remove"
                , remove_function_value
                , ( bp::arg("bond") ) );
        
        }
        { //::SireMol::AmberParameters::remove
        
            typedef void ( ::SireMol::AmberParameters::*remove_function_type)( ::SireMol::AngleID const & ) ;
            remove_function_type remove_function_value( &::SireMol::AmberParameters::remove );
            
            AmberParameters_exposer.def( 
                "remove"
                , remove_function_value
                , ( bp::arg("angle") ) );
        
        }
        { //::SireMol::AmberParameters::remove
        
            typedef void ( ::SireMol::AmberParameters::*remove_function_type)( ::SireMol::DihedralID const & ) ;
            remove_function_type remove_function_value( &::SireMol::AmberParameters::remove );
            
            AmberParameters_exposer.def( 
                "remove"
                , remove_function_value
                , ( bp::arg("dihedral") ) );
        
        }
        { //::SireMol::AmberParameters::remove
        
            typedef void ( ::SireMol::AmberParameters::*remove_function_type)( ::SireMol::ImproperID const & ) ;
            remove_function_type remove_function_value( &::SireMol::AmberParameters::remove );
            
            AmberParameters_exposer.def( 
                "remove"
                , remove_function_value
                , ( bp::arg("improper") ) );
        
        }
        { //::SireMol::AmberParameters::remove14Pair
        
            typedef void ( ::SireMol::AmberParameters::*remove14Pair_function_type)( ::SireMol::BondID const & ) ;
            remove14Pair_function_type remove14Pair_function_value( &::SireMol::AmberParameters::remove14Pair );
            
            AmberParameters_exposer.def( 
                "remove14Pair"
                , remove14Pair_function_value
                , ( bp::arg("pair") ) );
        
        }
        { //::SireMol::AmberParameters::typeName
        
            typedef char const * ( *typeName_function_type )(  );
            typeName_function_type typeName_function_value( &::SireMol::AmberParameters::typeName );
            
            AmberParameters_exposer.def( 
                "typeName"
                , typeName_function_value );
        
        }
        AmberParameters_exposer.staticmethod( "typeName" );
        AmberParameters_exposer.def( "__copy__", &__copy__);
        AmberParameters_exposer.def( "__deepcopy__", &__copy__);
        AmberParameters_exposer.def( "clone", &__copy__);
        AmberParameters_exposer.def( "__rlshift__", &__rlshift__QDataStream< ::SireMol::AmberParameters >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        AmberParameters_exposer.def( "__rrshift__", &__rrshift__QDataStream< ::SireMol::AmberParameters >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        AmberParameters_exposer.def( "__str__", &__str__< ::SireMol::AmberParameters > );
        AmberParameters_exposer.def( "__repr__", &__str__< ::SireMol::AmberParameters > );
    }

}
