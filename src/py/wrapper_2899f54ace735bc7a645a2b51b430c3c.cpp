#include "_ieigen.h"


namespace autowig
{
    void method_decorator_21aa0dc877835f10ad00078cd2fc5368(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > > & instance, class ::Eigen::MatrixBase< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >  & param_out)     { instance.base() = param_out; }
    void method_decorator_6ffdc6d393725fc294acfcff92ff2cf1(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > > & instance, long int  param_in_0, long int  param_in_1, const float  & param_out)     { instance.coeffRef(param_in_0, param_in_1) = param_out; }
    void method_decorator_547bd35be5405c3490030a84514a1ccc(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > > & instance, long int  param_in_0, const float  & param_out)     { instance.coeffRef(param_in_0) = param_out; }
// TODO     void method_decorator_55e49f73c5f355b8a1dc66a902c8a72b(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > > & instance, long int  param_in_0, float  const & param_in_1, class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 >  & param_out)     { instance.setConstant(param_in_0, param_in_1) = param_out; }
    void method_decorator_4407d25c52df53fe9cdf6a1a7cace013(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > > & instance, long int  param_in_0, long int  param_in_1, float  const & param_in_2, class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 >  & param_out)     { instance.setConstant(param_in_0, param_in_1, param_in_2) = param_out; }
// TODO // TODO     void method_decorator_de63d63d896c5ceebd415cca62a52d22(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > > & instance, long int  param_in_0, class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 >  & param_out)     { instance.setZero(param_in_0) = param_out; }
    void method_decorator_44e2ebb7ae875b4da1d9e0f44cc5955a(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > > & instance, long int  param_in_0, long int  param_in_1, class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 >  & param_out)     { instance.setZero(param_in_0, param_in_1) = param_out; }
// TODO // TODO     void method_decorator_0558a663c3825b7b90fe190769e7dd97(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > > & instance, long int  param_in_0, class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 >  & param_out)     { instance.setOnes(param_in_0) = param_out; }
    void method_decorator_59c73dd750c853f18979821ec754034b(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > > & instance, long int  param_in_0, long int  param_in_1, class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 >  & param_out)     { instance.setOnes(param_in_0, param_in_1) = param_out; }
// TODO     void method_decorator_0bacb79ee6935eb8ac3fa10128857db7(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > > & instance, long int  param_in_0, class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 >  & param_out)     { instance.setRandom(param_in_0) = param_out; }
    void method_decorator_0a2eff23d4815f4d819720dae18f3642(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > > & instance, long int  param_in_0, long int  param_in_1, class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 >  & param_out)     { instance.setRandom(param_in_0, param_in_1) = param_out; }
}


void wrapper_2899f54ace735bc7a645a2b51b430c3c()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    class ::Eigen::MatrixBase< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::*method_pointer_21aa0dc877835f10ad00078cd2fc5368)() = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::base;
    class ::Eigen::MatrixBase< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >  const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::*method_pointer_946144cb0d075dba95613122bc4e3dc7)() const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::base;
    long int  (::Eigen::PlainObjectBase< ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::*method_pointer_018a5a1b703f5d2fbf7ae1a5be5d8abe)() const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::rows;
    long int  (::Eigen::PlainObjectBase< ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::*method_pointer_f6d7388fe5c65fb69797604fbf364535)() const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::cols;
    float  const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::*method_pointer_a34973f7ff5d530694df653fd5bada70)(long int , long int ) const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::coeff;
    float  const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::*method_pointer_6bf4f94c676a504b8fd4f3d2742d406d)(long int ) const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::coeff;
    float  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::*method_pointer_6ffdc6d393725fc294acfcff92ff2cf1)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::coeffRef;
    float  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::*method_pointer_547bd35be5405c3490030a84514a1ccc)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::coeffRef;
    float  const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::*method_pointer_ba5f3353d2865d6692f3441837303e22)(long int , long int ) const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::coeffRef;
    float  const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::*method_pointer_01f4bad7eccd533f881ab8d7a9b7989e)(long int ) const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::coeffRef;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::*method_pointer_6b9b0eb4d05a5f99abef29574582849c)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::resize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::*method_pointer_975bfd545feb5dc9924ddc74b65c0995)(enum ::Eigen::NoChange_t , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::resize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::*method_pointer_537a81abd0895c0e82b257e177e9c2ba)(long int , enum ::Eigen::NoChange_t ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::resize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::*method_pointer_a8163f32a05a56419a1dd182ccb6bfb7)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::conservativeResize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::*method_pointer_e9fa2375e2045f71bd6f0304a7e6e013)(long int , enum ::Eigen::NoChange_t ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::conservativeResize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::*method_pointer_a1dabc9d38b154b98458e877ba362554)(enum ::Eigen::NoChange_t , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::conservativeResize;
// TODO     class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::*method_pointer_55e49f73c5f355b8a1dc66a902c8a72b)(long int , float  const &) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::setConstant;
    class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::*method_pointer_4407d25c52df53fe9cdf6a1a7cace013)(long int , long int , float  const &) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::setConstant;
