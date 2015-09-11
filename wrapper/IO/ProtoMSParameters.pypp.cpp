// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 2 License

#include "boost/python.hpp"
#include "ProtoMSParameters.pypp.hpp"

namespace bp = boost::python;

#include "SireBase/findexe.h"

#include "SireBase/process.h"

#include "SireBase/tempdir.h"

#include "SireCAS/trigfuncs.h"

#include "SireError/errors.h"

#include "SireMM/atomljs.h"

#include "SireMM/cljnbpairs.h"

#include "SireMM/internalff.h"

#include "SireMM/internalperturbation.h"

#include "SireMM/ljparameter.h"

#include "SireMM/ljperturbation.h"

#include "SireMol/atomcharges.h"

#include "SireMol/atomeditor.h"

#include "SireMol/atomname.h"

#include "SireMol/cgeditor.h"

#include "SireMol/chargeperturbation.h"

#include "SireMol/connectivity.h"

#include "SireMol/errors.h"

#include "SireMol/geometryperturbation.h"

#include "SireMol/groupatomids.h"

#include "SireMol/molecule.h"

#include "SireMol/molecules.h"

#include "SireMol/moleditor.h"

#include "SireMol/mover.hpp"

#include "SireMol/reseditor.h"

#include "SireMol/resname.h"

#include "SireMol/resnum.h"

#include "SireMol/selector.hpp"

#include "SireMove/errors.h"

#include "SireMove/zmatrix.h"

#include "SireStream/datastream.h"

#include "SireStream/shareddatastream.h"

#include "SireUnits/units.h"

#include "pdb.h"

#include "protoms.h"

#include <QByteArray>

#include <QDir>

#include <QFile>

#include <QFileInfo>

#include <QTextStream>

#include "protoms.h"

SireIO::ProtoMSParameters __copy__(const SireIO::ProtoMSParameters &other){ return SireIO::ProtoMSParameters(other); }

const char* pvt_get_name(const SireIO::ProtoMSParameters&){ return "SireIO::ProtoMSParameters";}

