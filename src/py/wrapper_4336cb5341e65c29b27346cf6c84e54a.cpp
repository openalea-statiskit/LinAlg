#include "_ieigen.h"


namespace autowig
{
    void method_decorator_c63f5602c8f15daab8b3be87e6c95f44(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 1, -1, 1, 1, -1 > > & instance, class ::Eigen::MatrixBase< class ::Eigen::Matrix< int, 1, -1, 1, 1, -1 > >  & param_out)     { instance.base() = param_out; }
    void method_decorator_3acaa6d394af576b8869ab52d817f40f(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 1, -1, 1, 1, -1 > > & instance, long int  param_in_0, long int  param_in_1, const int  & param_out)     { instance.coeffRef(param_in_0, param_in_1) = param_out; }
    void method_decorator_01ba092a74c35c309302af558af8de2e(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 1, -1, 1, 1, -1 > > & instance, long int  param_in_0, const int  & param_out)     { instance.coeffRef(param_in_0) = param_out; }
    void method_decorator_25b26379ae1f5cd697b633c7cab3eb45(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 1, -1, 1, 1, -1 > > & instance, long int  param_in_0, int  const & param_in_1, class ::Eigen::Matrix< int, 1, -1, 1, 1, -1 >  & param_out)     { instance.setConstant(param_in_0, param_in_1) = param_out; }
    void method_decorator_70440ba7397951158ecd6d24e7c331c2(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 1, -1, 1, 1, -1 > > & instance, long int  param_in_0, long int  param_in_1, int  const & param_in_2, class ::Eigen::Matrix< int, 1, -1, 1, 1, -1 >  & param_out)     { instance.setConstant(param_in_0, param_in_1, param_in_2) = param_out; }
    void method_decorator_1fbf36885e895a3aa15feb23b2fb6c5e(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 1, -1, 1, 1, -1 > > & instance, long int  param_in_0, class ::Eigen::Matrix< int, 1, -1, 1, 1, -1 >  & param_out)     { instance.setZero(param_in_0) = param_out; }
    void method_decorator_7bc880e2cb4c5aceb248f5365eab13b1(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 1, -1, 1, 1, -1 > > & instance, long int  param_in_0, long int  param_in_1, class ::Eigen::Matrix< int, 1, -1, 1, 1, -1 >  & param_out)     { instance.setZero(param_in_0, param_in_1) = param_out; }
    void method_decorator_e9304938bb3f58f1b03883728d01a7cc(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 1, -1, 1, 1, -1 > > & instance, long int  param_in_0, class ::Eigen::Matrix< int, 1, -1, 1, 1, -1 >  & param_out)     { instance.setOnes(param_in_0) = param_out; }
    void method_decorator_4b3fb2b4369851ae90573ef402171cdd(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 1, -1, 1, 1, -1 > > & instance, long int  param_in_0, long int  param_in_1, class ::Eigen::Matrix< int, 1, -1, 1, 1, -1 >  & param_out)     { instance.setOnes(param_in_0, param_in_1) = param_out; }
    void method_decorator_594afd815e9e5bc7b1e0cc9620253cc0(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 1, -1, 1, 1, -1 > > & instance, long int  param_in_0, class ::Eigen::Matrix< int, 1, -1, 1, 1, -1 >  & param_out)     { instance.setRandom(param_in_0) = param_out; }
    void method_decorator_911039e67e8958b1a480d5b7460c5742(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 1, -1, 1, 1, -1 > > & instance, long int  param_in_0, long int  param_in_1, class ::Eigen::Matrix< int, 1, -1, 1, 1, -1 >  & param_out)     { instance.setRandom(param_in_0, param_in_1) = param_out; }
}


