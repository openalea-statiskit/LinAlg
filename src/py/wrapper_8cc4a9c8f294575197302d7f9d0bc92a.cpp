#include "_ieigen.h"


namespace autowig
{
}


void wrapper_8cc4a9c8f294575197302d7f9d0bc92a()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    long int  (::Eigen::Matrix< double, 1, 3, 1, 1, 3 >::*method_pointer_38d73889879a527690e5a3951e1ed29c)() const = &::Eigen::Matrix< double, 1, 3, 1, 1, 3 >::innerStride;
    long int  (::Eigen::Matrix< double, 1, 3, 1, 1, 3 >::*method_pointer_7791f50a5dc85b799014a3e824a08a5b)() const = &::Eigen::Matrix< double, 1, 3, 1, 1, 3 >::outerStride;
    boost::python::class_< class ::Eigen::Matrix< double, 1, 3, 1, 1, 3 >, autowig::HeldType< class ::Eigen::Matrix< double, 1, 3, 1, 1, 3 > >, boost::python::bases< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 1, 3, 1, 1, 3 > > > > class_8cc4a9c8f294575197302d7f9d0bc92a("_Matrix_8cc4a9c8f294575197302d7f9d0bc92a", "", boost::python::no_init);
    class_8cc4a9c8f294575197302d7f9d0bc92a.def("inner_stride", method_pointer_38d73889879a527690e5a3951e1ed29c, "");
    class_8cc4a9c8f294575197302d7f9d0bc92a.def("outer_stride", method_pointer_7791f50a5dc85b799014a3e824a08a5b, "");

    if(std::is_class< autowig::HeldType< class ::Eigen::Matrix< double, 1, 3, 1, 1, 3 > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::Matrix< double, 1, 3, 1, 1, 3 > >, autowig::HeldType< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 1, 3, 1, 1, 3 > > > >();
    }

}