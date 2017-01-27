#include "_ieigen.h"


namespace autowig
{
}


void wrapper_14491d6c93895f63afad4a2930e7e989()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    long int  (::Eigen::Matrix< ::std::complex< double >, 4, 1, 0, 4, 1 >::*method_pointer_779c87bb93c65f9db1e9585670950f78)() const = &::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 >::innerStride;
    long int  (::Eigen::Matrix< ::std::complex< double >, 4, 1, 0, 4, 1 >::*method_pointer_2f8abfeee48a5dfab03ae63217b845f0)() const = &::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 >::outerStride;
    boost::python::class_< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 >, autowig::HeldType< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 > >, boost::python::bases< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 > > > > class_14491d6c93895f63afad4a2930e7e989("_Matrix_14491d6c93895f63afad4a2930e7e989", "", boost::python::no_init);
    class_14491d6c93895f63afad4a2930e7e989.def(boost::python::init<  >(""));
    class_14491d6c93895f63afad4a2930e7e989.def(boost::python::init< struct ::Eigen::internal::constructor_without_unaligned_array_assert  >(""));
    class_14491d6c93895f63afad4a2930e7e989.def(boost::python::init< struct ::std::complex< double >  const &, struct ::std::complex< double >  const &, struct ::std::complex< double >  const &, struct ::std::complex< double >  const & >(""));
    class_14491d6c93895f63afad4a2930e7e989.def(boost::python::init< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 >  const & >(""));
    class_14491d6c93895f63afad4a2930e7e989.def("inner_stride", method_pointer_779c87bb93c65f9db1e9585670950f78, "");
    class_14491d6c93895f63afad4a2930e7e989.def("outer_stride", method_pointer_2f8abfeee48a5dfab03ae63217b845f0, "");

    if(std::is_class< autowig::HeldType< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 > >, autowig::HeldType< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 > > > >();
    }

}