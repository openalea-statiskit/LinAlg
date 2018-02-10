import autowig
import itertools

def controller(asg):
    autowig.controller.plugin = 'default'
    asg = autowig.controller(asg)
    # import ipdb
    # ipdb.set_trace()
    # for cls in ['class ::Eigen::DenseBase< class ::Eigen::Matrix< int, -1, 1, 0, -1, 1 > >',
    #             'class ::Eigen::DenseBase< class ::Eigen::Matrix< int, 1, -1, 1, 1, -1 > >',
    #             'class ::Eigen::DenseBase< class ::Eigen::Array< int, 1, -1, 1, 1, -1 > >',
    #             'class ::Eigen::DenseBase< class ::Eigen::Map< class ::Eigen::Array< int, 1, -1, 1, 1, -1 >, 0, class ::Eigen::Stride< 0, 0 > > >',
    #             'class ::Eigen::DenseBase< class ::Eigen::Matrix< long int, -1, 1, 0, -1, 1 > >',
    #             'class ::Eigen::DenseBase< class ::Eigen::Matrix< long int, 1, -1, 1, 1, -1 > >',
    #             'class ::Eigen::DenseBase< class ::Eigen::Array< long int, 1, -1, 1, 1, -1 > >',
    #             'class ::Eigen::DenseBase< class ::Eigen::Map< class ::Eigen::Array< long int, 1, -1, 1, 1, -1 >, 0, class ::Eigen::Stride< 0, 0 > > >']:
    #     asg[cls].boost_python_export = False
    for dcl in asg['::Eigen::internal'].declarations(nested=True):
        dcl.boost_python_export = False
    for cls in ['class ::Eigen::DenseBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >',
                'class ::Eigen::DenseBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >',
                'class ::Eigen::DenseBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >']:
        for mtd in asg[cls].methods(access='public'):
            if mtd.localname == 'trace':
                mtd.boost_python_export = False
    for fct in asg.functions():
        if fct.localname in ['_check_template_params', 'operator()', 'operator[]']:
            fct.boost_python_export = False
    for cls in ['Vectors', 'RowVectors', 'Matrices']:
        cls = asg['::statiskit::linalg::' + cls].qualified_type.unqualified_type
        for ctr in cls.constructors():
            if ctr.nb_parameters > 0:
                ctr.boost_python_export = False
    for cls in asg['class ::std::vector'].specializations(partial=False):
        for constructor in cls.constructors():
            if not(constructor.nb_parameters == 0 or constructor.nb_parameters == 1 and constructor.parameters[0].qualified_type.unqualified_type == cls):
                if isinstance(constructor.boost_python_export, bool):
                    constructor.boost_python_export = False
    for cls in asg['class ::std::vector'].specializations(partial = False):
        for method in cls.methods():
            if method.localname in ['resize', 'shrink_to_fit', 'operator[]']:
                if isinstance(method.boost_python_export, bool):
                    method.boost_python_export = False
    for cls in asg['class ::std::move_iterator'].specializations(partial=False):
        cls.boost_python_export = False
    for cls in asg['class ::std::less'].specializations(partial = False):
        cls.boost_python_export = False
    for cls in asg['class ::std::hash'].specializations(partial = False):
        cls.boost_python_export = False
    for cls in asg['class ::std::char_traits'].specializations(partial = False):
        for mtd in cls.methods(access='public'):
            cls.boost_python_export = False
    for cls in asg['class ::std::allocator'].specializations(partial = False):
        cls.boost_python_export = False
    if 'class ::std::reverse_iterator' in asg:
        for cls in asg['class ::std::reverse_iterator'].specializations(partial = False):
            cls.boost_python_export = False
    if 'class ::std::initializer_list' in asg:
        for cls in asg['class ::std::initializer_list'].specializations(partial = False):
            cls.boost_python_export = False
    if 'class ::std::default_delete' in asg:
        for cls in asg['class ::std::default_delete'].specializations(partial = False):
            cls.boost_python_export = False
    return asg

def generator(asg, module, decorator):
    autowig.generator.plugin = 'boost_python'
    nodes = [typedef.qualified_type.unqualified_type for typedef in asg['::statiskit::linalg'].typedefs()]
    nodes = list(itertools.chain(*[node.bases(inherited=True) for node in nodes])) + nodes + asg['::statiskit::linalg'].declarations()
    wrappers = autowig.generator(asg, nodes, module=module,
                                             decorator=decorator,
                                             closure=False,
                                             helder='std::shared_ptr')
    return wrappers