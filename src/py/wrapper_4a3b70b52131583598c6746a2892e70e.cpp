#include "_ieigen.h"


namespace autowig
{
}


void wrapper_4a3b70b52131583598c6746a2892e70e()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, 1, 2, 1, 1, 2 >, 0 >::*method_pointer_5cb40312484152e5a15d761902888274)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 >, 0 >::rowIndexByOuterInner;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, 1, 2, 1, 1, 2 >, 0 >::*method_pointer_586ae3e554355099b5d793a0e0663578)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 >, 0 >::colIndexByOuterInner;
    struct ::std::complex< float >  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, 1, 2, 1, 1, 2 >, 0 >::*method_pointer_9ca53831138158deb510b866121d8742)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 >, 0 >::coeff;
    struct ::std::complex< float >  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, 1, 2, 1, 1, 2 >, 0 >::*method_pointer_b7988708b1635e518a78c0dab97cf243)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 >, 0 >::coeffByOuterInner;
    struct ::std::complex< float >  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, 1, 2, 1, 1, 2 >, 0 >::*method_pointer_d0efafefab435f16b509e7e940de9579)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 >, 0 >::operator();
    struct ::std::complex< float >  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, 1, 2, 1, 1, 2 >, 0 >::*method_pointer_aee8915aca5751eb986807a60243da16)(long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 >, 0 >::coeff;
    struct ::std::complex< float >  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, 1, 2, 1, 1, 2 >, 0 >::*method_pointer_5044aed25bca5e398dbc8391d9899a1f)(long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 >, 0 >::operator[];
    struct ::std::complex< float >  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, 1, 2, 1, 1, 2 >, 0 >::*method_pointer_30c20bba33e65fba8f358d3011513c8c)(long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 >, 0 >::operator();
    struct ::std::complex< float >  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, 1, 2, 1, 1, 2 >, 0 >::*method_pointer_a0cc93a7f4e657d1b7f69c71bca3f088)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 >, 0 >::x;
    struct ::std::complex< float >  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, 1, 2, 1, 1, 2 >, 0 >::*method_pointer_2e604600cdc45b2dbed86c026c70032b)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 >, 0 >::y;
    boost::python::class_< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 >, 0 >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 >, 0 > >, boost::python::bases< struct ::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 > > > > class_4a3b70b52131583598c6746a2892e70e("_DenseCoeffsBase_4a3b70b52131583598c6746a2892e70e", "", boost::python::no_init);
    class_4a3b70b52131583598c6746a2892e70e.def("row_index_by_outer_inner", method_pointer_5cb40312484152e5a15d761902888274, "");
    class_4a3b70b52131583598c6746a2892e70e.def("col_index_by_outer_inner", method_pointer_586ae3e554355099b5d793a0e0663578, "");
    class_4a3b70b52131583598c6746a2892e70e.def("coeff", method_pointer_9ca53831138158deb510b866121d8742, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_4a3b70b52131583598c6746a2892e70e.def("coeff_by_outer_inner", method_pointer_b7988708b1635e518a78c0dab97cf243, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_4a3b70b52131583598c6746a2892e70e.def("__call__", method_pointer_d0efafefab435f16b509e7e940de9579, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_4a3b70b52131583598c6746a2892e70e.def("coeff", method_pointer_aee8915aca5751eb986807a60243da16, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_4a3b70b52131583598c6746a2892e70e.def("__getitem__", method_pointer_5044aed25bca5e398dbc8391d9899a1f, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_4a3b70b52131583598c6746a2892e70e.def("__call__", method_pointer_30c20bba33e65fba8f358d3011513c8c, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_4a3b70b52131583598c6746a2892e70e.def("x", method_pointer_a0cc93a7f4e657d1b7f69c71bca3f088, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_4a3b70b52131583598c6746a2892e70e.def("y", method_pointer_2e604600cdc45b2dbed86c026c70032b, boost::python::return_value_policy< boost::python::return_by_value >(), "");

    if(std::is_class< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 >, 0 > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 >, 0 > >, autowig::HeldType< struct ::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 > > > >();
    }

}