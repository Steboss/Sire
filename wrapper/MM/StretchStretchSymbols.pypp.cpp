// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 2 License

#include "boost/python.hpp"
#include "Helpers/clone_const_reference.hpp"
#include "StretchStretchSymbols.pypp.hpp"

namespace bp = boost::python;

#include "SireError/errors.h"

#include "SireFF/errors.h"

#include "SireMol/cgidx.h"

#include "SireMol/molecule.h"

#include "SireMol/mover.hpp"

#include "SireMol/partialmolecule.h"

#include "SireVol/coordgroup.h"

#include "internalparameters.h"

#include "sireglobal.h"

#include "tostring.h"

#include <algorithm>

#include "internalparameters.h"

SireMM::StretchStretchSymbols __copy__(const SireMM::StretchStretchSymbols &other){ return SireMM::StretchStretchSymbols(other); }

const char* pvt_get_name(const SireMM::StretchStretchSymbols&){ return "SireMM::StretchStretchSymbols";}

void register_StretchStretchSymbols_class(){

    { //::SireMM::StretchStretchSymbols
        typedef bp::class_< SireMM::StretchStretchSymbols, bp::bases< SireMM::InternalSymbolsBase > > StretchStretchSymbols_exposer_t;
        StretchStretchSymbols_exposer_t StretchStretchSymbols_exposer = StretchStretchSymbols_exposer_t( "StretchStretchSymbols", "", bp::init< >("") );
        bp::scope StretchStretchSymbols_scope( StretchStretchSymbols_exposer );
        { //::SireMM::StretchStretchSymbols::r01
        
            typedef ::SireCAS::Symbol const & ( ::SireMM::StretchStretchSymbols::*r01_function_type)(  ) const;
            r01_function_type r01_function_value( &::SireMM::StretchStretchSymbols::r01 );
            
            StretchStretchSymbols_exposer.def( 
                "r01"
                , r01_function_value
                , bp::return_value_policy<bp::clone_const_reference>()
                , "Return the symbol representing the bond length r_\n{01}" );
        
        }
        { //::SireMM::StretchStretchSymbols::r12
        
            typedef ::SireCAS::Symbol const & ( ::SireMM::StretchStretchSymbols::*r12_function_type)(  ) const;
            r12_function_type r12_function_value( &::SireMM::StretchStretchSymbols::r12 );
            
            StretchStretchSymbols_exposer.def( 
                "r12"
                , r12_function_value
                , bp::return_value_policy<bp::clone_const_reference>()
                , "Return the symbol representing the bond length r_\n{12}" );
        
        }
        { //::SireMM::StretchStretchSymbols::r21
        
            typedef ::SireCAS::Symbol const & ( ::SireMM::StretchStretchSymbols::*r21_function_type)(  ) const;
            r21_function_type r21_function_value( &::SireMM::StretchStretchSymbols::r21 );
            
            StretchStretchSymbols_exposer.def( 
                "r21"
                , r21_function_value
                , bp::return_value_policy<bp::clone_const_reference>()
                , "Return the symbol representing the bond length r_\n{21}" );
        
        }
        StretchStretchSymbols_exposer.def( "__copy__", &__copy__);
        StretchStretchSymbols_exposer.def( "__deepcopy__", &__copy__);
        StretchStretchSymbols_exposer.def( "clone", &__copy__);
        StretchStretchSymbols_exposer.def( "__str__", &pvt_get_name);
        StretchStretchSymbols_exposer.def( "__repr__", &pvt_get_name);
    }

}
