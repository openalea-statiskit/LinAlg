#include "_ieigen.h"


namespace autowig
{
}


void wrapper_4eabaa4783f05b659163f13da80fa07e()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    long int  (::Eigen::Matrix< ::std::complex< double >, 1, 4, 1, 1, 4 >::*method_pointer_23e78b38130f5030a715313b41479f0e)() const = &::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 >::innerStride;
    long int  (::Eigen::Matrix< ::std::complex< double >, 1, 4, 1, 1, 4 >::*method_pointer_bc811618358f5702951e474f515f49d6)() const = &::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 >::outerStride;
    boost::python::class_< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 >, autowig::HeldType< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 > >, boost::python::bases< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 > > > > class_4eabaa4783f05b659163f13da80fa07e("_Matrix_4eabaa4783f05b659163f13da80fa07e", "", boost::python::no_init);
    class_4eabaa4783f05b659163f13da80fa07e.def(boost::python::init<  >(""));
    class_4eabaa4783f05b659163f13da80fa07e.def(boost::python::init< struct ::Eigen::internal::constructor_without_unaligned_array_assert  >(""));
    class_4eabaa4783f05b659163f13da80fa07e.def(boost::python::init< struct ::std::complex< double >  const &, struct ::std::complex< double >  const &, struct ::std::complex< double >  const &, struct ::std::complex< double >  const & >(""));
    class_4eabaa4783f05b659163f13da80fa07e.def(boost::python::init< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 >  const & >(""));
    class_4eabaa4783f05b659163f13da80fa07e.def("inner_stride", method_pointer_23e78b38130f5030a715313b41479f0e, "");
    class_4eabaa4783f05b659163f13da80fa07e.def("outer_stride", method_pointer_bc811618358f5702951e474f515f49d6, "");

    if(std::is_class< autowig::HeldType< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 > >, autowig::HeldType< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 > > > >();
    }

}