#include "_linalg.h"


namespace autowig
{
}


void wrapper_33412a4d59dc5ac2b599724f2069be84()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    ::Eigen::Index  (::Eigen::Matrix< double, 1, -1, 1, 1, -1 >::*method_pointer_29ad5c75651e5bfca25c9ed2fe07208f)() const = &::Eigen::Matrix< double, 1, -1, 1, 1, -1 >::innerStride;
    ::Eigen::Index  (::Eigen::Matrix< double, 1, -1, 1, 1, -1 >::*method_pointer_11c42683f43052dfad6288abded43253)() const = &::Eigen::Matrix< double, 1, -1, 1, 1, -1 >::outerStride;
    boost::python::class_< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >, autowig::HeldType< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >, boost::python::bases< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > > > > class_33412a4d59dc5ac2b599724f2069be84("_Matrix_33412a4d59dc5ac2b599724f2069be84", "", boost::python::no_init);
    class_33412a4d59dc5ac2b599724f2069be84.def(boost::python::init<  >(""));
    class_33412a4d59dc5ac2b599724f2069be84.def(boost::python::init< struct ::Eigen::internal::constructor_without_unaligned_array_assert  >(""));
    class_33412a4d59dc5ac2b599724f2069be84.def(boost::python::init< ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >::Scalar  const &, ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >::Scalar  const &, ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >::Scalar  const & >(""));
    class_33412a4d59dc5ac2b599724f2069be84.def(boost::python::init< ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >::Scalar  const &, ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >::Scalar  const &, ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >::Scalar  const &, ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >::Scalar  const & >(""));
    class_33412a4d59dc5ac2b599724f2069be84.def(boost::python::init< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >  const & >(""));
    class_33412a4d59dc5ac2b599724f2069be84.def("inner_stride", method_pointer_29ad5c75651e5bfca25c9ed2fe07208f, "");
    class_33412a4d59dc5ac2b599724f2069be84.def("outer_stride", method_pointer_11c42683f43052dfad6288abded43253, "");

    if(std::is_class< autowig::HeldType< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >, autowig::HeldType< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > > > >();
    }

}