#include "_ieigen.h"


namespace autowig
{
}


void wrapper_308ff276be8059869573f4277ba3deb9()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, -1, -1, 0, -1, -1 >, 3 >::*method_pointer_639039058b9d52f58b11e5d04ee94bde)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, -1, -1, 0, -1, -1 >, 3 >::innerStride;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, -1, -1, 0, -1, -1 >, 3 >::*method_pointer_7185668e5e575301a2ad839e7b2eb37d)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, -1, -1, 0, -1, -1 >, 3 >::outerStride;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, -1, -1, 0, -1, -1 >, 3 >::*method_pointer_8cb120c0acb353c8806a746fdfb7fc49)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, -1, -1, 0, -1, -1 >, 3 >::stride;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, -1, -1, 0, -1, -1 >, 3 >::*method_pointer_b716f6c678005564b5d36da4da679c27)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, -1, -1, 0, -1, -1 >, 3 >::rowStride;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, -1, -1, 0, -1, -1 >, 3 >::*method_pointer_09b3f7a6e890558d826f4f44b1b7be50)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, -1, -1, 0, -1, -1 >, 3 >::colStride;
    boost::python::class_< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, -1, -1, 0, -1, -1 >, 3 >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, -1, -1, 0, -1, -1 >, 3 > >, boost::python::bases< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, -1, -1, 0, -1, -1 >, 1 > > > class_308ff276be8059869573f4277ba3deb9("_DenseCoeffsBase_308ff276be8059869573f4277ba3deb9", "", boost::python::no_init);
    class_308ff276be8059869573f4277ba3deb9.def("inner_stride", method_pointer_639039058b9d52f58b11e5d04ee94bde, "");
    class_308ff276be8059869573f4277ba3deb9.def("outer_stride", method_pointer_7185668e5e575301a2ad839e7b2eb37d, "");
    class_308ff276be8059869573f4277ba3deb9.def("stride", method_pointer_8cb120c0acb353c8806a746fdfb7fc49, "");
    class_308ff276be8059869573f4277ba3deb9.def("row_stride", method_pointer_b716f6c678005564b5d36da4da679c27, "");
    class_308ff276be8059869573f4277ba3deb9.def("col_stride", method_pointer_09b3f7a6e890558d826f4f44b1b7be50, "");

    if(std::is_class< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, -1, -1, 0, -1, -1 >, 3 > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, -1, -1, 0, -1, -1 >, 3 > >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, -1, -1, 0, -1, -1 >, 1 > > >();
    }

}