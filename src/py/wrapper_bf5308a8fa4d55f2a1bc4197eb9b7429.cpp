#include "_ieigen.h"


namespace autowig
{
}


void wrapper_bf5308a8fa4d55f2a1bc4197eb9b7429()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 >  const & (::Eigen::HouseholderQR< ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::*method_pointer_cea61420183d563aa2db81129adae711)() const = &::Eigen::HouseholderQR< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::matrixQR;
    float  (::Eigen::HouseholderQR< ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::*method_pointer_819bf656fdd75604a20a70f7699ee6bc)() const = &::Eigen::HouseholderQR< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::absDeterminant;
    float  (::Eigen::HouseholderQR< ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::*method_pointer_00b6f657d6bd533e84b9074cd912abd1)() const = &::Eigen::HouseholderQR< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::logAbsDeterminant;
    long int  (::Eigen::HouseholderQR< ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::*method_pointer_3eb75f8234a25ce685792bd06eaf30ab)() const = &::Eigen::HouseholderQR< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::rows;
    long int  (::Eigen::HouseholderQR< ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::*method_pointer_d98272d1e22a538e922864f22a5dc4df)() const = &::Eigen::HouseholderQR< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::cols;
    class ::Eigen::Matrix< float, -1, 1, 0, -1, 1 >  const & (::Eigen::HouseholderQR< ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::*method_pointer_ae7dddac01ea50db8f3cb91eee5673a7)() const = &::Eigen::HouseholderQR< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::hCoeffs;
    boost::python::class_< class ::Eigen::HouseholderQR< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >, autowig::HeldType< class ::Eigen::HouseholderQR< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > > > > class_bf5308a8fa4d55f2a1bc4197eb9b7429("_HouseholderQR_bf5308a8fa4d55f2a1bc4197eb9b7429", "", boost::python::no_init);
    class_bf5308a8fa4d55f2a1bc4197eb9b7429.def("matrix_qr", method_pointer_cea61420183d563aa2db81129adae711, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_bf5308a8fa4d55f2a1bc4197eb9b7429.def("abs_determinant", method_pointer_819bf656fdd75604a20a70f7699ee6bc, "");
    class_bf5308a8fa4d55f2a1bc4197eb9b7429.def("log_abs_determinant", method_pointer_00b6f657d6bd533e84b9074cd912abd1, "");
    class_bf5308a8fa4d55f2a1bc4197eb9b7429.def("rows", method_pointer_3eb75f8234a25ce685792bd06eaf30ab, "");
    class_bf5308a8fa4d55f2a1bc4197eb9b7429.def("cols", method_pointer_d98272d1e22a538e922864f22a5dc4df, "");
    class_bf5308a8fa4d55f2a1bc4197eb9b7429.def("h_coeffs", method_pointer_ae7dddac01ea50db8f3cb91eee5673a7, boost::python::return_value_policy< boost::python::return_by_value >(), "");

}