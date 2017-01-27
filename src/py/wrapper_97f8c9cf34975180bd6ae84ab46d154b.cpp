#include "_ieigen.h"


namespace autowig
{
}


void wrapper_97f8c9cf34975180bd6ae84ab46d154b()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    long int  (::Eigen::Matrix< ::std::complex< double >, 3, 1, 0, 3, 1 >::*method_pointer_0c2d34f690765874bcde132f1305a30a)() const = &::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >::innerStride;
    long int  (::Eigen::Matrix< ::std::complex< double >, 3, 1, 0, 3, 1 >::*method_pointer_8c668d9c28b05ca6a63fca035d3bde5f)() const = &::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >::outerStride;
    boost::python::class_< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >, autowig::HeldType< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 > >, boost::python::bases< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 > > > > class_97f8c9cf34975180bd6ae84ab46d154b("_Matrix_97f8c9cf34975180bd6ae84ab46d154b", "", boost::python::no_init);
    class_97f8c9cf34975180bd6ae84ab46d154b.def(boost::python::init<  >(""));
    class_97f8c9cf34975180bd6ae84ab46d154b.def(boost::python::init< struct ::Eigen::internal::constructor_without_unaligned_array_assert  >(""));
    class_97f8c9cf34975180bd6ae84ab46d154b.def(boost::python::init< struct ::std::complex< double >  const &, struct ::std::complex< double >  const &, struct ::std::complex< double >  const & >(""));
    class_97f8c9cf34975180bd6ae84ab46d154b.def(boost::python::init< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >  const & >(""));
    class_97f8c9cf34975180bd6ae84ab46d154b.def("inner_stride", method_pointer_0c2d34f690765874bcde132f1305a30a, "");
    class_97f8c9cf34975180bd6ae84ab46d154b.def("outer_stride", method_pointer_8c668d9c28b05ca6a63fca035d3bde5f, "");

    if(std::is_class< autowig::HeldType< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 > >, autowig::HeldType< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 > > > >();
    }

}