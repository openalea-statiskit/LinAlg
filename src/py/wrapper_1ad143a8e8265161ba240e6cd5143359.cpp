#include "_ieigen.h"


namespace autowig
{
}


void wrapper_1ad143a8e8265161ba240e6cd5143359()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, 3, 3, 0, 3, 3 >, 0 >::*method_pointer_3385b7f7e68c5a9c8854f08d8d2594a0)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 >, 0 >::rowIndexByOuterInner;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, 3, 3, 0, 3, 3 >, 0 >::*method_pointer_08be896ac48d51de9530902bd7005b46)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 >, 0 >::colIndexByOuterInner;
    float  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, 3, 3, 0, 3, 3 >, 0 >::*method_pointer_256430fd4625531585464e21f863fabb)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 >, 0 >::coeff;
    float  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, 3, 3, 0, 3, 3 >, 0 >::*method_pointer_a2b1e66bec7b55608ba4d6ddec2b0791)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 >, 0 >::coeffByOuterInner;
    float  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, 3, 3, 0, 3, 3 >, 0 >::*method_pointer_359699aa403457fda636bdb580c309a3)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 >, 0 >::operator();
    float  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, 3, 3, 0, 3, 3 >, 0 >::*method_pointer_1c2f60755e165316ab48a0b91ee4c492)(long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 >, 0 >::coeff;
    float  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, 3, 3, 0, 3, 3 >, 0 >::*method_pointer_bc30f5322ccc51baa1520768836dae3c)(long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 >, 0 >::operator();
    boost::python::class_< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 >, 0 >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 >, 0 > >, boost::python::bases< struct ::Eigen::EigenBase< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > > > > class_1ad143a8e8265161ba240e6cd5143359("_DenseCoeffsBase_1ad143a8e8265161ba240e6cd5143359", "", boost::python::no_init);
    class_1ad143a8e8265161ba240e6cd5143359.def("row_index_by_outer_inner", method_pointer_3385b7f7e68c5a9c8854f08d8d2594a0, "");
    class_1ad143a8e8265161ba240e6cd5143359.def("col_index_by_outer_inner", method_pointer_08be896ac48d51de9530902bd7005b46, "");
    class_1ad143a8e8265161ba240e6cd5143359.def("coeff", method_pointer_256430fd4625531585464e21f863fabb, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_1ad143a8e8265161ba240e6cd5143359.def("coeff_by_outer_inner", method_pointer_a2b1e66bec7b55608ba4d6ddec2b0791, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_1ad143a8e8265161ba240e6cd5143359.def("__call__", method_pointer_359699aa403457fda636bdb580c309a3, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_1ad143a8e8265161ba240e6cd5143359.def("coeff", method_pointer_1c2f60755e165316ab48a0b91ee4c492, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_1ad143a8e8265161ba240e6cd5143359.def("__call__", method_pointer_bc30f5322ccc51baa1520768836dae3c, boost::python::return_value_policy< boost::python::return_by_value >(), "");

    if(std::is_class< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 >, 0 > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 >, 0 > >, autowig::HeldType< struct ::Eigen::EigenBase< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > > > >();
    }

}