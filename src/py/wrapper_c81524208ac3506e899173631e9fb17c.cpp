#include "_ieigen.h"


namespace autowig
{
    void method_decorator_ef7f2cb727be5570bef21fe233509353(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 > > & instance, class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 > >  & param_out)
    { instance.base() = param_out; }
    void method_decorator_2ac803de9e485fa1bfde874236a26825(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 > > & instance, long int  param_in_0, long int  param_in_1, struct ::std::complex< float >  & param_out)
    { instance.coeffRef(param_in_0, param_in_1) = param_out; }
    void method_decorator_6d807355437b5422b3df7af65d363e3b(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 > > & instance, long int  param_in_0, struct ::std::complex< float >  & param_out)
    { instance.coeffRef(param_in_0) = param_out; }
    void method_decorator_43c7c2eaef21561abcce775de0f112d3(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 > > & instance, long int  param_in_0, struct ::std::complex< float >  const & param_in_1, class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 >  & param_out)
    { instance.setConstant(param_in_0, param_in_1) = param_out; }
    void method_decorator_a7a305261bcb57ffa2baaf1d81a23508(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 > > & instance, long int  param_in_0, long int  param_in_1, struct ::std::complex< float >  const & param_in_2, class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 >  & param_out)
    { instance.setConstant(param_in_0, param_in_1, param_in_2) = param_out; }
    void method_decorator_b5c8a5b30984513d80831c011e6cdb28(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 > > & instance, long int  param_in_0, class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 >  & param_out)
    { instance.setZero(param_in_0) = param_out; }
    void method_decorator_e8fbaee4edeb50369ebcc2103073be60(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 > > & instance, long int  param_in_0, long int  param_in_1, class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 >  & param_out)
    { instance.setZero(param_in_0, param_in_1) = param_out; }
    void method_decorator_43b8b71e811d527b9285465844460e33(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 > > & instance, long int  param_in_0, class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 >  & param_out)
    { instance.setOnes(param_in_0) = param_out; }
    void method_decorator_f196b7aa14335529a1264cbd0660648a(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 > > & instance, long int  param_in_0, long int  param_in_1, class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 >  & param_out)
    { instance.setOnes(param_in_0, param_in_1) = param_out; }
    void method_decorator_296a77416001581389c3b20982bada8a(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 > > & instance, long int  param_in_0, class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 >  & param_out)
    { instance.setRandom(param_in_0) = param_out; }
    void method_decorator_7971e2b8cfa1505b8d650fd76d055e99(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 > > & instance, long int  param_in_0, long int  param_in_1, class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 >  & param_out)
    { instance.setRandom(param_in_0, param_in_1) = param_out; }
}