// TODO     class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::*method_pointer_de63d63d896c5ceebd415cca62a52d22)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::setZero;
    class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::*method_pointer_44e2ebb7ae875b4da1d9e0f44cc5955a)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::setZero;
// TODO     class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::*method_pointer_0558a663c3825b7b90fe190769e7dd97)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::setOnes;
    class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::*method_pointer_59c73dd750c853f18979821ec754034b)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::setOnes;
// TODO     class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::*method_pointer_0bacb79ee6935eb8ac3fa10128857db7)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::setRandom;
    class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::*method_pointer_0a2eff23d4815f4d819720dae18f3642)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::setRandom;
    void  (*method_pointer_9d5d11f9015d5b7ba0384b90e9b039d9)() = ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::_check_template_params;
    boost::python::class_< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >, autowig::HeldType< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > > >, boost::python::bases< class ::Eigen::MatrixBase< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > > >, boost::noncopyable > class_2899f54ace735bc7a645a2b51b430c3c("_PlainObjectBase_2899f54ace735bc7a645a2b51b430c3c", "", boost::python::no_init);
    class_2899f54ace735bc7a645a2b51b430c3c.def("base", method_pointer_21aa0dc877835f10ad00078cd2fc5368, boost::python::return_internal_reference<>(), "");
    class_2899f54ace735bc7a645a2b51b430c3c.def("base", autowig::method_decorator_21aa0dc877835f10ad00078cd2fc5368);
    class_2899f54ace735bc7a645a2b51b430c3c.def("base", method_pointer_946144cb0d075dba95613122bc4e3dc7, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_2899f54ace735bc7a645a2b51b430c3c.def("rows", method_pointer_018a5a1b703f5d2fbf7ae1a5be5d8abe, "");
    class_2899f54ace735bc7a645a2b51b430c3c.def("cols", method_pointer_f6d7388fe5c65fb69797604fbf364535, "");
    class_2899f54ace735bc7a645a2b51b430c3c.def("coeff", method_pointer_a34973f7ff5d530694df653fd5bada70, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_2899f54ace735bc7a645a2b51b430c3c.def("coeff", method_pointer_6bf4f94c676a504b8fd4f3d2742d406d, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_2899f54ace735bc7a645a2b51b430c3c.def("coeff_ref", method_pointer_6ffdc6d393725fc294acfcff92ff2cf1, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_2899f54ace735bc7a645a2b51b430c3c.def("coeff_ref", autowig::method_decorator_6ffdc6d393725fc294acfcff92ff2cf1);
    class_2899f54ace735bc7a645a2b51b430c3c.def("coeff_ref", method_pointer_547bd35be5405c3490030a84514a1ccc, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_2899f54ace735bc7a645a2b51b430c3c.def("coeff_ref", autowig::method_decorator_547bd35be5405c3490030a84514a1ccc);
    class_2899f54ace735bc7a645a2b51b430c3c.def("coeff_ref", method_pointer_ba5f3353d2865d6692f3441837303e22, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_2899f54ace735bc7a645a2b51b430c3c.def("coeff_ref", method_pointer_01f4bad7eccd533f881ab8d7a9b7989e, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_2899f54ace735bc7a645a2b51b430c3c.def("resize", method_pointer_6b9b0eb4d05a5f99abef29574582849c, "");
    class_2899f54ace735bc7a645a2b51b430c3c.def("resize", method_pointer_975bfd545feb5dc9924ddc74b65c0995, "");
    class_2899f54ace735bc7a645a2b51b430c3c.def("resize", method_pointer_537a81abd0895c0e82b257e177e9c2ba, "");
    class_2899f54ace735bc7a645a2b51b430c3c.def("conservative_resize", method_pointer_a8163f32a05a56419a1dd182ccb6bfb7, "");
    class_2899f54ace735bc7a645a2b51b430c3c.def("conservative_resize", method_pointer_e9fa2375e2045f71bd6f0304a7e6e013, "");
    class_2899f54ace735bc7a645a2b51b430c3c.def("conservative_resize", method_pointer_a1dabc9d38b154b98458e877ba362554, "");
// TODO     class_2899f54ace735bc7a645a2b51b430c3c.def("set_constant", method_pointer_55e49f73c5f355b8a1dc66a902c8a72b, boost::python::return_internal_reference<>(), "");
// TODO // TODO     class_2899f54ace735bc7a645a2b51b430c3c.def("set_constant", autowig::method_decorator_55e49f73c5f355b8a1dc66a902c8a72b);
    class_2899f54ace735bc7a645a2b51b430c3c.def("set_constant", method_pointer_4407d25c52df53fe9cdf6a1a7cace013, boost::python::return_internal_reference<>(), "");
    class_2899f54ace735bc7a645a2b51b430c3c.def("set_constant", autowig::method_decorator_4407d25c52df53fe9cdf6a1a7cace013);
// TODO     class_2899f54ace735bc7a645a2b51b430c3c.def("set_zero", method_pointer_de63d63d896c5ceebd415cca62a52d22, boost::python::return_internal_reference<>(), "");
// TODO // TODO     class_2899f54ace735bc7a645a2b51b430c3c.def("set_zero", autowig::method_decorator_de63d63d896c5ceebd415cca62a52d22);
    class_2899f54ace735bc7a645a2b51b430c3c.def("set_zero", method_pointer_44e2ebb7ae875b4da1d9e0f44cc5955a, boost::python::return_internal_reference<>(), "");
    class_2899f54ace735bc7a645a2b51b430c3c.def("set_zero", autowig::method_decorator_44e2ebb7ae875b4da1d9e0f44cc5955a);
// TODO     class_2899f54ace735bc7a645a2b51b430c3c.def("set_ones", method_pointer_0558a663c3825b7b90fe190769e7dd97, boost::python::return_internal_reference<>(), "");
// TODO     class_2899f54ace735bc7a645a2b51b430c3c.def("set_ones", autowig::method_decorator_0558a663c3825b7b90fe190769e7dd97);
    class_2899f54ace735bc7a645a2b51b430c3c.def("set_ones", method_pointer_59c73dd750c853f18979821ec754034b, boost::python::return_internal_reference<>(), "");
    class_2899f54ace735bc7a645a2b51b430c3c.def("set_ones", autowig::method_decorator_59c73dd750c853f18979821ec754034b);
// TODO     class_2899f54ace735bc7a645a2b51b430c3c.def("set_random", method_pointer_0bacb79ee6935eb8ac3fa10128857db7, boost::python::return_internal_reference<>(), "");
// TODO     class_2899f54ace735bc7a645a2b51b430c3c.def("set_random", autowig::method_decorator_0bacb79ee6935eb8ac3fa10128857db7);
    class_2899f54ace735bc7a645a2b51b430c3c.def("set_random", method_pointer_0a2eff23d4815f4d819720dae18f3642, boost::python::return_internal_reference<>(), "");
    class_2899f54ace735bc7a645a2b51b430c3c.def("set_random", autowig::method_decorator_0a2eff23d4815f4d819720dae18f3642);
    class_2899f54ace735bc7a645a2b51b430c3c.def("check_template_params", method_pointer_9d5d11f9015d5b7ba0384b90e9b039d9, "");
    class_2899f54ace735bc7a645a2b51b430c3c.staticmethod("check_template_params");

    if(std::is_class< autowig::HeldType< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > > >, autowig::HeldType< class ::Eigen::MatrixBase< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > > > >();
    }

}