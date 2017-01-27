#include "_ieigen.h"


namespace autowig
{
}


void wrapper_195004c6f9fb5a99860f17279eb9579b()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    long int  (::Eigen::Matrix< int, 4, 1, 0, 4, 1 >::*method_pointer_2e4d5282c0f458388bf4a35830544746)() const = &::Eigen::Matrix< int, 4, 1, 0, 4, 1 >::innerStride;
    long int  (::Eigen::Matrix< int, 4, 1, 0, 4, 1 >::*method_pointer_a34c4290b36c54cea1f2097ed9322832)() const = &::Eigen::Matrix< int, 4, 1, 0, 4, 1 >::outerStride;
    boost::python::class_< class ::Eigen::Matrix< int, 4, 1, 0, 4, 1 >, autowig::HeldType< class ::Eigen::Matrix< int, 4, 1, 0, 4, 1 > >, boost::python::bases< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 4, 1, 0, 4, 1 > > > > class_195004c6f9fb5a99860f17279eb9579b("_Matrix_195004c6f9fb5a99860f17279eb9579b", "", boost::python::no_init);
    class_195004c6f9fb5a99860f17279eb9579b.def(boost::python::init<  >(""));
    class_195004c6f9fb5a99860f17279eb9579b.def(boost::python::init< struct ::Eigen::internal::constructor_without_unaligned_array_assert  >(""));
    class_195004c6f9fb5a99860f17279eb9579b.def(boost::python::init< int  const &, int  const &, int  const &, int  const & >(""));
    class_195004c6f9fb5a99860f17279eb9579b.def(boost::python::init< class ::Eigen::Matrix< int, 4, 1, 0, 4, 1 >  const & >(""));
    class_195004c6f9fb5a99860f17279eb9579b.def("inner_stride", method_pointer_2e4d5282c0f458388bf4a35830544746, "");
    class_195004c6f9fb5a99860f17279eb9579b.def("outer_stride", method_pointer_a34c4290b36c54cea1f2097ed9322832, "");

    if(std::is_class< autowig::HeldType< class ::Eigen::Matrix< int, 4, 1, 0, 4, 1 > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::Matrix< int, 4, 1, 0, 4, 1 > >, autowig::HeldType< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 4, 1, 0, 4, 1 > > > >();
    }

}