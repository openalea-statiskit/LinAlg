#include "_ieigen.h"


namespace autowig
{
}


void wrapper_e043b9d8921756618b8f79b3f29b422b()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, 1, 2, 1, 1, 2 >, 0 >::*method_pointer_eb6b2c5b20fe5d818aaf8f3524d45b09)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 1, 2, 1, 1, 2 >, 0 >::rowIndexByOuterInner;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, 1, 2, 1, 1, 2 >, 0 >::*method_pointer_f8896cda437d5debba350d1f3733e157)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 1, 2, 1, 1, 2 >, 0 >::colIndexByOuterInner;
    float  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, 1, 2, 1, 1, 2 >, 0 >::*method_pointer_612854e80c895ec59c56c80b366046b7)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 1, 2, 1, 1, 2 >, 0 >::coeff;
    float  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, 1, 2, 1, 1, 2 >, 0 >::*method_pointer_8feae3d9d5895361ab1b847e280d70ae)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 1, 2, 1, 1, 2 >, 0 >::coeffByOuterInner;
    float  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, 1, 2, 1, 1, 2 >, 0 >::*method_pointer_9ad3b7608290542b9bdef715136f409d)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 1, 2, 1, 1, 2 >, 0 >::operator();
    float  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, 1, 2, 1, 1, 2 >, 0 >::*method_pointer_db6cfe3cb4fa509ca7aa1bbd2c7b8382)(long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 1, 2, 1, 1, 2 >, 0 >::coeff;
    float  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, 1, 2, 1, 1, 2 >, 0 >::*method_pointer_207d04c565e15e62a3d94ceaceb4de3b)(long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 1, 2, 1, 1, 2 >, 0 >::operator[];
    float  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, 1, 2, 1, 1, 2 >, 0 >::*method_pointer_00e26ae807fe58d29e6d0e9ad960269b)(long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 1, 2, 1, 1, 2 >, 0 >::operator();
    float  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, 1, 2, 1, 1, 2 >, 0 >::*method_pointer_940fa67448265b18a1ce1862c841f9d0)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 1, 2, 1, 1, 2 >, 0 >::x;
    float  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, 1, 2, 1, 1, 2 >, 0 >::*method_pointer_2613efb947b25488926e23dc037023d6)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 1, 2, 1, 1, 2 >, 0 >::y;
    boost::python::class_< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 1, 2, 1, 1, 2 >, 0 >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 1, 2, 1, 1, 2 >, 0 > >, boost::python::bases< struct ::Eigen::EigenBase< class ::Eigen::Matrix< float, 1, 2, 1, 1, 2 > > > > class_e043b9d8921756618b8f79b3f29b422b("_DenseCoeffsBase_e043b9d8921756618b8f79b3f29b422b", "", boost::python::no_init);
    class_e043b9d8921756618b8f79b3f29b422b.def("row_index_by_outer_inner", method_pointer_eb6b2c5b20fe5d818aaf8f3524d45b09, "");
    class_e043b9d8921756618b8f79b3f29b422b.def("col_index_by_outer_inner", method_pointer_f8896cda437d5debba350d1f3733e157, "");
    class_e043b9d8921756618b8f79b3f29b422b.def("coeff", method_pointer_612854e80c895ec59c56c80b366046b7, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_e043b9d8921756618b8f79b3f29b422b.def("coeff_by_outer_inner", method_pointer_8feae3d9d5895361ab1b847e280d70ae, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_e043b9d8921756618b8f79b3f29b422b.def("__call__", method_pointer_9ad3b7608290542b9bdef715136f409d, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_e043b9d8921756618b8f79b3f29b422b.def("coeff", method_pointer_db6cfe3cb4fa509ca7aa1bbd2c7b8382, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_e043b9d8921756618b8f79b3f29b422b.def("__getitem__", method_pointer_207d04c565e15e62a3d94ceaceb4de3b, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_e043b9d8921756618b8f79b3f29b422b.def("__call__", method_pointer_00e26ae807fe58d29e6d0e9ad960269b, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_e043b9d8921756618b8f79b3f29b422b.def("x", method_pointer_940fa67448265b18a1ce1862c841f9d0, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_e043b9d8921756618b8f79b3f29b422b.def("y", method_pointer_2613efb947b25488926e23dc037023d6, boost::python::return_value_policy< boost::python::return_by_value >(), "");

    if(std::is_class< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 1, 2, 1, 1, 2 >, 0 > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 1, 2, 1, 1, 2 >, 0 > >, autowig::HeldType< struct ::Eigen::EigenBase< class ::Eigen::Matrix< float, 1, 2, 1, 1, 2 > > > >();
    }

}