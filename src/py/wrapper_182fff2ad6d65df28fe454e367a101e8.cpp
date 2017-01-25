#include "_ieigen.h"


namespace autowig
{
}


void wrapper_182fff2ad6d65df28fe454e367a101e8()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    long int  (::Eigen::Matrix< double, 3, 1, 0, 3, 1 >::*method_pointer_16bb8f7d9a8e53ddabe2cfd716ef4f81)() const = &::Eigen::Matrix< double, 3, 1, 0, 3, 1 >::innerStride;
    long int  (::Eigen::Matrix< double, 3, 1, 0, 3, 1 >::*method_pointer_8294c66699e5553fae7572e2e026dce7)() const = &::Eigen::Matrix< double, 3, 1, 0, 3, 1 >::outerStride;
    boost::python::class_< class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 >, autowig::HeldType< class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 > >, boost::python::bases< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 > > > > class_182fff2ad6d65df28fe454e367a101e8("_Matrix_182fff2ad6d65df28fe454e367a101e8", "", boost::python::no_init);
    class_182fff2ad6d65df28fe454e367a101e8.def("inner_stride", method_pointer_16bb8f7d9a8e53ddabe2cfd716ef4f81, "");
    class_182fff2ad6d65df28fe454e367a101e8.def("outer_stride", method_pointer_8294c66699e5553fae7572e2e026dce7, "");

    if(std::is_class< autowig::HeldType< class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 > >, autowig::HeldType< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 > > > >();
    }

}