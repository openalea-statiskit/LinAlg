#include "_ieigen.h"


namespace autowig
{
}


void wrapper_5b6a11b219a457adbbdfaa9694f1c1a1()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, 4, 1, 0, 4, 1 >, 0 >::*method_pointer_cb223dc52638549ca7dd20bcd9018a50)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 >, 0 >::rowIndexByOuterInner;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, 4, 1, 0, 4, 1 >, 0 >::*method_pointer_aea544319da05fab980517346d6aa489)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 >, 0 >::colIndexByOuterInner;
    struct ::std::complex< double >  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, 4, 1, 0, 4, 1 >, 0 >::*method_pointer_afcb28b65d3d5751a3348baff9b58ca1)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 >, 0 >::coeff;
    struct ::std::complex< double >  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, 4, 1, 0, 4, 1 >, 0 >::*method_pointer_a19fb87122a150b78bf804e05adb0092)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 >, 0 >::coeffByOuterInner;
    struct ::std::complex< double >  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, 4, 1, 0, 4, 1 >, 0 >::*method_pointer_e533fdd401ee59969b0774253e179df5)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 >, 0 >::operator();
    struct ::std::complex< double >  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, 4, 1, 0, 4, 1 >, 0 >::*method_pointer_7c7f006346d15235a6cbd6291349c6b1)(long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 >, 0 >::coeff;
    struct ::std::complex< double >  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, 4, 1, 0, 4, 1 >, 0 >::*method_pointer_64080536935a521f8c960c4f14a82bc4)(long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 >, 0 >::operator[];
    struct ::std::complex< double >  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, 4, 1, 0, 4, 1 >, 0 >::*method_pointer_f7390d2d33375e0e9c51f56e6050391b)(long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 >, 0 >::operator();
    struct ::std::complex< double >  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, 4, 1, 0, 4, 1 >, 0 >::*method_pointer_c68a5ff80b365c05b81f51ff0a182e6e)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 >, 0 >::x;
    struct ::std::complex< double >  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, 4, 1, 0, 4, 1 >, 0 >::*method_pointer_1a0f4ae3fdea57ebaa732c747833a46a)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 >, 0 >::y;
    struct ::std::complex< double >  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, 4, 1, 0, 4, 1 >, 0 >::*method_pointer_f3fea2295b1a52c98fc672c9e6c9b70b)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 >, 0 >::z;
    struct ::std::complex< double >  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, 4, 1, 0, 4, 1 >, 0 >::*method_pointer_478b0ae92a4c5e0da0fadbd85325c54a)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 >, 0 >::w;
    boost::python::class_< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 >, 0 >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 >, 0 > >, boost::python::bases< struct ::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 > > > > class_5b6a11b219a457adbbdfaa9694f1c1a1("_DenseCoeffsBase_5b6a11b219a457adbbdfaa9694f1c1a1", "", boost::python::no_init);
    class_5b6a11b219a457adbbdfaa9694f1c1a1.def("row_index_by_outer_inner", method_pointer_cb223dc52638549ca7dd20bcd9018a50, "");
    class_5b6a11b219a457adbbdfaa9694f1c1a1.def("col_index_by_outer_inner", method_pointer_aea544319da05fab980517346d6aa489, "");
    class_5b6a11b219a457adbbdfaa9694f1c1a1.def("coeff", method_pointer_afcb28b65d3d5751a3348baff9b58ca1, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_5b6a11b219a457adbbdfaa9694f1c1a1.def("coeff_by_outer_inner", method_pointer_a19fb87122a150b78bf804e05adb0092, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_5b6a11b219a457adbbdfaa9694f1c1a1.def("__call__", method_pointer_e533fdd401ee59969b0774253e179df5, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_5b6a11b219a457adbbdfaa9694f1c1a1.def("coeff", method_pointer_7c7f006346d15235a6cbd6291349c6b1, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_5b6a11b219a457adbbdfaa9694f1c1a1.def("__getitem__", method_pointer_64080536935a521f8c960c4f14a82bc4, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_5b6a11b219a457adbbdfaa9694f1c1a1.def("__call__", method_pointer_f7390d2d33375e0e9c51f56e6050391b, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_5b6a11b219a457adbbdfaa9694f1c1a1.def("x", method_pointer_c68a5ff80b365c05b81f51ff0a182e6e, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_5b6a11b219a457adbbdfaa9694f1c1a1.def("y", method_pointer_1a0f4ae3fdea57ebaa732c747833a46a, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_5b6a11b219a457adbbdfaa9694f1c1a1.def("z", method_pointer_f3fea2295b1a52c98fc672c9e6c9b70b, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_5b6a11b219a457adbbdfaa9694f1c1a1.def("w", method_pointer_478b0ae92a4c5e0da0fadbd85325c54a, boost::python::return_value_policy< boost::python::return_by_value >(), "");

    if(std::is_class< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 >, 0 > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 >, 0 > >, autowig::HeldType< struct ::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 > > > >();
    }

}