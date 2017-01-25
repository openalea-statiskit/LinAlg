#include "_ieigen.h"


namespace autowig
{
}


void wrapper_29bd6e724a8150069f5792b1aa04004b()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, 3, 3, 0, 3, 3 >, 3 >::*method_pointer_e5c6f1787e825f8bb08052136269d82c)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 >, 3 >::innerStride;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, 3, 3, 0, 3, 3 >, 3 >::*method_pointer_56c067fc8b8f576b9cebe7eeee4580f5)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 >, 3 >::outerStride;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, 3, 3, 0, 3, 3 >, 3 >::*method_pointer_8f1c73ff0897523ca4f30ca94faebbc8)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 >, 3 >::stride;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, 3, 3, 0, 3, 3 >, 3 >::*method_pointer_9b5afc7162085a709991c0e479b27ad2)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 >, 3 >::rowStride;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, 3, 3, 0, 3, 3 >, 3 >::*method_pointer_1585c443a84658448c0406f88e103bb1)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 >, 3 >::colStride;
    boost::python::class_< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 >, 3 >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 >, 3 > >, boost::python::bases< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 >, 1 > > > class_29bd6e724a8150069f5792b1aa04004b("_DenseCoeffsBase_29bd6e724a8150069f5792b1aa04004b", "", boost::python::no_init);
    class_29bd6e724a8150069f5792b1aa04004b.def("inner_stride", method_pointer_e5c6f1787e825f8bb08052136269d82c, "");
    class_29bd6e724a8150069f5792b1aa04004b.def("outer_stride", method_pointer_56c067fc8b8f576b9cebe7eeee4580f5, "");
    class_29bd6e724a8150069f5792b1aa04004b.def("stride", method_pointer_8f1c73ff0897523ca4f30ca94faebbc8, "");
    class_29bd6e724a8150069f5792b1aa04004b.def("row_stride", method_pointer_9b5afc7162085a709991c0e479b27ad2, "");
    class_29bd6e724a8150069f5792b1aa04004b.def("col_stride", method_pointer_1585c443a84658448c0406f88e103bb1, "");

    if(std::is_class< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 >, 3 > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 >, 3 > >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 >, 1 > > >();
    }

}