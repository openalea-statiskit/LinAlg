#include "_ieigen.h"


namespace autowig
{
}


void wrapper_7807f39464a45d3da4ab9db45044529a()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    long int  (::Eigen::Matrix< ::std::complex< double >, -1, -1, 0, -1, -1 >::*method_pointer_de51f8d9c64b5b01873ba6495a3b8017)() const = &::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 >::innerStride;
    long int  (::Eigen::Matrix< ::std::complex< double >, -1, -1, 0, -1, -1 >::*method_pointer_9e3e390d580d5e4daf8513d41d6d4a9e)() const = &::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 >::outerStride;
    boost::python::class_< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 >, autowig::HeldType< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > >, boost::python::bases< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > > > > class_7807f39464a45d3da4ab9db45044529a("_Matrix_7807f39464a45d3da4ab9db45044529a", "", boost::python::no_init);
    class_7807f39464a45d3da4ab9db45044529a.def(boost::python::init<  >(""));
    class_7807f39464a45d3da4ab9db45044529a.def(boost::python::init< struct ::Eigen::internal::constructor_without_unaligned_array_assert  >(""));
    class_7807f39464a45d3da4ab9db45044529a.def(boost::python::init< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 >  const & >(""));
    class_7807f39464a45d3da4ab9db45044529a.def("inner_stride", method_pointer_de51f8d9c64b5b01873ba6495a3b8017, "");
    class_7807f39464a45d3da4ab9db45044529a.def("outer_stride", method_pointer_9e3e390d580d5e4daf8513d41d6d4a9e, "");

    if(std::is_class< autowig::HeldType< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > >, autowig::HeldType< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > > > >();
    }

}