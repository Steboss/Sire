// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 2 License

#include "boost/python.hpp"
#include "Sum.pypp.hpp"

namespace bp = boost::python;

#include "SireStream/datastream.h"

#include "complexvalues.h"

#include "expression.h"

#include "functions.h"

#include "i.h"

#include "identities.h"

#include "integrationconstant.h"

#include "sum.h"

#include "symbols.h"

#include "values.h"

#include <QDebug>

#include <QMap>

#include "sum.h"

SireCAS::Sum __copy__(const SireCAS::Sum &other){ return SireCAS::Sum(other); }

#include "Qt/qdatastream.hpp"

#include "Helpers/str.hpp"

void register_Sum_class(){

    { //::SireCAS::Sum
        typedef bp::class_< SireCAS::Sum, bp::bases< SireCAS::ExBase > > Sum_exposer_t;
        Sum_exposer_t Sum_exposer = Sum_exposer_t( "Sum", bp::init< >() );
        bp::scope Sum_scope( Sum_exposer );
        Sum_exposer.def( bp::init< SireCAS::Expression const &, SireCAS::Expression const & >(( bp::arg("ex0"), bp::arg("ex1") )) );
        Sum_exposer.def( bp::init< SireCAS::Expressions const & >(( bp::arg("expressions") )) );
        Sum_exposer.def( bp::init< SireCAS::Sum const & >(( bp::arg("other") )) );
        { //::SireCAS::Sum::children
        
            typedef ::SireCAS::Expressions ( ::SireCAS::Sum::*children_function_type)(  ) const;
            children_function_type children_function_value( &::SireCAS::Sum::children );
            
            Sum_exposer.def( 
                "children"
                , children_function_value );
        
        }
        { //::SireCAS::Sum::conjugate
        
            typedef ::SireCAS::Expression ( ::SireCAS::Sum::*conjugate_function_type)(  ) const;
            conjugate_function_type conjugate_function_value( &::SireCAS::Sum::conjugate );
            
            Sum_exposer.def( 
                "conjugate"
                , conjugate_function_value );
        
        }
        { //::SireCAS::Sum::differentiate
        
            typedef ::SireCAS::Expression ( ::SireCAS::Sum::*differentiate_function_type)( ::SireCAS::Symbol const & ) const;
            differentiate_function_type differentiate_function_value( &::SireCAS::Sum::differentiate );
            
            Sum_exposer.def( 
                "differentiate"
                , differentiate_function_value
                , ( bp::arg("symbol") ) );
        
        }
        { //::SireCAS::Sum::evaluate
        
            typedef double ( ::SireCAS::Sum::*evaluate_function_type)( ::SireCAS::Values const & ) const;
            evaluate_function_type evaluate_function_value( &::SireCAS::Sum::evaluate );
            
            Sum_exposer.def( 
                "evaluate"
                , evaluate_function_value
                , ( bp::arg("values") ) );
        
        }
        { //::SireCAS::Sum::evaluate
        
            typedef ::SireMaths::Complex ( ::SireCAS::Sum::*evaluate_function_type)( ::SireCAS::ComplexValues const & ) const;
            evaluate_function_type evaluate_function_value( &::SireCAS::Sum::evaluate );
            
            Sum_exposer.def( 
                "evaluate"
                , evaluate_function_value
                , ( bp::arg("values") ) );
        
        }
        { //::SireCAS::Sum::expand
        
            typedef ::QList< SireCAS::Factor > ( ::SireCAS::Sum::*expand_function_type)( ::SireCAS::Symbol const & ) const;
            expand_function_type expand_function_value( &::SireCAS::Sum::expand );
            
            Sum_exposer.def( 
                "expand"
                , expand_function_value
                , ( bp::arg("symbol") ) );
        
        }
        { //::SireCAS::Sum::functions
        
            typedef ::SireCAS::Functions ( ::SireCAS::Sum::*functions_function_type)(  ) const;
            functions_function_type functions_function_value( &::SireCAS::Sum::functions );
            
            Sum_exposer.def( 
                "functions"
                , functions_function_value );
        
        }
        { //::SireCAS::Sum::hash
        
            typedef ::uint ( ::SireCAS::Sum::*hash_function_type)(  ) const;
            hash_function_type hash_function_value( &::SireCAS::Sum::hash );
            
            Sum_exposer.def( 
                "hash"
                , hash_function_value );
        
        }
        { //::SireCAS::Sum::integrate
        
            typedef ::SireCAS::Expression ( ::SireCAS::Sum::*integrate_function_type)( ::SireCAS::Symbol const & ) const;
            integrate_function_type integrate_function_value( &::SireCAS::Sum::integrate );
            
            Sum_exposer.def( 
                "integrate"
                , integrate_function_value
                , ( bp::arg("symbol") ) );
        
        }
        { //::SireCAS::Sum::isComplex
        
            typedef bool ( ::SireCAS::Sum::*isComplex_function_type)(  ) const;
            isComplex_function_type isComplex_function_value( &::SireCAS::Sum::isComplex );
            
            Sum_exposer.def( 
                "isComplex"
                , isComplex_function_value );
        
        }
        { //::SireCAS::Sum::isCompound
        
            typedef bool ( ::SireCAS::Sum::*isCompound_function_type)(  ) const;
            isCompound_function_type isCompound_function_value( &::SireCAS::Sum::isCompound );
            
            Sum_exposer.def( 
                "isCompound"
                , isCompound_function_value );
        
        }
        { //::SireCAS::Sum::isConstant
        
            typedef bool ( ::SireCAS::Sum::*isConstant_function_type)(  ) const;
            isConstant_function_type isConstant_function_value( &::SireCAS::Sum::isConstant );
            
            Sum_exposer.def( 
                "isConstant"
                , isConstant_function_value );
        
        }
        { //::SireCAS::Sum::isFunction
        
            typedef bool ( ::SireCAS::Sum::*isFunction_function_type)( ::SireCAS::Symbol const & ) const;
            isFunction_function_type isFunction_function_value( &::SireCAS::Sum::isFunction );
            
            Sum_exposer.def( 
                "isFunction"
                , isFunction_function_value
                , ( bp::arg("arg0") ) );
        
        }
        Sum_exposer.def( bp::self == bp::other< SireCAS::ExBase >() );
        { //::SireCAS::Sum::reduce
        
            typedef ::SireCAS::Expression ( ::SireCAS::Sum::*reduce_function_type)(  ) const;
            reduce_function_type reduce_function_value( &::SireCAS::Sum::reduce );
            
            Sum_exposer.def( 
                "reduce"
                , reduce_function_value );
        
        }
        { //::SireCAS::Sum::series
        
            typedef ::SireCAS::Expression ( ::SireCAS::Sum::*series_function_type)( ::SireCAS::Symbol const &,int ) const;
            series_function_type series_function_value( &::SireCAS::Sum::series );
            
            Sum_exposer.def( 
                "series"
                , series_function_value
                , ( bp::arg("symbol"), bp::arg("n") ) );
        
        }
        { //::SireCAS::Sum::simplify
        
            typedef ::SireCAS::Expression ( ::SireCAS::Sum::*simplify_function_type)( int ) const;
            simplify_function_type simplify_function_value( &::SireCAS::Sum::simplify );
            
            Sum_exposer.def( 
                "simplify"
                , simplify_function_value
                , ( bp::arg("options")=(int)(0) ) );
        
        }
        { //::SireCAS::Sum::substitute
        
            typedef ::SireCAS::Expression ( ::SireCAS::Sum::*substitute_function_type)( ::SireCAS::Identities const & ) const;
            substitute_function_type substitute_function_value( &::SireCAS::Sum::substitute );
            
            Sum_exposer.def( 
                "substitute"
                , substitute_function_value
                , ( bp::arg("identities") ) );
        
        }
        { //::SireCAS::Sum::symbols
        
            typedef ::SireCAS::Symbols ( ::SireCAS::Sum::*symbols_function_type)(  ) const;
            symbols_function_type symbols_function_value( &::SireCAS::Sum::symbols );
            
            Sum_exposer.def( 
                "symbols"
                , symbols_function_value );
        
        }
        { //::SireCAS::Sum::toOpenMMString
        
            typedef ::QString ( ::SireCAS::Sum::*toOpenMMString_function_type)(  ) const;
            toOpenMMString_function_type toOpenMMString_function_value( &::SireCAS::Sum::toOpenMMString );
            
            Sum_exposer.def( 
                "toOpenMMString"
                , toOpenMMString_function_value );
        
        }
        { //::SireCAS::Sum::toString
        
            typedef ::QString ( ::SireCAS::Sum::*toString_function_type)(  ) const;
            toString_function_type toString_function_value( &::SireCAS::Sum::toString );
            
            Sum_exposer.def( 
                "toString"
                , toString_function_value );
        
        }
        { //::SireCAS::Sum::typeName
        
            typedef char const * ( *typeName_function_type )(  );
            typeName_function_type typeName_function_value( &::SireCAS::Sum::typeName );
            
            Sum_exposer.def( 
                "typeName"
                , typeName_function_value );
        
        }
        { //::SireCAS::Sum::what
        
            typedef char const * ( ::SireCAS::Sum::*what_function_type)(  ) const;
            what_function_type what_function_value( &::SireCAS::Sum::what );
            
            Sum_exposer.def( 
                "what"
                , what_function_value );
        
        }
        Sum_exposer.staticmethod( "typeName" );
        Sum_exposer.def( "__copy__", &__copy__);
        Sum_exposer.def( "__deepcopy__", &__copy__);
        Sum_exposer.def( "clone", &__copy__);
        Sum_exposer.def( "__rlshift__", &__rlshift__QDataStream< ::SireCAS::Sum >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        Sum_exposer.def( "__rrshift__", &__rrshift__QDataStream< ::SireCAS::Sum >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        Sum_exposer.def( "__str__", &__str__< ::SireCAS::Sum > );
        Sum_exposer.def( "__repr__", &__str__< ::SireCAS::Sum > );
    }

}
