#include "_ieigen.h"


namespace autowig
{
}


void wrapper_52d58fe0ff1f594cbe40d1845c4305fe()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    long int  (::Eigen::Matrix< ::std::complex< float >, 1, 2, 1, 1, 2 >::*method_pointer_1ced10ac20325d7f85c5d8ec9c5340e2)() const = &::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 >::innerStride;
    long int  (::Eigen::Matrix< ::std::complex< float >, 1, 2, 1, 1, 2 >::*method_pointer_6439bf6ced585abdb0e7e18eef41dd6f)() const = &::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 >::outerStride;
    boost::python::class_< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 >, autowig::HeldType< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 > >, boost::python::bases< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 > > > > class_52d58fe0ff1f594cbe40d1845c4305fe("_Matrix_52d58fe0ff1f594cbe40d1845c4305fe", "", boost::python::no_init);
    class_52d58fe0ff1f594cbe40d1845c4305fe.def(boost::python::init<  >(""));
    class_52d58fe0ff1f594cbe40d1845c4305fe.def(boost::python::init< struct ::Eigen::internal::constructor_without_unaligned_array_assert  >(""));
    class_52d58fe0ff1f594cbe40d1845c4305fe.def(boost::python::init< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 >  const & >(""));
    class_52d58fe0ff1f594cbe40d1845c4305fe.def("inner_stride", method_pointer_1ced10ac20325d7f85c5d8ec9c5340e2, "");
    class_52d58fe0ff1f594cbe40d1845c4305fe.def("outer_stride", method_pointer_6439bf6ced585abdb0e7e18eef41dd6f, "");

    if(std::is_class< autowig::HeldType< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 > >, autowig::HeldType< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 > > > >();
    }

}