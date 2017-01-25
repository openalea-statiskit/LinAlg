#include "_ieigen.h"


namespace autowig
{
}


void wrapper_a843dd7d146d5086b1c8a7f8eb814717()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    long int  (::Eigen::Matrix< ::std::complex< double >, 2, 1, 0, 2, 1 >::*method_pointer_d5d3ab3255655fcc8202fa11ee364fd8)() const = &::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 >::innerStride;
    long int  (::Eigen::Matrix< ::std::complex< double >, 2, 1, 0, 2, 1 >::*method_pointer_6d1e45efeed35dd392687d88bdeaafd6)() const = &::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 >::outerStride;
    boost::python::class_< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 >, autowig::HeldType< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 > >, boost::python::bases< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 > > > > class_a843dd7d146d5086b1c8a7f8eb814717("_Matrix_a843dd7d146d5086b1c8a7f8eb814717", "", boost::python::no_init);
    class_a843dd7d146d5086b1c8a7f8eb814717.def("inner_stride", method_pointer_d5d3ab3255655fcc8202fa11ee364fd8, "");
    class_a843dd7d146d5086b1c8a7f8eb814717.def("outer_stride", method_pointer_6d1e45efeed35dd392687d88bdeaafd6, "");

    if(std::is_class< autowig::HeldType< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 > >, autowig::HeldType< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 > > > >();
    }

}