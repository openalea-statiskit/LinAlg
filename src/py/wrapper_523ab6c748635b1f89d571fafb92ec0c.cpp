#include "_ieigen.h"


namespace autowig
{
}


void wrapper_523ab6c748635b1f89d571fafb92ec0c()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    long int  (::Eigen::Matrix< ::std::complex< double >, 1, 3, 1, 1, 3 >::*method_pointer_dedc7d57262c5de4baefde30b89b1336)() const = &::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 >::innerStride;
    long int  (::Eigen::Matrix< ::std::complex< double >, 1, 3, 1, 1, 3 >::*method_pointer_aae1166ded705044a24a8a5e0cb59aa6)() const = &::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 >::outerStride;
    boost::python::class_< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 >, autowig::HeldType< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 > >, boost::python::bases< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 > > > > class_523ab6c748635b1f89d571fafb92ec0c("_Matrix_523ab6c748635b1f89d571fafb92ec0c", "", boost::python::no_init);
    class_523ab6c748635b1f89d571fafb92ec0c.def(boost::python::init<  >(""));
    class_523ab6c748635b1f89d571fafb92ec0c.def(boost::python::init< struct ::Eigen::internal::constructor_without_unaligned_array_assert  >(""));
    class_523ab6c748635b1f89d571fafb92ec0c.def(boost::python::init< struct ::std::complex< double >  const &, struct ::std::complex< double >  const &, struct ::std::complex< double >  const & >(""));
    class_523ab6c748635b1f89d571fafb92ec0c.def(boost::python::init< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 >  const & >(""));
    class_523ab6c748635b1f89d571fafb92ec0c.def("inner_stride", method_pointer_dedc7d57262c5de4baefde30b89b1336, "");
    class_523ab6c748635b1f89d571fafb92ec0c.def("outer_stride", method_pointer_aae1166ded705044a24a8a5e0cb59aa6, "");

    if(std::is_class< autowig::HeldType< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 > >, autowig::HeldType< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 > > > >();
    }

}