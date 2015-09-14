// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 2 License

#include "boost/python.hpp"
#include "TrigArray2D_Vector_.pypp.hpp"

namespace bp = boost::python;

#include "SireBase/array2d.hpp"

#include "SireBase/trigarray2d.hpp"

#include "SireError/errors.h"

#include "SireStream/datastream.h"

#include "SireStream/shareddatastream.h"

#include "matrix.h"

#include "nmatrix.h"

#include "nvector.h"

#include "sire_blas.h"

#include "sire_lapack.h"

#include "sire_linpack.h"

#include "trigmatrix.h"

#include "vector.h"

#include "nmatrix.h"

SireBase::TrigArray2D<SireMaths::Vector> __copy__(const SireBase::TrigArray2D<SireMaths::Vector> &other){ return SireBase::TrigArray2D<SireMaths::Vector>(other); }

#include "Qt/qdatastream.hpp"

#include "Helpers/str.hpp"

#include "Helpers/len.hpp"

void register_TrigArray2D_Vector__class(){

    { //::SireBase::TrigArray2D< SireMaths::Vector >
        typedef bp::class_< SireBase::TrigArray2D< SireMaths::Vector >, bp::bases< SireBase::TrigArray2DBase > > TrigArray2D_Vector__exposer_t;
        TrigArray2D_Vector__exposer_t TrigArray2D_Vector__exposer = TrigArray2D_Vector__exposer_t( "TrigArray2D_Vector_", bp::init< >() );
        bp::scope TrigArray2D_Vector__scope( TrigArray2D_Vector__exposer );
        TrigArray2D_Vector__exposer.def( bp::init< int >(( bp::arg("dimension") )) );
        TrigArray2D_Vector__exposer.def( bp::init< int, SireMaths::Vector const & >(( bp::arg("dimension"), bp::arg("default_value") )) );
        TrigArray2D_Vector__exposer.def( bp::init< SireBase::TrigArray2D< SireMaths::Vector > const & >(( bp::arg("other") )) );
        { //::SireBase::TrigArray2D< SireMaths::Vector >::at
        
            typedef SireBase::TrigArray2D< SireMaths::Vector > exported_class_t;
            typedef ::SireMaths::Vector const & ( ::SireBase::TrigArray2D< SireMaths::Vector >::*at_function_type)( int,int ) const;
            at_function_type at_function_value( &::SireBase::TrigArray2D< SireMaths::Vector >::at );
            
            TrigArray2D_Vector__exposer.def( 
                "at"
                , at_function_value
                , ( bp::arg("i"), bp::arg("j") )
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::SireBase::TrigArray2D< SireMaths::Vector >::get
        
            typedef SireBase::TrigArray2D< SireMaths::Vector > exported_class_t;
            typedef ::SireMaths::Vector const & ( ::SireBase::TrigArray2D< SireMaths::Vector >::*get_function_type)( int,int ) const;
            get_function_type get_function_value( &::SireBase::TrigArray2D< SireMaths::Vector >::get );
            
            TrigArray2D_Vector__exposer.def( 
                "get"
                , get_function_value
                , ( bp::arg("i"), bp::arg("j") )
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        TrigArray2D_Vector__exposer.def( bp::self != bp::self );
        { //::SireBase::TrigArray2D< SireMaths::Vector >::operator()
        
            typedef SireBase::TrigArray2D< SireMaths::Vector > exported_class_t;
            typedef ::SireMaths::Vector const & ( ::SireBase::TrigArray2D< SireMaths::Vector >::*__call___function_type)( int,int ) const;
            __call___function_type __call___function_value( &::SireBase::TrigArray2D< SireMaths::Vector >::operator() );
            
            TrigArray2D_Vector__exposer.def( 
                "__call__"
                , __call___function_value
                , ( bp::arg("i"), bp::arg("j") )
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::SireBase::TrigArray2D< SireMaths::Vector >::operator=
        
            typedef SireBase::TrigArray2D< SireMaths::Vector > exported_class_t;
            typedef ::SireBase::TrigArray2D< SireMaths::Vector > & ( ::SireBase::TrigArray2D< SireMaths::Vector >::*assign_function_type)( ::SireBase::TrigArray2D< SireMaths::Vector > const & ) ;
            assign_function_type assign_function_value( &::SireBase::TrigArray2D< SireMaths::Vector >::operator= );
            
            TrigArray2D_Vector__exposer.def( 
                "assign"
                , assign_function_value
                , ( bp::arg("other") )
                , bp::return_self< >() );
        
        }
        TrigArray2D_Vector__exposer.def( bp::self == bp::self );
        { //::SireBase::TrigArray2D< SireMaths::Vector >::redimension
        
            typedef SireBase::TrigArray2D< SireMaths::Vector > exported_class_t;
            typedef void ( ::SireBase::TrigArray2D< SireMaths::Vector >::*redimension_function_type)( int ) ;
            redimension_function_type redimension_function_value( &::SireBase::TrigArray2D< SireMaths::Vector >::redimension );
            
            TrigArray2D_Vector__exposer.def( 
                "redimension"
                , redimension_function_value
                , ( bp::arg("dimension") ) );
        
        }
        { //::SireBase::TrigArray2D< SireMaths::Vector >::set
        
            typedef SireBase::TrigArray2D< SireMaths::Vector > exported_class_t;
            typedef void ( ::SireBase::TrigArray2D< SireMaths::Vector >::*set_function_type)( int,int,::SireMaths::Vector const & ) ;
            set_function_type set_function_value( &::SireBase::TrigArray2D< SireMaths::Vector >::set );
            
            TrigArray2D_Vector__exposer.def( 
                "set"
                , set_function_value
                , ( bp::arg("i"), bp::arg("j"), bp::arg("value") ) );
        
        }
        { //::SireBase::TrigArray2D< SireMaths::Vector >::setAll
        
            typedef SireBase::TrigArray2D< SireMaths::Vector > exported_class_t;
            typedef void ( ::SireBase::TrigArray2D< SireMaths::Vector >::*setAll_function_type)( ::SireMaths::Vector const & ) ;
            setAll_function_type setAll_function_value( &::SireBase::TrigArray2D< SireMaths::Vector >::setAll );
            
            TrigArray2D_Vector__exposer.def( 
                "setAll"
                , setAll_function_value
                , ( bp::arg("value") ) );
        
        }
        { //::SireBase::TrigArray2D< SireMaths::Vector >::toString
        
            typedef SireBase::TrigArray2D< SireMaths::Vector > exported_class_t;
            typedef ::QString ( ::SireBase::TrigArray2D< SireMaths::Vector >::*toString_function_type)(  ) const;
            toString_function_type toString_function_value( &::SireBase::TrigArray2D< SireMaths::Vector >::toString );
            
            TrigArray2D_Vector__exposer.def( 
                "toString"
                , toString_function_value );
        
        }
        { //::SireBase::TrigArray2D< SireMaths::Vector >::transpose
        
            typedef SireBase::TrigArray2D< SireMaths::Vector > exported_class_t;
            typedef ::SireBase::TrigArray2D< SireMaths::Vector > ( ::SireBase::TrigArray2D< SireMaths::Vector >::*transpose_function_type)(  ) const;
            transpose_function_type transpose_function_value( &::SireBase::TrigArray2D< SireMaths::Vector >::transpose );
            
            TrigArray2D_Vector__exposer.def( 
                "transpose"
                , transpose_function_value );
        
        }
        TrigArray2D_Vector__exposer.def( "__copy__", &__copy__);
        TrigArray2D_Vector__exposer.def( "__deepcopy__", &__copy__);
        TrigArray2D_Vector__exposer.def( "clone", &__copy__);
        TrigArray2D_Vector__exposer.def( "__rlshift__", &__rlshift__QDataStream< ::SireBase::TrigArray2D<SireMaths::Vector> >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        TrigArray2D_Vector__exposer.def( "__rrshift__", &__rrshift__QDataStream< ::SireBase::TrigArray2D<SireMaths::Vector> >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        TrigArray2D_Vector__exposer.def( "__str__", &__str__< ::SireBase::TrigArray2D<SireMaths::Vector> > );
        TrigArray2D_Vector__exposer.def( "__repr__", &__str__< ::SireBase::TrigArray2D<SireMaths::Vector> > );
        TrigArray2D_Vector__exposer.def( "__len__", &__len_size< ::SireBase::TrigArray2D<SireMaths::Vector> > );
    }

}
