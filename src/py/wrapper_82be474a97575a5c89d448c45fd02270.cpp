#include "_ieigen.h"


namespace autowig
{
}


void wrapper_82be474a97575a5c89d448c45fd02270()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, 1, -1, 1, 1, -1 >, 3 >::*method_pointer_8fa1b60881135e989c3e570c72319ee7)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 1, -1, 1, 1, -1 >, 3 >::innerStride;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, 1, -1, 1, 1, -1 >, 3 >::*method_pointer_05cebbc115c95eb38ae4b6937904ed16)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 1, -1, 1, 1, -1 >, 3 >::outerStride;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, 1, -1, 1, 1, -1 >, 3 >::*method_pointer_fd54aaee9d005eaaa49aed914ea0db94)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 1, -1, 1, 1, -1 >, 3 >::stride;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, 1, -1, 1, 1, -1 >, 3 >::*method_pointer_14d7b5b28ea55bbca162b623d8e24d07)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 1, -1, 1, 1, -1 >, 3 >::rowStride;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, 1, -1, 1, 1, -1 >, 3 >::*method_pointer_031e127f73f25cb2a3bb5fc20e583efe)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 1, -1, 1, 1, -1 >, 3 >::colStride;
    boost::python::class_< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 1, -1, 1, 1, -1 >, 3 >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 1, -1, 1, 1, -1 >, 3 > >, boost::python::bases< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 1, -1, 1, 1, -1 >, 1 > > > class_82be474a97575a5c89d448c45fd02270("_DenseCoeffsBase_82be474a97575a5c89d448c45fd02270", "", boost::python::no_init);
    class_82be474a97575a5c89d448c45fd02270.def("inner_stride", method_pointer_8fa1b60881135e989c3e570c72319ee7, "");
    class_82be474a97575a5c89d448c45fd02270.def("outer_stride", method_pointer_05cebbc115c95eb38ae4b6937904ed16, "");
    class_82be474a97575a5c89d448c45fd02270.def("stride", method_pointer_fd54aaee9d005eaaa49aed914ea0db94, "");
    class_82be474a97575a5c89d448c45fd02270.def("row_stride", method_pointer_14d7b5b28ea55bbca162b623d8e24d07, "");
    class_82be474a97575a5c89d448c45fd02270.def("col_stride", method_pointer_031e127f73f25cb2a3bb5fc20e583efe, "");

    if(std::is_class< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 1, -1, 1, 1, -1 >, 3 > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 1, -1, 1, 1, -1 >, 3 > >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 1, -1, 1, 1, -1 >, 1 > > >();
    }

}