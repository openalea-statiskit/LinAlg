#include "_ieigen.h"


namespace autowig
{
}


void wrapper_e3fe94537a9b5ff383e7823edea46bcc()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, 4, 4, 0, 4, 4 >, 3 >::*method_pointer_c80a1677461e546f8976587ea4420532)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 >, 3 >::innerStride;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, 4, 4, 0, 4, 4 >, 3 >::*method_pointer_66fdfa217ca95cc7ab35f0bd53edb2a8)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 >, 3 >::outerStride;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, 4, 4, 0, 4, 4 >, 3 >::*method_pointer_4bb1454970c058a5bfe6e9b9685cb550)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 >, 3 >::stride;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, 4, 4, 0, 4, 4 >, 3 >::*method_pointer_24fde03b0ae75c1b90ad553876faab5f)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 >, 3 >::rowStride;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, 4, 4, 0, 4, 4 >, 3 >::*method_pointer_36b95794d6375f83b30fc57a679915de)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 >, 3 >::colStride;
    boost::python::class_< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 >, 3 >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 >, 3 > >, boost::python::bases< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 >, 1 > > > class_e3fe94537a9b5ff383e7823edea46bcc("_DenseCoeffsBase_e3fe94537a9b5ff383e7823edea46bcc", "", boost::python::no_init);
    class_e3fe94537a9b5ff383e7823edea46bcc.def("inner_stride", method_pointer_c80a1677461e546f8976587ea4420532, "");
    class_e3fe94537a9b5ff383e7823edea46bcc.def("outer_stride", method_pointer_66fdfa217ca95cc7ab35f0bd53edb2a8, "");
    class_e3fe94537a9b5ff383e7823edea46bcc.def("stride", method_pointer_4bb1454970c058a5bfe6e9b9685cb550, "");
    class_e3fe94537a9b5ff383e7823edea46bcc.def("row_stride", method_pointer_24fde03b0ae75c1b90ad553876faab5f, "");
    class_e3fe94537a9b5ff383e7823edea46bcc.def("col_stride", method_pointer_36b95794d6375f83b30fc57a679915de, "");

    if(std::is_class< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 >, 3 > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 >, 3 > >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 >, 1 > > >();
    }

}