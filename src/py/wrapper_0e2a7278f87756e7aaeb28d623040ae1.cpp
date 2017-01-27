#include "_ieigen.h"


namespace autowig
{
}


void wrapper_0e2a7278f87756e7aaeb28d623040ae1()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    long int  (::Eigen::Matrix< ::std::complex< double >, 1, 2, 1, 1, 2 >::*method_pointer_53ff6205856b5fc187a2d9d67757b75d)() const = &::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 >::innerStride;
    long int  (::Eigen::Matrix< ::std::complex< double >, 1, 2, 1, 1, 2 >::*method_pointer_244ab338bf0f5d82ae152d7250a6d1fb)() const = &::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 >::outerStride;
    boost::python::class_< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 >, autowig::HeldType< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 > >, boost::python::bases< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 > > > > class_0e2a7278f87756e7aaeb28d623040ae1("_Matrix_0e2a7278f87756e7aaeb28d623040ae1", "", boost::python::no_init);
    class_0e2a7278f87756e7aaeb28d623040ae1.def(boost::python::init<  >(""));
    class_0e2a7278f87756e7aaeb28d623040ae1.def(boost::python::init< struct ::Eigen::internal::constructor_without_unaligned_array_assert  >(""));
    class_0e2a7278f87756e7aaeb28d623040ae1.def(boost::python::init< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 >  const & >(""));
    class_0e2a7278f87756e7aaeb28d623040ae1.def("inner_stride", method_pointer_53ff6205856b5fc187a2d9d67757b75d, "");
    class_0e2a7278f87756e7aaeb28d623040ae1.def("outer_stride", method_pointer_244ab338bf0f5d82ae152d7250a6d1fb, "");

    if(std::is_class< autowig::HeldType< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 > >, autowig::HeldType< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 > > > >();
    }

}