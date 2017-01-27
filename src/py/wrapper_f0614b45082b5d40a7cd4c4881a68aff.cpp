#include "_ieigen.h"


namespace autowig
{
}


void wrapper_f0614b45082b5d40a7cd4c4881a68aff()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, -1, -1, 0, -1, -1 >, 0 >::*method_pointer_1bee7794c886516d9ef4a589863ecd26)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, -1, -1, 0, -1, -1 >, 0 >::rowIndexByOuterInner;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, -1, -1, 0, -1, -1 >, 0 >::*method_pointer_4e39888479965bfe956b955272257a7a)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, -1, -1, 0, -1, -1 >, 0 >::colIndexByOuterInner;
    int  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, -1, -1, 0, -1, -1 >, 0 >::*method_pointer_21177fd023d8504f9bd07dbb2f7e755d)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, -1, -1, 0, -1, -1 >, 0 >::coeff;
    int  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, -1, -1, 0, -1, -1 >, 0 >::*method_pointer_4c9290c9d7b95e3385cb0f40b435b371)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, -1, -1, 0, -1, -1 >, 0 >::coeffByOuterInner;
    int  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, -1, -1, 0, -1, -1 >, 0 >::*method_pointer_45bb6b3190ad56a9a04b1c63769f3ff6)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, -1, -1, 0, -1, -1 >, 0 >::operator();
    int  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, -1, -1, 0, -1, -1 >, 0 >::*method_pointer_8bc49bca95eb538dbe732be6de87b33b)(long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, -1, -1, 0, -1, -1 >, 0 >::coeff;
    int  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, -1, -1, 0, -1, -1 >, 0 >::*method_pointer_e5f70c4b95f157eaad56aee1e47c6e6d)(long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, -1, -1, 0, -1, -1 >, 0 >::operator();
    boost::python::class_< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, -1, -1, 0, -1, -1 >, 0 >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, -1, -1, 0, -1, -1 >, 0 > >, boost::python::bases< struct ::Eigen::EigenBase< class ::Eigen::Matrix< int, -1, -1, 0, -1, -1 > > > > class_f0614b45082b5d40a7cd4c4881a68aff("_DenseCoeffsBase_f0614b45082b5d40a7cd4c4881a68aff", "", boost::python::no_init);
    class_f0614b45082b5d40a7cd4c4881a68aff.def("row_index_by_outer_inner", method_pointer_1bee7794c886516d9ef4a589863ecd26, "");
    class_f0614b45082b5d40a7cd4c4881a68aff.def("col_index_by_outer_inner", method_pointer_4e39888479965bfe956b955272257a7a, "");
    class_f0614b45082b5d40a7cd4c4881a68aff.def("coeff", method_pointer_21177fd023d8504f9bd07dbb2f7e755d, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_f0614b45082b5d40a7cd4c4881a68aff.def("coeff_by_outer_inner", method_pointer_4c9290c9d7b95e3385cb0f40b435b371, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_f0614b45082b5d40a7cd4c4881a68aff.def("__call__", method_pointer_45bb6b3190ad56a9a04b1c63769f3ff6, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_f0614b45082b5d40a7cd4c4881a68aff.def("coeff", method_pointer_8bc49bca95eb538dbe732be6de87b33b, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_f0614b45082b5d40a7cd4c4881a68aff.def("__call__", method_pointer_e5f70c4b95f157eaad56aee1e47c6e6d, boost::python::return_value_policy< boost::python::return_by_value >(), "");

    if(std::is_class< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, -1, -1, 0, -1, -1 >, 0 > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, -1, -1, 0, -1, -1 >, 0 > >, autowig::HeldType< struct ::Eigen::EigenBase< class ::Eigen::Matrix< int, -1, -1, 0, -1, -1 > > > >();
    }

}