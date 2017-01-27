#include "_ieigen.h"


namespace autowig
{
}


void wrapper_8c9a4c973e5d5406afab6190ac6f5845()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    long int  (::Eigen::Matrix< double, 4, 4, 0, 4, 4 >::*method_pointer_443b7c8105665353aa8bf7c6a27f1ea5)() const = &::Eigen::Matrix< double, 4, 4, 0, 4, 4 >::innerStride;
    long int  (::Eigen::Matrix< double, 4, 4, 0, 4, 4 >::*method_pointer_f620241aa51f56a4bf0c8daea3b09f3e)() const = &::Eigen::Matrix< double, 4, 4, 0, 4, 4 >::outerStride;
    boost::python::class_< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 >, autowig::HeldType< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >, boost::python::bases< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > > > > class_8c9a4c973e5d5406afab6190ac6f5845("_Matrix_8c9a4c973e5d5406afab6190ac6f5845", "", boost::python::no_init);
    class_8c9a4c973e5d5406afab6190ac6f5845.def(boost::python::init<  >(""));
    class_8c9a4c973e5d5406afab6190ac6f5845.def(boost::python::init< struct ::Eigen::internal::constructor_without_unaligned_array_assert  >(""));
    class_8c9a4c973e5d5406afab6190ac6f5845.def(boost::python::init< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 >  const & >(""));
    class_8c9a4c973e5d5406afab6190ac6f5845.def("inner_stride", method_pointer_443b7c8105665353aa8bf7c6a27f1ea5, "");
    class_8c9a4c973e5d5406afab6190ac6f5845.def("outer_stride", method_pointer_f620241aa51f56a4bf0c8daea3b09f3e, "");

    if(std::is_class< autowig::HeldType< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >, autowig::HeldType< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > > > >();
    }

}