#include "_ieigen.h"


namespace autowig
{
}


void wrapper_01e285959ce258149bfae08335330db1()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    long int  (::Eigen::Matrix< int, 2, 1, 0, 2, 1 >::*method_pointer_0096338114bf5d758dca583247cd748b)() const = &::Eigen::Matrix< int, 2, 1, 0, 2, 1 >::innerStride;
    long int  (::Eigen::Matrix< int, 2, 1, 0, 2, 1 >::*method_pointer_54f133cc852951ce990b2bdf862be857)() const = &::Eigen::Matrix< int, 2, 1, 0, 2, 1 >::outerStride;
    boost::python::class_< class ::Eigen::Matrix< int, 2, 1, 0, 2, 1 >, autowig::HeldType< class ::Eigen::Matrix< int, 2, 1, 0, 2, 1 > >, boost::python::bases< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 2, 1, 0, 2, 1 > > > > class_01e285959ce258149bfae08335330db1("_Matrix_01e285959ce258149bfae08335330db1", "", boost::python::no_init);
    class_01e285959ce258149bfae08335330db1.def(boost::python::init<  >(""));
    class_01e285959ce258149bfae08335330db1.def(boost::python::init< struct ::Eigen::internal::constructor_without_unaligned_array_assert  >(""));
    class_01e285959ce258149bfae08335330db1.def(boost::python::init< class ::Eigen::Matrix< int, 2, 1, 0, 2, 1 >  const & >(""));
    class_01e285959ce258149bfae08335330db1.def("inner_stride", method_pointer_0096338114bf5d758dca583247cd748b, "");
    class_01e285959ce258149bfae08335330db1.def("outer_stride", method_pointer_54f133cc852951ce990b2bdf862be857, "");

    if(std::is_class< autowig::HeldType< class ::Eigen::Matrix< int, 2, 1, 0, 2, 1 > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::Matrix< int, 2, 1, 0, 2, 1 > >, autowig::HeldType< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 2, 1, 0, 2, 1 > > > >();
    }

}