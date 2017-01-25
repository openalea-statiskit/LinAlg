#include "_ieigen.h"


namespace autowig
{
}


void wrapper_69e698b678685b1c8e0a11557b763043()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, 2, 1, 0, 2, 1 >, 3 >::*method_pointer_9b62a67731555558afe70b477d278ffb)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 >, 3 >::innerStride;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, 2, 1, 0, 2, 1 >, 3 >::*method_pointer_a580ffc4ab91562e9a269c9d7805c465)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 >, 3 >::outerStride;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, 2, 1, 0, 2, 1 >, 3 >::*method_pointer_c3ea1601b92a55b88ab9a8140d6e1c1c)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 >, 3 >::stride;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, 2, 1, 0, 2, 1 >, 3 >::*method_pointer_dbe406e4e90f581a96ed6c5c59253925)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 >, 3 >::rowStride;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, 2, 1, 0, 2, 1 >, 3 >::*method_pointer_e6b5ff1cb61e5092b1efad8749c33c29)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 >, 3 >::colStride;
    boost::python::class_< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 >, 3 >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 >, 3 > >, boost::python::bases< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 >, 1 > > > class_69e698b678685b1c8e0a11557b763043("_DenseCoeffsBase_69e698b678685b1c8e0a11557b763043", "", boost::python::no_init);
    class_69e698b678685b1c8e0a11557b763043.def("inner_stride", method_pointer_9b62a67731555558afe70b477d278ffb, "");
    class_69e698b678685b1c8e0a11557b763043.def("outer_stride", method_pointer_a580ffc4ab91562e9a269c9d7805c465, "");
    class_69e698b678685b1c8e0a11557b763043.def("stride", method_pointer_c3ea1601b92a55b88ab9a8140d6e1c1c, "");
    class_69e698b678685b1c8e0a11557b763043.def("row_stride", method_pointer_dbe406e4e90f581a96ed6c5c59253925, "");
    class_69e698b678685b1c8e0a11557b763043.def("col_stride", method_pointer_e6b5ff1cb61e5092b1efad8749c33c29, "");

    if(std::is_class< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 >, 3 > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 >, 3 > >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 >, 1 > > >();
    }

}