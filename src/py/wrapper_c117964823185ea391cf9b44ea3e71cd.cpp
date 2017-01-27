#include "_ieigen.h"


namespace autowig
{
}


void wrapper_c117964823185ea391cf9b44ea3e71cd()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    long int  (::Eigen::Matrix< double, 1, 4, 1, 1, 4 >::*method_pointer_d28f1740126a5ae19be609b5381bc709)() const = &::Eigen::Matrix< double, 1, 4, 1, 1, 4 >::innerStride;
    long int  (::Eigen::Matrix< double, 1, 4, 1, 1, 4 >::*method_pointer_5bc4c5c1f94650bb919286fe0c5dc210)() const = &::Eigen::Matrix< double, 1, 4, 1, 1, 4 >::outerStride;
    boost::python::class_< class ::Eigen::Matrix< double, 1, 4, 1, 1, 4 >, autowig::HeldType< class ::Eigen::Matrix< double, 1, 4, 1, 1, 4 > >, boost::python::bases< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 1, 4, 1, 1, 4 > > > > class_c117964823185ea391cf9b44ea3e71cd("_Matrix_c117964823185ea391cf9b44ea3e71cd", "", boost::python::no_init);
    class_c117964823185ea391cf9b44ea3e71cd.def(boost::python::init<  >(""));
    class_c117964823185ea391cf9b44ea3e71cd.def(boost::python::init< struct ::Eigen::internal::constructor_without_unaligned_array_assert  >(""));
    class_c117964823185ea391cf9b44ea3e71cd.def(boost::python::init< double  const &, double  const &, double  const &, double  const & >(""));
    class_c117964823185ea391cf9b44ea3e71cd.def(boost::python::init< class ::Eigen::Matrix< double, 1, 4, 1, 1, 4 >  const & >(""));
    class_c117964823185ea391cf9b44ea3e71cd.def("inner_stride", method_pointer_d28f1740126a5ae19be609b5381bc709, "");
    class_c117964823185ea391cf9b44ea3e71cd.def("outer_stride", method_pointer_5bc4c5c1f94650bb919286fe0c5dc210, "");

    if(std::is_class< autowig::HeldType< class ::Eigen::Matrix< double, 1, 4, 1, 1, 4 > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::Matrix< double, 1, 4, 1, 1, 4 > >, autowig::HeldType< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 1, 4, 1, 1, 4 > > > >();
    }

}