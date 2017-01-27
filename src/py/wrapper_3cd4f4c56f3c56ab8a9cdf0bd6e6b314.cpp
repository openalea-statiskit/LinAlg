#include "_ieigen.h"


namespace autowig
{
}


void wrapper_3cd4f4c56f3c56ab8a9cdf0bd6e6b314()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, 3, 1, 0, 3, 1 >, 0 >::*method_pointer_ae96c28e76a0575aabe46a8f78627ef9)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 >, 0 >::rowIndexByOuterInner;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, 3, 1, 0, 3, 1 >, 0 >::*method_pointer_0a64350ed7f95952b2d834bc7cc83e60)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 >, 0 >::colIndexByOuterInner;
    float  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, 3, 1, 0, 3, 1 >, 0 >::*method_pointer_e41063ad35ae5e6d936dcfbf31ab1516)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 >, 0 >::coeff;
    float  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, 3, 1, 0, 3, 1 >, 0 >::*method_pointer_a7064aabfa125399b8e72a5651af1f9a)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 >, 0 >::coeffByOuterInner;
    float  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, 3, 1, 0, 3, 1 >, 0 >::*method_pointer_de7583e8420851f08b3dbafe5fac7d46)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 >, 0 >::operator();
    float  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, 3, 1, 0, 3, 1 >, 0 >::*method_pointer_fe26966ff9715263a8795575b5abeedb)(long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 >, 0 >::coeff;
    float  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, 3, 1, 0, 3, 1 >, 0 >::*method_pointer_9ee041339f2c5cc0a2341e4574e76672)(long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 >, 0 >::operator[];
    float  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, 3, 1, 0, 3, 1 >, 0 >::*method_pointer_d404ad186a7b50418916437d478275a9)(long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 >, 0 >::operator();
    float  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, 3, 1, 0, 3, 1 >, 0 >::*method_pointer_9ca99752a29b569d9d3ac067ee39446d)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 >, 0 >::x;
    float  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, 3, 1, 0, 3, 1 >, 0 >::*method_pointer_1944060c94235bedabf103a7223067b4)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 >, 0 >::y;
    float  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, 3, 1, 0, 3, 1 >, 0 >::*method_pointer_3dc5f7c04d655660a66693cf20208719)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 >, 0 >::z;
    boost::python::class_< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 >, 0 >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 >, 0 > >, boost::python::bases< struct ::Eigen::EigenBase< class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 > > > > class_3cd4f4c56f3c56ab8a9cdf0bd6e6b314("_DenseCoeffsBase_3cd4f4c56f3c56ab8a9cdf0bd6e6b314", "", boost::python::no_init);
    class_3cd4f4c56f3c56ab8a9cdf0bd6e6b314.def("row_index_by_outer_inner", method_pointer_ae96c28e76a0575aabe46a8f78627ef9, "");
    class_3cd4f4c56f3c56ab8a9cdf0bd6e6b314.def("col_index_by_outer_inner", method_pointer_0a64350ed7f95952b2d834bc7cc83e60, "");
    class_3cd4f4c56f3c56ab8a9cdf0bd6e6b314.def("coeff", method_pointer_e41063ad35ae5e6d936dcfbf31ab1516, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_3cd4f4c56f3c56ab8a9cdf0bd6e6b314.def("coeff_by_outer_inner", method_pointer_a7064aabfa125399b8e72a5651af1f9a, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_3cd4f4c56f3c56ab8a9cdf0bd6e6b314.def("__call__", method_pointer_de7583e8420851f08b3dbafe5fac7d46, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_3cd4f4c56f3c56ab8a9cdf0bd6e6b314.def("coeff", method_pointer_fe26966ff9715263a8795575b5abeedb, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_3cd4f4c56f3c56ab8a9cdf0bd6e6b314.def("__getitem__", method_pointer_9ee041339f2c5cc0a2341e4574e76672, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_3cd4f4c56f3c56ab8a9cdf0bd6e6b314.def("__call__", method_pointer_d404ad186a7b50418916437d478275a9, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_3cd4f4c56f3c56ab8a9cdf0bd6e6b314.def("x", method_pointer_9ca99752a29b569d9d3ac067ee39446d, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_3cd4f4c56f3c56ab8a9cdf0bd6e6b314.def("y", method_pointer_1944060c94235bedabf103a7223067b4, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_3cd4f4c56f3c56ab8a9cdf0bd6e6b314.def("z", method_pointer_3dc5f7c04d655660a66693cf20208719, boost::python::return_value_policy< boost::python::return_by_value >(), "");

    if(std::is_class< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 >, 0 > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 >, 0 > >, autowig::HeldType< struct ::Eigen::EigenBase< class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 > > > >();
    }

}