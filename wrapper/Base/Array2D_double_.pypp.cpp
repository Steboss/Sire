// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 2 License

#include "boost/python.hpp"
#include "Array2D_double_.pypp.hpp"

namespace bp = boost::python;

#include "SireError/errors.h"

#include "SireStream/datastream.h"

#include "array2d.h"

#include "array2d.hpp"

#include "array2d.hpp"

SireBase::Array2D<double> __copy__(const SireBase::Array2D<double> &other){ return SireBase::Array2D<double>(other); }

#include "Qt/qdatastream.hpp"

#include "Helpers/str.hpp"

void register_Array2D_double__class(){

    { //::SireBase::Array2D< double >
        typedef bp::class_< SireBase::Array2D< double >, bp::bases< SireBase::Array2DBase > > Array2D_double__exposer_t;
        Array2D_double__exposer_t Array2D_double__exposer = Array2D_double__exposer_t( "Array2D_double_", bp::init< >() );
        bp::scope Array2D_double__scope( Array2D_double__exposer );
        Array2D_double__exposer.def( bp::init< int, int >(( bp::arg("nrows"), bp::arg("ncolumns") )) );
        Array2D_double__exposer.def( bp::init< int, int, double const & >(( bp::arg("nrows"), bp::arg("ncolumns"), bp::arg("default_value") )) );
        Array2D_double__exposer.def( bp::init< SireBase::Array2D< double > const & >(( bp::arg("other") )) );
        { //::SireBase::Array2D< double >::at
        
            typedef SireBase::Array2D< double > exported_class_t;
            typedef double const & ( ::SireBase::Array2D< double >::*at_function_type)( int,int ) const;
            at_function_type at_function_value( &::SireBase::Array2D< double >::at );
            
            Array2D_double__exposer.def( 
                "at"
                , at_function_value
                , ( bp::arg("i"), bp::arg("j") )
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::SireBase::Array2D< double >::get
        
            typedef SireBase::Array2D< double > exported_class_t;
            typedef double const & ( ::SireBase::Array2D< double >::*get_function_type)( int,int ) const;
            get_function_type get_function_value( &::SireBase::Array2D< double >::get );
            
            Array2D_double__exposer.def( 
                "get"
                , get_function_value
                , ( bp::arg("i"), bp::arg("j") )
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        Array2D_double__exposer.def( bp::self != bp::self );
        { //::SireBase::Array2D< double >::operator()
        
            typedef SireBase::Array2D< double > exported_class_t;
            typedef double const & ( ::SireBase::Array2D< double >::*__call___function_type)( int,int ) const;
            __call___function_type __call___function_value( &::SireBase::Array2D< double >::operator() );
            
            Array2D_double__exposer.def( 
                "__call__"
                , __call___function_value
                , ( bp::arg("i"), bp::arg("j") )
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::SireBase::Array2D< double >::operator=
        
            typedef SireBase::Array2D< double > exported_class_t;
            typedef ::SireBase::Array2D< double > & ( ::SireBase::Array2D< double >::*assign_function_type)( ::SireBase::Array2D< double > const & ) ;
            assign_function_type assign_function_value( &::SireBase::Array2D< double >::operator= );
            
            Array2D_double__exposer.def( 
                "assign"
                , assign_function_value
                , ( bp::arg("other") )
                , bp::return_self< >() );
        
        }
        Array2D_double__exposer.def( bp::self == bp::self );
        { //::SireBase::Array2D< double >::redimension
        
            typedef SireBase::Array2D< double > exported_class_t;
            typedef void ( ::SireBase::Array2D< double >::*redimension_function_type)( int,int ) ;
            redimension_function_type redimension_function_value( &::SireBase::Array2D< double >::redimension );
            
            Array2D_double__exposer.def( 
                "redimension"
                , redimension_function_value
                , ( bp::arg("nrows"), bp::arg("ncolumns") ) );
        
        }
        { //::SireBase::Array2D< double >::set
        
            typedef SireBase::Array2D< double > exported_class_t;
            typedef void ( ::SireBase::Array2D< double >::*set_function_type)( int,int,double const & ) ;
            set_function_type set_function_value( &::SireBase::Array2D< double >::set );
            
            Array2D_double__exposer.def( 
                "set"
                , set_function_value
                , ( bp::arg("i"), bp::arg("j"), bp::arg("value") ) );
        
        }
        { //::SireBase::Array2D< double >::setAll
        
            typedef SireBase::Array2D< double > exported_class_t;
            typedef void ( ::SireBase::Array2D< double >::*setAll_function_type)( double const & ) ;
            setAll_function_type setAll_function_value( &::SireBase::Array2D< double >::setAll );
            
            Array2D_double__exposer.def( 
                "setAll"
                , setAll_function_value
                , ( bp::arg("value") ) );
        
        }
        { //::SireBase::Array2D< double >::toString
        
            typedef SireBase::Array2D< double > exported_class_t;
            typedef ::QString ( ::SireBase::Array2D< double >::*toString_function_type)(  ) const;
            toString_function_type toString_function_value( &::SireBase::Array2D< double >::toString );
            
            Array2D_double__exposer.def( 
                "toString"
                , toString_function_value );
        
        }
        { //::SireBase::Array2D< double >::transpose
        
            typedef SireBase::Array2D< double > exported_class_t;
            typedef ::SireBase::Array2D< double > ( ::SireBase::Array2D< double >::*transpose_function_type)(  ) const;
            transpose_function_type transpose_function_value( &::SireBase::Array2D< double >::transpose );
            
            Array2D_double__exposer.def( 
                "transpose"
                , transpose_function_value );
        
        }
        Array2D_double__exposer.def( "__copy__", &__copy__);
        Array2D_double__exposer.def( "__deepcopy__", &__copy__);
        Array2D_double__exposer.def( "clone", &__copy__);
        Array2D_double__exposer.def( "__rlshift__", &__rlshift__QDataStream< ::SireBase::Array2D<double> >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        Array2D_double__exposer.def( "__rrshift__", &__rrshift__QDataStream< ::SireBase::Array2D<double> >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        Array2D_double__exposer.def( "__str__", &__str__< ::SireBase::Array2D<double> > );
        Array2D_double__exposer.def( "__repr__", &__str__< ::SireBase::Array2D<double> > );
    }

}
