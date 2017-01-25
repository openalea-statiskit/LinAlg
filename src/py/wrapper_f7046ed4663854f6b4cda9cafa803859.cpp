#include "_ieigen.h"


namespace autowig
{
}


void wrapper_f7046ed4663854f6b4cda9cafa803859()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, 4, 1, 0, 4, 1 >, 0 >::*method_pointer_c0dae371177156dd8f642d15f37e3f0a)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 >, 0 >::rowIndexByOuterInner;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, 4, 1, 0, 4, 1 >, 0 >::*method_pointer_829e458f4b9353fbb0db2574e37644b2)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 >, 0 >::colIndexByOuterInner;
    float  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, 4, 1, 0, 4, 1 >, 0 >::*method_pointer_418d300987b45afcb563efb2b420fbc3)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 >, 0 >::coeff;
    float  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, 4, 1, 0, 4, 1 >, 0 >::*method_pointer_fd0e9ecd71335aa8bdd6ec43307f89ec)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 >, 0 >::coeffByOuterInner;
    float  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, 4, 1, 0, 4, 1 >, 0 >::*method_pointer_159c32cc9bd5562a9b65326a2fdccc6d)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 >, 0 >::operator();
    float  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, 4, 1, 0, 4, 1 >, 0 >::*method_pointer_3066e298b7125a0e857a2b8df4ba3ae3)(long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 >, 0 >::coeff;
    float  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, 4, 1, 0, 4, 1 >, 0 >::*method_pointer_3ca2cf64b6d05392879724d516ba5493)(long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 >, 0 >::operator[];
    float  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, 4, 1, 0, 4, 1 >, 0 >::*method_pointer_ca5b4ac3b9dc535e9c91847279404927)(long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 >, 0 >::operator();
    float  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, 4, 1, 0, 4, 1 >, 0 >::*method_pointer_0f714cd1dde051beba35a87ffa7e48ae)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 >, 0 >::x;
    float  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, 4, 1, 0, 4, 1 >, 0 >::*method_pointer_5e08f9215bcd53b898c398fc0e15c2ff)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 >, 0 >::y;
    float  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, 4, 1, 0, 4, 1 >, 0 >::*method_pointer_46df61bf598255e5b9362828bce150f7)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 >, 0 >::z;
    float  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, 4, 1, 0, 4, 1 >, 0 >::*method_pointer_b0f248721bf353a797dc309e197cdd82)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 >, 0 >::w;
    boost::python::class_< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 >, 0 >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 >, 0 > >, boost::python::bases< struct ::Eigen::EigenBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > > > > class_f7046ed4663854f6b4cda9cafa803859("_DenseCoeffsBase_f7046ed4663854f6b4cda9cafa803859", "", boost::python::no_init);
    class_f7046ed4663854f6b4cda9cafa803859.def("row_index_by_outer_inner", method_pointer_c0dae371177156dd8f642d15f37e3f0a, "");
    class_f7046ed4663854f6b4cda9cafa803859.def("col_index_by_outer_inner", method_pointer_829e458f4b9353fbb0db2574e37644b2, "");
    class_f7046ed4663854f6b4cda9cafa803859.def("coeff", method_pointer_418d300987b45afcb563efb2b420fbc3, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_f7046ed4663854f6b4cda9cafa803859.def("coeff_by_outer_inner", method_pointer_fd0e9ecd71335aa8bdd6ec43307f89ec, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_f7046ed4663854f6b4cda9cafa803859.def("__call__", method_pointer_159c32cc9bd5562a9b65326a2fdccc6d, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_f7046ed4663854f6b4cda9cafa803859.def("coeff", method_pointer_3066e298b7125a0e857a2b8df4ba3ae3, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_f7046ed4663854f6b4cda9cafa803859.def("__getitem__", method_pointer_3ca2cf64b6d05392879724d516ba5493, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_f7046ed4663854f6b4cda9cafa803859.def("__call__", method_pointer_ca5b4ac3b9dc535e9c91847279404927, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_f7046ed4663854f6b4cda9cafa803859.def("x", method_pointer_0f714cd1dde051beba35a87ffa7e48ae, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_f7046ed4663854f6b4cda9cafa803859.def("y", method_pointer_5e08f9215bcd53b898c398fc0e15c2ff, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_f7046ed4663854f6b4cda9cafa803859.def("z", method_pointer_46df61bf598255e5b9362828bce150f7, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_f7046ed4663854f6b4cda9cafa803859.def("w", method_pointer_b0f248721bf353a797dc309e197cdd82, boost::python::return_value_policy< boost::python::return_by_value >(), "");

    if(std::is_class< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 >, 0 > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 >, 0 > >, autowig::HeldType< struct ::Eigen::EigenBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > > > >();
    }

}