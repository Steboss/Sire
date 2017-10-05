// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 2 License

#include "boost/python.hpp"
#include "AngleParameterName.pypp.hpp"

namespace bp = boost::python;

#include "SireBase/errors.h"

#include "SireBase/property.h"

#include "SireBase/stringproperty.h"

#include "SireError/errors.h"

#include "SireFF/detail/atomiccoords3d.h"

#include "SireFF/errors.h"

#include "SireMaths/line.h"

#include "SireMaths/torsion.h"

#include "SireMaths/triangle.h"

#include "SireMol/mover.hpp"

#include "SireStream/datastream.h"

#include "SireStream/shareddatastream.h"

#include "SireUnits/dimensions.h"

#include "SireUnits/units.h"

#include "internalff.h"

#include "tostring.h"

#include <QDebug>

#include <cstdio>

#include "internalff.h"

SireMM::AngleParameterName __copy__(const SireMM::AngleParameterName &other){ return SireMM::AngleParameterName(other); }

const char* pvt_get_name(const SireMM::AngleParameterName&){ return "SireMM::AngleParameterName";}

void register_AngleParameterName_class(){

    { //::SireMM::AngleParameterName
        typedef bp::class_< SireMM::AngleParameterName > AngleParameterName_exposer_t;
        AngleParameterName_exposer_t AngleParameterName_exposer = AngleParameterName_exposer_t( "AngleParameterName", "", bp::init< >("") );
        bp::scope AngleParameterName_scope( AngleParameterName_exposer );
        { //::SireMM::AngleParameterName::angle
        
            typedef ::SireBase::PropertyName const & ( ::SireMM::AngleParameterName::*angle_function_type)(  ) const;
            angle_function_type angle_function_value( &::SireMM::AngleParameterName::angle );
            
            AngleParameterName_exposer.def( 
                "angle"
                , angle_function_value
                , bp::return_value_policy< bp::copy_const_reference >()
                , "" );
        
        }
        AngleParameterName_exposer.def( "__copy__", &__copy__);
        AngleParameterName_exposer.def( "__deepcopy__", &__copy__);
        AngleParameterName_exposer.def( "clone", &__copy__);
        AngleParameterName_exposer.def( "__str__", &pvt_get_name);
        AngleParameterName_exposer.def( "__repr__", &pvt_get_name);
    }

}
