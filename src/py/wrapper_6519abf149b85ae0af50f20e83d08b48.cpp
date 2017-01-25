#include "_ieigen.h"


namespace autowig
{
}


void wrapper_6519abf149b85ae0af50f20e83d08b48()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    long int  (::Eigen::Matrix< float, -1, -1, 0, -1, -1 >::*method_pointer_9e1b42aaaf045a868d8a6bfadbc27152)() const = &::Eigen::Matrix< float, -1, -1, 0, -1, -1 >::innerStride;
    long int  (::Eigen::Matrix< float, -1, -1, 0, -1, -1 >::*method_pointer_cf5420ff6ea45eadb05d57f8dda8b25f)() const = &::Eigen::Matrix< float, -1, -1, 0, -1, -1 >::outerStride;
    boost::python::class_< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 >, autowig::HeldType< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >, boost::python::bases< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > > > > class_6519abf149b85ae0af50f20e83d08b48("_Matrix_6519abf149b85ae0af50f20e83d08b48", "", boost::python::no_init);
    class_6519abf149b85ae0af50f20e83d08b48.def("inner_stride", method_pointer_9e1b42aaaf045a868d8a6bfadbc27152, "");
    class_6519abf149b85ae0af50f20e83d08b48.def("outer_stride", method_pointer_cf5420ff6ea45eadb05d57f8dda8b25f, "");

    if(std::is_class< autowig::HeldType< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >, autowig::HeldType< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > > > >();
    }

}