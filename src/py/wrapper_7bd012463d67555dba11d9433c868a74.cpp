#include "_ieigen.h"


namespace autowig
{
}


void wrapper_7bd012463d67555dba11d9433c868a74()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, 2, 2, 0, 2, 2 >, 0 >::*method_pointer_6dba7b66c7315d12ad4f075b73b5c915)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 >, 0 >::rowIndexByOuterInner;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, 2, 2, 0, 2, 2 >, 0 >::*method_pointer_ccfcaa7aaeb3553ba57ef56451ed3f3b)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 >, 0 >::colIndexByOuterInner;
    struct ::std::complex< float >  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, 2, 2, 0, 2, 2 >, 0 >::*method_pointer_050674c6e9ff57a18147f715ff122506)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 >, 0 >::coeff;
    struct ::std::complex< float >  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, 2, 2, 0, 2, 2 >, 0 >::*method_pointer_6f023019a47e5d59986f684042be15cd)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 >, 0 >::coeffByOuterInner;
    struct ::std::complex< float >  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, 2, 2, 0, 2, 2 >, 0 >::*method_pointer_d2b1d38170025bb895577ad50072232a)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 >, 0 >::operator();
    struct ::std::complex< float >  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, 2, 2, 0, 2, 2 >, 0 >::*method_pointer_88bc22346ae55f10bf5fe929b1eceb0a)(long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 >, 0 >::coeff;
    struct ::std::complex< float >  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, 2, 2, 0, 2, 2 >, 0 >::*method_pointer_649a0c73e234540fa1775044dd882d60)(long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 >, 0 >::operator[];
    struct ::std::complex< float >  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, 2, 2, 0, 2, 2 >, 0 >::*method_pointer_eabda2a78e50595e9d2231b025a922d8)(long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 >, 0 >::operator();
    struct ::std::complex< float >  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, 2, 2, 0, 2, 2 >, 0 >::*method_pointer_f2c876686b675e42bb3f3cc4283aa62e)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 >, 0 >::x;
    struct ::std::complex< float >  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, 2, 2, 0, 2, 2 >, 0 >::*method_pointer_2feb821fbc1657e6b9914ea04a8bb01f)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 >, 0 >::y;
    struct ::std::complex< float >  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, 2, 2, 0, 2, 2 >, 0 >::*method_pointer_38792521afd85f53aa58eca7cc44661e)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 >, 0 >::z;
    struct ::std::complex< float >  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, 2, 2, 0, 2, 2 >, 0 >::*method_pointer_63d4dfd691c8557c8af3f3be3fa9164e)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 >, 0 >::w;
    boost::python::class_< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 >, 0 >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 >, 0 > >, boost::python::bases< struct ::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > > > > class_7bd012463d67555dba11d9433c868a74("_DenseCoeffsBase_7bd012463d67555dba11d9433c868a74", "", boost::python::no_init);
    class_7bd012463d67555dba11d9433c868a74.def("row_index_by_outer_inner", method_pointer_6dba7b66c7315d12ad4f075b73b5c915, "");
    class_7bd012463d67555dba11d9433c868a74.def("col_index_by_outer_inner", method_pointer_ccfcaa7aaeb3553ba57ef56451ed3f3b, "");
    class_7bd012463d67555dba11d9433c868a74.def("coeff", method_pointer_050674c6e9ff57a18147f715ff122506, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_7bd012463d67555dba11d9433c868a74.def("coeff_by_outer_inner", method_pointer_6f023019a47e5d59986f684042be15cd, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_7bd012463d67555dba11d9433c868a74.def("__call__", method_pointer_d2b1d38170025bb895577ad50072232a, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_7bd012463d67555dba11d9433c868a74.def("coeff", method_pointer_88bc22346ae55f10bf5fe929b1eceb0a, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_7bd012463d67555dba11d9433c868a74.def("__getitem__", method_pointer_649a0c73e234540fa1775044dd882d60, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_7bd012463d67555dba11d9433c868a74.def("__call__", method_pointer_eabda2a78e50595e9d2231b025a922d8, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_7bd012463d67555dba11d9433c868a74.def("x", method_pointer_f2c876686b675e42bb3f3cc4283aa62e, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_7bd012463d67555dba11d9433c868a74.def("y", method_pointer_2feb821fbc1657e6b9914ea04a8bb01f, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_7bd012463d67555dba11d9433c868a74.def("z", method_pointer_38792521afd85f53aa58eca7cc44661e, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_7bd012463d67555dba11d9433c868a74.def("w", method_pointer_63d4dfd691c8557c8af3f3be3fa9164e, boost::python::return_value_policy< boost::python::return_by_value >(), "");

    if(std::is_class< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 >, 0 > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 >, 0 > >, autowig::HeldType< struct ::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > > > >();
    }

}