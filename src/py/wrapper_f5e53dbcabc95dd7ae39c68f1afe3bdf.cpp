#include "_ieigen.h"


namespace autowig
{
}


void wrapper_f5e53dbcabc95dd7ae39c68f1afe3bdf()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    long int  (::Eigen::Matrix< double, 4, 1, 0, 4, 1 >::*method_pointer_aaafde4017dc54688d0beba5bd6a43ee)() const = &::Eigen::Matrix< double, 4, 1, 0, 4, 1 >::innerStride;
    long int  (::Eigen::Matrix< double, 4, 1, 0, 4, 1 >::*method_pointer_6617d190591854c5ad998bf48c878ddd)() const = &::Eigen::Matrix< double, 4, 1, 0, 4, 1 >::outerStride;
    boost::python::class_< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 >, autowig::HeldType< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >, boost::python::bases< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > > > > class_f5e53dbcabc95dd7ae39c68f1afe3bdf("_Matrix_f5e53dbcabc95dd7ae39c68f1afe3bdf", "", boost::python::no_init);
    class_f5e53dbcabc95dd7ae39c68f1afe3bdf.def(boost::python::init<  >(""));
    class_f5e53dbcabc95dd7ae39c68f1afe3bdf.def(boost::python::init< struct ::Eigen::internal::constructor_without_unaligned_array_assert  >(""));
    class_f5e53dbcabc95dd7ae39c68f1afe3bdf.def(boost::python::init< double  const &, double  const &, double  const &, double  const & >(""));
    class_f5e53dbcabc95dd7ae39c68f1afe3bdf.def(boost::python::init< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 >  const & >(""));
    class_f5e53dbcabc95dd7ae39c68f1afe3bdf.def("inner_stride", method_pointer_aaafde4017dc54688d0beba5bd6a43ee, "");
    class_f5e53dbcabc95dd7ae39c68f1afe3bdf.def("outer_stride", method_pointer_6617d190591854c5ad998bf48c878ddd, "");

    if(std::is_class< autowig::HeldType< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >, autowig::HeldType< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > > > >();
    }

}