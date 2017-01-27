#include "_ieigen.h"


namespace autowig
{
}


void wrapper_7892532d373e566faa60407bc006a658()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, 4, 4, 0, 4, 4 >, 0 >::*method_pointer_faead9e44f635c5fbf91a7177dcba91a)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 >, 0 >::rowIndexByOuterInner;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, 4, 4, 0, 4, 4 >, 0 >::*method_pointer_3b459b0020c3519f81ea5032a72b60da)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 >, 0 >::colIndexByOuterInner;
    struct ::std::complex< double >  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, 4, 4, 0, 4, 4 >, 0 >::*method_pointer_e5437cb4c2bb5ff8b71a5cacb4227e98)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 >, 0 >::coeff;
    struct ::std::complex< double >  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, 4, 4, 0, 4, 4 >, 0 >::*method_pointer_9bebc50ea091578895356cea07782057)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 >, 0 >::coeffByOuterInner;
    struct ::std::complex< double >  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, 4, 4, 0, 4, 4 >, 0 >::*method_pointer_ebd8b37c9c3756f5acc63b5ccfecda5f)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 >, 0 >::operator();
    struct ::std::complex< double >  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, 4, 4, 0, 4, 4 >, 0 >::*method_pointer_4a9cf21d03bc50759953d5ff00e54058)(long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 >, 0 >::coeff;
    struct ::std::complex< double >  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, 4, 4, 0, 4, 4 >, 0 >::*method_pointer_d0fa236a11235e91b701196f16180ea7)(long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 >, 0 >::operator();
    boost::python::class_< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 >, 0 >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 >, 0 > >, boost::python::bases< struct ::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > > > > class_7892532d373e566faa60407bc006a658("_DenseCoeffsBase_7892532d373e566faa60407bc006a658", "", boost::python::no_init);
    class_7892532d373e566faa60407bc006a658.def("row_index_by_outer_inner", method_pointer_faead9e44f635c5fbf91a7177dcba91a, "");
    class_7892532d373e566faa60407bc006a658.def("col_index_by_outer_inner", method_pointer_3b459b0020c3519f81ea5032a72b60da, "");
    class_7892532d373e566faa60407bc006a658.def("coeff", method_pointer_e5437cb4c2bb5ff8b71a5cacb4227e98, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_7892532d373e566faa60407bc006a658.def("coeff_by_outer_inner", method_pointer_9bebc50ea091578895356cea07782057, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_7892532d373e566faa60407bc006a658.def("__call__", method_pointer_ebd8b37c9c3756f5acc63b5ccfecda5f, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_7892532d373e566faa60407bc006a658.def("coeff", method_pointer_4a9cf21d03bc50759953d5ff00e54058, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_7892532d373e566faa60407bc006a658.def("__call__", method_pointer_d0fa236a11235e91b701196f16180ea7, boost::python::return_value_policy< boost::python::return_by_value >(), "");

    if(std::is_class< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 >, 0 > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 >, 0 > >, autowig::HeldType< struct ::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > > > >();
    }

}