void wrapper_4336cb5341e65c29b27346cf6c84e54a()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    class ::Eigen::MatrixBase< class ::Eigen::Matrix< int, 1, -1, 1, 1, -1 > >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, 1, -1, 1, 1, -1 > >::*method_pointer_c63f5602c8f15daab8b3be87e6c95f44)() = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 1, -1, 1, 1, -1 > >::base;
    class ::Eigen::MatrixBase< class ::Eigen::Matrix< int, 1, -1, 1, 1, -1 > >  const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, 1, -1, 1, 1, -1 > >::*method_pointer_3f96469e65e75e5b801d43d0e91cb9f0)() const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 1, -1, 1, 1, -1 > >::base;
    long int  (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, 1, -1, 1, 1, -1 > >::*method_pointer_b1e2825b693f5afaaad2b83dee409641)() const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 1, -1, 1, 1, -1 > >::rows;
    long int  (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, 1, -1, 1, 1, -1 > >::*method_pointer_26e46e218f3650bea88873c913eb21c2)() const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 1, -1, 1, 1, -1 > >::cols;
    int  const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, 1, -1, 1, 1, -1 > >::*method_pointer_8051aeb062ce50159434d8af8ecbef8f)(long int , long int ) const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 1, -1, 1, 1, -1 > >::coeff;
    int  const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, 1, -1, 1, 1, -1 > >::*method_pointer_ee921383a8d552d1b3c06cc7af0d5970)(long int ) const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 1, -1, 1, 1, -1 > >::coeff;
    int  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, 1, -1, 1, 1, -1 > >::*method_pointer_3acaa6d394af576b8869ab52d817f40f)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 1, -1, 1, 1, -1 > >::coeffRef;
    int  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, 1, -1, 1, 1, -1 > >::*method_pointer_01ba092a74c35c309302af558af8de2e)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 1, -1, 1, 1, -1 > >::coeffRef;
    int  const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, 1, -1, 1, 1, -1 > >::*method_pointer_593271c111af52649e6c1f1cb3918a1e)(long int , long int ) const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 1, -1, 1, 1, -1 > >::coeffRef;
    int  const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, 1, -1, 1, 1, -1 > >::*method_pointer_0929e9d0affe5bb5a7251d57e97826a4)(long int ) const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 1, -1, 1, 1, -1 > >::coeffRef;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, 1, -1, 1, 1, -1 > >::*method_pointer_b6cefc156e015a3bb00dc4598ee2fa0f)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 1, -1, 1, 1, -1 > >::resize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, 1, -1, 1, 1, -1 > >::*method_pointer_38cd59daea33505fa065bbba881e7502)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 1, -1, 1, 1, -1 > >::resize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, 1, -1, 1, 1, -1 > >::*method_pointer_9beb0b9fcfa451fb983a58edcef09675)(enum ::Eigen::NoChange_t , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 1, -1, 1, 1, -1 > >::resize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, 1, -1, 1, 1, -1 > >::*method_pointer_df510f13e2da5446a7e2933982cd9622)(long int , enum ::Eigen::NoChange_t ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 1, -1, 1, 1, -1 > >::resize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, 1, -1, 1, 1, -1 > >::*method_pointer_fc1e69a1974e58058ce7f55793e48f68)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 1, -1, 1, 1, -1 > >::conservativeResize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, 1, -1, 1, 1, -1 > >::*method_pointer_184833a3cc355c939488aab072084012)(long int , enum ::Eigen::NoChange_t ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 1, -1, 1, 1, -1 > >::conservativeResize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, 1, -1, 1, 1, -1 > >::*method_pointer_026b56dd07535d4ca00ef3c24df73594)(enum ::Eigen::NoChange_t , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 1, -1, 1, 1, -1 > >::conservativeResize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, 1, -1, 1, 1, -1 > >::*method_pointer_e81afd2a670250df98671190068b793e)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 1, -1, 1, 1, -1 > >::conservativeResize;
    class ::Eigen::Matrix< int, 1, -1, 1, 1, -1 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, 1, -1, 1, 1, -1 > >::*method_pointer_25b26379ae1f5cd697b633c7cab3eb45)(long int , int  const &) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 1, -1, 1, 1, -1 > >::setConstant;
    class ::Eigen::Matrix< int, 1, -1, 1, 1, -1 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, 1, -1, 1, 1, -1 > >::*method_pointer_70440ba7397951158ecd6d24e7c331c2)(long int , long int , int  const &) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 1, -1, 1, 1, -1 > >::setConstant;
    class ::Eigen::Matrix< int, 1, -1, 1, 1, -1 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, 1, -1, 1, 1, -1 > >::*method_pointer_1fbf36885e895a3aa15feb23b2fb6c5e)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 1, -1, 1, 1, -1 > >::setZero;
    class ::Eigen::Matrix< int, 1, -1, 1, 1, -1 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, 1, -1, 1, 1, -1 > >::*method_pointer_7bc880e2cb4c5aceb248f5365eab13b1)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 1, -1, 1, 1, -1 > >::setZero;
    class ::Eigen::Matrix< int, 1, -1, 1, 1, -1 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, 1, -1, 1, 1, -1 > >::*method_pointer_e9304938bb3f58f1b03883728d01a7cc)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 1, -1, 1, 1, -1 > >::setOnes;
    class ::Eigen::Matrix< int, 1, -1, 1, 1, -1 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, 1, -1, 1, 1, -1 > >::*method_pointer_4b3fb2b4369851ae90573ef402171cdd)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 1, -1, 1, 1, -1 > >::setOnes;
    class ::Eigen::Matrix< int, 1, -1, 1, 1, -1 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, 1, -1, 1, 1, -1 > >::*method_pointer_594afd815e9e5bc7b1e0cc9620253cc0)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 1, -1, 1, 1, -1 > >::setRandom;
    class ::Eigen::Matrix< int, 1, -1, 1, 1, -1 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, 1, -1, 1, 1, -1 > >::*method_pointer_911039e67e8958b1a480d5b7460c5742)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 1, -1, 1, 1, -1 > >::setRandom;
    void  (*method_pointer_943cfd688d215374ac7f9cdb744ee79c)() = ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 1, -1, 1, 1, -1 > >::_check_template_params;
    boost::python::class_< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 1, -1, 1, 1, -1 > >, autowig::HeldType< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 1, -1, 1, 1, -1 > > >, boost::python::bases< class ::Eigen::MatrixBase< class ::Eigen::Matrix< int, 1, -1, 1, 1, -1 > > >, boost::noncopyable > class_4336cb5341e65c29b27346cf6c84e54a("_PlainObjectBase_4336cb5341e65c29b27346cf6c84e54a", "", boost::python::no_init);
    class_4336cb5341e65c29b27346cf6c84e54a.def("base", method_pointer_c63f5602c8f15daab8b3be87e6c95f44, boost::python::return_internal_reference<>(), "");
    class_4336cb5341e65c29b27346cf6c84e54a.def("base", autowig::method_decorator_c63f5602c8f15daab8b3be87e6c95f44);
    class_4336cb5341e65c29b27346cf6c84e54a.def("base", method_pointer_3f96469e65e75e5b801d43d0e91cb9f0, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_4336cb5341e65c29b27346cf6c84e54a.def("rows", method_pointer_b1e2825b693f5afaaad2b83dee409641, "");
    class_4336cb5341e65c29b27346cf6c84e54a.def("cols", method_pointer_26e46e218f3650bea88873c913eb21c2, "");
    class_4336cb5341e65c29b27346cf6c84e54a.def("coeff", method_pointer_8051aeb062ce50159434d8af8ecbef8f, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_4336cb5341e65c29b27346cf6c84e54a.def("coeff", method_pointer_ee921383a8d552d1b3c06cc7af0d5970, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_4336cb5341e65c29b27346cf6c84e54a.def("coeff_ref", method_pointer_3acaa6d394af576b8869ab52d817f40f, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_4336cb5341e65c29b27346cf6c84e54a.def("coeff_ref", autowig::method_decorator_3acaa6d394af576b8869ab52d817f40f);
    class_4336cb5341e65c29b27346cf6c84e54a.def("coeff_ref", method_pointer_01ba092a74c35c309302af558af8de2e, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_4336cb5341e65c29b27346cf6c84e54a.def("coeff_ref", autowig::method_decorator_01ba092a74c35c309302af558af8de2e);
    class_4336cb5341e65c29b27346cf6c84e54a.def("coeff_ref", method_pointer_593271c111af52649e6c1f1cb3918a1e, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_4336cb5341e65c29b27346cf6c84e54a.def("coeff_ref", method_pointer_0929e9d0affe5bb5a7251d57e97826a4, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_4336cb5341e65c29b27346cf6c84e54a.def("resize", method_pointer_b6cefc156e015a3bb00dc4598ee2fa0f, "");
    class_4336cb5341e65c29b27346cf6c84e54a.def("resize", method_pointer_38cd59daea33505fa065bbba881e7502, "");
    class_4336cb5341e65c29b27346cf6c84e54a.def("resize", method_pointer_9beb0b9fcfa451fb983a58edcef09675, "");
    class_4336cb5341e65c29b27346cf6c84e54a.def("resize", method_pointer_df510f13e2da5446a7e2933982cd9622, "");
    class_4336cb5341e65c29b27346cf6c84e54a.def("conservative_resize", method_pointer_fc1e69a1974e58058ce7f55793e48f68, "");
    class_4336cb5341e65c29b27346cf6c84e54a.def("conservative_resize", method_pointer_184833a3cc355c939488aab072084012, "");
    class_4336cb5341e65c29b27346cf6c84e54a.def("conservative_resize", method_pointer_026b56dd07535d4ca00ef3c24df73594, "");
    class_4336cb5341e65c29b27346cf6c84e54a.def("conservative_resize", method_pointer_e81afd2a670250df98671190068b793e, "");
    class_4336cb5341e65c29b27346cf6c84e54a.def("set_constant", method_pointer_25b26379ae1f5cd697b633c7cab3eb45, boost::python::return_internal_reference<>(), "");
    class_4336cb5341e65c29b27346cf6c84e54a.def("set_constant", autowig::method_decorator_25b26379ae1f5cd697b633c7cab3eb45);
    class_4336cb5341e65c29b27346cf6c84e54a.def("set_constant", method_pointer_70440ba7397951158ecd6d24e7c331c2, boost::python::return_internal_reference<>(), "");
    class_4336cb5341e65c29b27346cf6c84e54a.def("set_constant", autowig::method_decorator_70440ba7397951158ecd6d24e7c331c2);
    class_4336cb5341e65c29b27346cf6c84e54a.def("set_zero", method_pointer_1fbf36885e895a3aa15feb23b2fb6c5e, boost::python::return_internal_reference<>(), "");
    class_4336cb5341e65c29b27346cf6c84e54a.def("set_zero", autowig::method_decorator_1fbf36885e895a3aa15feb23b2fb6c5e);
    class_4336cb5341e65c29b27346cf6c84e54a.def("set_zero", method_pointer_7bc880e2cb4c5aceb248f5365eab13b1, boost::python::return_internal_reference<>(), "");
    class_4336cb5341e65c29b27346cf6c84e54a.def("set_zero", autowig::method_decorator_7bc880e2cb4c5aceb248f5365eab13b1);
    class_4336cb5341e65c29b27346cf6c84e54a.def("set_ones", method_pointer_e9304938bb3f58f1b03883728d01a7cc, boost::python::return_internal_reference<>(), "");
    class_4336cb5341e65c29b27346cf6c84e54a.def("set_ones", autowig::method_decorator_e9304938bb3f58f1b03883728d01a7cc);
    class_4336cb5341e65c29b27346cf6c84e54a.def("set_ones", method_pointer_4b3fb2b4369851ae90573ef402171cdd, boost::python::return_internal_reference<>(), "");
    class_4336cb5341e65c29b27346cf6c84e54a.def("set_ones", autowig::method_decorator_4b3fb2b4369851ae90573ef402171cdd);
    class_4336cb5341e65c29b27346cf6c84e54a.def("set_random", method_pointer_594afd815e9e5bc7b1e0cc9620253cc0, boost::python::return_internal_reference<>(), "");
    class_4336cb5341e65c29b27346cf6c84e54a.def("set_random", autowig::method_decorator_594afd815e9e5bc7b1e0cc9620253cc0);
    class_4336cb5341e65c29b27346cf6c84e54a.def("set_random", method_pointer_911039e67e8958b1a480d5b7460c5742, boost::python::return_internal_reference<>(), "");
    class_4336cb5341e65c29b27346cf6c84e54a.def("set_random", autowig::method_decorator_911039e67e8958b1a480d5b7460c5742);
    class_4336cb5341e65c29b27346cf6c84e54a.def("check_template_params", method_pointer_943cfd688d215374ac7f9cdb744ee79c, "");
    class_4336cb5341e65c29b27346cf6c84e54a.staticmethod("check_template_params");

    if(std::is_class< autowig::HeldType< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 1, -1, 1, 1, -1 > > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 1, -1, 1, 1, -1 > > >, autowig::HeldType< class ::Eigen::MatrixBase< class ::Eigen::Matrix< int, 1, -1, 1, 1, -1 > > > >();
    }

}