void register_ProtoMSParameters_class(){

    { //::SireIO::ProtoMSParameters
        typedef bp::class_< SireIO::ProtoMSParameters > ProtoMSParameters_exposer_t;
        ProtoMSParameters_exposer_t ProtoMSParameters_exposer = ProtoMSParameters_exposer_t( "ProtoMSParameters", bp::init< >() );
        bp::scope ProtoMSParameters_scope( ProtoMSParameters_exposer );
        { //::SireIO::ProtoMSParameters::angle
        
            typedef ::SireBase::PropertyName const & ( ::SireIO::ProtoMSParameters::*angle_function_type)(  ) const;
            angle_function_type angle_function_value( &::SireIO::ProtoMSParameters::angle );
            
            ProtoMSParameters_exposer.def( 
                "angle"
                , angle_function_value
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::SireIO::ProtoMSParameters::bond
        
            typedef ::SireBase::PropertyName const & ( ::SireIO::ProtoMSParameters::*bond_function_type)(  ) const;
            bond_function_type bond_function_value( &::SireIO::ProtoMSParameters::bond );
            
            ProtoMSParameters_exposer.def( 
                "bond"
                , bond_function_value
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::SireIO::ProtoMSParameters::charge
        
            typedef ::SireBase::PropertyName const & ( ::SireIO::ProtoMSParameters::*charge_function_type)(  ) const;
            charge_function_type charge_function_value( &::SireIO::ProtoMSParameters::charge );
            
            ProtoMSParameters_exposer.def( 
                "charge"
                , charge_function_value
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::SireIO::ProtoMSParameters::connectivity
        
            typedef ::SireBase::PropertyName const & ( ::SireIO::ProtoMSParameters::*connectivity_function_type)(  ) const;
            connectivity_function_type connectivity_function_value( &::SireIO::ProtoMSParameters::connectivity );
            
            ProtoMSParameters_exposer.def( 
                "connectivity"
                , connectivity_function_value
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::SireIO::ProtoMSParameters::coordinates
        
            typedef ::SireBase::PropertyName const & ( ::SireIO::ProtoMSParameters::*coordinates_function_type)(  ) const;
            coordinates_function_type coordinates_function_value( &::SireIO::ProtoMSParameters::coordinates );
            
            ProtoMSParameters_exposer.def( 
                "coordinates"
                , coordinates_function_value
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::SireIO::ProtoMSParameters::dihedral
        
            typedef ::SireBase::PropertyName const & ( ::SireIO::ProtoMSParameters::*dihedral_function_type)(  ) const;
            dihedral_function_type dihedral_function_value( &::SireIO::ProtoMSParameters::dihedral );
            
            ProtoMSParameters_exposer.def( 
                "dihedral"
                , dihedral_function_value
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::SireIO::ProtoMSParameters::finalCharge
        
            typedef ::SireBase::PropertyName const & ( ::SireIO::ProtoMSParameters::*finalCharge_function_type)(  ) const;
            finalCharge_function_type finalCharge_function_value( &::SireIO::ProtoMSParameters::finalCharge );
            
            ProtoMSParameters_exposer.def( 
                "finalCharge"
                , finalCharge_function_value
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::SireIO::ProtoMSParameters::finalLJ
        
            typedef ::SireBase::PropertyName const & ( ::SireIO::ProtoMSParameters::*finalLJ_function_type)(  ) const;
            finalLJ_function_type finalLJ_function_value( &::SireIO::ProtoMSParameters::finalLJ );
            
            ProtoMSParameters_exposer.def( 
                "finalLJ"
                , finalLJ_function_value
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::SireIO::ProtoMSParameters::initialCharge
        
            typedef ::SireBase::PropertyName const & ( ::SireIO::ProtoMSParameters::*initialCharge_function_type)(  ) const;
            initialCharge_function_type initialCharge_function_value( &::SireIO::ProtoMSParameters::initialCharge );
            
            ProtoMSParameters_exposer.def( 
                "initialCharge"
                , initialCharge_function_value
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::SireIO::ProtoMSParameters::initialLJ
        
            typedef ::SireBase::PropertyName const & ( ::SireIO::ProtoMSParameters::*initialLJ_function_type)(  ) const;
            initialLJ_function_type initialLJ_function_value( &::SireIO::ProtoMSParameters::initialLJ );
            
            ProtoMSParameters_exposer.def( 
                "initialLJ"
                , initialLJ_function_value
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::SireIO::ProtoMSParameters::lj
        
            typedef ::SireBase::PropertyName const & ( ::SireIO::ProtoMSParameters::*lj_function_type)(  ) const;
            lj_function_type lj_function_value( &::SireIO::ProtoMSParameters::lj );
            
            ProtoMSParameters_exposer.def( 
                "lj"
                , lj_function_value
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::SireIO::ProtoMSParameters::nonBonded
        
            typedef ::SireBase::PropertyName const & ( ::SireIO::ProtoMSParameters::*nonBonded_function_type)(  ) const;
            nonBonded_function_type nonBonded_function_value( &::SireIO::ProtoMSParameters::nonBonded );
            
            ProtoMSParameters_exposer.def( 
                "nonBonded"
                , nonBonded_function_value
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::SireIO::ProtoMSParameters::perturbations
        
            typedef ::SireBase::PropertyName const & ( ::SireIO::ProtoMSParameters::*perturbations_function_type)(  ) const;
            perturbations_function_type perturbations_function_value( &::SireIO::ProtoMSParameters::perturbations );
            
            ProtoMSParameters_exposer.def( 
                "perturbations"
                , perturbations_function_value
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::SireIO::ProtoMSParameters::ureyBradley
        
            typedef ::SireBase::PropertyName const & ( ::SireIO::ProtoMSParameters::*ureyBradley_function_type)(  ) const;
            ureyBradley_function_type ureyBradley_function_value( &::SireIO::ProtoMSParameters::ureyBradley );
            
            ProtoMSParameters_exposer.def( 
                "ureyBradley"
                , ureyBradley_function_value
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::SireIO::ProtoMSParameters::zmatrix
        
            typedef ::SireBase::PropertyName const & ( ::SireIO::ProtoMSParameters::*zmatrix_function_type)(  ) const;
            zmatrix_function_type zmatrix_function_value( &::SireIO::ProtoMSParameters::zmatrix );
            
            ProtoMSParameters_exposer.def( 
                "zmatrix"
                , zmatrix_function_value
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        ProtoMSParameters_exposer.def( "__copy__", &__copy__);
        ProtoMSParameters_exposer.def( "__deepcopy__", &__copy__);
        ProtoMSParameters_exposer.def( "clone", &__copy__);
        ProtoMSParameters_exposer.def( "__str__", &pvt_get_name);
        ProtoMSParameters_exposer.def( "__repr__", &pvt_get_name);
    }

}
