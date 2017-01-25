#include "_ieigen.h"


namespace autowig
{
}


void wrapper_6ccceb12f0765dd8921a0c27ad22fc8a()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, 3, 1, 0, 3, 1 >, 3 >::*method_pointer_1aa633f27f2d58c1b624f2cf6f5d1615)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >, 3 >::innerStride;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, 3, 1, 0, 3, 1 >, 3 >::*method_pointer_a0100ae12d505ec3a7a39ca9270910d8)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >, 3 >::outerStride;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, 3, 1, 0, 3, 1 >, 3 >::*method_pointer_ac5795bbf4445284ba4bd88cbeff7673)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >, 3 >::stride;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, 3, 1, 0, 3, 1 >, 3 >::*method_pointer_6bf1d441e2d85b17ba4ae2f245d1ff96)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >, 3 >::rowStride;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, 3, 1, 0, 3, 1 >, 3 >::*method_pointer_8281eb61ea3c5beb843bbe08eec886ac)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >, 3 >::colStride;
    boost::python::class_< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >, 3 >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >, 3 > >, boost::python::bases< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >, 1 > > > class_6ccceb12f0765dd8921a0c27ad22fc8a("_DenseCoeffsBase_6ccceb12f0765dd8921a0c27ad22fc8a", "", boost::python::no_init);
    class_6ccceb12f0765dd8921a0c27ad22fc8a.def("inner_stride", method_pointer_1aa633f27f2d58c1b624f2cf6f5d1615, "");
    class_6ccceb12f0765dd8921a0c27ad22fc8a.def("outer_stride", method_pointer_a0100ae12d505ec3a7a39ca9270910d8, "");
    class_6ccceb12f0765dd8921a0c27ad22fc8a.def("stride", method_pointer_ac5795bbf4445284ba4bd88cbeff7673, "");
    class_6ccceb12f0765dd8921a0c27ad22fc8a.def("row_stride", method_pointer_6bf1d441e2d85b17ba4ae2f245d1ff96, "");
    class_6ccceb12f0765dd8921a0c27ad22fc8a.def("col_stride", method_pointer_8281eb61ea3c5beb843bbe08eec886ac, "");

    if(std::is_class< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >, 3 > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >, 3 > >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >, 1 > > >();
    }

}