void wrapper_c81524208ac3506e899173631e9fb17c()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 > >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, 1, 3, 1, 1, 3 > >::*method_pointer_ef7f2cb727be5570bef21fe233509353)() = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 > >::base;
    class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 > >  const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, 1, 3, 1, 1, 3 > >::*method_pointer_2df0f08c25ba50cfb40c96ceaf4df9c7)() const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 > >::base;
    long int  (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, 1, 3, 1, 1, 3 > >::*method_pointer_a71967b757305c6692992b3016696c6f)() const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 > >::rows;
    long int  (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, 1, 3, 1, 1, 3 > >::*method_pointer_df786256bbf655a49ca7ee5d4b2ced9d)() const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 > >::cols;
    struct ::std::complex< float >  const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, 1, 3, 1, 1, 3 > >::*method_pointer_8d1273c2de0f5164a38c81e04cc79015)(long int , long int ) const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 > >::coeff;
    struct ::std::complex< float >  const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, 1, 3, 1, 1, 3 > >::*method_pointer_25b414d8cc2c5ff5b757bd117058744b)(long int ) const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 > >::coeff;
    struct ::std::complex< float >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, 1, 3, 1, 1, 3 > >::*method_pointer_2ac803de9e485fa1bfde874236a26825)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 > >::coeffRef;
    struct ::std::complex< float >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, 1, 3, 1, 1, 3 > >::*method_pointer_6d807355437b5422b3df7af65d363e3b)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 > >::coeffRef;
    struct ::std::complex< float >  const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, 1, 3, 1, 1, 3 > >::*method_pointer_f8a9e91859b0586a9efebd8f66429229)(long int , long int ) const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 > >::coeffRef;
    struct ::std::complex< float >  const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, 1, 3, 1, 1, 3 > >::*method_pointer_84eb0a6ab95258a49adae0a407b0519c)(long int ) const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 > >::coeffRef;
    struct ::std::complex< float >  const * (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, 1, 3, 1, 1, 3 > >::*method_pointer_72483651d21c531ca93c563293f2badb)() const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 > >::data;
    struct ::std::complex< float >  * (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, 1, 3, 1, 1, 3 > >::*method_pointer_ad0600c94c5450baa82f7d1c29dfc404)() = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 > >::data;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, 1, 3, 1, 1, 3 > >::*method_pointer_c6ab674b39e05b678e91d2b91bbdd882)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 > >::resize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, 1, 3, 1, 1, 3 > >::*method_pointer_3a66cb7ce1b85e248e13856d87270574)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 > >::resize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, 1, 3, 1, 1, 3 > >::*method_pointer_7adf4e844f0d58708e8e21484bef2c4b)(enum ::Eigen::NoChange_t , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 > >::resize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, 1, 3, 1, 1, 3 > >::*method_pointer_da865de86006585f82ad8aac504fe332)(long int , enum ::Eigen::NoChange_t ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 > >::resize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, 1, 3, 1, 1, 3 > >::*method_pointer_a360763162995b5895ca62e662160118)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 > >::conservativeResize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, 1, 3, 1, 1, 3 > >::*method_pointer_6058ddef848f5b108370a7b64282887e)(long int , enum ::Eigen::NoChange_t ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 > >::conservativeResize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, 1, 3, 1, 1, 3 > >::*method_pointer_3aa32fc1d0a459a99136e39100a8fc73)(enum ::Eigen::NoChange_t , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 > >::conservativeResize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, 1, 3, 1, 1, 3 > >::*method_pointer_7a1e55546bc25254bbe0e51f3c1a4ffe)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 > >::conservativeResize;
    class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, 1, 3, 1, 1, 3 > >::*method_pointer_43c7c2eaef21561abcce775de0f112d3)(long int , struct ::std::complex< float >  const &) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 > >::setConstant;
    class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, 1, 3, 1, 1, 3 > >::*method_pointer_a7a305261bcb57ffa2baaf1d81a23508)(long int , long int , struct ::std::complex< float >  const &) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 > >::setConstant;
    class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, 1, 3, 1, 1, 3 > >::*method_pointer_b5c8a5b30984513d80831c011e6cdb28)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 > >::setZero;
    class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, 1, 3, 1, 1, 3 > >::*method_pointer_e8fbaee4edeb50369ebcc2103073be60)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 > >::setZero;
    class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, 1, 3, 1, 1, 3 > >::*method_pointer_43b8b71e811d527b9285465844460e33)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 > >::setOnes;
    class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, 1, 3, 1, 1, 3 > >::*method_pointer_f196b7aa14335529a1264cbd0660648a)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 > >::setOnes;
    class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, 1, 3, 1, 1, 3 > >::*method_pointer_296a77416001581389c3b20982bada8a)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 > >::setRandom;
    class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, 1, 3, 1, 1, 3 > >::*method_pointer_7971e2b8cfa1505b8d650fd76d055e99)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 > >::setRandom;
    void  (*method_pointer_388d47aef66557f8a730e808d81954cb)() = ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 > >::_check_template_params;
    boost::python::class_< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 > >, autowig::HeldType< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 > > >, boost::python::bases< class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 > > > > class_c81524208ac3506e899173631e9fb17c("_PlainObjectBase_c81524208ac3506e899173631e9fb17c", "", boost::python::no_init);
    class_c81524208ac3506e899173631e9fb17c.def("base", method_pointer_ef7f2cb727be5570bef21fe233509353, boost::python::return_internal_reference<>(), "");
    class_c81524208ac3506e899173631e9fb17c.def("base", autowig::method_decorator_ef7f2cb727be5570bef21fe233509353);
    class_c81524208ac3506e899173631e9fb17c.def("base", method_pointer_2df0f08c25ba50cfb40c96ceaf4df9c7, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_c81524208ac3506e899173631e9fb17c.def("rows", method_pointer_a71967b757305c6692992b3016696c6f, "");
    class_c81524208ac3506e899173631e9fb17c.def("cols", method_pointer_df786256bbf655a49ca7ee5d4b2ced9d, "");
    class_c81524208ac3506e899173631e9fb17c.def("coeff", method_pointer_8d1273c2de0f5164a38c81e04cc79015, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_c81524208ac3506e899173631e9fb17c.def("coeff", method_pointer_25b414d8cc2c5ff5b757bd117058744b, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_c81524208ac3506e899173631e9fb17c.def("coeff_ref", method_pointer_2ac803de9e485fa1bfde874236a26825, boost::python::return_internal_reference<>(), "");
    class_c81524208ac3506e899173631e9fb17c.def("coeff_ref", autowig::method_decorator_2ac803de9e485fa1bfde874236a26825);
    class_c81524208ac3506e899173631e9fb17c.def("coeff_ref", method_pointer_6d807355437b5422b3df7af65d363e3b, boost::python::return_internal_reference<>(), "");
    class_c81524208ac3506e899173631e9fb17c.def("coeff_ref", autowig::method_decorator_6d807355437b5422b3df7af65d363e3b);
    class_c81524208ac3506e899173631e9fb17c.def("coeff_ref", method_pointer_f8a9e91859b0586a9efebd8f66429229, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_c81524208ac3506e899173631e9fb17c.def("coeff_ref", method_pointer_84eb0a6ab95258a49adae0a407b0519c, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_c81524208ac3506e899173631e9fb17c.def("data", method_pointer_72483651d21c531ca93c563293f2badb, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_c81524208ac3506e899173631e9fb17c.def("data", method_pointer_ad0600c94c5450baa82f7d1c29dfc404, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_c81524208ac3506e899173631e9fb17c.def("resize", method_pointer_c6ab674b39e05b678e91d2b91bbdd882, "");
    class_c81524208ac3506e899173631e9fb17c.def("resize", method_pointer_3a66cb7ce1b85e248e13856d87270574, "");
    class_c81524208ac3506e899173631e9fb17c.def("resize", method_pointer_7adf4e844f0d58708e8e21484bef2c4b, "");
    class_c81524208ac3506e899173631e9fb17c.def("resize", method_pointer_da865de86006585f82ad8aac504fe332, "");
    class_c81524208ac3506e899173631e9fb17c.def("conservative_resize", method_pointer_a360763162995b5895ca62e662160118, "");
    class_c81524208ac3506e899173631e9fb17c.def("conservative_resize", method_pointer_6058ddef848f5b108370a7b64282887e, "");
    class_c81524208ac3506e899173631e9fb17c.def("conservative_resize", method_pointer_3aa32fc1d0a459a99136e39100a8fc73, "");
    class_c81524208ac3506e899173631e9fb17c.def("conservative_resize", method_pointer_7a1e55546bc25254bbe0e51f3c1a4ffe, "");
    class_c81524208ac3506e899173631e9fb17c.def("set_constant", method_pointer_43c7c2eaef21561abcce775de0f112d3, boost::python::return_internal_reference<>(), "");
    class_c81524208ac3506e899173631e9fb17c.def("set_constant", autowig::method_decorator_43c7c2eaef21561abcce775de0f112d3);
    class_c81524208ac3506e899173631e9fb17c.def("set_constant", method_pointer_a7a305261bcb57ffa2baaf1d81a23508, boost::python::return_internal_reference<>(), "");
    class_c81524208ac3506e899173631e9fb17c.def("set_constant", autowig::method_decorator_a7a305261bcb57ffa2baaf1d81a23508);
    class_c81524208ac3506e899173631e9fb17c.def("set_zero", method_pointer_b5c8a5b30984513d80831c011e6cdb28, boost::python::return_internal_reference<>(), "");
    class_c81524208ac3506e899173631e9fb17c.def("set_zero", autowig::method_decorator_b5c8a5b30984513d80831c011e6cdb28);
    class_c81524208ac3506e899173631e9fb17c.def("set_zero", method_pointer_e8fbaee4edeb50369ebcc2103073be60, boost::python::return_internal_reference<>(), "");
    class_c81524208ac3506e899173631e9fb17c.def("set_zero", autowig::method_decorator_e8fbaee4edeb50369ebcc2103073be60);
    class_c81524208ac3506e899173631e9fb17c.def("set_ones", method_pointer_43b8b71e811d527b9285465844460e33, boost::python::return_internal_reference<>(), "");
    class_c81524208ac3506e899173631e9fb17c.def("set_ones", autowig::method_decorator_43b8b71e811d527b9285465844460e33);
    class_c81524208ac3506e899173631e9fb17c.def("set_ones", method_pointer_f196b7aa14335529a1264cbd0660648a, boost::python::return_internal_reference<>(), "");
    class_c81524208ac3506e899173631e9fb17c.def("set_ones", autowig::method_decorator_f196b7aa14335529a1264cbd0660648a);
    class_c81524208ac3506e899173631e9fb17c.def("set_random", method_pointer_296a77416001581389c3b20982bada8a, boost::python::return_internal_reference<>(), "");
    class_c81524208ac3506e899173631e9fb17c.def("set_random", autowig::method_decorator_296a77416001581389c3b20982bada8a);
    class_c81524208ac3506e899173631e9fb17c.def("set_random", method_pointer_7971e2b8cfa1505b8d650fd76d055e99, boost::python::return_internal_reference<>(), "");
    class_c81524208ac3506e899173631e9fb17c.def("set_random", autowig::method_decorator_7971e2b8cfa1505b8d650fd76d055e99);
    class_c81524208ac3506e899173631e9fb17c.def("check_template_params", method_pointer_388d47aef66557f8a730e808d81954cb, "");
    class_c81524208ac3506e899173631e9fb17c.staticmethod("check_template_params");

    if(std::is_class< autowig::HeldType< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 > > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 > > >, autowig::HeldType< class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 > > > >();
    }

}