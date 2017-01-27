#include "_ieigen.h"


namespace autowig
{
}


void wrapper_c7587448afce5df29cefff96a112ce46()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    long int  (::Eigen::Matrix< ::std::complex< double >, 3, 3, 0, 3, 3 >::*method_pointer_e53fb6bc7a9d5a96b2f8ef18076d0ab6)() const = &::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 >::innerStride;
    long int  (::Eigen::Matrix< ::std::complex< double >, 3, 3, 0, 3, 3 >::*method_pointer_4ecc43b455185595b3833575f365e64b)() const = &::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 >::outerStride;
    boost::python::class_< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 >, autowig::HeldType< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >, boost::python::bases< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > > > > class_c7587448afce5df29cefff96a112ce46("_Matrix_c7587448afce5df29cefff96a112ce46", "", boost::python::no_init);
    class_c7587448afce5df29cefff96a112ce46.def(boost::python::init<  >(""));
    class_c7587448afce5df29cefff96a112ce46.def(boost::python::init< struct ::Eigen::internal::constructor_without_unaligned_array_assert  >(""));
    class_c7587448afce5df29cefff96a112ce46.def(boost::python::init< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 >  const & >(""));
    class_c7587448afce5df29cefff96a112ce46.def("inner_stride", method_pointer_e53fb6bc7a9d5a96b2f8ef18076d0ab6, "");
    class_c7587448afce5df29cefff96a112ce46.def("outer_stride", method_pointer_4ecc43b455185595b3833575f365e64b, "");

    if(std::is_class< autowig::HeldType< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >, autowig::HeldType< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > > > >();
    }

}