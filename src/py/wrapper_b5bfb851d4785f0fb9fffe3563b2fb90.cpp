#include "_ieigen.h"


namespace autowig
{
    void method_decorator_474cd66fd57454d2923b6d71acf2cdef(struct ::Eigen::EigenBase< class ::Eigen::Matrix< int, 4, 4, 0, 4, 4 > > & instance, class ::Eigen::Matrix< int, 4, 4, 0, 4, 4 >  & param_out)
    { instance.derived() = param_out; }
    void method_decorator_53119079bacd509e9ae413c81aed6aa6(struct ::Eigen::EigenBase< class ::Eigen::Matrix< int, 4, 4, 0, 4, 4 > > const & instance, class ::Eigen::Matrix< int, 4, 4, 0, 4, 4 >  & param_out)
    { instance.const_cast_derived() = param_out; }
}


void wrapper_b5bfb851d4785f0fb9fffe3563b2fb90()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    class ::Eigen::Matrix< int, 4, 4, 0, 4, 4 >  & (::Eigen::EigenBase< ::Eigen::Matrix< int, 4, 4, 0, 4, 4 > >::*method_pointer_474cd66fd57454d2923b6d71acf2cdef)() = &::Eigen::EigenBase< class ::Eigen::Matrix< int, 4, 4, 0, 4, 4 > >::derived;
    class ::Eigen::Matrix< int, 4, 4, 0, 4, 4 >  const & (::Eigen::EigenBase< ::Eigen::Matrix< int, 4, 4, 0, 4, 4 > >::*method_pointer_28582ddc166d5798a061130e8a79e61d)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< int, 4, 4, 0, 4, 4 > >::derived;
    class ::Eigen::Matrix< int, 4, 4, 0, 4, 4 >  & (::Eigen::EigenBase< ::Eigen::Matrix< int, 4, 4, 0, 4, 4 > >::*method_pointer_53119079bacd509e9ae413c81aed6aa6)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< int, 4, 4, 0, 4, 4 > >::const_cast_derived;
    class ::Eigen::Matrix< int, 4, 4, 0, 4, 4 >  const & (::Eigen::EigenBase< ::Eigen::Matrix< int, 4, 4, 0, 4, 4 > >::*method_pointer_febcb0abde125feeb0067eb1e14047b2)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< int, 4, 4, 0, 4, 4 > >::const_derived;
    long int  (::Eigen::EigenBase< ::Eigen::Matrix< int, 4, 4, 0, 4, 4 > >::*method_pointer_14324f33232b5bbc82125e425fdf211d)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< int, 4, 4, 0, 4, 4 > >::rows;
    long int  (::Eigen::EigenBase< ::Eigen::Matrix< int, 4, 4, 0, 4, 4 > >::*method_pointer_ecb148136ce25cbea449646575a08cd5)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< int, 4, 4, 0, 4, 4 > >::cols;
    long int  (::Eigen::EigenBase< ::Eigen::Matrix< int, 4, 4, 0, 4, 4 > >::*method_pointer_1d05b4a9247750e5833d1881b5a57685)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< int, 4, 4, 0, 4, 4 > >::size;
    boost::python::class_< struct ::Eigen::EigenBase< class ::Eigen::Matrix< int, 4, 4, 0, 4, 4 > >, autowig::HeldType< struct ::Eigen::EigenBase< class ::Eigen::Matrix< int, 4, 4, 0, 4, 4 > > > > class_b5bfb851d4785f0fb9fffe3563b2fb90("_EigenBase_b5bfb851d4785f0fb9fffe3563b2fb90", "", boost::python::no_init);
    class_b5bfb851d4785f0fb9fffe3563b2fb90.def("derived", method_pointer_474cd66fd57454d2923b6d71acf2cdef, boost::python::return_internal_reference<>(), "");
    class_b5bfb851d4785f0fb9fffe3563b2fb90.def("derived", autowig::method_decorator_474cd66fd57454d2923b6d71acf2cdef);
    class_b5bfb851d4785f0fb9fffe3563b2fb90.def("derived", method_pointer_28582ddc166d5798a061130e8a79e61d, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_b5bfb851d4785f0fb9fffe3563b2fb90.def("const_cast_derived", method_pointer_53119079bacd509e9ae413c81aed6aa6, boost::python::return_internal_reference<>(), "");
    class_b5bfb851d4785f0fb9fffe3563b2fb90.def("const_cast_derived", autowig::method_decorator_53119079bacd509e9ae413c81aed6aa6);
    class_b5bfb851d4785f0fb9fffe3563b2fb90.def("const_derived", method_pointer_febcb0abde125feeb0067eb1e14047b2, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_b5bfb851d4785f0fb9fffe3563b2fb90.def("rows", method_pointer_14324f33232b5bbc82125e425fdf211d, "");
    class_b5bfb851d4785f0fb9fffe3563b2fb90.def("cols", method_pointer_ecb148136ce25cbea449646575a08cd5, "");
    class_b5bfb851d4785f0fb9fffe3563b2fb90.def("size", method_pointer_1d05b4a9247750e5833d1881b5a57685, "");

}