#include "_ieigen.h"


namespace autowig
{
}


void wrapper_98f552d95b445db1a0d8a719a2695042()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    long int  (::Eigen::Matrix< ::std::complex< double >, 2, 2, 0, 2, 2 >::*method_pointer_653a86a5a3905503b063de4167155270)() const = &::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 >::innerStride;
    long int  (::Eigen::Matrix< ::std::complex< double >, 2, 2, 0, 2, 2 >::*method_pointer_02f55fba95475f4aa835cac14d8fd5b1)() const = &::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 >::outerStride;
    boost::python::class_< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 >, autowig::HeldType< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >, boost::python::bases< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > > > > class_98f552d95b445db1a0d8a719a2695042("_Matrix_98f552d95b445db1a0d8a719a2695042", "", boost::python::no_init);
    class_98f552d95b445db1a0d8a719a2695042.def("inner_stride", method_pointer_653a86a5a3905503b063de4167155270, "");
    class_98f552d95b445db1a0d8a719a2695042.def("outer_stride", method_pointer_02f55fba95475f4aa835cac14d8fd5b1, "");

    if(std::is_class< autowig::HeldType< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >, autowig::HeldType< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > > > >();
    }

}