(in-package :pvs)

(defun num_non_terminals () 255)
(defun _num_non_terminals () 255)
(defun num_non_terminals! () 255)
(defstruct (fail_2 (:constructor make-fail_2 nil) (:predicate fail_2?)))
(defstruct (pending_2 (:constructor make-pending_2 nil)
            (:predicate pending_2?)))
(defstruct (loop_2 (:constructor make-loop_2 nil) (:predicate loop_2?)))
(defun make-good_2_unary ()
  (lambda (x8192) (let ((span x8192)) (make-good_2 span))))
(defstruct (good_2 (:constructor make-good_2 (span))
            (:predicate good_2?))
  span)
(defun ent_ord ()
  #'(lambda (x)
      (if (the boolean (fail_2? x))
          0
        (if (the boolean (pending_2? x))
            1
          (if (the boolean (loop_2? x)) 2 3)))))
(defun _ent_ord (x)
  (if (the boolean (fail_2? x))
      0
    (if (the boolean (pending_2? x))
        1
      (if (the boolean (loop_2? x)) 2 3))))
(defun ent_ord! (x)
  (if (the boolean (fail_2? x))
      0
    (if (the boolean (pending_2? x))
        1
      (if (the boolean (loop_2? x)) 2 3))))
(defun ent_subterm ()
  #'(lambda (lamvar#0)
      (let ((x (project 1 lamvar#0)) (y (project 2 lamvar#0)))
        (the boolean (pvs__= x y)))))
(defun _ent_subterm (x y) (the boolean (pvs__= x y)))
(defun ent_subterm! (x y) (the boolean (pvs__= x y)))
(defun ent_<< ()
  #'(lambda (lamvar#0)
      (let ((x (project 1 lamvar#0)) (y (project 2 lamvar#0)))
        (the boolean nil))))
(defun _ent_<< (x y) (the boolean nil))
(defun ent_<<! (x y) (the boolean nil))
(defun ent_reduce_nat ()
  #'(lambda (lamvar#0)
      (let ((fail?_fun (project 1 lamvar#0))
            (pending?_fun (project 2 lamvar#0))
            (loop?_fun (project 3 lamvar#0))
            (good?_fun (project 4 lamvar#0)))
        (declare (type (integer 0) fail?_fun)
         (type (integer 0) pending?_fun) (type (integer 0) loop?_fun))
        #'(lambda (ent_adtvar)
            (the (integer 0)
                 (let ((red
                        (pvs-funcall (ent_reduce_nat)
                                     (the
                                      (simple-array t)
                                      (pvs2cl_tuple
                                       (the (integer 0) fail?_fun)
                                       (the (integer 0) pending?_fun)
                                       (the (integer 0) loop?_fun)
                                       good?_fun)))))
                   (declare (type nil red))
                   (the (integer 0)
                        (the (integer 0)
                             (if (the boolean (fail_2? ent_adtvar))
                                 (the (integer 0) fail?_fun)
                               (the
                                (integer 0)
                                (if
                                 (the boolean (pending_2? ent_adtvar))
                                 (the (integer 0) pending?_fun)
                                 (the
                                  (integer 0)
                                  (if
                                   (the boolean (loop_2? ent_adtvar))
                                   (the (integer 0) loop?_fun)
                                   (the
                                    (integer 0)
                                    (pvs-funcall
                                     good?_fun
                                     (the
                                      (integer 0)
                                      (good_2-span
                                       ent_adtvar)))))))))))))))))
(defun _ent_reduce_nat
    (fail?_fun pending?_fun loop?_fun good?_fun ent_adtvar)
  (declare (type (integer 0) fail?_fun) (type (integer 0) pending?_fun)
   (type (integer 0) loop?_fun))
  (the (integer 0)
       (let ((red
              (pvs-funcall (ent_reduce_nat)
                           (the (simple-array t)
                                (pvs2cl_tuple
                                 (the (integer 0) fail?_fun)
                                 (the (integer 0) pending?_fun)
                                 (the (integer 0) loop?_fun)
                                 good?_fun)))))
         (declare (type nil red))
         (the (integer 0)
              (the (integer 0)
                   (if (the boolean (fail_2? ent_adtvar))
                       (the (integer 0) fail?_fun)
                     (the (integer 0)
                          (if (the boolean (pending_2? ent_adtvar))
                              (the (integer 0) pending?_fun)
                            (the (integer 0)
                                 (if
                                  (the boolean (loop_2? ent_adtvar))
                                  (the (integer 0) loop?_fun)
                                  (the
                                   (integer 0)
                                   (pvs-funcall
                                    good?_fun
                                    (the
                                     (integer 0)
                                     (good_2-span
                                      ent_adtvar))))))))))))))
(defun ent_reduce_nat!
    (fail?_fun pending?_fun loop?_fun good?_fun ent_adtvar)
  (declare (type (integer 0) fail?_fun) (type (integer 0) pending?_fun)
   (type (integer 0) loop?_fun))
  (the (integer 0)
       (let ((red
              (pvs-funcall (ent_reduce_nat)
                           (the (simple-array t)
                                (pvs2cl_tuple
                                 (the (integer 0) fail?_fun)
                                 (the (integer 0) pending?_fun)
                                 (the (integer 0) loop?_fun)
                                 good?_fun)))))
         (declare (type nil red))
         (the (integer 0)
              (the (integer 0)
                   (if (the boolean (fail_2? ent_adtvar))
                       (the (integer 0) fail?_fun)
                     (the (integer 0)
                          (if (the boolean (pending_2? ent_adtvar))
                              (the (integer 0) pending?_fun)
                            (the (integer 0)
                                 (if
                                  (the boolean (loop_2? ent_adtvar))
                                  (the (integer 0) loop?_fun)
                                  (the
                                   (integer 0)
                                   (pvs-funcall
                                    good?_fun
                                    (the
                                     (integer 0)
                                     (good_2-span
                                      ent_adtvar))))))))))))))
(defun ent_REDUCE_nat ()
  #'(lambda (lamvar#0)
      (let ((fail?_fun (project 1 lamvar#0))
            (pending?_fun (project 2 lamvar#0))
            (loop?_fun (project 3 lamvar#0))
            (good?_fun (project 4 lamvar#0)))
        #'(lambda (ent_adtvar)
            (the (integer 0)
                 (let ((red
                        (pvs-funcall (ent_REDUCE_nat)
                                     (the
                                      (simple-array t)
                                      (pvs2cl_tuple
                                       fail?_fun
                                       pending?_fun
                                       loop?_fun
                                       good?_fun)))))
                   (declare (type nil red))
                   (the (integer 0)
                        (the (integer 0)
                             (if (the boolean (fail_2? ent_adtvar))
                                 (the
                                  (integer 0)
                                  (pvs-funcall fail?_fun ent_adtvar))
                               (the
                                (integer 0)
                                (if
                                 (the boolean (pending_2? ent_adtvar))
                                 (the
                                  (integer 0)
                                  (pvs-funcall
                                   pending?_fun
                                   ent_adtvar))
                                 (the
                                  (integer 0)
                                  (if
                                   (the boolean (loop_2? ent_adtvar))
                                   (the
                                    (integer 0)
                                    (pvs-funcall loop?_fun ent_adtvar))
                                   (the
                                    (integer 0)
                                    (pvs-funcall
                                     good?_fun
                                     (the
                                      (simple-array t)
                                      (pvs2cl_tuple
                                       (the
                                        (integer 0)
                                        (good_2-span ent_adtvar))
                                       ent_adtvar)))))))))))))))))
(defun _ent_REDUCE_nat
    (fail?_fun pending?_fun loop?_fun good?_fun ent_adtvar)
  (the (integer 0)
       (let ((red
              (pvs-funcall (ent_REDUCE_nat)
                           (the (simple-array t)
                                (pvs2cl_tuple
                                 fail?_fun
                                 pending?_fun
                                 loop?_fun
                                 good?_fun)))))
         (declare (type nil red))
         (the (integer 0)
              (the (integer 0)
                   (if (the boolean (fail_2? ent_adtvar))
                       (the (integer 0)
                            (pvs-funcall fail?_fun ent_adtvar))
                     (the (integer 0)
                          (if (the boolean (pending_2? ent_adtvar))
                              (the (integer 0)
                                   (pvs-funcall
                                    pending?_fun
                                    ent_adtvar))
                            (the (integer 0)
                                 (if
                                  (the boolean (loop_2? ent_adtvar))
                                  (the
                                   (integer 0)
                                   (pvs-funcall loop?_fun ent_adtvar))
                                  (the
                                   (integer 0)
                                   (pvs-funcall
                                    good?_fun
                                    (the
                                     (simple-array t)
                                     (pvs2cl_tuple
                                      (the
                                       (integer 0)
                                       (good_2-span ent_adtvar))
                                      ent_adtvar))))))))))))))
(defun ent_REDUCE_nat!
    (fail?_fun pending?_fun loop?_fun good?_fun ent_adtvar)
  (the (integer 0)
       (let ((red
              (pvs-funcall (ent_REDUCE_nat)
                           (the (simple-array t)
                                (pvs2cl_tuple
                                 fail?_fun
                                 pending?_fun
                                 loop?_fun
                                 good?_fun)))))
         (declare (type nil red))
         (the (integer 0)
              (the (integer 0)
                   (if (the boolean (fail_2? ent_adtvar))
                       (the (integer 0)
                            (pvs-funcall fail?_fun ent_adtvar))
                     (the (integer 0)
                          (if (the boolean (pending_2? ent_adtvar))
                              (the (integer 0)
                                   (pvs-funcall
                                    pending?_fun
                                    ent_adtvar))
                            (the (integer 0)
                                 (if
                                  (the boolean (loop_2? ent_adtvar))
                                  (the
                                   (integer 0)
                                   (pvs-funcall loop?_fun ent_adtvar))
                                  (the
                                   (integer 0)
                                   (pvs-funcall
                                    good?_fun
                                    (the
                                     (simple-array t)
                                     (pvs2cl_tuple
                                      (the
                                       (integer 0)
                                       (good_2-span ent_adtvar))
                                      ent_adtvar))))))))))))))
(defun ent_reduce_ordinal ()
  #'(lambda (lamvar#0)
      (let ((fail?_fun (project 1 lamvar#0))
            (pending?_fun (project 2 lamvar#0))
            (loop?_fun (project 3 lamvar#0))
            (good?_fun (project 4 lamvar#0)))
        #'(lambda (ent_adtvar)
            (let ((red
                   (pvs-funcall (ent_reduce_ordinal)
                                (the
                                 (simple-array t)
                                 (pvs2cl_tuple
                                  fail?_fun
                                  pending?_fun
                                  loop?_fun
                                  good?_fun)))))
              (declare (type nil red))
              (if (the boolean (fail_2? ent_adtvar))
                  fail?_fun
                (if (the boolean (pending_2? ent_adtvar))
                    pending?_fun
                  (if (the boolean (loop_2? ent_adtvar))
                      loop?_fun
                    (pvs-funcall good?_fun
                                 (the
                                  (integer 0)
                                  (good_2-span ent_adtvar)))))))))))
(defun _ent_reduce_ordinal
    (fail?_fun pending?_fun loop?_fun good?_fun ent_adtvar)
  (let ((red
         (pvs-funcall (ent_reduce_ordinal)
                      (the (simple-array t)
                           (pvs2cl_tuple fail?_fun pending?_fun
                                         loop?_fun good?_fun)))))
    (declare (type nil red))
    (if (the boolean (fail_2? ent_adtvar))
        fail?_fun
      (if (the boolean (pending_2? ent_adtvar))
          pending?_fun
        (if (the boolean (loop_2? ent_adtvar))
            loop?_fun
          (pvs-funcall good?_fun
                       (the (integer 0) (good_2-span ent_adtvar))))))))
(defun ent_reduce_ordinal!
    (fail?_fun pending?_fun loop?_fun good?_fun ent_adtvar)
  (let ((red
         (pvs-funcall (ent_reduce_ordinal)
                      (the (simple-array t)
                           (pvs2cl_tuple fail?_fun pending?_fun
                                         loop?_fun good?_fun)))))
    (declare (type nil red))
    (if (the boolean (fail_2? ent_adtvar))
        fail?_fun
      (if (the boolean (pending_2? ent_adtvar))
          pending?_fun
        (if (the boolean (loop_2? ent_adtvar))
            loop?_fun
          (pvs-funcall good?_fun
                       (the (integer 0) (good_2-span ent_adtvar))))))))
(defun ent_REDUCE_ordinal ()
  #'(lambda (lamvar#0)
      (let ((fail?_fun (project 1 lamvar#0))
            (pending?_fun (project 2 lamvar#0))
            (loop?_fun (project 3 lamvar#0))
            (good?_fun (project 4 lamvar#0)))
        #'(lambda (ent_adtvar)
            (let ((red
                   (pvs-funcall (ent_REDUCE_ordinal)
                                (the
                                 (simple-array t)
                                 (pvs2cl_tuple
                                  fail?_fun
                                  pending?_fun
                                  loop?_fun
                                  good?_fun)))))
              (declare (type nil red))
              (if (the boolean (fail_2? ent_adtvar))
                  (pvs-funcall fail?_fun ent_adtvar)
                (if (the boolean (pending_2? ent_adtvar))
                    (pvs-funcall pending?_fun ent_adtvar)
                  (if (the boolean (loop_2? ent_adtvar))
                      (pvs-funcall loop?_fun ent_adtvar)
                    (pvs-funcall good?_fun
                                 (the
                                  (simple-array t)
                                  (pvs2cl_tuple
                                   (the
                                    (integer 0)
                                    (good_2-span ent_adtvar))
                                   ent_adtvar)))))))))))
(defun _ent_REDUCE_ordinal
    (fail?_fun pending?_fun loop?_fun good?_fun ent_adtvar)
  (let ((red
         (pvs-funcall (ent_REDUCE_ordinal)
                      (the (simple-array t)
                           (pvs2cl_tuple fail?_fun pending?_fun
                                         loop?_fun good?_fun)))))
    (declare (type nil red))
    (if (the boolean (fail_2? ent_adtvar))
        (pvs-funcall fail?_fun ent_adtvar)
      (if (the boolean (pending_2? ent_adtvar))
          (pvs-funcall pending?_fun ent_adtvar)
        (if (the boolean (loop_2? ent_adtvar))
            (pvs-funcall loop?_fun ent_adtvar)
          (pvs-funcall good?_fun
                       (the (simple-array t)
                            (pvs2cl_tuple (the
                                           (integer 0)
                                           (good_2-span ent_adtvar))
                                          ent_adtvar))))))))
(defun ent_REDUCE_ordinal!
    (fail?_fun pending?_fun loop?_fun good?_fun ent_adtvar)
  (let ((red
         (pvs-funcall (ent_REDUCE_ordinal)
                      (the (simple-array t)
                           (pvs2cl_tuple fail?_fun pending?_fun
                                         loop?_fun good?_fun)))))
    (declare (type nil red))
    (if (the boolean (fail_2? ent_adtvar))
        (pvs-funcall fail?_fun ent_adtvar)
      (if (the boolean (pending_2? ent_adtvar))
          (pvs-funcall pending?_fun ent_adtvar)
        (if (the boolean (loop_2? ent_adtvar))
            (pvs-funcall loop?_fun ent_adtvar)
          (pvs-funcall good?_fun
                       (the (simple-array t)
                            (pvs2cl_tuple (the
                                           (integer 0)
                                           (good_2-span ent_adtvar))
                                          ent_adtvar))))))))
(defun peg-e1-3 (t8245)
  (typecase t8245
    (concat_2 (concat_2-e1 t8245))
    (choice_2 (choice_2-e1 t8245))))
(defun peg-e2-3 (t8246)
  (typecase t8246
    (concat_2 (concat_2-e2 t8246))
    (choice_2 (choice_2-e2 t8246))))
(defun peg-e-3 (t8250)
  (typecase t8250 (check_2 (check_2-e t8250)) (neg_2 (neg_2-e t8250))))
(defstruct (epsilon_2 (:constructor make-epsilon_2 nil)
            (:predicate epsilon_2?)))
(defstruct (failure_2 (:constructor make-failure_2 nil)
            (:predicate failure_2?)))
(defun make-any_3_unary ()
  (lambda (x8239) (let ((p x8239)) (make-any_3 p))))
(defstruct (any_3 (:constructor make-any_3 (p)) (:predicate any_3?)) p)
(defun make-terminal_2_unary ()
  (lambda (x8240) (let ((a x8240)) (make-terminal_2 a))))
(defstruct (terminal_2 (:constructor make-terminal_2 (a))
            (:predicate terminal_2?))
  a)
(defun make-concat_2_unary ()
  (lambda (x8241)
    (let ((e1 (svref x8241 0)) (e2 (svref x8241 1)))
      (make-concat_2 e1 e2))))
(defstruct (concat_2 (:constructor make-concat_2 (e1 e2))
            (:predicate concat_2?))
  e1
  e2)
(defun make-choice_2_unary ()
  (lambda (x8244)
    (let ((e1 (svref x8244 0)) (e2 (svref x8244 1)))
      (make-choice_2 e1 e2))))
(defstruct (choice_2 (:constructor make-choice_2 (e1 e2))
            (:predicate choice_2?))
  e1
  e2)
(defun make-check_2_unary ()
  (lambda (x8247) (let ((e x8247)) (make-check_2 e))))
(defstruct (check_2 (:constructor make-check_2 (e))
            (:predicate check_2?))
  e)
(defun make-neg_2_unary ()
  (lambda (x8249) (let ((e x8249)) (make-neg_2 e))))
(defstruct (neg_2 (:constructor make-neg_2 (e)) (:predicate neg_2?)) e)
(defun peg_ord ()
  #'(lambda (x)
      (if (the boolean (epsilon_2? x))
          0
        (if (the boolean (failure_2? x))
            1
          (if (the boolean (any_3? x))
              2
            (if (the boolean (terminal_2? x))
                3
              (if (the boolean (concat_2? x))
                  4
                (if (the boolean (choice_2? x))
                    5
                  (if (the boolean (check_2? x)) 6 7)))))))))
(defun _peg_ord (x)
  (if (the boolean (epsilon_2? x))
      0
    (if (the boolean (failure_2? x))
        1
      (if (the boolean (any_3? x))
          2
        (if (the boolean (terminal_2? x))
            3
          (if (the boolean (concat_2? x))
              4
            (if (the boolean (choice_2? x))
                5
              (if (the boolean (check_2? x)) 6 7))))))))
(defun peg_ord! (x)
  (if (the boolean (epsilon_2? x))
      0
    (if (the boolean (failure_2? x))
        1
      (if (the boolean (any_3? x))
          2
        (if (the boolean (terminal_2? x))
            3
          (if (the boolean (concat_2? x))
              4
            (if (the boolean (choice_2? x))
                5
              (if (the boolean (check_2? x)) 6 7))))))))
(defun peg_subterm ()
  #'(lambda (lamvar#0)
      (let ((x (project 1 lamvar#0)) (y (project 2 lamvar#0)))
        (the boolean (pvs__= x y)))))
(defun _peg_subterm (x y) (the boolean (pvs__= x y)))
(defun peg_subterm! (x y) (the boolean (pvs__= x y)))
(defun peg_<< ()
  #'(lambda (lamvar#0)
      (let ((x (project 1 lamvar#0)) (y (project 2 lamvar#0)))
        (the boolean nil))))
(defun _peg_<< (x y) (the boolean nil))
(defun peg_<<! (x y) (the boolean nil))
(defun peg_reduce_nat ()
  #'(lambda (lamvar#0)
      (let ((epsilon?_fun (project 1 lamvar#0))
            (failure?_fun (project 2 lamvar#0))
            (any?_fun (project 3 lamvar#0))
            (terminal?_fun (project 4 lamvar#0))
            (concat?_fun (project 5 lamvar#0))
            (or?_fun (project 6 lamvar#0))
            (and?_fun (project 7 lamvar#0))
            (not?_fun (project 8 lamvar#0)))
        (declare (type (integer 0) epsilon?_fun)
         (type (integer 0) failure?_fun))
        #'(lambda (peg_adtvar)
            (the (integer 0)
                 (let ((red
                        (pvs-funcall (peg_reduce_nat)
                                     (the
                                      (simple-array t)
                                      (pvs2cl_tuple
                                       (the (integer 0) epsilon?_fun)
                                       (the (integer 0) failure?_fun)
                                       any?_fun
                                       terminal?_fun
                                       concat?_fun
                                       or?_fun
                                       and?_fun
                                       not?_fun)))))
                   (declare (type nil red))
                   (the (integer 0)
                        (the (integer 0)
                             (if (the boolean (epsilon_2? peg_adtvar))
                                 (the (integer 0) epsilon?_fun)
                               (the
                                (integer 0)
                                (if
                                 (the boolean (failure_2? peg_adtvar))
                                 (the (integer 0) failure?_fun)
                                 (the
                                  (integer 0)
                                  (if
                                   (the boolean (any_3? peg_adtvar))
                                   (the
                                    (integer 0)
                                    (pvs-funcall
                                     any?_fun
                                     (any_3-p peg_adtvar)))
                                   (the
                                    (integer 0)
                                    (if
                                     (the
                                      boolean
                                      (terminal_2? peg_adtvar))
                                     (the
                                      (integer 0)
                                      (pvs-funcall
                                       terminal?_fun
                                       (the
                                        fixnum
                                        (terminal_2-a peg_adtvar))))
                                     (the
                                      (integer 0)
                                      (if
                                       (the
                                        boolean
                                        (concat_2? peg_adtvar))
                                       (the
                                        (integer 0)
                                        (pvs-funcall
                                         concat?_fun
                                         (the
                                          (simple-array t)
                                          (pvs2cl_tuple
                                           (the
                                            (integer 0 *)
                                            (peg-e1-3 peg_adtvar))
                                           (the
                                            (integer 0 *)
                                            (peg-e2-3 peg_adtvar))))))
                                       (the
                                        (integer 0)
                                        (if
                                         (the
                                          boolean
                                          (choice_2? peg_adtvar))
                                         (the
                                          (integer 0)
                                          (pvs-funcall
                                           or?_fun
                                           (the
                                            (simple-array t)
                                            (pvs2cl_tuple
                                             (the
                                              (integer 0 *)
                                              (peg-e1-3 peg_adtvar))
                                             (the
                                              (integer 0 *)
                                              (peg-e2-3
                                               peg_adtvar))))))
                                         (the
                                          (integer 0)
                                          (if
                                           (the
                                            boolean
                                            (check_2? peg_adtvar))
                                           (the
                                            (integer 0)
                                            (pvs-funcall
                                             and?_fun
                                             (the
                                              (integer 0 *)
                                              (peg-e-3 peg_adtvar))))
                                           (the
                                            (integer 0)
                                            (pvs-funcall
                                             not?_fun
                                             (the
                                              (integer 0 *)
                                              (peg-e-3
                                               peg_adtvar)))))))))))))))))))))))))
(defun _peg_reduce_nat
    (epsilon?_fun failure?_fun any?_fun terminal?_fun concat?_fun
     or?_fun and?_fun not?_fun peg_adtvar)
  (declare (type (integer 0) epsilon?_fun)
   (type (integer 0) failure?_fun))
  (the (integer 0)
       (let ((red
              (pvs-funcall (peg_reduce_nat)
                           (the (simple-array t)
                                (pvs2cl_tuple
                                 (the (integer 0) epsilon?_fun)
                                 (the (integer 0) failure?_fun)
                                 any?_fun
                                 terminal?_fun
                                 concat?_fun
                                 or?_fun
                                 and?_fun
                                 not?_fun)))))
         (declare (type nil red))
         (the (integer 0)
              (the (integer 0)
                   (if (the boolean (epsilon_2? peg_adtvar))
                       (the (integer 0) epsilon?_fun)
                     (the (integer 0)
                          (if (the boolean (failure_2? peg_adtvar))
                              (the (integer 0) failure?_fun)
                            (the (integer 0)
                                 (if
                                  (the boolean (any_3? peg_adtvar))
                                  (the
                                   (integer 0)
                                   (pvs-funcall
                                    any?_fun
                                    (any_3-p peg_adtvar)))
                                  (the
                                   (integer 0)
                                   (if
                                    (the
                                     boolean
                                     (terminal_2? peg_adtvar))
                                    (the
                                     (integer 0)
                                     (pvs-funcall
                                      terminal?_fun
                                      (the
                                       fixnum
                                       (terminal_2-a peg_adtvar))))
                                    (the
                                     (integer 0)
                                     (if
                                      (the
                                       boolean
                                       (concat_2? peg_adtvar))
                                      (the
                                       (integer 0)
                                       (pvs-funcall
                                        concat?_fun
                                        (the
                                         (simple-array t)
                                         (pvs2cl_tuple
                                          (the
                                           (integer 0 *)
                                           (peg-e1-3 peg_adtvar))
                                          (the
                                           (integer 0 *)
                                           (peg-e2-3 peg_adtvar))))))
                                      (the
                                       (integer 0)
                                       (if
                                        (the
                                         boolean
                                         (choice_2? peg_adtvar))
                                        (the
                                         (integer 0)
                                         (pvs-funcall
                                          or?_fun
                                          (the
                                           (simple-array t)
                                           (pvs2cl_tuple
                                            (the
                                             (integer 0 *)
                                             (peg-e1-3 peg_adtvar))
                                            (the
                                             (integer 0 *)
                                             (peg-e2-3 peg_adtvar))))))
                                        (the
                                         (integer 0)
                                         (if
                                          (the
                                           boolean
                                           (check_2? peg_adtvar))
                                          (the
                                           (integer 0)
                                           (pvs-funcall
                                            and?_fun
                                            (the
                                             (integer 0 *)
                                             (peg-e-3 peg_adtvar))))
                                          (the
                                           (integer 0)
                                           (pvs-funcall
                                            not?_fun
                                            (the
                                             (integer 0 *)
                                             (peg-e-3
                                              peg_adtvar))))))))))))))))))))))
(defun peg_reduce_nat!
    (epsilon?_fun failure?_fun any?_fun terminal?_fun concat?_fun
     or?_fun and?_fun not?_fun peg_adtvar)
  (declare (type (integer 0) epsilon?_fun)
   (type (integer 0) failure?_fun))
  (the (integer 0)
       (let ((red
              (pvs-funcall (peg_reduce_nat)
                           (the (simple-array t)
                                (pvs2cl_tuple
                                 (the (integer 0) epsilon?_fun)
                                 (the (integer 0) failure?_fun)
                                 any?_fun
                                 terminal?_fun
                                 concat?_fun
                                 or?_fun
                                 and?_fun
                                 not?_fun)))))
         (declare (type nil red))
         (the (integer 0)
              (the (integer 0)
                   (if (the boolean (epsilon_2? peg_adtvar))
                       (the (integer 0) epsilon?_fun)
                     (the (integer 0)
                          (if (the boolean (failure_2? peg_adtvar))
                              (the (integer 0) failure?_fun)
                            (the (integer 0)
                                 (if
                                  (the boolean (any_3? peg_adtvar))
                                  (the
                                   (integer 0)
                                   (pvs-funcall
                                    any?_fun
                                    (any_3-p peg_adtvar)))
                                  (the
                                   (integer 0)
                                   (if
                                    (the
                                     boolean
                                     (terminal_2? peg_adtvar))
                                    (the
                                     (integer 0)
                                     (pvs-funcall
                                      terminal?_fun
                                      (the
                                       fixnum
                                       (terminal_2-a peg_adtvar))))
                                    (the
                                     (integer 0)
                                     (if
                                      (the
                                       boolean
                                       (concat_2? peg_adtvar))
                                      (the
                                       (integer 0)
                                       (pvs-funcall
                                        concat?_fun
                                        (the
                                         (simple-array t)
                                         (pvs2cl_tuple
                                          (the
                                           (integer 0 *)
                                           (peg-e1-3 peg_adtvar))
                                          (the
                                           (integer 0 *)
                                           (peg-e2-3 peg_adtvar))))))
                                      (the
                                       (integer 0)
                                       (if
                                        (the
                                         boolean
                                         (choice_2? peg_adtvar))
                                        (the
                                         (integer 0)
                                         (pvs-funcall
                                          or?_fun
                                          (the
                                           (simple-array t)
                                           (pvs2cl_tuple
                                            (the
                                             (integer 0 *)
                                             (peg-e1-3 peg_adtvar))
                                            (the
                                             (integer 0 *)
                                             (peg-e2-3 peg_adtvar))))))
                                        (the
                                         (integer 0)
                                         (if
                                          (the
                                           boolean
                                           (check_2? peg_adtvar))
                                          (the
                                           (integer 0)
                                           (pvs-funcall
                                            and?_fun
                                            (the
                                             (integer 0 *)
                                             (peg-e-3 peg_adtvar))))
                                          (the
                                           (integer 0)
                                           (pvs-funcall
                                            not?_fun
                                            (the
                                             (integer 0 *)
                                             (peg-e-3
                                              peg_adtvar))))))))))))))))))))))
(defun peg_REDUCE_nat ()
  #'(lambda (lamvar#0)
      (let ((epsilon?_fun (project 1 lamvar#0))
            (failure?_fun (project 2 lamvar#0))
            (any?_fun (project 3 lamvar#0))
            (terminal?_fun (project 4 lamvar#0))
            (concat?_fun (project 5 lamvar#0))
            (or?_fun (project 6 lamvar#0))
            (and?_fun (project 7 lamvar#0))
            (not?_fun (project 8 lamvar#0)))
        #'(lambda (peg_adtvar)
            (the (integer 0)
                 (let ((red
                        (pvs-funcall (peg_REDUCE_nat)
                                     (the
                                      (simple-array t)
                                      (pvs2cl_tuple
                                       epsilon?_fun
                                       failure?_fun
                                       any?_fun
                                       terminal?_fun
                                       concat?_fun
                                       or?_fun
                                       and?_fun
                                       not?_fun)))))
                   (declare (type nil red))
                   (the (integer 0)
                        (the (integer 0)
                             (if (the boolean (epsilon_2? peg_adtvar))
                                 (the
                                  (integer 0)
                                  (pvs-funcall
                                   epsilon?_fun
                                   peg_adtvar))
                               (the
                                (integer 0)
                                (if
                                 (the boolean (failure_2? peg_adtvar))
                                 (the
                                  (integer 0)
                                  (pvs-funcall
                                   failure?_fun
                                   peg_adtvar))
                                 (the
                                  (integer 0)
                                  (if
                                   (the boolean (any_3? peg_adtvar))
                                   (the
                                    (integer 0)
                                    (pvs-funcall
                                     any?_fun
                                     (the
                                      (simple-array t)
                                      (pvs2cl_tuple
                                       (any_3-p peg_adtvar)
                                       peg_adtvar))))
                                   (the
                                    (integer 0)
                                    (if
                                     (the
                                      boolean
                                      (terminal_2? peg_adtvar))
                                     (the
                                      (integer 0)
                                      (pvs-funcall
                                       terminal?_fun
                                       (the
                                        (simple-array t)
                                        (pvs2cl_tuple
                                         (the
                                          fixnum
                                          (terminal_2-a peg_adtvar))
                                         peg_adtvar))))
                                     (the
                                      (integer 0)
                                      (if
                                       (the
                                        boolean
                                        (concat_2? peg_adtvar))
                                       (the
                                        (integer 0)
                                        (pvs-funcall
                                         concat?_fun
                                         (the
                                          (simple-array t)
                                          (pvs2cl_tuple
                                           (the
                                            (integer 0 *)
                                            (peg-e1-3 peg_adtvar))
                                           (the
                                            (integer 0 *)
                                            (peg-e2-3 peg_adtvar))
                                           peg_adtvar))))
                                       (the
                                        (integer 0)
                                        (if
                                         (the
                                          boolean
                                          (choice_2? peg_adtvar))
                                         (the
                                          (integer 0)
                                          (pvs-funcall
                                           or?_fun
                                           (the
                                            (simple-array t)
                                            (pvs2cl_tuple
                                             (the
                                              (integer 0 *)
                                              (peg-e1-3 peg_adtvar))
                                             (the
                                              (integer 0 *)
                                              (peg-e2-3 peg_adtvar))
                                             peg_adtvar))))
                                         (the
                                          (integer 0)
                                          (if
                                           (the
                                            boolean
                                            (check_2? peg_adtvar))
                                           (the
                                            (integer 0)
                                            (pvs-funcall
                                             and?_fun
                                             (the
                                              (simple-array t)
                                              (pvs2cl_tuple
                                               (the
                                                (integer 0 *)
                                                (peg-e-3 peg_adtvar))
                                               peg_adtvar))))
                                           (the
                                            (integer 0)
                                            (pvs-funcall
                                             not?_fun
                                             (the
                                              (simple-array t)
                                              (pvs2cl_tuple
                                               (the
                                                (integer 0 *)
                                                (peg-e-3 peg_adtvar))
                                               peg_adtvar)))))))))))))))))))))))))
(defun _peg_REDUCE_nat
    (epsilon?_fun failure?_fun any?_fun terminal?_fun concat?_fun
     or?_fun and?_fun not?_fun peg_adtvar)
  (the (integer 0)
       (let ((red
              (pvs-funcall (peg_REDUCE_nat)
                           (the (simple-array t)
                                (pvs2cl_tuple
                                 epsilon?_fun
                                 failure?_fun
                                 any?_fun
                                 terminal?_fun
                                 concat?_fun
                                 or?_fun
                                 and?_fun
                                 not?_fun)))))
         (declare (type nil red))
         (the (integer 0)
              (the (integer 0)
                   (if (the boolean (epsilon_2? peg_adtvar))
                       (the (integer 0)
                            (pvs-funcall epsilon?_fun peg_adtvar))
                     (the (integer 0)
                          (if (the boolean (failure_2? peg_adtvar))
                              (the (integer 0)
                                   (pvs-funcall
                                    failure?_fun
                                    peg_adtvar))
                            (the (integer 0)
                                 (if
                                  (the boolean (any_3? peg_adtvar))
                                  (the
                                   (integer 0)
                                   (pvs-funcall
                                    any?_fun
                                    (the
                                     (simple-array t)
                                     (pvs2cl_tuple
                                      (any_3-p peg_adtvar)
                                      peg_adtvar))))
                                  (the
                                   (integer 0)
                                   (if
                                    (the
                                     boolean
                                     (terminal_2? peg_adtvar))
                                    (the
                                     (integer 0)
                                     (pvs-funcall
                                      terminal?_fun
                                      (the
                                       (simple-array t)
                                       (pvs2cl_tuple
                                        (the
                                         fixnum
                                         (terminal_2-a peg_adtvar))
                                        peg_adtvar))))
                                    (the
                                     (integer 0)
                                     (if
                                      (the
                                       boolean
                                       (concat_2? peg_adtvar))
                                      (the
                                       (integer 0)
                                       (pvs-funcall
                                        concat?_fun
                                        (the
                                         (simple-array t)
                                         (pvs2cl_tuple
                                          (the
                                           (integer 0 *)
                                           (peg-e1-3 peg_adtvar))
                                          (the
                                           (integer 0 *)
                                           (peg-e2-3 peg_adtvar))
                                          peg_adtvar))))
                                      (the
                                       (integer 0)
                                       (if
                                        (the
                                         boolean
                                         (choice_2? peg_adtvar))
                                        (the
                                         (integer 0)
                                         (pvs-funcall
                                          or?_fun
                                          (the
                                           (simple-array t)
                                           (pvs2cl_tuple
                                            (the
                                             (integer 0 *)
                                             (peg-e1-3 peg_adtvar))
                                            (the
                                             (integer 0 *)
                                             (peg-e2-3 peg_adtvar))
                                            peg_adtvar))))
                                        (the
                                         (integer 0)
                                         (if
                                          (the
                                           boolean
                                           (check_2? peg_adtvar))
                                          (the
                                           (integer 0)
                                           (pvs-funcall
                                            and?_fun
                                            (the
                                             (simple-array t)
                                             (pvs2cl_tuple
                                              (the
                                               (integer 0 *)
                                               (peg-e-3 peg_adtvar))
                                              peg_adtvar))))
                                          (the
                                           (integer 0)
                                           (pvs-funcall
                                            not?_fun
                                            (the
                                             (simple-array t)
                                             (pvs2cl_tuple
                                              (the
                                               (integer 0 *)
                                               (peg-e-3 peg_adtvar))
                                              peg_adtvar))))))))))))))))))))))
(defun peg_REDUCE_nat!
    (epsilon?_fun failure?_fun any?_fun terminal?_fun concat?_fun
     or?_fun and?_fun not?_fun peg_adtvar)
  (the (integer 0)
       (let ((red
              (pvs-funcall (peg_REDUCE_nat)
                           (the (simple-array t)
                                (pvs2cl_tuple
                                 epsilon?_fun
                                 failure?_fun
                                 any?_fun
                                 terminal?_fun
                                 concat?_fun
                                 or?_fun
                                 and?_fun
                                 not?_fun)))))
         (declare (type nil red))
         (the (integer 0)
              (the (integer 0)
                   (if (the boolean (epsilon_2? peg_adtvar))
                       (the (integer 0)
                            (pvs-funcall epsilon?_fun peg_adtvar))
                     (the (integer 0)
                          (if (the boolean (failure_2? peg_adtvar))
                              (the (integer 0)
                                   (pvs-funcall
                                    failure?_fun
                                    peg_adtvar))
                            (the (integer 0)
                                 (if
                                  (the boolean (any_3? peg_adtvar))
                                  (the
                                   (integer 0)
                                   (pvs-funcall
                                    any?_fun
                                    (the
                                     (simple-array t)
                                     (pvs2cl_tuple
                                      (any_3-p peg_adtvar)
                                      peg_adtvar))))
                                  (the
                                   (integer 0)
                                   (if
                                    (the
                                     boolean
                                     (terminal_2? peg_adtvar))
                                    (the
                                     (integer 0)
                                     (pvs-funcall
                                      terminal?_fun
                                      (the
                                       (simple-array t)
                                       (pvs2cl_tuple
                                        (the
                                         fixnum
                                         (terminal_2-a peg_adtvar))
                                        peg_adtvar))))
                                    (the
                                     (integer 0)
                                     (if
                                      (the
                                       boolean
                                       (concat_2? peg_adtvar))
                                      (the
                                       (integer 0)
                                       (pvs-funcall
                                        concat?_fun
                                        (the
                                         (simple-array t)
                                         (pvs2cl_tuple
                                          (the
                                           (integer 0 *)
                                           (peg-e1-3 peg_adtvar))
                                          (the
                                           (integer 0 *)
                                           (peg-e2-3 peg_adtvar))
                                          peg_adtvar))))
                                      (the
                                       (integer 0)
                                       (if
                                        (the
                                         boolean
                                         (choice_2? peg_adtvar))
                                        (the
                                         (integer 0)
                                         (pvs-funcall
                                          or?_fun
                                          (the
                                           (simple-array t)
                                           (pvs2cl_tuple
                                            (the
                                             (integer 0 *)
                                             (peg-e1-3 peg_adtvar))
                                            (the
                                             (integer 0 *)
                                             (peg-e2-3 peg_adtvar))
                                            peg_adtvar))))
                                        (the
                                         (integer 0)
                                         (if
                                          (the
                                           boolean
                                           (check_2? peg_adtvar))
                                          (the
                                           (integer 0)
                                           (pvs-funcall
                                            and?_fun
                                            (the
                                             (simple-array t)
                                             (pvs2cl_tuple
                                              (the
                                               (integer 0 *)
                                               (peg-e-3 peg_adtvar))
                                              peg_adtvar))))
                                          (the
                                           (integer 0)
                                           (pvs-funcall
                                            not?_fun
                                            (the
                                             (simple-array t)
                                             (pvs2cl_tuple
                                              (the
                                               (integer 0 *)
                                               (peg-e-3 peg_adtvar))
                                              peg_adtvar))))))))))))))))))))))
(defun peg_reduce_ordinal ()
  #'(lambda (lamvar#0)
      (let ((epsilon?_fun (project 1 lamvar#0))
            (failure?_fun (project 2 lamvar#0))
            (any?_fun (project 3 lamvar#0))
            (terminal?_fun (project 4 lamvar#0))
            (concat?_fun (project 5 lamvar#0))
            (or?_fun (project 6 lamvar#0))
            (and?_fun (project 7 lamvar#0))
            (not?_fun (project 8 lamvar#0)))
        #'(lambda (peg_adtvar)
            (let ((red
                   (pvs-funcall (peg_reduce_ordinal)
                                (the
                                 (simple-array t)
                                 (pvs2cl_tuple
                                  epsilon?_fun
                                  failure?_fun
                                  any?_fun
                                  terminal?_fun
                                  concat?_fun
                                  or?_fun
                                  and?_fun
                                  not?_fun)))))
              (declare (type nil red))
              (if (the boolean (epsilon_2? peg_adtvar))
                  epsilon?_fun
                (if (the boolean (failure_2? peg_adtvar))
                    failure?_fun
                  (if (the boolean (any_3? peg_adtvar))
                      (pvs-funcall any?_fun (any_3-p peg_adtvar))
                    (if (the boolean (terminal_2? peg_adtvar))
                        (pvs-funcall terminal?_fun
                                     (the
                                      fixnum
                                      (terminal_2-a peg_adtvar)))
                      (if (the boolean (concat_2? peg_adtvar))
                          (pvs-funcall concat?_fun
                                       (the
                                        (simple-array t)
                                        (pvs2cl_tuple
                                         (the
                                          (integer 0 *)
                                          (peg-e1-3 peg_adtvar))
                                         (the
                                          (integer 0 *)
                                          (peg-e2-3 peg_adtvar)))))
                        (if (the boolean (choice_2? peg_adtvar))
                            (pvs-funcall or?_fun
                                         (the
                                          (simple-array t)
                                          (pvs2cl_tuple
                                           (the
                                            (integer 0 *)
                                            (peg-e1-3 peg_adtvar))
                                           (the
                                            (integer 0 *)
                                            (peg-e2-3 peg_adtvar)))))
                          (if (the boolean (check_2? peg_adtvar))
                              (pvs-funcall and?_fun
                                           (the
                                            (integer 0 *)
                                            (peg-e-3 peg_adtvar)))
                            (pvs-funcall not?_fun
                                         (the
                                          (integer 0 *)
                                          (peg-e-3
                                           peg_adtvar)))))))))))))))
(defun _peg_reduce_ordinal
    (epsilon?_fun failure?_fun any?_fun terminal?_fun concat?_fun
     or?_fun and?_fun not?_fun peg_adtvar)
  (let ((red
         (pvs-funcall (peg_reduce_ordinal)
                      (the (simple-array t)
                           (pvs2cl_tuple epsilon?_fun failure?_fun
                                         any?_fun terminal?_fun
                                         concat?_fun or?_fun and?_fun
                                         not?_fun)))))
    (declare (type nil red))
    (if (the boolean (epsilon_2? peg_adtvar))
        epsilon?_fun
      (if (the boolean (failure_2? peg_adtvar))
          failure?_fun
        (if (the boolean (any_3? peg_adtvar))
            (pvs-funcall any?_fun (any_3-p peg_adtvar))
          (if (the boolean (terminal_2? peg_adtvar))
              (pvs-funcall terminal?_fun
                           (the fixnum (terminal_2-a peg_adtvar)))
            (if (the boolean (concat_2? peg_adtvar))
                (pvs-funcall concat?_fun
                             (the (simple-array t)
                                  (pvs2cl_tuple
                                   (the
                                    (integer 0 *)
                                    (peg-e1-3 peg_adtvar))
                                   (the
                                    (integer 0 *)
                                    (peg-e2-3 peg_adtvar)))))
              (if (the boolean (choice_2? peg_adtvar))
                  (pvs-funcall or?_fun
                               (the
                                (simple-array t)
                                (pvs2cl_tuple
                                 (the
                                  (integer 0 *)
                                  (peg-e1-3 peg_adtvar))
                                 (the
                                  (integer 0 *)
                                  (peg-e2-3 peg_adtvar)))))
                (if (the boolean (check_2? peg_adtvar))
                    (pvs-funcall and?_fun
                                 (the
                                  (integer 0 *)
                                  (peg-e-3 peg_adtvar)))
                  (pvs-funcall not?_fun
                               (the
                                (integer 0 *)
                                (peg-e-3 peg_adtvar))))))))))))
(defun peg_reduce_ordinal!
    (epsilon?_fun failure?_fun any?_fun terminal?_fun concat?_fun
     or?_fun and?_fun not?_fun peg_adtvar)
  (let ((red
         (pvs-funcall (peg_reduce_ordinal)
                      (the (simple-array t)
                           (pvs2cl_tuple epsilon?_fun failure?_fun
                                         any?_fun terminal?_fun
                                         concat?_fun or?_fun and?_fun
                                         not?_fun)))))
    (declare (type nil red))
    (if (the boolean (epsilon_2? peg_adtvar))
        epsilon?_fun
      (if (the boolean (failure_2? peg_adtvar))
          failure?_fun
        (if (the boolean (any_3? peg_adtvar))
            (pvs-funcall any?_fun (any_3-p peg_adtvar))
          (if (the boolean (terminal_2? peg_adtvar))
              (pvs-funcall terminal?_fun
                           (the fixnum (terminal_2-a peg_adtvar)))
            (if (the boolean (concat_2? peg_adtvar))
                (pvs-funcall concat?_fun
                             (the (simple-array t)
                                  (pvs2cl_tuple
                                   (the
                                    (integer 0 *)
                                    (peg-e1-3 peg_adtvar))
                                   (the
                                    (integer 0 *)
                                    (peg-e2-3 peg_adtvar)))))
              (if (the boolean (choice_2? peg_adtvar))
                  (pvs-funcall or?_fun
                               (the
                                (simple-array t)
                                (pvs2cl_tuple
                                 (the
                                  (integer 0 *)
                                  (peg-e1-3 peg_adtvar))
                                 (the
                                  (integer 0 *)
                                  (peg-e2-3 peg_adtvar)))))
                (if (the boolean (check_2? peg_adtvar))
                    (pvs-funcall and?_fun
                                 (the
                                  (integer 0 *)
                                  (peg-e-3 peg_adtvar)))
                  (pvs-funcall not?_fun
                               (the
                                (integer 0 *)
                                (peg-e-3 peg_adtvar))))))))))))
(defun peg_REDUCE_ordinal ()
  #'(lambda (lamvar#0)
      (let ((epsilon?_fun (project 1 lamvar#0))
            (failure?_fun (project 2 lamvar#0))
            (any?_fun (project 3 lamvar#0))
            (terminal?_fun (project 4 lamvar#0))
            (concat?_fun (project 5 lamvar#0))
            (or?_fun (project 6 lamvar#0))
            (and?_fun (project 7 lamvar#0))
            (not?_fun (project 8 lamvar#0)))
        #'(lambda (peg_adtvar)
            (let ((red
                   (pvs-funcall (peg_REDUCE_ordinal)
                                (the
                                 (simple-array t)
                                 (pvs2cl_tuple
                                  epsilon?_fun
                                  failure?_fun
                                  any?_fun
                                  terminal?_fun
                                  concat?_fun
                                  or?_fun
                                  and?_fun
                                  not?_fun)))))
              (declare (type nil red))
              (if (the boolean (epsilon_2? peg_adtvar))
                  (pvs-funcall epsilon?_fun peg_adtvar)
                (if (the boolean (failure_2? peg_adtvar))
                    (pvs-funcall failure?_fun peg_adtvar)
                  (if (the boolean (any_3? peg_adtvar))
                      (pvs-funcall any?_fun
                                   (the
                                    (simple-array t)
                                    (pvs2cl_tuple
                                     (any_3-p peg_adtvar)
                                     peg_adtvar)))
                    (if (the boolean (terminal_2? peg_adtvar))
                        (pvs-funcall terminal?_fun
                                     (the
                                      (simple-array t)
                                      (pvs2cl_tuple
                                       (the
                                        fixnum
                                        (terminal_2-a peg_adtvar))
                                       peg_adtvar)))
                      (if (the boolean (concat_2? peg_adtvar))
                          (pvs-funcall concat?_fun
                                       (the
                                        (simple-array t)
                                        (pvs2cl_tuple
                                         (the
                                          (integer 0 *)
                                          (peg-e1-3 peg_adtvar))
                                         (the
                                          (integer 0 *)
                                          (peg-e2-3 peg_adtvar))
                                         peg_adtvar)))
                        (if (the boolean (choice_2? peg_adtvar))
                            (pvs-funcall or?_fun
                                         (the
                                          (simple-array t)
                                          (pvs2cl_tuple
                                           (the
                                            (integer 0 *)
                                            (peg-e1-3 peg_adtvar))
                                           (the
                                            (integer 0 *)
                                            (peg-e2-3 peg_adtvar))
                                           peg_adtvar)))
                          (if (the boolean (check_2? peg_adtvar))
                              (pvs-funcall and?_fun
                                           (the
                                            (simple-array t)
                                            (pvs2cl_tuple
                                             (the
                                              (integer 0 *)
                                              (peg-e-3 peg_adtvar))
                                             peg_adtvar)))
                            (pvs-funcall not?_fun
                                         (the
                                          (simple-array t)
                                          (pvs2cl_tuple
                                           (the
                                            (integer 0 *)
                                            (peg-e-3 peg_adtvar))
                                           peg_adtvar)))))))))))))))
(defun _peg_REDUCE_ordinal
    (epsilon?_fun failure?_fun any?_fun terminal?_fun concat?_fun
     or?_fun and?_fun not?_fun peg_adtvar)
  (let ((red
         (pvs-funcall (peg_REDUCE_ordinal)
                      (the (simple-array t)
                           (pvs2cl_tuple epsilon?_fun failure?_fun
                                         any?_fun terminal?_fun
                                         concat?_fun or?_fun and?_fun
                                         not?_fun)))))
    (declare (type nil red))
    (if (the boolean (epsilon_2? peg_adtvar))
        (pvs-funcall epsilon?_fun peg_adtvar)
      (if (the boolean (failure_2? peg_adtvar))
          (pvs-funcall failure?_fun peg_adtvar)
        (if (the boolean (any_3? peg_adtvar))
            (pvs-funcall any?_fun
                         (the (simple-array t)
                              (pvs2cl_tuple (any_3-p peg_adtvar)
                                            peg_adtvar)))
          (if (the boolean (terminal_2? peg_adtvar))
              (pvs-funcall terminal?_fun
                           (the (simple-array t)
                                (pvs2cl_tuple
                                 (the fixnum (terminal_2-a peg_adtvar))
                                 peg_adtvar)))
            (if (the boolean (concat_2? peg_adtvar))
                (pvs-funcall concat?_fun
                             (the (simple-array t)
                                  (pvs2cl_tuple
                                   (the
                                    (integer 0 *)
                                    (peg-e1-3 peg_adtvar))
                                   (the
                                    (integer 0 *)
                                    (peg-e2-3 peg_adtvar))
                                   peg_adtvar)))
              (if (the boolean (choice_2? peg_adtvar))
                  (pvs-funcall or?_fun
                               (the
                                (simple-array t)
                                (pvs2cl_tuple
                                 (the
                                  (integer 0 *)
                                  (peg-e1-3 peg_adtvar))
                                 (the
                                  (integer 0 *)
                                  (peg-e2-3 peg_adtvar))
                                 peg_adtvar)))
                (if (the boolean (check_2? peg_adtvar))
                    (pvs-funcall and?_fun
                                 (the
                                  (simple-array t)
                                  (pvs2cl_tuple
                                   (the
                                    (integer 0 *)
                                    (peg-e-3 peg_adtvar))
                                   peg_adtvar)))
                  (pvs-funcall not?_fun
                               (the
                                (simple-array t)
                                (pvs2cl_tuple
                                 (the
                                  (integer 0 *)
                                  (peg-e-3 peg_adtvar))
                                 peg_adtvar))))))))))))
(defun peg_REDUCE_ordinal!
    (epsilon?_fun failure?_fun any?_fun terminal?_fun concat?_fun
     or?_fun and?_fun not?_fun peg_adtvar)
  (let ((red
         (pvs-funcall (peg_REDUCE_ordinal)
                      (the (simple-array t)
                           (pvs2cl_tuple epsilon?_fun failure?_fun
                                         any?_fun terminal?_fun
                                         concat?_fun or?_fun and?_fun
                                         not?_fun)))))
    (declare (type nil red))
    (if (the boolean (epsilon_2? peg_adtvar))
        (pvs-funcall epsilon?_fun peg_adtvar)
      (if (the boolean (failure_2? peg_adtvar))
          (pvs-funcall failure?_fun peg_adtvar)
        (if (the boolean (any_3? peg_adtvar))
            (pvs-funcall any?_fun
                         (the (simple-array t)
                              (pvs2cl_tuple (any_3-p peg_adtvar)
                                            peg_adtvar)))
          (if (the boolean (terminal_2? peg_adtvar))
              (pvs-funcall terminal?_fun
                           (the (simple-array t)
                                (pvs2cl_tuple
                                 (the fixnum (terminal_2-a peg_adtvar))
                                 peg_adtvar)))
            (if (the boolean (concat_2? peg_adtvar))
                (pvs-funcall concat?_fun
                             (the (simple-array t)
                                  (pvs2cl_tuple
                                   (the
                                    (integer 0 *)
                                    (peg-e1-3 peg_adtvar))
                                   (the
                                    (integer 0 *)
                                    (peg-e2-3 peg_adtvar))
                                   peg_adtvar)))
              (if (the boolean (choice_2? peg_adtvar))
                  (pvs-funcall or?_fun
                               (the
                                (simple-array t)
                                (pvs2cl_tuple
                                 (the
                                  (integer 0 *)
                                  (peg-e1-3 peg_adtvar))
                                 (the
                                  (integer 0 *)
                                  (peg-e2-3 peg_adtvar))
                                 peg_adtvar)))
                (if (the boolean (check_2? peg_adtvar))
                    (pvs-funcall and?_fun
                                 (the
                                  (simple-array t)
                                  (pvs2cl_tuple
                                   (the
                                    (integer 0 *)
                                    (peg-e-3 peg_adtvar))
                                   peg_adtvar)))
                  (pvs-funcall not?_fun
                               (the
                                (simple-array t)
                                (pvs2cl_tuple
                                 (the
                                  (integer 0 *)
                                  (peg-e-3 peg_adtvar))
                                 peg_adtvar))))))))))))
(defun good_entry? ()
  #'(lambda (lamvar#0)
      (let ((len (project 1 lamvar#0)) (pos (project 2 lamvar#0)))
        (declare (type (integer 0) len) (type (integer 0 *) pos))
        #'(lambda (x)
            (the boolean
                 (pvs__IMPLIES (the boolean (good_2? x))
                               (the
                                boolean
                                (pvs__<=
                                 (pvs__+
                                  (the (integer 0 *) pos)
                                  (the (integer 0) (good_2-span x)))
                                 (the (integer 0) len)))))))))
(defun _good_entry? (len pos x)
  (declare (type (integer 0) len) (type (integer 0 *) pos))
  (the boolean
       (pvs__IMPLIES (the boolean (good_2? x))
                     (the boolean
                          (pvs__<= (pvs__+
                                    (the (integer 0 *) pos)
                                    (the (integer 0) (good_2-span x)))
                                   (the (integer 0) len))))))
(defun good_entry?! (len pos x)
  (declare (type (integer 0) len) (type (integer 0 *) pos))
  (the boolean
       (pvs__IMPLIES (the boolean (good_2? x))
                     (the boolean
                          (pvs__<= (pvs__+
                                    (the (integer 0 *) pos)
                                    (the (integer 0) (good_2-span x)))
                                   (the (integer 0) len))))))
(defun loop_or_pending?_0 ()
  #'(lambda (e)
      (the boolean
           (pvs__OR (the boolean (loop_2? e))
                    (the boolean (pending_2? e))))))
(defun _loop_or_pending?_0 (e)
  (the boolean
       (pvs__OR (the boolean (loop_2? e))
                (the boolean (pending_2? e)))))
(defun loop_or_pending?!_0 (e)
  (the boolean
       (pvs__OR (the boolean (loop_2? e))
                (the boolean (pending_2? e)))))
(defun good_fail?_0 ()
  #'(lambda (lamvar#0)
      (let ((len (project 1 lamvar#0))
            (G (project 2 lamvar#0))
            (s74583 (project 3 lamvar#0)))
        (declare (type (integer 0) len))
        #'(lambda (lamvar#0)
            (let ((A (project 1 lamvar#0))
                  (i (project 2 lamvar#0))
                  (n (project 3 lamvar#0)))
              (declare (type (integer 0 *) i) (type (integer 0 *) n))
              (the boolean
                   (the boolean
                        (let ((x
                               (pvs-funcall G (the (integer 0 *) n))))
                          (declare (type nil x))
                          (the boolean
                               (if
                                (the boolean (any_3? x))
                                (the
                                 boolean
                                 (pvs__OR
                                  (the
                                   boolean
                                   (=
                                    (the (integer 0 *) i)
                                    (the (integer 0) len)))
                                  (the
                                   boolean
                                   (pvs_NOT
                                    (the
                                     boolean
                                     (pvs-funcall
                                      (any_3-p x)
                                      (the
                                       fixnum
                                       (pvs-funcall
                                        s74583
                                        (the (integer 0 *) i)))))))))
                                (the
                                 boolean
                                 (if
                                  (the boolean (terminal_2? x))
                                  (the
                                   boolean
                                   (pvs__OR
                                    (the
                                     boolean
                                     (=
                                      (the (integer 0 *) i)
                                      (the (integer 0) len)))
                                    (the
                                     boolean
                                     (/=
                                      (the fixnum (terminal_2-a x))
                                      (the
                                       fixnum
                                       (pvs-funcall
                                        s74583
                                        (the (integer 0 *) i)))))))
                                  (the
                                   boolean
                                   (if
                                    (the boolean (concat_2? x))
                                    (the
                                     boolean
                                     (pvs__OR
                                      (the
                                       boolean
                                       (fail_2?
                                        (pvs-funcall
                                         (pvs-funcall
                                          A
                                          (the (integer 0 *) i))
                                         (the
                                          (integer 0 *)
                                          (peg-e1-3 x)))))
                                      (the
                                       boolean
                                       (pvs__AND
                                        (the
                                         boolean
                                         (good_2?
                                          (pvs-funcall
                                           (pvs-funcall
                                            A
                                            (the (integer 0 *) i))
                                           (the
                                            (integer 0 *)
                                            (peg-e1-3 x)))))
                                        (the
                                         boolean
                                         (fail_2?
                                          (pvs-funcall
                                           (pvs-funcall
                                            A
                                            (pvs__+
                                             (the (integer 0 *) i)
                                             (the
                                              (integer 0)
                                              (good_2-span
                                               (pvs-funcall
                                                (pvs-funcall
                                                 A
                                                 (the (integer 0 *) i))
                                                (the
                                                 (integer 0 *)
                                                 (peg-e1-3 x)))))))
                                           (the
                                            (integer 0 *)
                                            (peg-e2-3 x)))))))))
                                    (the
                                     boolean
                                     (if
                                      (the boolean (choice_2? x))
                                      (the
                                       boolean
                                       (pvs__AND
                                        (the
                                         boolean
                                         (fail_2?
                                          (pvs-funcall
                                           (pvs-funcall
                                            A
                                            (the (integer 0 *) i))
                                           (the
                                            (integer 0 *)
                                            (peg-e1-3 x)))))
                                        (the
                                         boolean
                                         (fail_2?
                                          (pvs-funcall
                                           (pvs-funcall
                                            A
                                            (the (integer 0 *) i))
                                           (the
                                            (integer 0 *)
                                            (peg-e2-3 x)))))))
                                      (the
                                       boolean
                                       (if
                                        (the boolean (check_2? x))
                                        (the
                                         boolean
                                         (fail_2?
                                          (pvs-funcall
                                           (pvs-funcall
                                            A
                                            (the (integer 0 *) i))
                                           (the
                                            (integer 0 *)
                                            (peg-e-3 x)))))
                                        (the
                                         boolean
                                         (if
                                          (the boolean (neg_2? x))
                                          (the
                                           boolean
                                           (good_2?
                                            (pvs-funcall
                                             (pvs-funcall
                                              A
                                              (the (integer 0 *) i))
                                             (the
                                              (integer 0 *)
                                              (peg-e-3 x)))))
                                          (the
                                           boolean
                                           (if
                                            (the
                                             boolean
                                             (failure_2? x))
                                            (the boolean t)
                                            (the
                                             boolean
                                             nil)))))))))))))))))))))))
(defun _good_fail?_0 (len G s8349 A i n)
  (declare (type (integer 0) len) (type (integer 0 *) i)
   (type (integer 0 *) n))
  (the boolean
       (the boolean
            (let ((x (pvs-funcall G (the (integer 0 *) n))))
              (declare (type nil x))
              (the boolean
                   (if (the boolean (any_3? x))
                       (the boolean
                            (pvs__OR (the
                                      boolean
                                      (=
                                       (the (integer 0 *) i)
                                       (the (integer 0) len)))
                                     (the
                                      boolean
                                      (pvs_NOT
                                       (the
                                        boolean
                                        (pvs-funcall
                                         (any_3-p x)
                                         (the
                                          fixnum
                                          (pvs-funcall
                                           s8349
                                           (the
                                            (integer 0 *)
                                            i)))))))))
                     (the boolean
                          (if (the boolean (terminal_2? x))
                              (the boolean
                                   (pvs__OR
                                    (the
                                     boolean
                                     (=
                                      (the (integer 0 *) i)
                                      (the (integer 0) len)))
                                    (the
                                     boolean
                                     (/=
                                      (the fixnum (terminal_2-a x))
                                      (the
                                       fixnum
                                       (pvs-funcall
                                        s8349
                                        (the (integer 0 *) i)))))))
                            (the boolean
                                 (if
                                  (the boolean (concat_2? x))
                                  (the
                                   boolean
                                   (pvs__OR
                                    (the
                                     boolean
                                     (fail_2?
                                      (pvs-funcall
                                       (pvs-funcall
                                        A
                                        (the (integer 0 *) i))
                                       (the
                                        (integer 0 *)
                                        (peg-e1-3 x)))))
                                    (the
                                     boolean
                                     (pvs__AND
                                      (the
                                       boolean
                                       (good_2?
                                        (pvs-funcall
                                         (pvs-funcall
                                          A
                                          (the (integer 0 *) i))
                                         (the
                                          (integer 0 *)
                                          (peg-e1-3 x)))))
                                      (the
                                       boolean
                                       (fail_2?
                                        (pvs-funcall
                                         (pvs-funcall
                                          A
                                          (pvs__+
                                           (the (integer 0 *) i)
                                           (the
                                            (integer 0)
                                            (good_2-span
                                             (pvs-funcall
                                              (pvs-funcall
                                               A
                                               (the (integer 0 *) i))
                                              (the
                                               (integer 0 *)
                                               (peg-e1-3 x)))))))
                                         (the
                                          (integer 0 *)
                                          (peg-e2-3 x)))))))))
                                  (the
                                   boolean
                                   (if
                                    (the boolean (choice_2? x))
                                    (the
                                     boolean
                                     (pvs__AND
                                      (the
                                       boolean
                                       (fail_2?
                                        (pvs-funcall
                                         (pvs-funcall
                                          A
                                          (the (integer 0 *) i))
                                         (the
                                          (integer 0 *)
                                          (peg-e1-3 x)))))
                                      (the
                                       boolean
                                       (fail_2?
                                        (pvs-funcall
                                         (pvs-funcall
                                          A
                                          (the (integer 0 *) i))
                                         (the
                                          (integer 0 *)
                                          (peg-e2-3 x)))))))
                                    (the
                                     boolean
                                     (if
                                      (the boolean (check_2? x))
                                      (the
                                       boolean
                                       (fail_2?
                                        (pvs-funcall
                                         (pvs-funcall
                                          A
                                          (the (integer 0 *) i))
                                         (the
                                          (integer 0 *)
                                          (peg-e-3 x)))))
                                      (the
                                       boolean
                                       (if
                                        (the boolean (neg_2? x))
                                        (the
                                         boolean
                                         (good_2?
                                          (pvs-funcall
                                           (pvs-funcall
                                            A
                                            (the (integer 0 *) i))
                                           (the
                                            (integer 0 *)
                                            (peg-e-3 x)))))
                                        (the
                                         boolean
                                         (if
                                          (the boolean (failure_2? x))
                                          (the boolean t)
                                          (the
                                           boolean
                                           nil)))))))))))))))))))
(defun good_fail?!_0 (len G s8349 A i n)
  (declare (type (integer 0) len) (type (integer 0 *) i)
   (type (integer 0 *) n))
  (the boolean
       (the boolean
            (let ((x (pvs-funcall G (the (integer 0 *) n))))
              (declare (type nil x))
              (the boolean
                   (if (the boolean (any_3? x))
                       (the boolean
                            (pvs__OR (the
                                      boolean
                                      (=
                                       (the (integer 0 *) i)
                                       (the (integer 0) len)))
                                     (the
                                      boolean
                                      (pvs_NOT
                                       (the
                                        boolean
                                        (pvs-funcall
                                         (any_3-p x)
                                         (the
                                          fixnum
                                          (pvs-funcall
                                           s8349
                                           (the
                                            (integer 0 *)
                                            i)))))))))
                     (the boolean
                          (if (the boolean (terminal_2? x))
                              (the boolean
                                   (pvs__OR
                                    (the
                                     boolean
                                     (=
                                      (the (integer 0 *) i)
                                      (the (integer 0) len)))
                                    (the
                                     boolean
                                     (/=
                                      (the fixnum (terminal_2-a x))
                                      (the
                                       fixnum
                                       (pvs-funcall
                                        s8349
                                        (the (integer 0 *) i)))))))
                            (the boolean
                                 (if
                                  (the boolean (concat_2? x))
                                  (the
                                   boolean
                                   (pvs__OR
                                    (the
                                     boolean
                                     (fail_2?
                                      (pvs-funcall
                                       (pvs-funcall
                                        A
                                        (the (integer 0 *) i))
                                       (the
                                        (integer 0 *)
                                        (peg-e1-3 x)))))
                                    (the
                                     boolean
                                     (pvs__AND
                                      (the
                                       boolean
                                       (good_2?
                                        (pvs-funcall
                                         (pvs-funcall
                                          A
                                          (the (integer 0 *) i))
                                         (the
                                          (integer 0 *)
                                          (peg-e1-3 x)))))
                                      (the
                                       boolean
                                       (fail_2?
                                        (pvs-funcall
                                         (pvs-funcall
                                          A
                                          (pvs__+
                                           (the (integer 0 *) i)
                                           (the
                                            (integer 0)
                                            (good_2-span
                                             (pvs-funcall
                                              (pvs-funcall
                                               A
                                               (the (integer 0 *) i))
                                              (the
                                               (integer 0 *)
                                               (peg-e1-3 x)))))))
                                         (the
                                          (integer 0 *)
                                          (peg-e2-3 x)))))))))
                                  (the
                                   boolean
                                   (if
                                    (the boolean (choice_2? x))
                                    (the
                                     boolean
                                     (pvs__AND
                                      (the
                                       boolean
                                       (fail_2?
                                        (pvs-funcall
                                         (pvs-funcall
                                          A
                                          (the (integer 0 *) i))
                                         (the
                                          (integer 0 *)
                                          (peg-e1-3 x)))))
                                      (the
                                       boolean
                                       (fail_2?
                                        (pvs-funcall
                                         (pvs-funcall
                                          A
                                          (the (integer 0 *) i))
                                         (the
                                          (integer 0 *)
                                          (peg-e2-3 x)))))))
                                    (the
                                     boolean
                                     (if
                                      (the boolean (check_2? x))
                                      (the
                                       boolean
                                       (fail_2?
                                        (pvs-funcall
                                         (pvs-funcall
                                          A
                                          (the (integer 0 *) i))
                                         (the
                                          (integer 0 *)
                                          (peg-e-3 x)))))
                                      (the
                                       boolean
                                       (if
                                        (the boolean (neg_2? x))
                                        (the
                                         boolean
                                         (good_2?
                                          (pvs-funcall
                                           (pvs-funcall
                                            A
                                            (the (integer 0 *) i))
                                           (the
                                            (integer 0 *)
                                            (peg-e-3 x)))))
                                        (the
                                         boolean
                                         (if
                                          (the boolean (failure_2? x))
                                          (the boolean t)
                                          (the
                                           boolean
                                           nil)))))))))))))))))))
(defun good_loop?_0 ()
  #'(lambda (lamvar#0)
      (let ((len (project 1 lamvar#0))
            (G (project 2 lamvar#0))
            (s74583 (project 3 lamvar#0)))
        (declare (type (integer 0) len))
        #'(lambda (lamvar#0)
            (let ((A (project 1 lamvar#0))
                  (i (project 2 lamvar#0))
                  (n (project 3 lamvar#0)))
              (declare (type (integer 0 *) i) (type (integer 0 *) n))
              (the boolean
                   (the boolean
                        (let ((x
                               (pvs-funcall G (the (integer 0 *) n))))
                          (declare (type nil x))
                          (the boolean
                               (if
                                (the boolean (concat_2? x))
                                (the
                                 boolean
                                 (pvs__OR
                                  (the
                                   boolean
                                   (loop_2?
                                    (pvs-funcall
                                     (pvs-funcall
                                      A
                                      (the (integer 0 *) i))
                                     (the
                                      (integer 0 *)
                                      (peg-e1-3 x)))))
                                  (the
                                   boolean
                                   (pvs__AND
                                    (the
                                     boolean
                                     (good_2?
                                      (pvs-funcall
                                       (pvs-funcall
                                        A
                                        (the (integer 0 *) i))
                                       (the
                                        (integer 0 *)
                                        (peg-e1-3 x)))))
                                    (the
                                     boolean
                                     (loop_2?
                                      (pvs-funcall
                                       (pvs-funcall
                                        A
                                        (pvs__+
                                         (the (integer 0 *) i)
                                         (the
                                          (integer 0)
                                          (good_2-span
                                           (pvs-funcall
                                            (pvs-funcall
                                             A
                                             (the (integer 0 *) i))
                                            (the
                                             (integer 0 *)
                                             (peg-e1-3 x)))))))
                                       (the
                                        (integer 0 *)
                                        (peg-e2-3 x)))))))))
                                (the
                                 boolean
                                 (if
                                  (the boolean (choice_2? x))
                                  (the
                                   boolean
                                   (pvs__OR
                                    (the
                                     boolean
                                     (loop_2?
                                      (pvs-funcall
                                       (pvs-funcall
                                        A
                                        (the (integer 0 *) i))
                                       (the
                                        (integer 0 *)
                                        (peg-e1-3 x)))))
                                    (the
                                     boolean
                                     (pvs__AND
                                      (the
                                       boolean
                                       (fail_2?
                                        (pvs-funcall
                                         (pvs-funcall
                                          A
                                          (the (integer 0 *) i))
                                         (the
                                          (integer 0 *)
                                          (peg-e1-3 x)))))
                                      (the
                                       boolean
                                       (loop_2?
                                        (pvs-funcall
                                         (pvs-funcall
                                          A
                                          (the (integer 0 *) i))
                                         (the
                                          (integer 0 *)
                                          (peg-e2-3 x)))))))))
                                  (the
                                   boolean
                                   (if
                                    (the boolean (check_2? x))
                                    (the
                                     boolean
                                     (loop_2?
                                      (pvs-funcall
                                       (pvs-funcall
                                        A
                                        (the (integer 0 *) i))
                                       (the
                                        (integer 0 *)
                                        (peg-e-3 x)))))
                                    (the
                                     boolean
                                     (if
                                      (the boolean (neg_2? x))
                                      (the
                                       boolean
                                       (loop_2?
                                        (pvs-funcall
                                         (pvs-funcall
                                          A
                                          (the (integer 0 *) i))
                                         (the
                                          (integer 0 *)
                                          (peg-e-3 x)))))
                                      (the boolean nil)))))))))))))))))
(defun _good_loop?_0 (len G s8437 A i n)
  (declare (type (integer 0) len) (type (integer 0 *) i)
   (type (integer 0 *) n))
  (the boolean
       (the boolean
            (let ((x (pvs-funcall G (the (integer 0 *) n))))
              (declare (type nil x))
              (the boolean
                   (if (the boolean (concat_2? x))
                       (the boolean
                            (pvs__OR (the
                                      boolean
                                      (loop_2?
                                       (pvs-funcall
                                        (pvs-funcall
                                         A
                                         (the (integer 0 *) i))
                                        (the
                                         (integer 0 *)
                                         (peg-e1-3 x)))))
                                     (the
                                      boolean
                                      (pvs__AND
                                       (the
                                        boolean
                                        (good_2?
                                         (pvs-funcall
                                          (pvs-funcall
                                           A
                                           (the (integer 0 *) i))
                                          (the
                                           (integer 0 *)
                                           (peg-e1-3 x)))))
                                       (the
                                        boolean
                                        (loop_2?
                                         (pvs-funcall
                                          (pvs-funcall
                                           A
                                           (pvs__+
                                            (the (integer 0 *) i)
                                            (the
                                             (integer 0)
                                             (good_2-span
                                              (pvs-funcall
                                               (pvs-funcall
                                                A
                                                (the (integer 0 *) i))
                                               (the
                                                (integer 0 *)
                                                (peg-e1-3 x)))))))
                                          (the
                                           (integer 0 *)
                                           (peg-e2-3 x)))))))))
                     (the boolean
                          (if (the boolean (choice_2? x))
                              (the boolean
                                   (pvs__OR
                                    (the
                                     boolean
                                     (loop_2?
                                      (pvs-funcall
                                       (pvs-funcall
                                        A
                                        (the (integer 0 *) i))
                                       (the
                                        (integer 0 *)
                                        (peg-e1-3 x)))))
                                    (the
                                     boolean
                                     (pvs__AND
                                      (the
                                       boolean
                                       (fail_2?
                                        (pvs-funcall
                                         (pvs-funcall
                                          A
                                          (the (integer 0 *) i))
                                         (the
                                          (integer 0 *)
                                          (peg-e1-3 x)))))
                                      (the
                                       boolean
                                       (loop_2?
                                        (pvs-funcall
                                         (pvs-funcall
                                          A
                                          (the (integer 0 *) i))
                                         (the
                                          (integer 0 *)
                                          (peg-e2-3 x)))))))))
                            (the boolean
                                 (if
                                  (the boolean (check_2? x))
                                  (the
                                   boolean
                                   (loop_2?
                                    (pvs-funcall
                                     (pvs-funcall
                                      A
                                      (the (integer 0 *) i))
                                     (the (integer 0 *) (peg-e-3 x)))))
                                  (the
                                   boolean
                                   (if
                                    (the boolean (neg_2? x))
                                    (the
                                     boolean
                                     (loop_2?
                                      (pvs-funcall
                                       (pvs-funcall
                                        A
                                        (the (integer 0 *) i))
                                       (the
                                        (integer 0 *)
                                        (peg-e-3 x)))))
                                    (the boolean nil)))))))))))))
(defun good_loop?!_0 (len G s8437 A i n)
  (declare (type (integer 0) len) (type (integer 0 *) i)
   (type (integer 0 *) n))
  (the boolean
       (the boolean
            (let ((x (pvs-funcall G (the (integer 0 *) n))))
              (declare (type nil x))
              (the boolean
                   (if (the boolean (concat_2? x))
                       (the boolean
                            (pvs__OR (the
                                      boolean
                                      (loop_2?
                                       (pvs-funcall
                                        (pvs-funcall
                                         A
                                         (the (integer 0 *) i))
                                        (the
                                         (integer 0 *)
                                         (peg-e1-3 x)))))
                                     (the
                                      boolean
                                      (pvs__AND
                                       (the
                                        boolean
                                        (good_2?
                                         (pvs-funcall
                                          (pvs-funcall
                                           A
                                           (the (integer 0 *) i))
                                          (the
                                           (integer 0 *)
                                           (peg-e1-3 x)))))
                                       (the
                                        boolean
                                        (loop_2?
                                         (pvs-funcall
                                          (pvs-funcall
                                           A
                                           (pvs__+
                                            (the (integer 0 *) i)
                                            (the
                                             (integer 0)
                                             (good_2-span
                                              (pvs-funcall
                                               (pvs-funcall
                                                A
                                                (the (integer 0 *) i))
                                               (the
                                                (integer 0 *)
                                                (peg-e1-3 x)))))))
                                          (the
                                           (integer 0 *)
                                           (peg-e2-3 x)))))))))
                     (the boolean
                          (if (the boolean (choice_2? x))
                              (the boolean
                                   (pvs__OR
                                    (the
                                     boolean
                                     (loop_2?
                                      (pvs-funcall
                                       (pvs-funcall
                                        A
                                        (the (integer 0 *) i))
                                       (the
                                        (integer 0 *)
                                        (peg-e1-3 x)))))
                                    (the
                                     boolean
                                     (pvs__AND
                                      (the
                                       boolean
                                       (fail_2?
                                        (pvs-funcall
                                         (pvs-funcall
                                          A
                                          (the (integer 0 *) i))
                                         (the
                                          (integer 0 *)
                                          (peg-e1-3 x)))))
                                      (the
                                       boolean
                                       (loop_2?
                                        (pvs-funcall
                                         (pvs-funcall
                                          A
                                          (the (integer 0 *) i))
                                         (the
                                          (integer 0 *)
                                          (peg-e2-3 x)))))))))
                            (the boolean
                                 (if
                                  (the boolean (check_2? x))
                                  (the
                                   boolean
                                   (loop_2?
                                    (pvs-funcall
                                     (pvs-funcall
                                      A
                                      (the (integer 0 *) i))
                                     (the (integer 0 *) (peg-e-3 x)))))
                                  (the
                                   boolean
                                   (if
                                    (the boolean (neg_2? x))
                                    (the
                                     boolean
                                     (loop_2?
                                      (pvs-funcall
                                       (pvs-funcall
                                        A
                                        (the (integer 0 *) i))
                                       (the
                                        (integer 0 *)
                                        (peg-e-3 x)))))
                                    (the boolean nil)))))))))))))
(defun good_good?_0 ()
  #'(lambda (lamvar#0)
      (let ((len (project 1 lamvar#0))
            (G (project 2 lamvar#0))
            (s74583 (project 3 lamvar#0)))
        (declare (type (integer 0) len))
        #'(lambda (lamvar#0)
            (let ((A (project 1 lamvar#0))
                  (i (project 2 lamvar#0))
                  (n (project 3 lamvar#0))
                  (sp (project 4 lamvar#0)))
              (declare (type (integer 0 *) i) (type (integer 0 *) n)
               (type (integer 0 *) sp))
              (the boolean
                   (the boolean
                        (let ((x
                               (pvs-funcall G (the (integer 0 *) n))))
                          (declare (type nil x))
                          (the boolean
                               (if
                                (the boolean (epsilon_2? x))
                                (the
                                 boolean
                                 (= (the (integer 0 *) sp) 0))
                                (the
                                 boolean
                                 (if
                                  (the boolean (any_3? x))
                                  (the
                                   boolean
                                   (pvs__AND
                                    (the
                                     boolean
                                     (= (the (integer 0 *) sp) 1))
                                    (the
                                     boolean
                                     (pvs-funcall
                                      (any_3-p x)
                                      (the
                                       fixnum
                                       (pvs-funcall
                                        s74583
                                        (the (integer 0 *) i)))))))
                                  (the
                                   boolean
                                   (if
                                    (the boolean (terminal_2? x))
                                    (the
                                     boolean
                                     (pvs__AND
                                      (the
                                       boolean
                                       (= (the (integer 0 *) sp) 1))
                                      (the
                                       boolean
                                       (=
                                        (the
                                         fixnum
                                         (pvs-funcall
                                          s74583
                                          (the (integer 0 *) i)))
                                        (the
                                         fixnum
                                         (terminal_2-a x))))))
                                    (the
                                     boolean
                                     (if
                                      (the boolean (concat_2? x))
                                      (the
                                       boolean
                                       (pvs__AND
                                        (the
                                         boolean
                                         (good_2?
                                          (pvs-funcall
                                           (pvs-funcall
                                            A
                                            (the (integer 0 *) i))
                                           (the
                                            (integer 0 *)
                                            (peg-e1-3 x)))))
                                        (the
                                         boolean
                                         (good_2?
                                          (pvs-funcall
                                           (pvs-funcall
                                            A
                                            (pvs__+
                                             (the (integer 0 *) i)
                                             (the
                                              (integer 0)
                                              (good_2-span
                                               (pvs-funcall
                                                (pvs-funcall
                                                 A
                                                 (the (integer 0 *) i))
                                                (the
                                                 (integer 0 *)
                                                 (peg-e1-3 x)))))))
                                           (the
                                            (integer 0 *)
                                            (peg-e2-3 x)))))))
                                      (the
                                       boolean
                                       (if
                                        (the boolean (choice_2? x))
                                        (the
                                         boolean
                                         (pvs__OR
                                          (the
                                           boolean
                                           (good_2?
                                            (pvs-funcall
                                             (pvs-funcall
                                              A
                                              (the (integer 0 *) i))
                                             (the
                                              (integer 0 *)
                                              (peg-e1-3 x)))))
                                          (the
                                           boolean
                                           (pvs__AND
                                            (the
                                             boolean
                                             (fail_2?
                                              (pvs-funcall
                                               (pvs-funcall
                                                A
                                                (the (integer 0 *) i))
                                               (the
                                                (integer 0 *)
                                                (peg-e1-3 x)))))
                                            (the
                                             boolean
                                             (good_2?
                                              (pvs-funcall
                                               (pvs-funcall
                                                A
                                                (the (integer 0 *) i))
                                               (the
                                                (integer 0 *)
                                                (peg-e2-3 x)))))))))
                                        (the
                                         boolean
                                         (if
                                          (the boolean (check_2? x))
                                          (the
                                           boolean
                                           (pvs__AND
                                            (the
                                             boolean
                                             (good_2?
                                              (pvs-funcall
                                               (pvs-funcall
                                                A
                                                (the (integer 0 *) i))
                                               (the
                                                (integer 0 *)
                                                (peg-e-3 x)))))
                                            (the
                                             boolean
                                             (=
                                              (the (integer 0 *) sp)
                                              0))))
                                          (the
                                           boolean
                                           (if
                                            (the boolean (neg_2? x))
                                            (the
                                             boolean
                                             (pvs__AND
                                              (the
                                               boolean
                                               (fail_2?
                                                (pvs-funcall
                                                 (pvs-funcall
                                                  A
                                                  (the
                                                   (integer 0 *)
                                                   i))
                                                 (the
                                                  (integer 0 *)
                                                  (peg-e-3 x)))))
                                              (the
                                               boolean
                                               (=
                                                (the (integer 0 *) sp)
                                                0))))
                                            (the
                                             boolean
                                             nil)))))))))))))))))))))))
(defun _good_good?_0 (len G s8513 A i n sp)
  (declare (type (integer 0) len) (type (integer 0 *) i)
   (type (integer 0 *) n) (type (integer 0 *) sp))
  (the boolean
       (the boolean
            (let ((x (pvs-funcall G (the (integer 0 *) n))))
              (declare (type nil x))
              (the boolean
                   (if (the boolean (epsilon_2? x))
                       (the boolean (= (the (integer 0 *) sp) 0))
                     (the boolean
                          (if (the boolean (any_3? x))
                              (the boolean
                                   (pvs__AND
                                    (the
                                     boolean
                                     (= (the (integer 0 *) sp) 1))
                                    (the
                                     boolean
                                     (pvs-funcall
                                      (any_3-p x)
                                      (the
                                       fixnum
                                       (pvs-funcall
                                        s8513
                                        (the (integer 0 *) i)))))))
                            (the boolean
                                 (if
                                  (the boolean (terminal_2? x))
                                  (the
                                   boolean
                                   (pvs__AND
                                    (the
                                     boolean
                                     (= (the (integer 0 *) sp) 1))
                                    (the
                                     boolean
                                     (=
                                      (the
                                       fixnum
                                       (pvs-funcall
                                        s8513
                                        (the (integer 0 *) i)))
                                      (the fixnum (terminal_2-a x))))))
                                  (the
                                   boolean
                                   (if
                                    (the boolean (concat_2? x))
                                    (the
                                     boolean
                                     (pvs__AND
                                      (the
                                       boolean
                                       (good_2?
                                        (pvs-funcall
                                         (pvs-funcall
                                          A
                                          (the (integer 0 *) i))
                                         (the
                                          (integer 0 *)
                                          (peg-e1-3 x)))))
                                      (the
                                       boolean
                                       (good_2?
                                        (pvs-funcall
                                         (pvs-funcall
                                          A
                                          (pvs__+
                                           (the (integer 0 *) i)
                                           (the
                                            (integer 0)
                                            (good_2-span
                                             (pvs-funcall
                                              (pvs-funcall
                                               A
                                               (the (integer 0 *) i))
                                              (the
                                               (integer 0 *)
                                               (peg-e1-3 x)))))))
                                         (the
                                          (integer 0 *)
                                          (peg-e2-3 x)))))))
                                    (the
                                     boolean
                                     (if
                                      (the boolean (choice_2? x))
                                      (the
                                       boolean
                                       (pvs__OR
                                        (the
                                         boolean
                                         (good_2?
                                          (pvs-funcall
                                           (pvs-funcall
                                            A
                                            (the (integer 0 *) i))
                                           (the
                                            (integer 0 *)
                                            (peg-e1-3 x)))))
                                        (the
                                         boolean
                                         (pvs__AND
                                          (the
                                           boolean
                                           (fail_2?
                                            (pvs-funcall
                                             (pvs-funcall
                                              A
                                              (the (integer 0 *) i))
                                             (the
                                              (integer 0 *)
                                              (peg-e1-3 x)))))
                                          (the
                                           boolean
                                           (good_2?
                                            (pvs-funcall
                                             (pvs-funcall
                                              A
                                              (the (integer 0 *) i))
                                             (the
                                              (integer 0 *)
                                              (peg-e2-3 x)))))))))
                                      (the
                                       boolean
                                       (if
                                        (the boolean (check_2? x))
                                        (the
                                         boolean
                                         (pvs__AND
                                          (the
                                           boolean
                                           (good_2?
                                            (pvs-funcall
                                             (pvs-funcall
                                              A
                                              (the (integer 0 *) i))
                                             (the
                                              (integer 0 *)
                                              (peg-e-3 x)))))
                                          (the
                                           boolean
                                           (=
                                            (the (integer 0 *) sp)
                                            0))))
                                        (the
                                         boolean
                                         (if
                                          (the boolean (neg_2? x))
                                          (the
                                           boolean
                                           (pvs__AND
                                            (the
                                             boolean
                                             (fail_2?
                                              (pvs-funcall
                                               (pvs-funcall
                                                A
                                                (the (integer 0 *) i))
                                               (the
                                                (integer 0 *)
                                                (peg-e-3 x)))))
                                            (the
                                             boolean
                                             (=
                                              (the (integer 0 *) sp)
                                              0))))
                                          (the
                                           boolean
                                           nil)))))))))))))))))))
(defun good_good?!_0 (len G s8513 A i n sp)
  (declare (type (integer 0) len) (type (integer 0 *) i)
   (type (integer 0 *) n) (type (integer 0 *) sp))
  (the boolean
       (the boolean
            (let ((x (pvs-funcall G (the (integer 0 *) n))))
              (declare (type nil x))
              (the boolean
                   (if (the boolean (epsilon_2? x))
                       (the boolean (= (the (integer 0 *) sp) 0))
                     (the boolean
                          (if (the boolean (any_3? x))
                              (the boolean
                                   (pvs__AND
                                    (the
                                     boolean
                                     (= (the (integer 0 *) sp) 1))
                                    (the
                                     boolean
                                     (pvs-funcall
                                      (any_3-p x)
                                      (the
                                       fixnum
                                       (pvs-funcall
                                        s8513
                                        (the (integer 0 *) i)))))))
                            (the boolean
                                 (if
                                  (the boolean (terminal_2? x))
                                  (the
                                   boolean
                                   (pvs__AND
                                    (the
                                     boolean
                                     (= (the (integer 0 *) sp) 1))
                                    (the
                                     boolean
                                     (=
                                      (the
                                       fixnum
                                       (pvs-funcall
                                        s8513
                                        (the (integer 0 *) i)))
                                      (the fixnum (terminal_2-a x))))))
                                  (the
                                   boolean
                                   (if
                                    (the boolean (concat_2? x))
                                    (the
                                     boolean
                                     (pvs__AND
                                      (the
                                       boolean
                                       (good_2?
                                        (pvs-funcall
                                         (pvs-funcall
                                          A
                                          (the (integer 0 *) i))
                                         (the
                                          (integer 0 *)
                                          (peg-e1-3 x)))))
                                      (the
                                       boolean
                                       (good_2?
                                        (pvs-funcall
                                         (pvs-funcall
                                          A
                                          (pvs__+
                                           (the (integer 0 *) i)
                                           (the
                                            (integer 0)
                                            (good_2-span
                                             (pvs-funcall
                                              (pvs-funcall
                                               A
                                               (the (integer 0 *) i))
                                              (the
                                               (integer 0 *)
                                               (peg-e1-3 x)))))))
                                         (the
                                          (integer 0 *)
                                          (peg-e2-3 x)))))))
                                    (the
                                     boolean
                                     (if
                                      (the boolean (choice_2? x))
                                      (the
                                       boolean
                                       (pvs__OR
                                        (the
                                         boolean
                                         (good_2?
                                          (pvs-funcall
                                           (pvs-funcall
                                            A
                                            (the (integer 0 *) i))
                                           (the
                                            (integer 0 *)
                                            (peg-e1-3 x)))))
                                        (the
                                         boolean
                                         (pvs__AND
                                          (the
                                           boolean
                                           (fail_2?
                                            (pvs-funcall
                                             (pvs-funcall
                                              A
                                              (the (integer 0 *) i))
                                             (the
                                              (integer 0 *)
                                              (peg-e1-3 x)))))
                                          (the
                                           boolean
                                           (good_2?
                                            (pvs-funcall
                                             (pvs-funcall
                                              A
                                              (the (integer 0 *) i))
                                             (the
                                              (integer 0 *)
                                              (peg-e2-3 x)))))))))
                                      (the
                                       boolean
                                       (if
                                        (the boolean (check_2? x))
                                        (the
                                         boolean
                                         (pvs__AND
                                          (the
                                           boolean
                                           (good_2?
                                            (pvs-funcall
                                             (pvs-funcall
                                              A
                                              (the (integer 0 *) i))
                                             (the
                                              (integer 0 *)
                                              (peg-e-3 x)))))
                                          (the
                                           boolean
                                           (=
                                            (the (integer 0 *) sp)
                                            0))))
                                        (the
                                         boolean
                                         (if
                                          (the boolean (neg_2? x))
                                          (the
                                           boolean
                                           (pvs__AND
                                            (the
                                             boolean
                                             (fail_2?
                                              (pvs-funcall
                                               (pvs-funcall
                                                A
                                                (the (integer 0 *) i))
                                               (the
                                                (integer 0 *)
                                                (peg-e-3 x)))))
                                            (the
                                             boolean
                                             (=
                                              (the (integer 0 *) sp)
                                              0))))
                                          (the
                                           boolean
                                           nil)))))))))))))))))))
(defstruct (empty_2 (:constructor make-empty_2 nil)
            (:predicate empty_2?)))
(defun make-push_2_unary ()
  (lambda (x8602)
    (let ((pos (svref x8602 0))
          (nt (svref x8602 1))
          (rest (svref x8602 2)))
      (make-push_2 pos nt rest))))
(defstruct (push_2 (:constructor make-push_2 (pos nt rest))
            (:predicate push_2?))
  pos
  nt
  rest)
(defun stackADT_ord ()
  #'(lambda (x) (if (the boolean (empty_2? x)) 0 1)))
(defun _stackADT_ord (x) (if (the boolean (empty_2? x)) 0 1))
(defun stackADT_ord! (x) (if (the boolean (empty_2? x)) 0 1))
(defun stackADT_subterm ()
  #'(lambda (lamvar#0)
      (let ((x (project 1 lamvar#0)) (y (project 2 lamvar#0)))
        (the boolean
             (pvs__OR (the boolean (pvs__= x y))
                      (the boolean
                           (the boolean
                                (if
                                 (the boolean (empty_2? y))
                                 (the boolean nil)
                                 (the
                                  boolean
                                  (_stackADT_subterm
                                   x
                                   (push_2-rest y)))))))))))
(defun _stackADT_subterm (x y)
  (the boolean
       (pvs__OR (the boolean (pvs__= x y))
                (the boolean
                     (the boolean
                          (if (the boolean (empty_2? y))
                              (the boolean nil)
                            (the boolean
                                 (_stackADT_subterm
                                  x
                                  (push_2-rest y)))))))))
(defun stackADT_subterm! (x y)
  (the boolean
       (pvs__OR (the boolean (pvs__= x y))
                (the boolean
                     (the boolean
                          (if (the boolean (empty_2? y))
                              (the boolean nil)
                            (the boolean
                                 (stackADT_subterm!
                                  x
                                  (push_2-rest y)))))))))
(defun stackADT_<< ()
  #'(lambda (lamvar#0)
      (let ((x (project 1 lamvar#0)) (y (project 2 lamvar#0)))
        (the boolean
             (the boolean
                  (if (the boolean (empty_2? y))
                      (the boolean nil)
                    (the boolean
                         (pvs__OR (the
                                   boolean
                                   (pvs__= x (push_2-rest y)))
                                  (the
                                   boolean
                                   (_stackADT_<<
                                    x
                                    (push_2-rest y)))))))))))
(defun _stackADT_<< (x y)
  (the boolean
       (the boolean
            (if (the boolean (empty_2? y))
                (the boolean nil)
              (the boolean
                   (pvs__OR (the boolean (pvs__= x (push_2-rest y)))
                            (the boolean
                                 (_stackADT_<< x (push_2-rest y)))))))))
(defun stackADT_<<! (x y)
  (the boolean
       (the boolean
            (if (the boolean (empty_2? y))
                (the boolean nil)
              (the boolean
                   (pvs__OR (the boolean (pvs__= x (push_2-rest y)))
                            (the boolean
                                 (stackADT_<<! x (push_2-rest y)))))))))
(defun stackADT_reduce_nat ()
  #'(lambda (lamvar#0)
      (let ((empty?_fun (project 1 lamvar#0))
            (push?_fun (project 2 lamvar#0)))
        (declare (type (integer 0) empty?_fun))
        #'(lambda (stackADT_adtvar)
            (the (integer 0)
                 (let ((red
                        (pvs-funcall (stackADT_reduce_nat)
                                     (the
                                      (simple-array t)
                                      (pvs2cl_tuple
                                       (the (integer 0) empty?_fun)
                                       push?_fun)))))
                   (declare (type nil red))
                   (the (integer 0)
                        (the (integer 0)
                             (if (the
                                  boolean
                                  (empty_2? stackADT_adtvar))
                                 (the (integer 0) empty?_fun)
                               (the
                                (integer 0)
                                (pvs-funcall
                                 push?_fun
                                 (the
                                  (simple-array t)
                                  (pvs2cl_tuple
                                   (the
                                    (integer 0 *)
                                    (push_2-pos stackADT_adtvar))
                                   (the
                                    (integer 0 *)
                                    (push_2-nt stackADT_adtvar))
                                   (the
                                    (integer 0)
                                    (pvs-funcall
                                     red
                                     (push_2-rest
                                      stackADT_adtvar))))))))))))))))
(defun _stackADT_reduce_nat (empty?_fun push?_fun stackADT_adtvar)
  (declare (type (integer 0) empty?_fun))
  (the (integer 0)
       (let ((red
              (pvs-funcall (stackADT_reduce_nat)
                           (the (simple-array t)
                                (pvs2cl_tuple
                                 (the (integer 0) empty?_fun)
                                 push?_fun)))))
         (declare (type nil red))
         (the (integer 0)
              (the (integer 0)
                   (if (the boolean (empty_2? stackADT_adtvar))
                       (the (integer 0) empty?_fun)
                     (the (integer 0)
                          (pvs-funcall push?_fun
                                       (the
                                        (simple-array t)
                                        (pvs2cl_tuple
                                         (the
                                          (integer 0 *)
                                          (push_2-pos stackADT_adtvar))
                                         (the
                                          (integer 0 *)
                                          (push_2-nt stackADT_adtvar))
                                         (the
                                          (integer 0)
                                          (pvs-funcall
                                           red
                                           (push_2-rest
                                            stackADT_adtvar)))))))))))))
(defun stackADT_reduce_nat! (empty?_fun push?_fun stackADT_adtvar)
  (declare (type (integer 0) empty?_fun))
  (the (integer 0)
       (let ((red
              (pvs-funcall (stackADT_reduce_nat)
                           (the (simple-array t)
                                (pvs2cl_tuple
                                 (the (integer 0) empty?_fun)
                                 push?_fun)))))
         (declare (type nil red))
         (the (integer 0)
              (the (integer 0)
                   (if (the boolean (empty_2? stackADT_adtvar))
                       (the (integer 0) empty?_fun)
                     (the (integer 0)
                          (pvs-funcall push?_fun
                                       (the
                                        (simple-array t)
                                        (pvs2cl_tuple
                                         (the
                                          (integer 0 *)
                                          (push_2-pos stackADT_adtvar))
                                         (the
                                          (integer 0 *)
                                          (push_2-nt stackADT_adtvar))
                                         (the
                                          (integer 0)
                                          (pvs-funcall
                                           red
                                           (push_2-rest
                                            stackADT_adtvar)))))))))))))
(defun stackADT_REDUCE_nat ()
  #'(lambda (lamvar#0)
      (let ((empty?_fun (project 1 lamvar#0))
            (push?_fun (project 2 lamvar#0)))
        #'(lambda (stackADT_adtvar)
            (the (integer 0)
                 (let ((red
                        (pvs-funcall (stackADT_REDUCE_nat)
                                     (the
                                      (simple-array t)
                                      (pvs2cl_tuple
                                       empty?_fun
                                       push?_fun)))))
                   (declare (type nil red))
                   (the (integer 0)
                        (the (integer 0)
                             (if (the
                                  boolean
                                  (empty_2? stackADT_adtvar))
                                 (the
                                  (integer 0)
                                  (pvs-funcall
                                   empty?_fun
                                   stackADT_adtvar))
                               (the
                                (integer 0)
                                (pvs-funcall
                                 push?_fun
                                 (the
                                  (simple-array t)
                                  (pvs2cl_tuple
                                   (the
                                    (integer 0 *)
                                    (push_2-pos stackADT_adtvar))
                                   (the
                                    (integer 0 *)
                                    (push_2-nt stackADT_adtvar))
                                   (the
                                    (integer 0)
                                    (pvs-funcall
                                     red
                                     (push_2-rest stackADT_adtvar)))
                                   stackADT_adtvar)))))))))))))
(defun _stackADT_REDUCE_nat (empty?_fun push?_fun stackADT_adtvar)
  (the (integer 0)
       (let ((red
              (pvs-funcall (stackADT_REDUCE_nat)
                           (the (simple-array t)
                                (pvs2cl_tuple empty?_fun push?_fun)))))
         (declare (type nil red))
         (the (integer 0)
              (the (integer 0)
                   (if (the boolean (empty_2? stackADT_adtvar))
                       (the (integer 0)
                            (pvs-funcall empty?_fun stackADT_adtvar))
                     (the (integer 0)
                          (pvs-funcall push?_fun
                                       (the
                                        (simple-array t)
                                        (pvs2cl_tuple
                                         (the
                                          (integer 0 *)
                                          (push_2-pos stackADT_adtvar))
                                         (the
                                          (integer 0 *)
                                          (push_2-nt stackADT_adtvar))
                                         (the
                                          (integer 0)
                                          (pvs-funcall
                                           red
                                           (push_2-rest
                                            stackADT_adtvar)))
                                         stackADT_adtvar))))))))))
(defun stackADT_REDUCE_nat! (empty?_fun push?_fun stackADT_adtvar)
  (the (integer 0)
       (let ((red
              (pvs-funcall (stackADT_REDUCE_nat)
                           (the (simple-array t)
                                (pvs2cl_tuple empty?_fun push?_fun)))))
         (declare (type nil red))
         (the (integer 0)
              (the (integer 0)
                   (if (the boolean (empty_2? stackADT_adtvar))
                       (the (integer 0)
                            (pvs-funcall empty?_fun stackADT_adtvar))
                     (the (integer 0)
                          (pvs-funcall push?_fun
                                       (the
                                        (simple-array t)
                                        (pvs2cl_tuple
                                         (the
                                          (integer 0 *)
                                          (push_2-pos stackADT_adtvar))
                                         (the
                                          (integer 0 *)
                                          (push_2-nt stackADT_adtvar))
                                         (the
                                          (integer 0)
                                          (pvs-funcall
                                           red
                                           (push_2-rest
                                            stackADT_adtvar)))
                                         stackADT_adtvar))))))))))
(defun stackADT_reduce_ordinal ()
  #'(lambda (lamvar#0)
      (let ((empty?_fun (project 1 lamvar#0))
            (push?_fun (project 2 lamvar#0)))
        #'(lambda (stackADT_adtvar)
            (let ((red
                   (pvs-funcall (stackADT_reduce_ordinal)
                                (the
                                 (simple-array t)
                                 (pvs2cl_tuple
                                  empty?_fun
                                  push?_fun)))))
              (declare (type nil red))
              (if (the boolean (empty_2? stackADT_adtvar))
                  empty?_fun
                (pvs-funcall push?_fun
                             (the (simple-array t)
                                  (pvs2cl_tuple
                                   (the
                                    (integer 0 *)
                                    (push_2-pos stackADT_adtvar))
                                   (the
                                    (integer 0 *)
                                    (push_2-nt stackADT_adtvar))
                                   (pvs-funcall
                                    red
                                    (push_2-rest
                                     stackADT_adtvar)))))))))))
(defun _stackADT_reduce_ordinal (empty?_fun push?_fun stackADT_adtvar)
  (let ((red
         (pvs-funcall (stackADT_reduce_ordinal)
                      (the (simple-array t)
                           (pvs2cl_tuple empty?_fun push?_fun)))))
    (declare (type nil red))
    (if (the boolean (empty_2? stackADT_adtvar))
        empty?_fun
      (pvs-funcall push?_fun
                   (the (simple-array t)
                        (pvs2cl_tuple (the
                                       (integer 0 *)
                                       (push_2-pos stackADT_adtvar))
                                      (the
                                       (integer 0 *)
                                       (push_2-nt stackADT_adtvar))
                                      (pvs-funcall
                                       red
                                       (push_2-rest
                                        stackADT_adtvar))))))))
(defun stackADT_reduce_ordinal! (empty?_fun push?_fun stackADT_adtvar)
  (let ((red
         (pvs-funcall (stackADT_reduce_ordinal)
                      (the (simple-array t)
                           (pvs2cl_tuple empty?_fun push?_fun)))))
    (declare (type nil red))
    (if (the boolean (empty_2? stackADT_adtvar))
        empty?_fun
      (pvs-funcall push?_fun
                   (the (simple-array t)
                        (pvs2cl_tuple (the
                                       (integer 0 *)
                                       (push_2-pos stackADT_adtvar))
                                      (the
                                       (integer 0 *)
                                       (push_2-nt stackADT_adtvar))
                                      (pvs-funcall
                                       red
                                       (push_2-rest
                                        stackADT_adtvar))))))))
(defun stackADT_REDUCE_ordinal ()
  #'(lambda (lamvar#0)
      (let ((empty?_fun (project 1 lamvar#0))
            (push?_fun (project 2 lamvar#0)))
        #'(lambda (stackADT_adtvar)
            (let ((red
                   (pvs-funcall (stackADT_REDUCE_ordinal)
                                (the
                                 (simple-array t)
                                 (pvs2cl_tuple
                                  empty?_fun
                                  push?_fun)))))
              (declare (type nil red))
              (if (the boolean (empty_2? stackADT_adtvar))
                  (pvs-funcall empty?_fun stackADT_adtvar)
                (pvs-funcall push?_fun
                             (the (simple-array t)
                                  (pvs2cl_tuple
                                   (the
                                    (integer 0 *)
                                    (push_2-pos stackADT_adtvar))
                                   (the
                                    (integer 0 *)
                                    (push_2-nt stackADT_adtvar))
                                   (pvs-funcall
                                    red
                                    (push_2-rest stackADT_adtvar))
                                   stackADT_adtvar)))))))))
(defun _stackADT_REDUCE_ordinal (empty?_fun push?_fun stackADT_adtvar)
  (let ((red
         (pvs-funcall (stackADT_REDUCE_ordinal)
                      (the (simple-array t)
                           (pvs2cl_tuple empty?_fun push?_fun)))))
    (declare (type nil red))
    (if (the boolean (empty_2? stackADT_adtvar))
        (pvs-funcall empty?_fun stackADT_adtvar)
      (pvs-funcall push?_fun
                   (the (simple-array t)
                        (pvs2cl_tuple (the
                                       (integer 0 *)
                                       (push_2-pos stackADT_adtvar))
                                      (the
                                       (integer 0 *)
                                       (push_2-nt stackADT_adtvar))
                                      (pvs-funcall
                                       red
                                       (push_2-rest stackADT_adtvar))
                                      stackADT_adtvar))))))
(defun stackADT_REDUCE_ordinal! (empty?_fun push?_fun stackADT_adtvar)
  (let ((red
         (pvs-funcall (stackADT_REDUCE_ordinal)
                      (the (simple-array t)
                           (pvs2cl_tuple empty?_fun push?_fun)))))
    (declare (type nil red))
    (if (the boolean (empty_2? stackADT_adtvar))
        (pvs-funcall empty?_fun stackADT_adtvar)
      (pvs-funcall push?_fun
                   (the (simple-array t)
                        (pvs2cl_tuple (the
                                       (integer 0 *)
                                       (push_2-pos stackADT_adtvar))
                                      (the
                                       (integer 0 *)
                                       (push_2-nt stackADT_adtvar))
                                      (pvs-funcall
                                       red
                                       (push_2-rest stackADT_adtvar))
                                      stackADT_adtvar))))))
(defun instack_1 ()
  #'(lambda (lamvar#0)
      (let ((pos (project 1 lamvar#0))
            (nt (project 2 lamvar#0))
            (stack (project 3 lamvar#0)))
        (declare (type (integer 0 *) pos) (type (integer 0 *) nt))
        (the boolean
             (the boolean
                  (if (the boolean (empty_2? stack))
                      (the boolean nil)
                    (the boolean
                         (pvs__OR (the
                                   boolean
                                   (pvs__AND
                                    (the
                                     boolean
                                     (=
                                      (the
                                       (integer 0 *)
                                       (push_2-pos stack))
                                      (the (integer 0 *) pos)))
                                    (the
                                     boolean
                                     (=
                                      (the
                                       (integer 0 *)
                                       (push_2-nt stack))
                                      (the (integer 0 *) nt)))))
                                  (the
                                   boolean
                                   (_instack_1
                                    (the (integer 0 *) pos)
                                    (the (integer 0 *) nt)
                                    (push_2-rest stack)))))))))))
(defun _instack_1 (pos nt stack)
  (declare (type (integer 0 *) pos) (type (integer 0 *) nt))
  (the boolean
       (the boolean
            (if (the boolean (empty_2? stack))
                (the boolean nil)
              (the boolean
                   (pvs__OR (the boolean
                                 (pvs__AND
                                  (the
                                   boolean
                                   (=
                                    (the
                                     (integer 0 *)
                                     (push_2-pos stack))
                                    (the (integer 0 *) pos)))
                                  (the
                                   boolean
                                   (=
                                    (the
                                     (integer 0 *)
                                     (push_2-nt stack))
                                    (the (integer 0 *) nt)))))
                            (the boolean
                                 (_instack_1
                                  (the (integer 0 *) pos)
                                  (the (integer 0 *) nt)
                                  (push_2-rest stack)))))))))
(defun instack!_1 (pos nt stack)
  (declare (type (integer 0 *) pos) (type (integer 0 *) nt))
  (the boolean
       (the boolean
            (if (the boolean (empty_2? stack))
                (the boolean nil)
              (the boolean
                   (pvs__OR (the boolean
                                 (pvs__AND
                                  (the
                                   boolean
                                   (=
                                    (the
                                     (integer 0 *)
                                     (push_2-pos stack))
                                    (the (integer 0 *) pos)))
                                  (the
                                   boolean
                                   (=
                                    (the
                                     (integer 0 *)
                                     (push_2-nt stack))
                                    (the (integer 0 *) nt)))))
                            (the boolean
                                 (instack!_1
                                  (the (integer 0 *) pos)
                                  (the (integer 0 *) nt)
                                  (push_2-rest stack)))))))))
(defun good_tscaffold?_0 ()
  #'(lambda (lamvar#0)
      (let ((len (project 1 lamvar#0))
            (G (project 2 lamvar#0))
            (s74583 (project 3 lamvar#0))
            (stack (project 4 lamvar#0)))
        (declare (type (integer 0) len))
        #'(lambda (A)
            (the boolean
                 (loop for t8700 from 0 to (the (integer 0) len) always
                       (pvs-funcall #'(lambda
                                       (i)
                                       (the
                                        boolean
                                        (loop
                                         for
                                         t8701
                                         from
                                         0
                                         to
                                         (pvs__-
                                          (the (integer 0) (_exp2 8))
                                          1)
                                         always
                                         (pvs-funcall
                                          #'(lambda
                                             (n)
                                             (the
                                              boolean
                                              (the
                                               boolean
                                               (let
                                                ((x
                                                  (pvs-funcall
                                                   (pvs-funcall
                                                    A
                                                    (the
                                                     (integer 0 *)
                                                     i))
                                                   (the
                                                    (integer 0 *)
                                                    n))))
                                                (declare (type nil x))
                                                (the
                                                 boolean
                                                 (if
                                                  (the
                                                   boolean
                                                   (fail_2? x))
                                                  (the
                                                   boolean
                                                   (_good_fail?_0
                                                    (the
                                                     (integer 0)
                                                     len)
                                                    G
                                                    s74583
                                                    A
                                                    (the
                                                     (integer 0 *)
                                                     i)
                                                    (the
                                                     (integer 0 *)
                                                     n)))
                                                  (the
                                                   boolean
                                                   (if
                                                    (the
                                                     boolean
                                                     (loop_2? x))
                                                    (the
                                                     boolean
                                                     (pvs__OR
                                                      (the
                                                       boolean
                                                       (_instack_1
                                                        (the
                                                         (integer 0 *)
                                                         i)
                                                        (the
                                                         (integer 0 *)
                                                         n)
                                                        stack))
                                                      (the
                                                       boolean
                                                       (_good_loop?_0
                                                        (the
                                                         (integer 0)
                                                         len)
                                                        G
                                                        s74583
                                                        A
                                                        (the
                                                         (integer 0 *)
                                                         i)
                                                        (the
                                                         (integer 0 *)
                                                         n)))))
                                                    (the
                                                     boolean
                                                     (if
                                                      (the
                                                       boolean
                                                       (good_2? x))
                                                      (the
                                                       boolean
                                                       (pvs__AND
                                                        (the
                                                         boolean
                                                         (pvs__<=
                                                          (the
                                                           (integer 0)
                                                           (good_2-span
                                                            x))
                                                          (pvs__-
                                                           (the
                                                            (integer 0)
                                                            len)
                                                           (the
                                                            (integer
                                                             0
                                                             *)
                                                            i))))
                                                        (the
                                                         boolean
                                                         (_good_good?_0
                                                          (the
                                                           (integer 0)
                                                           len)
                                                          G
                                                          s74583
                                                          A
                                                          (the
                                                           (integer
                                                            0
                                                            *)
                                                           i)
                                                          (the
                                                           (integer
                                                            0
                                                            *)
                                                           n)
                                                          (the
                                                           (integer 0)
                                                           (good_2-span
                                                            x))))))
                                                      (the
                                                       boolean
                                                       t)))))))))))
                                          t8701))))
                                    t8700)))))))
(defun _good_tscaffold?_0 (len G s8683 stack A i n)
  (declare (type (integer 0) len) (type (integer 0 *) i)
   (type (integer 0 *) n))
  (the boolean
       (loop for t8684 from 0 to (the (integer 0) len) always
             (pvs-funcall #'(lambda (i#0)
                              (the boolean
                                   (loop
                                    for
                                    t8685
                                    from
                                    0
                                    to
                                    (pvs__-
                                     (the (integer 0) (_exp2 8))
                                     1)
                                    always
                                    (pvs-funcall
                                     #'(lambda
                                        (n#0)
                                        (the
                                         boolean
                                         (the
                                          boolean
                                          (let
                                           ((x
                                             (pvs-funcall
                                              (pvs-funcall
                                               A
                                               (the (integer 0 *) i#0))
                                              (the
                                               (integer 0 *)
                                               n#0))))
                                           (declare (type nil x))
                                           (the
                                            boolean
                                            (if
                                             (the boolean (fail_2? x))
                                             (the
                                              boolean
                                              (_good_fail?_0
                                               (the (integer 0) len)
                                               G
                                               s8683
                                               A
                                               (the (integer 0 *) i#0)
                                               (the
                                                (integer 0 *)
                                                n#0)))
                                             (the
                                              boolean
                                              (if
                                               (the
                                                boolean
                                                (loop_2? x))
                                               (the
                                                boolean
                                                (pvs__OR
                                                 (the
                                                  boolean
                                                  (_instack_1
                                                   (the
                                                    (integer 0 *)
                                                    i#0)
                                                   (the
                                                    (integer 0 *)
                                                    n#0)
                                                   stack))
                                                 (the
                                                  boolean
                                                  (_good_loop?_0
                                                   (the
                                                    (integer 0)
                                                    len)
                                                   G
                                                   s8683
                                                   A
                                                   (the
                                                    (integer 0 *)
                                                    i#0)
                                                   (the
                                                    (integer 0 *)
                                                    n#0)))))
                                               (the
                                                boolean
                                                (if
                                                 (the
                                                  boolean
                                                  (good_2? x))
                                                 (the
                                                  boolean
                                                  (pvs__AND
                                                   (the
                                                    boolean
                                                    (pvs__<=
                                                     (the
                                                      (integer 0)
                                                      (good_2-span x))
                                                     (pvs__-
                                                      (the
                                                       (integer 0)
                                                       len)
                                                      (the
                                                       (integer 0 *)
                                                       i#0))))
                                                   (the
                                                    boolean
                                                    (_good_good?_0
                                                     (the
                                                      (integer 0)
                                                      len)
                                                     G
                                                     s8683
                                                     A
                                                     (the
                                                      (integer 0 *)
                                                      i#0)
                                                     (the
                                                      (integer 0 *)
                                                      n#0)
                                                     (the
                                                      (integer 0)
                                                      (good_2-span
                                                       x))))))
                                                 (the
                                                  boolean
                                                  t)))))))))))
                                     t8685))))
                          t8684))))
(defun good_tscaffold?!_0 (len G s8683 stack A i n)
  (declare (type (integer 0) len) (type (integer 0 *) i)
   (type (integer 0 *) n))
  (the boolean
       (loop for t8692 from 0 to (the (integer 0) len) always
             (pvs-funcall #'(lambda (i#0)
                              (the boolean
                                   (loop
                                    for
                                    t8693
                                    from
                                    0
                                    to
                                    (pvs__-
                                     (the (integer 0) (_exp2 8))
                                     1)
                                    always
                                    (pvs-funcall
                                     #'(lambda
                                        (n#0)
                                        (the
                                         boolean
                                         (the
                                          boolean
                                          (let
                                           ((x
                                             (pvs-funcall
                                              (pvs-funcall
                                               A
                                               (the (integer 0 *) i#0))
                                              (the
                                               (integer 0 *)
                                               n#0))))
                                           (declare (type nil x))
                                           (the
                                            boolean
                                            (if
                                             (the boolean (fail_2? x))
                                             (the
                                              boolean
                                              (_good_fail?_0
                                               (the (integer 0) len)
                                               G
                                               s8683
                                               A
                                               (the (integer 0 *) i#0)
                                               (the
                                                (integer 0 *)
                                                n#0)))
                                             (the
                                              boolean
                                              (if
                                               (the
                                                boolean
                                                (loop_2? x))
                                               (the
                                                boolean
                                                (pvs__OR
                                                 (the
                                                  boolean
                                                  (_instack_1
                                                   (the
                                                    (integer 0 *)
                                                    i#0)
                                                   (the
                                                    (integer 0 *)
                                                    n#0)
                                                   stack))
                                                 (the
                                                  boolean
                                                  (_good_loop?_0
                                                   (the
                                                    (integer 0)
                                                    len)
                                                   G
                                                   s8683
                                                   A
                                                   (the
                                                    (integer 0 *)
                                                    i#0)
                                                   (the
                                                    (integer 0 *)
                                                    n#0)))))
                                               (the
                                                boolean
                                                (if
                                                 (the
                                                  boolean
                                                  (good_2? x))
                                                 (the
                                                  boolean
                                                  (pvs__AND
                                                   (the
                                                    boolean
                                                    (pvs__<=
                                                     (the
                                                      (integer 0)
                                                      (good_2-span x))
                                                     (pvs__-
                                                      (the
                                                       (integer 0)
                                                       len)
                                                      (the
                                                       (integer 0 *)
                                                       i#0))))
                                                   (the
                                                    boolean
                                                    (_good_good?_0
                                                     (the
                                                      (integer 0)
                                                      len)
                                                     G
                                                     s8683
                                                     A
                                                     (the
                                                      (integer 0 *)
                                                      i#0)
                                                     (the
                                                      (integer 0 *)
                                                      n#0)
                                                     (the
                                                      (integer 0)
                                                      (good_2-span
                                                       x))))))
                                                 (the
                                                  boolean
                                                  t)))))))))))
                                     t8693))))
                          t8692))))
(defun tdstack_scaffold?_0 ()
  #'(lambda (lamvar#0)
      (let ((len (project 1 lamvar#0))
            (G (project 2 lamvar#0))
            (s74583 (project 3 lamvar#0))
            (i (project 4 lamvar#0))
            (stack (project 5 lamvar#0)))
        (declare (type (integer 0) len) (type (integer 0 *) i))
        #'(lambda (A)
            (the boolean
                 (loop for t8725 from 0 to
                       (pvs__- (the (integer 0) (_exp2 32)) 1) always
                       (pvs-funcall #'(lambda
                                       (pos)
                                       (the
                                        boolean
                                        (loop
                                         for
                                         t8726
                                         from
                                         0
                                         to
                                         (pvs__-
                                          (the (integer 0) (_exp2 8))
                                          1)
                                         always
                                         (pvs-funcall
                                          #'(lambda
                                             (m)
                                             (the
                                              boolean
                                              (pvs__=>
                                               (the
                                                boolean
                                                (_instack_1
                                                 (the
                                                  (integer 0 *)
                                                  pos)
                                                 (the (integer 0 *) m)
                                                 stack))
                                               (the
                                                boolean
                                                (_loop_or_pending?_0
                                                 (pvs-funcall
                                                  (pvs-funcall
                                                   A
                                                   (the
                                                    (integer 0 *)
                                                    pos))
                                                  (the
                                                   (integer 0 *)
                                                   m)))))))
                                          t8726))))
                                    t8725)))))))
(defun _tdstack_scaffold?_0 (len G s8708 i stack A pos m)
  (declare (type (integer 0) len) (type (integer 0 *) i)
   (type (integer 0 *) pos) (type (integer 0 *) m))
  (the boolean
       (loop for t8709 from 0 to
             (pvs__- (the (integer 0) (_exp2 32)) 1) always
             (pvs-funcall #'(lambda (pos#0)
                              (the boolean
                                   (loop
                                    for
                                    t8710
                                    from
                                    0
                                    to
                                    (pvs__-
                                     (the (integer 0) (_exp2 8))
                                     1)
                                    always
                                    (pvs-funcall
                                     #'(lambda
                                        (m#0)
                                        (the
                                         boolean
                                         (pvs__=>
                                          (the
                                           boolean
                                           (_instack_1
                                            (the (integer 0 *) pos#0)
                                            (the (integer 0 *) m#0)
                                            stack))
                                          (the
                                           boolean
                                           (_loop_or_pending?_0
                                            (pvs-funcall
                                             (pvs-funcall
                                              A
                                              (the
                                               (integer 0 *)
                                               pos#0))
                                             (the
                                              (integer 0 *)
                                              m#0)))))))
                                     t8710))))
                          t8709))))
(defun tdstack_scaffold?!_0 (len G s8708 i stack A pos m)
  (declare (type (integer 0) len) (type (integer 0 *) i)
   (type (integer 0 *) pos) (type (integer 0 *) m))
  (the boolean
       (loop for t8717 from 0 to
             (pvs__- (the (integer 0) (exp2! 32)) 1) always
             (pvs-funcall #'(lambda (pos#0)
                              (the boolean
                                   (loop
                                    for
                                    t8718
                                    from
                                    0
                                    to
                                    (pvs__-
                                     (the (integer 0) (_exp2 8))
                                     1)
                                    always
                                    (pvs-funcall
                                     #'(lambda
                                        (m#0)
                                        (the
                                         boolean
                                         (pvs__=>
                                          (the
                                           boolean
                                           (_instack_1
                                            (the (integer 0 *) pos#0)
                                            (the (integer 0 *) m#0)
                                            stack))
                                          (the
                                           boolean
                                           (_loop_or_pending?_0
                                            (pvs-funcall
                                             (pvs-funcall
                                              A
                                              (the
                                               (integer 0 *)
                                               pos#0))
                                             (the
                                              (integer 0 *)
                                              m#0)))))))
                                     t8718))))
                          t8717))))
(defun fine_tdstack_scaffold?_0 ()
  #'(lambda (lamvar#0)
      (let ((len (project 1 lamvar#0))
            (G (project 2 lamvar#0))
            (s74583 (project 3 lamvar#0)))
        (declare (type (integer 0) len))
        #'(lambda (lamvar#0)
            (let ((i (project 1 lamvar#0))
                  (root (project 2 lamvar#0))
                  (stack (project 3 lamvar#0)))
              (declare (type (integer 0 *) i)
               (type (integer 0 *) root))
              #'(lambda (A)
                  (the boolean
                       (pvs__AND (the
                                  boolean
                                  (pvs-funcall
                                   (pvs-funcall
                                    (good_tscaffold?_0)
                                    (the
                                     (simple-array t)
                                     (pvs2cl_tuple
                                      (the (integer 0) len)
                                      G
                                      s74583
                                      stack)))
                                   A))
                                 (the
                                  boolean
                                  (pvs__AND
                                   (the
                                    boolean
                                    (pvs-funcall
                                     (pvs-funcall
                                      (tdstack_scaffold?_0)
                                      (the
                                       (simple-array t)
                                       (pvs2cl_tuple
                                        (the (integer 0) len)
                                        G
                                        s74583
                                        (the (integer 0 *) i)
                                        stack)))
                                     A))
                                   (the
                                    boolean
                                    (pvs__=>
                                     (the boolean (push_2? stack))
                                     (the
                                      boolean
                                      (_instack_1
                                       (the (integer 0 *) i)
                                       (the (integer 0 *) root)
                                       stack))))))))))))))
(defun _fine_tdstack_scaffold?_0 (len G s8733 i root stack A)
  (declare (type (integer 0) len) (type (integer 0 *) i)
   (type (integer 0 *) root))
  (the boolean
       (pvs__AND (the boolean
                      (pvs-funcall (pvs-funcall
                                    (good_tscaffold?_0)
                                    (the
                                     (simple-array t)
                                     (pvs2cl_tuple
                                      (the (integer 0) len)
                                      G
                                      s8733
                                      stack)))
                                   A))
                 (the boolean
                      (pvs__AND (the
                                 boolean
                                 (pvs-funcall
                                  (pvs-funcall
                                   (tdstack_scaffold?_0)
                                   (the
                                    (simple-array t)
                                    (pvs2cl_tuple
                                     (the (integer 0) len)
                                     G
                                     s8733
                                     (the (integer 0 *) i)
                                     stack)))
                                  A))
                                (the
                                 boolean
                                 (pvs__=>
                                  (the boolean (push_2? stack))
                                  (the
                                   boolean
                                   (_instack_1
                                    (the (integer 0 *) i)
                                    (the (integer 0 *) root)
                                    stack)))))))))
(defun fine_tdstack_scaffold?!_0 (len G s8733 i root stack A)
  (declare (type (integer 0) len) (type (integer 0 *) i)
   (type (integer 0 *) root))
  (the boolean
       (pvs__AND (the boolean
                      (pvs-funcall (pvs-funcall
                                    (good_tscaffold?_0)
                                    (the
                                     (simple-array t)
                                     (pvs2cl_tuple
                                      (the (integer 0) len)
                                      G
                                      s8733
                                      stack)))
                                   A))
                 (the boolean
                      (pvs__AND (the
                                 boolean
                                 (pvs-funcall
                                  (pvs-funcall
                                   (tdstack_scaffold?_0)
                                   (the
                                    (simple-array t)
                                    (pvs2cl_tuple
                                     (the (integer 0) len)
                                     G
                                     s8733
                                     (the (integer 0 *) i)
                                     stack)))
                                  A))
                                (the
                                 boolean
                                 (pvs__=>
                                  (the boolean (push_2? stack))
                                  (the
                                   boolean
                                   (instack!_1
                                    (the (integer 0 *) i)
                                    (the (integer 0 *) root)
                                    stack)))))))))
(defun putstack_1 ()
  #'(lambda (lamvar#0)
      (let ((len (project 1 lamvar#0))
            (G (project 2 lamvar#0))
            (s74583 (project 3 lamvar#0))
            (start (project 4 lamvar#0))
            (root (project 5 lamvar#0)))
        (declare (type (integer 0) len) (type (integer 0 *) start)
         (type (integer 0 *) root))
        #'(lambda (St)
            #'(lambda (lamvar#0)
                (let ((pos (project 1 lamvar#0))
                      (n (project 2 lamvar#0)))
                  (declare (type (integer 0 *) pos)
                   (type (integer 0 *) n))
                  (the (simple-array t)
                       (if (the boolean
                                (_instack_1
                                 (the (integer 0 *) pos)
                                 (the (integer 0 *) n)
                                 (project
                                  2
                                  (the (simple-array t) St))))
                           (the (simple-array t)
                                (let
                                 ((A8786 (the (integer 0 *) n))
                                  (A8785 (the (integer 0 *) pos)))
                                 (let
                                  ((N8783 (make-loop_2))
                                   (E8782 (the (simple-array t) St)))
                                  (let
                                   ((E8784 E8782))
                                   (nd-rec-tup-update
                                    E8782
                                    0
                                    (pvs-function-update
                                     (mkcopy-pvs-closure-hash
                                      (svref E8784 0))
                                     A8785
                                     (pvs-outer-array-update
                                      (pvs-funcall
                                       (svref E8784 0)
                                       A8785)
                                      A8786
                                      N8783
                                      (the
                                       (integer 0)
                                       (_exp2 8)))))))))
                         (the (simple-array t)
                              (let ()
                                (let
                                 ((N8788
                                   (make-push_2
                                    (the (integer 0 *) pos)
                                    (the (integer 0 *) n)
                                    (project
                                     2
                                     (the (simple-array t) St))))
                                  (E8787 (the (simple-array t) St)))
                                 (let
                                  ((E8789 E8787))
                                  (nd-rec-tup-update
                                   E8787
                                   1
                                   N8788)))))))))))))
(defun _putstack_1 (len G s8746 start root St pos n)
  (declare (type (integer 0) len) (type (integer 0 *) start)
   (type (integer 0 *) root) (type (simple-array t) St)
   (type (integer 0 *) pos) (type (integer 0 *) n))
  (the (simple-array t)
       (if (the boolean
                (_instack_1 (the (integer 0 *) pos)
                            (the (integer 0 *) n)
                            (project 2 (the (simple-array t) St))))
           (the (simple-array t)
                (let ((A8751 (the (integer 0 *) n))
                      (A8750 (the (integer 0 *) pos)))
                  (let ((N8748 (make-loop_2))
                        (E8747 (the (simple-array t) St)))
                    (let ((E8749 E8747))
                      (nd-rec-tup-update E8747 0
                                         (pvs-function-update
                                          (mkcopy-pvs-closure-hash
                                           (svref E8749 0))
                                          A8750
                                          (pvs-outer-array-update
                                           (pvs-funcall
                                            (svref E8749 0)
                                            A8750)
                                           A8751
                                           N8748
                                           (the
                                            (integer 0)
                                            (_exp2 8)))))))))
         (the (simple-array t)
              (let ()
                (let ((N8753
                       (make-push_2 (the (integer 0 *) pos)
                                    (the (integer 0 *) n)
                                    (project
                                     2
                                     (the (simple-array t) St))))
                      (E8752 (the (simple-array t) St)))
                  (let ((E8754 E8752))
                    (nd-rec-tup-update E8752 1 N8753))))))))
(defun putstack!_1 (len G s8746 start root St pos n)
  (declare (type (integer 0) len) (type (integer 0 *) start)
   (type (integer 0 *) root) (type (simple-array t) St)
   (type (integer 0 *) pos) (type (integer 0 *) n))
  (the (simple-array t)
       (if (the boolean
                (instack!_1 (the (integer 0 *) pos)
                            (the (integer 0 *) n)
                            (project 2 (the (simple-array t) St))))
           (the (simple-array t)
                (let ((A8776 (the (integer 0 *) n))
                      (LHS8774 (the (integer 0 *) pos)))
                  (let ((RHS8769 (make-loop_2))
                        (E8770 (the (simple-array t) St)))
                    (let* ((E8771 E8770)
                           (R8773
                            (let ((E8775
                                   (make-closure-hash
                                    (svref E8771 0))))
                              (pvs-function-update E8775 LHS8774
                                                   (pvs-outer-array-update
                                                    (pvs-closure-hash-lookup
                                                     E8775
                                                     LHS8774)
                                                    A8776
                                                    RHS8769
                                                    (the
                                                     (integer 0)
                                                     (exp2! 8)))))))
                      (rec-tup-update E8771 0 R8773)
                      E8771)
                    E8770)))
         (the (simple-array t)
              (let ((RHS8777
                     (make-push_2 (the (integer 0 *) pos)
                                  (the (integer 0 *) n)
                                  (project
                                   2
                                   (the (simple-array t) St))))
                    (E8778 (the (simple-array t) St)))
                (let* ((E8779 E8778) (R8781 RHS8777))
                  (rec-tup-update E8779 1 R8781)
                  E8779)
                E8778)))))
(defun step_2 ()
  #'(lambda (lamvar#0)
      (let ((len (project 1 lamvar#0))
            (G (project 2 lamvar#0))
            (s74583 (project 3 lamvar#0))
            (start (project 4 lamvar#0))
            (root (project 5 lamvar#0)))
        (declare (type (integer 0) len) (type (integer 0 *) start)
         (type (integer 0 *) root))
        #'(lambda (St)
            (the (simple-array t)
                 (let ((scaf (project 1 (the (simple-array t) St))))
                   (declare (type nil scaf))
                   (the (simple-array t)
                        (let ((stack
                               (project 2 (the (simple-array t) St))))
                          (declare (type nil stack))
                          (the (simple-array t)
                               (if
                                (the boolean (empty_2? stack))
                                (the
                                 (simple-array t)
                                 (if
                                  (the
                                   boolean
                                   (pending_2?
                                    (pvs-funcall
                                     (pvs-funcall
                                      scaf
                                      (the (integer 0 *) start))
                                     (the (integer 0 *) root))))
                                  (the
                                   (simple-array t)
                                   (let
                                    ()
                                    (let
                                     ((N9548
                                       (make-push_2
                                        (the (integer 0 *) start)
                                        (the (integer 0 *) root)
                                        (make-empty_2)))
                                      (E9547
                                       (the (simple-array t) St)))
                                     (let
                                      ((E9549 E9547))
                                      (nd-rec-tup-update
                                       E9547
                                       1
                                       N9548)))))
                                  (the (simple-array t) St)))
                                (the
                                 (simple-array t)
                                 (let
                                  ((pos
                                    (the
                                     (integer 0 *)
                                     (push_2-pos stack))))
                                  (declare (type (integer 0 *) pos))
                                  (the
                                   (simple-array t)
                                   (let
                                    ((cur
                                      (the
                                       (integer 0 *)
                                       (push_2-nt stack))))
                                    (declare (type (integer 0 *) cur))
                                    (the
                                     (simple-array t)
                                     (let
                                      ((rest (push_2-rest stack)))
                                      (declare (type nil rest))
                                      (the
                                       (simple-array t)
                                       (the
                                        (simple-array t)
                                        (let
                                         ((x
                                           (pvs-funcall
                                            G
                                            (the (integer 0 *) cur))))
                                         (declare (type nil x))
                                         (the
                                          (simple-array t)
                                          (if
                                           (the boolean (epsilon_2? x))
                                           (the
                                            (simple-array t)
                                            (let
                                             ()
                                             (let
                                              ((N9556 rest)
                                               (E9555
                                                (let
                                                 ((A9554
                                                   (the
                                                    (integer 0 *)
                                                    cur))
                                                  (A9553
                                                   (the
                                                    (integer 0 *)
                                                    pos)))
                                                 (let
                                                  ((N9551
                                                    (make-good_2 0))
                                                   (E9550
                                                    (the
                                                     (simple-array t)
                                                     St)))
                                                  (let
                                                   ((E9552 E9550))
                                                   (nd-rec-tup-update
                                                    E9550
                                                    0
                                                    (pvs-function-update
                                                     (mkcopy-pvs-closure-hash
                                                      (svref E9552 0))
                                                     A9553
                                                     (pvs-outer-array-update
                                                      (pvs-funcall
                                                       (svref E9552 0)
                                                       A9553)
                                                      A9554
                                                      N9551
                                                      (the
                                                       (integer 0)
                                                       (_exp2
                                                        8))))))))))
                                              (let
                                               ((E9557 E9555))
                                               (nd-rec-tup-update
                                                E9555
                                                1
                                                N9556)))))
                                           (the
                                            (simple-array t)
                                            (if
                                             (the
                                              boolean
                                              (failure_2? x))
                                             (the
                                              (simple-array t)
                                              (let
                                               ()
                                               (let
                                                ((N9564 rest)
                                                 (E9563
                                                  (let
                                                   ((A9562
                                                     (the
                                                      (integer 0 *)
                                                      cur))
                                                    (A9561
                                                     (the
                                                      (integer 0 *)
                                                      pos)))
                                                   (let
                                                    ((N9559
                                                      (make-fail_2))
                                                     (E9558
                                                      (the
                                                       (simple-array t)
                                                       St)))
                                                    (let
                                                     ((E9560 E9558))
                                                     (nd-rec-tup-update
                                                      E9558
                                                      0
                                                      (pvs-function-update
                                                       (mkcopy-pvs-closure-hash
                                                        (svref
                                                         E9560
                                                         0))
                                                       A9561
                                                       (pvs-outer-array-update
                                                        (pvs-funcall
                                                         (svref
                                                          E9560
                                                          0)
                                                         A9561)
                                                        A9562
                                                        N9559
                                                        (the
                                                         (integer 0)
                                                         (_exp2
                                                          8))))))))))
                                                (let
                                                 ((E9565 E9563))
                                                 (nd-rec-tup-update
                                                  E9563
                                                  1
                                                  N9564)))))
                                             (the
                                              (simple-array t)
                                              (if
                                               (the boolean (any_3? x))
                                               (the
                                                (simple-array t)
                                                (let
                                                 ((v
                                                   (if
                                                    (the
                                                     boolean
                                                     (pvs__OR
                                                      (the
                                                       boolean
                                                       (=
                                                        (the
                                                         (integer 0 *)
                                                         pos)
                                                        (the
                                                         (integer 0)
                                                         len)))
                                                      (the
                                                       boolean
                                                       (pvs_NOT
                                                        (the
                                                         boolean
                                                         (pvs-funcall
                                                          (any_3-p x)
                                                          (the
                                                           fixnum
                                                           (pvs-funcall
                                                            s74583
                                                            (the
                                                             (integer
                                                              0
                                                              *)
                                                             pos)))))))))
                                                    (make-fail_2)
                                                    (make-good_2 1))))
                                                 (declare (type nil v))
                                                 (the
                                                  (simple-array t)
                                                  (let
                                                   ()
                                                   (let
                                                    ((N9572 rest)
                                                     (E9571
                                                      (let
                                                       ((A9570
                                                         (the
                                                          (integer 0 *)
                                                          cur))
                                                        (A9569
                                                         (the
                                                          (integer 0 *)
                                                          pos)))
                                                       (let
                                                        ((N9567 v)
                                                         (E9566
                                                          (the
                                                           (simple-array
                                                            t)
                                                           St)))
                                                        (let
                                                         ((E9568
                                                           E9566))
                                                         (nd-rec-tup-update
                                                          E9566
                                                          0
                                                          (pvs-function-update
                                                           (mkcopy-pvs-closure-hash
                                                            (svref
                                                             E9568
                                                             0))
                                                           A9569
                                                           (pvs-outer-array-update
                                                            (pvs-funcall
                                                             (svref
                                                              E9568
                                                              0)
                                                             A9569)
                                                            A9570
                                                            N9567
                                                            (the
                                                             (integer
                                                              0)
                                                             (_exp2
                                                              8))))))))))
                                                    (let
                                                     ((E9573 E9571))
                                                     (nd-rec-tup-update
                                                      E9571
                                                      1
                                                      N9572)))))))
                                               (the
                                                (simple-array t)
                                                (if
                                                 (the
                                                  boolean
                                                  (terminal_2? x))
                                                 (the
                                                  (simple-array t)
                                                  (let
                                                   ((v
                                                     (if
                                                      (the
                                                       boolean
                                                       (pvs__OR
                                                        (the
                                                         boolean
                                                         (=
                                                          (the
                                                           (integer
                                                            0
                                                            *)
                                                           pos)
                                                          (the
                                                           (integer 0)
                                                           len)))
                                                        (the
                                                         boolean
                                                         (/=
                                                          (the
                                                           fixnum
                                                           (terminal_2-a
                                                            x))
                                                          (the
                                                           fixnum
                                                           (pvs-funcall
                                                            s74583
                                                            (the
                                                             (integer
                                                              0
                                                              *)
                                                             pos)))))))
                                                      (make-fail_2)
                                                      (make-good_2
                                                       1))))
                                                   (declare
                                                    (type nil v))
                                                   (the
                                                    (simple-array t)
                                                    (let
                                                     ()
                                                     (let
                                                      ((N9580 rest)
                                                       (E9579
                                                        (let
                                                         ((A9578
                                                           (the
                                                            (integer
                                                             0
                                                             *)
                                                            cur))
                                                          (A9577
                                                           (the
                                                            (integer
                                                             0
                                                             *)
                                                            pos)))
                                                         (let
                                                          ((N9575 v)
                                                           (E9574
                                                            (the
                                                             (simple-array
                                                              t)
                                                             St)))
                                                          (let
                                                           ((E9576
                                                             E9574))
                                                           (nd-rec-tup-update
                                                            E9574
                                                            0
                                                            (pvs-function-update
                                                             (mkcopy-pvs-closure-hash
                                                              (svref
                                                               E9576
                                                               0))
                                                             A9577
                                                             (pvs-outer-array-update
                                                              (pvs-funcall
                                                               (svref
                                                                E9576
                                                                0)
                                                               A9577)
                                                              A9578
                                                              N9575
                                                              (the
                                                               (integer
                                                                0)
                                                               (_exp2
                                                                8))))))))))
                                                      (let
                                                       ((E9581 E9579))
                                                       (nd-rec-tup-update
                                                        E9579
                                                        1
                                                        N9580)))))))
                                                 (the
                                                  (simple-array t)
                                                  (if
                                                   (the
                                                    boolean
                                                    (concat_2? x))
                                                   (the
                                                    (simple-array t)
                                                    (the
                                                     (simple-array t)
                                                     (let
                                                      ((x#0
                                                        (pvs-funcall
                                                         (pvs-funcall
                                                          (project
                                                           1
                                                           (the
                                                            (simple-array
                                                             t)
                                                            St))
                                                          (the
                                                           (integer
                                                            0
                                                            *)
                                                           pos))
                                                         (the
                                                          (integer 0 *)
                                                          (peg-e1-3
                                                           x)))))
                                                      (declare
                                                       (type nil x#0))
                                                      (the
                                                       (simple-array t)
                                                       (if
                                                        (the
                                                         boolean
                                                         (fail_2? x#0))
                                                        (the
                                                         (simple-array
                                                          t)
                                                         (let
                                                          ()
                                                          (let
                                                           ((N9588
                                                             rest)
                                                            (E9587
                                                             (let
                                                              ((A9586
                                                                (the
                                                                 (integer
                                                                  0
                                                                  *)
                                                                 cur))
                                                               (A9585
                                                                (the
                                                                 (integer
                                                                  0
                                                                  *)
                                                                 pos)))
                                                              (let
                                                               ((N9583
                                                                 (make-fail_2))
                                                                (E9582
                                                                 (the
                                                                  (simple-array
                                                                   t)
                                                                  St)))
                                                               (let
                                                                ((E9584
                                                                  E9582))
                                                                (nd-rec-tup-update
                                                                 E9582
                                                                 0
                                                                 (pvs-function-update
                                                                  (mkcopy-pvs-closure-hash
                                                                   (svref
                                                                    E9584
                                                                    0))
                                                                  A9585
                                                                  (pvs-outer-array-update
                                                                   (pvs-funcall
                                                                    (svref
                                                                     E9584
                                                                     0)
                                                                    A9585)
                                                                   A9586
                                                                   N9583
                                                                   (the
                                                                    (integer
                                                                     0)
                                                                    (_exp2
                                                                     8))))))))))
                                                           (let
                                                            ((E9589
                                                              E9587))
                                                            (nd-rec-tup-update
                                                             E9587
                                                             1
                                                             N9588)))))
                                                        (the
                                                         (simple-array
                                                          t)
                                                         (if
                                                          (the
                                                           boolean
                                                           (loop_2?
                                                            x#0))
                                                          (the
                                                           (simple-array
                                                            t)
                                                           (let
                                                            ()
                                                            (let
                                                             ((N9596
                                                               rest)
                                                              (E9595
                                                               (let
                                                                ((A9594
                                                                  (the
                                                                   (integer
                                                                    0
                                                                    *)
                                                                   cur))
                                                                 (A9593
                                                                  (the
                                                                   (integer
                                                                    0
                                                                    *)
                                                                   pos)))
                                                                (let
                                                                 ((N9591
                                                                   (make-loop_2))
                                                                  (E9590
                                                                   (the
                                                                    (simple-array
                                                                     t)
                                                                    St)))
                                                                 (let
                                                                  ((E9592
                                                                    E9590))
                                                                  (nd-rec-tup-update
                                                                   E9590
                                                                   0
                                                                   (pvs-function-update
                                                                    (mkcopy-pvs-closure-hash
                                                                     (svref
                                                                      E9592
                                                                      0))
                                                                    A9593
                                                                    (pvs-outer-array-update
                                                                     (pvs-funcall
                                                                      (svref
                                                                       E9592
                                                                       0)
                                                                      A9593)
                                                                     A9594
                                                                     N9591
                                                                     (the
                                                                      (integer
                                                                       0)
                                                                      (_exp2
                                                                       8))))))))))
                                                             (let
                                                              ((E9597
                                                                E9595))
                                                              (nd-rec-tup-update
                                                               E9595
                                                               1
                                                               N9596)))))
                                                          (the
                                                           (simple-array
                                                            t)
                                                           (if
                                                            (the
                                                             boolean
                                                             (good_2?
                                                              x#0))
                                                            (the
                                                             (simple-array
                                                              t)
                                                             (the
                                                              (simple-array
                                                               t)
                                                              (let
                                                               ((x1
                                                                 (pvs-funcall
                                                                  (pvs-funcall
                                                                   (project
                                                                    1
                                                                    (the
                                                                     (simple-array
                                                                      t)
                                                                     St))
                                                                   (pvs__+
                                                                    (the
                                                                     (integer
                                                                      0
                                                                      *)
                                                                     pos)
                                                                    (the
                                                                     (integer
                                                                      0)
                                                                     (good_2-span
                                                                      x#0))))
                                                                  (the
                                                                   (integer
                                                                    0
                                                                    *)
                                                                   (peg-e2-3
                                                                    x)))))
                                                               (declare
                                                                (type
                                                                 nil
                                                                 x1))
                                                               (the
                                                                (simple-array
                                                                 t)
                                                                (if
                                                                 (the
                                                                  boolean
                                                                  (fail_2?
                                                                   x1))
                                                                 (the
                                                                  (simple-array
                                                                   t)
                                                                  (let
                                                                   ()
                                                                   (let
                                                                    ((N9604
                                                                      rest)
                                                                     (E9603
                                                                      (let
                                                                       ((A9602
                                                                         (the
                                                                          (integer
                                                                           0
                                                                           *)
                                                                          cur))
                                                                        (A9601
                                                                         (the
                                                                          (integer
                                                                           0
                                                                           *)
                                                                          pos)))
                                                                       (let
                                                                        ((N9599
                                                                          (make-fail_2))
                                                                         (E9598
                                                                          (the
                                                                           (simple-array
                                                                            t)
                                                                           St)))
                                                                        (let
                                                                         ((E9600
                                                                           E9598))
                                                                         (nd-rec-tup-update
                                                                          E9598
                                                                          0
                                                                          (pvs-function-update
                                                                           (mkcopy-pvs-closure-hash
                                                                            (svref
                                                                             E9600
                                                                             0))
                                                                           A9601
                                                                           (pvs-outer-array-update
                                                                            (pvs-funcall
                                                                             (svref
                                                                              E9600
                                                                              0)
                                                                             A9601)
                                                                            A9602
                                                                            N9599
                                                                            (the
                                                                             (integer
                                                                              0)
                                                                             (_exp2
                                                                              8))))))))))
                                                                    (let
                                                                     ((E9605
                                                                       E9603))
                                                                     (nd-rec-tup-update
                                                                      E9603
                                                                      1
                                                                      N9604)))))
                                                                 (the
                                                                  (simple-array
                                                                   t)
                                                                  (if
                                                                   (the
                                                                    boolean
                                                                    (loop_2?
                                                                     x1))
                                                                   (the
                                                                    (simple-array
                                                                     t)
                                                                    (let
                                                                     ()
                                                                     (let
                                                                      ((N9612
                                                                        rest)
                                                                       (E9611
                                                                        (let
                                                                         ((A9610
                                                                           (the
                                                                            (integer
                                                                             0
                                                                             *)
                                                                            cur))
                                                                          (A9609
                                                                           (the
                                                                            (integer
                                                                             0
                                                                             *)
                                                                            pos)))
                                                                         (let
                                                                          ((N9607
                                                                            (make-loop_2))
                                                                           (E9606
                                                                            (the
                                                                             (simple-array
                                                                              t)
                                                                             St)))
                                                                          (let
                                                                           ((E9608
                                                                             E9606))
                                                                           (nd-rec-tup-update
                                                                            E9606
                                                                            0
                                                                            (pvs-function-update
                                                                             (mkcopy-pvs-closure-hash
                                                                              (svref
                                                                               E9608
                                                                               0))
                                                                             A9609
                                                                             (pvs-outer-array-update
                                                                              (pvs-funcall
                                                                               (svref
                                                                                E9608
                                                                                0)
                                                                               A9609)
                                                                              A9610
                                                                              N9607
                                                                              (the
                                                                               (integer
                                                                                0)
                                                                               (_exp2
                                                                                8))))))))))
                                                                      (let
                                                                       ((E9613
                                                                         E9611))
                                                                       (nd-rec-tup-update
                                                                        E9611
                                                                        1
                                                                        N9612)))))
                                                                   (the
                                                                    (simple-array
                                                                     t)
                                                                    (if
                                                                     (the
                                                                      boolean
                                                                      (good_2?
                                                                       x1))
                                                                     (the
                                                                      (simple-array
                                                                       t)
                                                                      (let
                                                                       ()
                                                                       (let
                                                                        ((N9620
                                                                          rest)
                                                                         (E9619
                                                                          (let
                                                                           ((A9618
                                                                             (the
                                                                              (integer
                                                                               0
                                                                               *)
                                                                              cur))
                                                                            (A9617
                                                                             (the
                                                                              (integer
                                                                               0
                                                                               *)
                                                                              pos)))
                                                                           (let
                                                                            ((N9615
                                                                              (make-good_2
                                                                               (pvs__+
                                                                                (the
                                                                                 (integer
                                                                                  0)
                                                                                 (good_2-span
                                                                                  x#0))
                                                                                (the
                                                                                 (integer
                                                                                  0)
                                                                                 (good_2-span
                                                                                  x1)))))
                                                                             (E9614
                                                                              (the
                                                                               (simple-array
                                                                                t)
                                                                               St)))
                                                                            (let
                                                                             ((E9616
                                                                               E9614))
                                                                             (nd-rec-tup-update
                                                                              E9614
                                                                              0
                                                                              (pvs-function-update
                                                                               (mkcopy-pvs-closure-hash
                                                                                (svref
                                                                                 E9616
                                                                                 0))
                                                                               A9617
                                                                               (pvs-outer-array-update
                                                                                (pvs-funcall
                                                                                 (svref
                                                                                  E9616
                                                                                  0)
                                                                                 A9617)
                                                                                A9618
                                                                                N9615
                                                                                (the
                                                                                 (integer
                                                                                  0)
                                                                                 (_exp2
                                                                                  8))))))))))
                                                                        (let
                                                                         ((E9621
                                                                           E9619))
                                                                         (nd-rec-tup-update
                                                                          E9619
                                                                          1
                                                                          N9620)))))
                                                                     (the
                                                                      (simple-array
                                                                       t)
                                                                      (_putstack_1
                                                                       (the
                                                                        (integer
                                                                         0)
                                                                        len)
                                                                       G
                                                                       s74583
                                                                       (the
                                                                        (integer
                                                                         0
                                                                         *)
                                                                        start)
                                                                       (the
                                                                        (integer
                                                                         0
                                                                         *)
                                                                        root)
                                                                       (the
                                                                        (simple-array
                                                                         t)
                                                                        St)
                                                                       (pvs__+
                                                                        (the
                                                                         (integer
                                                                          0
                                                                          *)
                                                                         pos)
                                                                        (the
                                                                         (integer
                                                                          0)
                                                                         (good_2-span
                                                                          x#0)))
                                                                       (the
                                                                        (integer
                                                                         0
                                                                         *)
                                                                        (peg-e2-3
                                                                         x)))))))))))))
                                                            (the
                                                             (simple-array
                                                              t)
                                                             (_putstack_1
                                                              (the
                                                               (integer
                                                                0)
                                                               len)
                                                              G
                                                              s74583
                                                              (the
                                                               (integer
                                                                0
                                                                *)
                                                               start)
                                                              (the
                                                               (integer
                                                                0
                                                                *)
                                                               root)
                                                              (the
                                                               (simple-array
                                                                t)
                                                               St)
                                                              (the
                                                               (integer
                                                                0
                                                                *)
                                                               pos)
                                                              (the
                                                               (integer
                                                                0
                                                                *)
                                                               (peg-e1-3
                                                                x)))))))))))))
                                                   (the
                                                    (simple-array t)
                                                    (if
                                                     (the
                                                      boolean
                                                      (choice_2? x))
                                                     (the
                                                      (simple-array t)
                                                      (the
                                                       (simple-array t)
                                                       (let
                                                        ((x#0
                                                          (pvs-funcall
                                                           (pvs-funcall
                                                            scaf
                                                            (the
                                                             (integer
                                                              0
                                                              *)
                                                             pos))
                                                           (the
                                                            (integer
                                                             0
                                                             *)
                                                            (peg-e1-3
                                                             x)))))
                                                        (declare
                                                         (type
                                                          nil
                                                          x#0))
                                                        (the
                                                         (simple-array
                                                          t)
                                                         (if
                                                          (the
                                                           boolean
                                                           (fail_2?
                                                            x#0))
                                                          (the
                                                           (simple-array
                                                            t)
                                                           (the
                                                            (simple-array
                                                             t)
                                                            (let
                                                             ((x#1
                                                               (pvs-funcall
                                                                (pvs-funcall
                                                                 scaf
                                                                 (the
                                                                  (integer
                                                                   0
                                                                   *)
                                                                  pos))
                                                                (the
                                                                 (integer
                                                                  0
                                                                  *)
                                                                 (peg-e2-3
                                                                  x)))))
                                                             (declare
                                                              (type
                                                               nil
                                                               x#1))
                                                             (the
                                                              (simple-array
                                                               t)
                                                              (if
                                                               (the
                                                                boolean
                                                                (fail_2?
                                                                 x#1))
                                                               (the
                                                                (simple-array
                                                                 t)
                                                                (let
                                                                 ()
                                                                 (let
                                                                  ((N9628
                                                                    rest)
                                                                   (E9627
                                                                    (let
                                                                     ((A9626
                                                                       (the
                                                                        (integer
                                                                         0
                                                                         *)
                                                                        cur))
                                                                      (A9625
                                                                       (the
                                                                        (integer
                                                                         0
                                                                         *)
                                                                        pos)))
                                                                     (let
                                                                      ((N9623
                                                                        (make-fail_2))
                                                                       (E9622
                                                                        (the
                                                                         (simple-array
                                                                          t)
                                                                         St)))
                                                                      (let
                                                                       ((E9624
                                                                         E9622))
                                                                       (nd-rec-tup-update
                                                                        E9622
                                                                        0
                                                                        (pvs-function-update
                                                                         (mkcopy-pvs-closure-hash
                                                                          (svref
                                                                           E9624
                                                                           0))
                                                                         A9625
                                                                         (pvs-outer-array-update
                                                                          (pvs-funcall
                                                                           (svref
                                                                            E9624
                                                                            0)
                                                                           A9625)
                                                                          A9626
                                                                          N9623
                                                                          (the
                                                                           (integer
                                                                            0)
                                                                           (_exp2
                                                                            8))))))))))
                                                                  (let
                                                                   ((E9629
                                                                     E9627))
                                                                   (nd-rec-tup-update
                                                                    E9627
                                                                    1
                                                                    N9628)))))
                                                               (the
                                                                (simple-array
                                                                 t)
                                                                (if
                                                                 (the
                                                                  boolean
                                                                  (loop_2?
                                                                   x#1))
                                                                 (the
                                                                  (simple-array
                                                                   t)
                                                                  (let
                                                                   ()
                                                                   (let
                                                                    ((N9636
                                                                      rest)
                                                                     (E9635
                                                                      (let
                                                                       ((A9634
                                                                         (the
                                                                          (integer
                                                                           0
                                                                           *)
                                                                          cur))
                                                                        (A9633
                                                                         (the
                                                                          (integer
                                                                           0
                                                                           *)
                                                                          pos)))
                                                                       (let
                                                                        ((N9631
                                                                          (make-loop_2))
                                                                         (E9630
                                                                          (the
                                                                           (simple-array
                                                                            t)
                                                                           St)))
                                                                        (let
                                                                         ((E9632
                                                                           E9630))
                                                                         (nd-rec-tup-update
                                                                          E9630
                                                                          0
                                                                          (pvs-function-update
                                                                           (mkcopy-pvs-closure-hash
                                                                            (svref
                                                                             E9632
                                                                             0))
                                                                           A9633
                                                                           (pvs-outer-array-update
                                                                            (pvs-funcall
                                                                             (svref
                                                                              E9632
                                                                              0)
                                                                             A9633)
                                                                            A9634
                                                                            N9631
                                                                            (the
                                                                             (integer
                                                                              0)
                                                                             (_exp2
                                                                              8))))))))))
                                                                    (let
                                                                     ((E9637
                                                                       E9635))
                                                                     (nd-rec-tup-update
                                                                      E9635
                                                                      1
                                                                      N9636)))))
                                                                 (the
                                                                  (simple-array
                                                                   t)
                                                                  (if
                                                                   (the
                                                                    boolean
                                                                    (good_2?
                                                                     x#1))
                                                                   (the
                                                                    (simple-array
                                                                     t)
                                                                    (let
                                                                     ()
                                                                     (let
                                                                      ((N9644
                                                                        rest)
                                                                       (E9643
                                                                        (let
                                                                         ((A9642
                                                                           (the
                                                                            (integer
                                                                             0
                                                                             *)
                                                                            cur))
                                                                          (A9641
                                                                           (the
                                                                            (integer
                                                                             0
                                                                             *)
                                                                            pos)))
                                                                         (let
                                                                          ((N9639
                                                                            (make-good_2
                                                                             (the
                                                                              (integer
                                                                               0)
                                                                              (good_2-span
                                                                               x#1))))
                                                                           (E9638
                                                                            (the
                                                                             (simple-array
                                                                              t)
                                                                             St)))
                                                                          (let
                                                                           ((E9640
                                                                             E9638))
                                                                           (nd-rec-tup-update
                                                                            E9638
                                                                            0
                                                                            (pvs-function-update
                                                                             (mkcopy-pvs-closure-hash
                                                                              (svref
                                                                               E9640
                                                                               0))
                                                                             A9641
                                                                             (pvs-outer-array-update
                                                                              (pvs-funcall
                                                                               (svref
                                                                                E9640
                                                                                0)
                                                                               A9641)
                                                                              A9642
                                                                              N9639
                                                                              (the
                                                                               (integer
                                                                                0)
                                                                               (_exp2
                                                                                8))))))))))
                                                                      (let
                                                                       ((E9645
                                                                         E9643))
                                                                       (nd-rec-tup-update
                                                                        E9643
                                                                        1
                                                                        N9644)))))
                                                                   (the
                                                                    (simple-array
                                                                     t)
                                                                    (_putstack_1
                                                                     (the
                                                                      (integer
                                                                       0)
                                                                      len)
                                                                     G
                                                                     s74583
                                                                     (the
                                                                      (integer
                                                                       0
                                                                       *)
                                                                      start)
                                                                     (the
                                                                      (integer
                                                                       0
                                                                       *)
                                                                      root)
                                                                     (the
                                                                      (simple-array
                                                                       t)
                                                                      St)
                                                                     (the
                                                                      (integer
                                                                       0
                                                                       *)
                                                                      pos)
                                                                     (the
                                                                      (integer
                                                                       0
                                                                       *)
                                                                      (peg-e2-3
                                                                       x)))))))))))))
                                                          (the
                                                           (simple-array
                                                            t)
                                                           (if
                                                            (the
                                                             boolean
                                                             (loop_2?
                                                              x#0))
                                                            (the
                                                             (simple-array
                                                              t)
                                                             (let
                                                              ()
                                                              (let
                                                               ((N9652
                                                                 rest)
                                                                (E9651
                                                                 (let
                                                                  ((A9650
                                                                    (the
                                                                     (integer
                                                                      0
                                                                      *)
                                                                     cur))
                                                                   (A9649
                                                                    (the
                                                                     (integer
                                                                      0
                                                                      *)
                                                                     pos)))
                                                                  (let
                                                                   ((N9647
                                                                     (make-loop_2))
                                                                    (E9646
                                                                     (the
                                                                      (simple-array
                                                                       t)
                                                                      St)))
                                                                   (let
                                                                    ((E9648
                                                                      E9646))
                                                                    (nd-rec-tup-update
                                                                     E9646
                                                                     0
                                                                     (pvs-function-update
                                                                      (mkcopy-pvs-closure-hash
                                                                       (svref
                                                                        E9648
                                                                        0))
                                                                      A9649
                                                                      (pvs-outer-array-update
                                                                       (pvs-funcall
                                                                        (svref
                                                                         E9648
                                                                         0)
                                                                        A9649)
                                                                       A9650
                                                                       N9647
                                                                       (the
                                                                        (integer
                                                                         0)
                                                                        (_exp2
                                                                         8))))))))))
                                                               (let
                                                                ((E9653
                                                                  E9651))
                                                                (nd-rec-tup-update
                                                                 E9651
                                                                 1
                                                                 N9652)))))
                                                            (the
                                                             (simple-array
                                                              t)
                                                             (if
                                                              (the
                                                               boolean
                                                               (good_2?
                                                                x#0))
                                                              (the
                                                               (simple-array
                                                                t)
                                                               (let
                                                                ()
                                                                (let
                                                                 ((N9660
                                                                   rest)
                                                                  (E9659
                                                                   (let
                                                                    ((A9658
                                                                      (the
                                                                       (integer
                                                                        0
                                                                        *)
                                                                       cur))
                                                                     (A9657
                                                                      (the
                                                                       (integer
                                                                        0
                                                                        *)
                                                                       pos)))
                                                                    (let
                                                                     ((N9655
                                                                       (make-good_2
                                                                        (the
                                                                         (integer
                                                                          0)
                                                                         (good_2-span
                                                                          x#0))))
                                                                      (E9654
                                                                       (the
                                                                        (simple-array
                                                                         t)
                                                                        St)))
                                                                     (let
                                                                      ((E9656
                                                                        E9654))
                                                                      (nd-rec-tup-update
                                                                       E9654
                                                                       0
                                                                       (pvs-function-update
                                                                        (mkcopy-pvs-closure-hash
                                                                         (svref
                                                                          E9656
                                                                          0))
                                                                        A9657
                                                                        (pvs-outer-array-update
                                                                         (pvs-funcall
                                                                          (svref
                                                                           E9656
                                                                           0)
                                                                          A9657)
                                                                         A9658
                                                                         N9655
                                                                         (the
                                                                          (integer
                                                                           0)
                                                                          (_exp2
                                                                           8))))))))))
                                                                 (let
                                                                  ((E9661
                                                                    E9659))
                                                                  (nd-rec-tup-update
                                                                   E9659
                                                                   1
                                                                   N9660)))))
                                                              (the
                                                               (simple-array
                                                                t)
                                                               (_putstack_1
                                                                (the
                                                                 (integer
                                                                  0)
                                                                 len)
                                                                G
                                                                s74583
                                                                (the
                                                                 (integer
                                                                  0
                                                                  *)
                                                                 start)
                                                                (the
                                                                 (integer
                                                                  0
                                                                  *)
                                                                 root)
                                                                (the
                                                                 (simple-array
                                                                  t)
                                                                 St)
                                                                (the
                                                                 (integer
                                                                  0
                                                                  *)
                                                                 pos)
                                                                (the
                                                                 (integer
                                                                  0
                                                                  *)
                                                                 (peg-e1-3
                                                                  x)))))))))))))
                                                     (the
                                                      (simple-array t)
                                                      (if
                                                       (the
                                                        boolean
                                                        (check_2? x))
                                                       (the
                                                        (simple-array
                                                         t)
                                                        (the
                                                         (simple-array
                                                          t)
                                                         (let
                                                          ((x#0
                                                            (pvs-funcall
                                                             (pvs-funcall
                                                              scaf
                                                              (the
                                                               (integer
                                                                0
                                                                *)
                                                               pos))
                                                             (the
                                                              (integer
                                                               0
                                                               *)
                                                              (peg-e-3
                                                               x)))))
                                                          (declare
                                                           (type
                                                            nil
                                                            x#0))
                                                          (the
                                                           (simple-array
                                                            t)
                                                           (if
                                                            (the
                                                             boolean
                                                             (fail_2?
                                                              x#0))
                                                            (the
                                                             (simple-array
                                                              t)
                                                             (let
                                                              ()
                                                              (let
                                                               ((N9668
                                                                 rest)
                                                                (E9667
                                                                 (let
                                                                  ((A9666
                                                                    (the
                                                                     (integer
                                                                      0
                                                                      *)
                                                                     cur))
                                                                   (A9665
                                                                    (the
                                                                     (integer
                                                                      0
                                                                      *)
                                                                     pos)))
                                                                  (let
                                                                   ((N9663
                                                                     (make-fail_2))
                                                                    (E9662
                                                                     (the
                                                                      (simple-array
                                                                       t)
                                                                      St)))
                                                                   (let
                                                                    ((E9664
                                                                      E9662))
                                                                    (nd-rec-tup-update
                                                                     E9662
                                                                     0
                                                                     (pvs-function-update
                                                                      (mkcopy-pvs-closure-hash
                                                                       (svref
                                                                        E9664
                                                                        0))
                                                                      A9665
                                                                      (pvs-outer-array-update
                                                                       (pvs-funcall
                                                                        (svref
                                                                         E9664
                                                                         0)
                                                                        A9665)
                                                                       A9666
                                                                       N9663
                                                                       (the
                                                                        (integer
                                                                         0)
                                                                        (_exp2
                                                                         8))))))))))
                                                               (let
                                                                ((E9669
                                                                  E9667))
                                                                (nd-rec-tup-update
                                                                 E9667
                                                                 1
                                                                 N9668)))))
                                                            (the
                                                             (simple-array
                                                              t)
                                                             (if
                                                              (the
                                                               boolean
                                                               (loop_2?
                                                                x#0))
                                                              (the
                                                               (simple-array
                                                                t)
                                                               (let
                                                                ()
                                                                (let
                                                                 ((N9676
                                                                   rest)
                                                                  (E9675
                                                                   (let
                                                                    ((A9674
                                                                      (the
                                                                       (integer
                                                                        0
                                                                        *)
                                                                       cur))
                                                                     (A9673
                                                                      (the
                                                                       (integer
                                                                        0
                                                                        *)
                                                                       pos)))
                                                                    (let
                                                                     ((N9671
                                                                       (make-loop_2))
                                                                      (E9670
                                                                       (the
                                                                        (simple-array
                                                                         t)
                                                                        St)))
                                                                     (let
                                                                      ((E9672
                                                                        E9670))
                                                                      (nd-rec-tup-update
                                                                       E9670
                                                                       0
                                                                       (pvs-function-update
                                                                        (mkcopy-pvs-closure-hash
                                                                         (svref
                                                                          E9672
                                                                          0))
                                                                        A9673
                                                                        (pvs-outer-array-update
                                                                         (pvs-funcall
                                                                          (svref
                                                                           E9672
                                                                           0)
                                                                          A9673)
                                                                         A9674
                                                                         N9671
                                                                         (the
                                                                          (integer
                                                                           0)
                                                                          (_exp2
                                                                           8))))))))))
                                                                 (let
                                                                  ((E9677
                                                                    E9675))
                                                                  (nd-rec-tup-update
                                                                   E9675
                                                                   1
                                                                   N9676)))))
                                                              (the
                                                               (simple-array
                                                                t)
                                                               (if
                                                                (the
                                                                 boolean
                                                                 (good_2?
                                                                  x#0))
                                                                (the
                                                                 (simple-array
                                                                  t)
                                                                 (let
                                                                  ()
                                                                  (let
                                                                   ((N9684
                                                                     rest)
                                                                    (E9683
                                                                     (let
                                                                      ((A9682
                                                                        (the
                                                                         (integer
                                                                          0
                                                                          *)
                                                                         cur))
                                                                       (A9681
                                                                        (the
                                                                         (integer
                                                                          0
                                                                          *)
                                                                         pos)))
                                                                      (let
                                                                       ((N9679
                                                                         (make-good_2
                                                                          0))
                                                                        (E9678
                                                                         (the
                                                                          (simple-array
                                                                           t)
                                                                          St)))
                                                                       (let
                                                                        ((E9680
                                                                          E9678))
                                                                        (nd-rec-tup-update
                                                                         E9678
                                                                         0
                                                                         (pvs-function-update
                                                                          (mkcopy-pvs-closure-hash
                                                                           (svref
                                                                            E9680
                                                                            0))
                                                                          A9681
                                                                          (pvs-outer-array-update
                                                                           (pvs-funcall
                                                                            (svref
                                                                             E9680
                                                                             0)
                                                                            A9681)
                                                                           A9682
                                                                           N9679
                                                                           (the
                                                                            (integer
                                                                             0)
                                                                            (_exp2
                                                                             8))))))))))
                                                                   (let
                                                                    ((E9685
                                                                      E9683))
                                                                    (nd-rec-tup-update
                                                                     E9683
                                                                     1
                                                                     N9684)))))
                                                                (the
                                                                 (simple-array
                                                                  t)
                                                                 (_putstack_1
                                                                  (the
                                                                   (integer
                                                                    0)
                                                                   len)
                                                                  G
                                                                  s74583
                                                                  (the
                                                                   (integer
                                                                    0
                                                                    *)
                                                                   start)
                                                                  (the
                                                                   (integer
                                                                    0
                                                                    *)
                                                                   root)
                                                                  (the
                                                                   (simple-array
                                                                    t)
                                                                   St)
                                                                  (the
                                                                   (integer
                                                                    0
                                                                    *)
                                                                   pos)
                                                                  (the
                                                                   (integer
                                                                    0
                                                                    *)
                                                                   (peg-e-3
                                                                    x)))))))))))))
                                                       (the
                                                        (simple-array
                                                         t)
                                                        (the
                                                         (simple-array
                                                          t)
                                                         (let
                                                          ((x#0
                                                            (pvs-funcall
                                                             (pvs-funcall
                                                              scaf
                                                              (the
                                                               (integer
                                                                0
                                                                *)
                                                               pos))
                                                             (the
                                                              (integer
                                                               0
                                                               *)
                                                              (peg-e-3
                                                               x)))))
                                                          (declare
                                                           (type
                                                            nil
                                                            x#0))
                                                          (the
                                                           (simple-array
                                                            t)
                                                           (if
                                                            (the
                                                             boolean
                                                             (fail_2?
                                                              x#0))
                                                            (the
                                                             (simple-array
                                                              t)
                                                             (let
                                                              ()
                                                              (let
                                                               ((N9692
                                                                 rest)
                                                                (E9691
                                                                 (let
                                                                  ((A9690
                                                                    (the
                                                                     (integer
                                                                      0
                                                                      *)
                                                                     cur))
                                                                   (A9689
                                                                    (the
                                                                     (integer
                                                                      0
                                                                      *)
                                                                     pos)))
                                                                  (let
                                                                   ((N9687
                                                                     (make-good_2
                                                                      0))
                                                                    (E9686
                                                                     (the
                                                                      (simple-array
                                                                       t)
                                                                      St)))
                                                                   (let
                                                                    ((E9688
                                                                      E9686))
                                                                    (nd-rec-tup-update
                                                                     E9686
                                                                     0
                                                                     (pvs-function-update
                                                                      (mkcopy-pvs-closure-hash
                                                                       (svref
                                                                        E9688
                                                                        0))
                                                                      A9689
                                                                      (pvs-outer-array-update
                                                                       (pvs-funcall
                                                                        (svref
                                                                         E9688
                                                                         0)
                                                                        A9689)
                                                                       A9690
                                                                       N9687
                                                                       (the
                                                                        (integer
                                                                         0)
                                                                        (_exp2
                                                                         8))))))))))
                                                               (let
                                                                ((E9693
                                                                  E9691))
                                                                (nd-rec-tup-update
                                                                 E9691
                                                                 1
                                                                 N9692)))))
                                                            (the
                                                             (simple-array
                                                              t)
                                                             (if
                                                              (the
                                                               boolean
                                                               (loop_2?
                                                                x#0))
                                                              (the
                                                               (simple-array
                                                                t)
                                                               (let
                                                                ()
                                                                (let
                                                                 ((N9700
                                                                   rest)
                                                                  (E9699
                                                                   (let
                                                                    ((A9698
                                                                      (the
                                                                       (integer
                                                                        0
                                                                        *)
                                                                       cur))
                                                                     (A9697
                                                                      (the
                                                                       (integer
                                                                        0
                                                                        *)
                                                                       pos)))
                                                                    (let
                                                                     ((N9695
                                                                       (make-loop_2))
                                                                      (E9694
                                                                       (the
                                                                        (simple-array
                                                                         t)
                                                                        St)))
                                                                     (let
                                                                      ((E9696
                                                                        E9694))
                                                                      (nd-rec-tup-update
                                                                       E9694
                                                                       0
                                                                       (pvs-function-update
                                                                        (mkcopy-pvs-closure-hash
                                                                         (svref
                                                                          E9696
                                                                          0))
                                                                        A9697
                                                                        (pvs-outer-array-update
                                                                         (pvs-funcall
                                                                          (svref
                                                                           E9696
                                                                           0)
                                                                          A9697)
                                                                         A9698
                                                                         N9695
                                                                         (the
                                                                          (integer
                                                                           0)
                                                                          (_exp2
                                                                           8))))))))))
                                                                 (let
                                                                  ((E9701
                                                                    E9699))
                                                                  (nd-rec-tup-update
                                                                   E9699
                                                                   1
                                                                   N9700)))))
                                                              (the
                                                               (simple-array
                                                                t)
                                                               (if
                                                                (the
                                                                 boolean
                                                                 (good_2?
                                                                  x#0))
                                                                (the
                                                                 (simple-array
                                                                  t)
                                                                 (let
                                                                  ()
                                                                  (let
                                                                   ((N9708
                                                                     rest)
                                                                    (E9707
                                                                     (let
                                                                      ((A9706
                                                                        (the
                                                                         (integer
                                                                          0
                                                                          *)
                                                                         cur))
                                                                       (A9705
                                                                        (the
                                                                         (integer
                                                                          0
                                                                          *)
                                                                         pos)))
                                                                      (let
                                                                       ((N9703
                                                                         (make-fail_2))
                                                                        (E9702
                                                                         (the
                                                                          (simple-array
                                                                           t)
                                                                          St)))
                                                                       (let
                                                                        ((E9704
                                                                          E9702))
                                                                        (nd-rec-tup-update
                                                                         E9702
                                                                         0
                                                                         (pvs-function-update
                                                                          (mkcopy-pvs-closure-hash
                                                                           (svref
                                                                            E9704
                                                                            0))
                                                                          A9705
                                                                          (pvs-outer-array-update
                                                                           (pvs-funcall
                                                                            (svref
                                                                             E9704
                                                                             0)
                                                                            A9705)
                                                                           A9706
                                                                           N9703
                                                                           (the
                                                                            (integer
                                                                             0)
                                                                            (_exp2
                                                                             8))))))))))
                                                                   (let
                                                                    ((E9709
                                                                      E9707))
                                                                    (nd-rec-tup-update
                                                                     E9707
                                                                     1
                                                                     N9708)))))
                                                                (the
                                                                 (simple-array
                                                                  t)
                                                                 (_putstack_1
                                                                  (the
                                                                   (integer
                                                                    0)
                                                                   len)
                                                                  G
                                                                  s74583
                                                                  (the
                                                                   (integer
                                                                    0
                                                                    *)
                                                                   start)
                                                                  (the
                                                                   (integer
                                                                    0
                                                                    *)
                                                                   root)
                                                                  (the
                                                                   (simple-array
                                                                    t)
                                                                   St)
                                                                  (the
                                                                   (integer
                                                                    0
                                                                    *)
                                                                   pos)
                                                                  (the
                                                                   (integer
                                                                    0
                                                                    *)
                                                                   (peg-e-3
                                                                    x))))))))))))))))))))))))))))))))))))))))))))))
(defun _step_1 (len G s8791 start root St)
  (declare (type (integer 0) len) (type (integer 0 *) start)
   (type (integer 0 *) root) (type (simple-array t) St))
  (the (simple-array t)
       (let ((scaf (project 1 (the (simple-array t) St))))
         (declare (type nil scaf))
         (the (simple-array t)
              (let ((stack (project 2 (the (simple-array t) St))))
                (declare (type nil stack))
                (the (simple-array t)
                     (if (the boolean (empty_2? stack))
                         (the (simple-array t)
                              (if (the
                                   boolean
                                   (pending_2?
                                    (pvs-funcall
                                     (pvs-funcall
                                      scaf
                                      (the (integer 0 *) start))
                                     (the (integer 0 *) root))))
                                  (the
                                   (simple-array t)
                                   (let
                                    ()
                                    (let
                                     ((N8793
                                       (make-push_2
                                        (the (integer 0 *) start)
                                        (the (integer 0 *) root)
                                        (make-empty_2)))
                                      (E8792
                                       (the (simple-array t) St)))
                                     (let
                                      ((E8794 E8792))
                                      (nd-rec-tup-update
                                       E8792
                                       1
                                       N8793)))))
                                (the (simple-array t) St)))
                       (the (simple-array t)
                            (let ((pos
                                   (the
                                    (integer 0 *)
                                    (push_2-pos stack))))
                              (declare (type (integer 0 *) pos))
                              (the (simple-array t)
                                   (let
                                    ((cur
                                      (the
                                       (integer 0 *)
                                       (push_2-nt stack))))
                                    (declare (type (integer 0 *) cur))
                                    (the
                                     (simple-array t)
                                     (let
                                      ((rest (push_2-rest stack)))
                                      (declare (type nil rest))
                                      (the
                                       (simple-array t)
                                       (the
                                        (simple-array t)
                                        (let
                                         ((x
                                           (pvs-funcall
                                            G
                                            (the (integer 0 *) cur))))
                                         (declare (type nil x))
                                         (the
                                          (simple-array t)
                                          (if
                                           (the boolean (epsilon_2? x))
                                           (the
                                            (simple-array t)
                                            (let
                                             ()
                                             (let
                                              ((N8801 rest)
                                               (E8800
                                                (let
                                                 ((A8799
                                                   (the
                                                    (integer 0 *)
                                                    cur))
                                                  (A8798
                                                   (the
                                                    (integer 0 *)
                                                    pos)))
                                                 (let
                                                  ((N8796
                                                    (make-good_2 0))
                                                   (E8795
                                                    (the
                                                     (simple-array t)
                                                     St)))
                                                  (let
                                                   ((E8797 E8795))
                                                   (nd-rec-tup-update
                                                    E8795
                                                    0
                                                    (pvs-function-update
                                                     (mkcopy-pvs-closure-hash
                                                      (svref E8797 0))
                                                     A8798
                                                     (pvs-outer-array-update
                                                      (pvs-funcall
                                                       (svref E8797 0)
                                                       A8798)
                                                      A8799
                                                      N8796
                                                      (the
                                                       (integer 0)
                                                       (_exp2
                                                        8))))))))))
                                              (let
                                               ((E8802 E8800))
                                               (nd-rec-tup-update
                                                E8800
                                                1
                                                N8801)))))
                                           (the
                                            (simple-array t)
                                            (if
                                             (the
                                              boolean
                                              (failure_2? x))
                                             (the
                                              (simple-array t)
                                              (let
                                               ()
                                               (let
                                                ((N8809 rest)
                                                 (E8808
                                                  (let
                                                   ((A8807
                                                     (the
                                                      (integer 0 *)
                                                      cur))
                                                    (A8806
                                                     (the
                                                      (integer 0 *)
                                                      pos)))
                                                   (let
                                                    ((N8804
                                                      (make-fail_2))
                                                     (E8803
                                                      (the
                                                       (simple-array t)
                                                       St)))
                                                    (let
                                                     ((E8805 E8803))
                                                     (nd-rec-tup-update
                                                      E8803
                                                      0
                                                      (pvs-function-update
                                                       (mkcopy-pvs-closure-hash
                                                        (svref
                                                         E8805
                                                         0))
                                                       A8806
                                                       (pvs-outer-array-update
                                                        (pvs-funcall
                                                         (svref
                                                          E8805
                                                          0)
                                                         A8806)
                                                        A8807
                                                        N8804
                                                        (the
                                                         (integer 0)
                                                         (_exp2
                                                          8))))))))))
                                                (let
                                                 ((E8810 E8808))
                                                 (nd-rec-tup-update
                                                  E8808
                                                  1
                                                  N8809)))))
                                             (the
                                              (simple-array t)
                                              (if
                                               (the boolean (any_3? x))
                                               (the
                                                (simple-array t)
                                                (let
                                                 ((v
                                                   (if
                                                    (the
                                                     boolean
                                                     (pvs__OR
                                                      (the
                                                       boolean
                                                       (=
                                                        (the
                                                         (integer 0 *)
                                                         pos)
                                                        (the
                                                         (integer 0)
                                                         len)))
                                                      (the
                                                       boolean
                                                       (pvs_NOT
                                                        (the
                                                         boolean
                                                         (pvs-funcall
                                                          (any_3-p x)
                                                          (the
                                                           fixnum
                                                           (pvs-funcall
                                                            s8791
                                                            (the
                                                             (integer
                                                              0
                                                              *)
                                                             pos)))))))))
                                                    (make-fail_2)
                                                    (make-good_2 1))))
                                                 (declare (type nil v))
                                                 (the
                                                  (simple-array t)
                                                  (let
                                                   ()
                                                   (let
                                                    ((N8817 rest)
                                                     (E8816
                                                      (let
                                                       ((A8815
                                                         (the
                                                          (integer 0 *)
                                                          cur))
                                                        (A8814
                                                         (the
                                                          (integer 0 *)
                                                          pos)))
                                                       (let
                                                        ((N8812 v)
                                                         (E8811
                                                          (the
                                                           (simple-array
                                                            t)
                                                           St)))
                                                        (let
                                                         ((E8813
                                                           E8811))
                                                         (nd-rec-tup-update
                                                          E8811
                                                          0
                                                          (pvs-function-update
                                                           (mkcopy-pvs-closure-hash
                                                            (svref
                                                             E8813
                                                             0))
                                                           A8814
                                                           (pvs-outer-array-update
                                                            (pvs-funcall
                                                             (svref
                                                              E8813
                                                              0)
                                                             A8814)
                                                            A8815
                                                            N8812
                                                            (the
                                                             (integer
                                                              0)
                                                             (_exp2
                                                              8))))))))))
                                                    (let
                                                     ((E8818 E8816))
                                                     (nd-rec-tup-update
                                                      E8816
                                                      1
                                                      N8817)))))))
                                               (the
                                                (simple-array t)
                                                (if
                                                 (the
                                                  boolean
                                                  (terminal_2? x))
                                                 (the
                                                  (simple-array t)
                                                  (let
                                                   ((v
                                                     (if
                                                      (the
                                                       boolean
                                                       (pvs__OR
                                                        (the
                                                         boolean
                                                         (=
                                                          (the
                                                           (integer
                                                            0
                                                            *)
                                                           pos)
                                                          (the
                                                           (integer 0)
                                                           len)))
                                                        (the
                                                         boolean
                                                         (/=
                                                          (the
                                                           fixnum
                                                           (terminal_2-a
                                                            x))
                                                          (the
                                                           fixnum
                                                           (pvs-funcall
                                                            s8791
                                                            (the
                                                             (integer
                                                              0
                                                              *)
                                                             pos)))))))
                                                      (make-fail_2)
                                                      (make-good_2
                                                       1))))
                                                   (declare
                                                    (type nil v))
                                                   (the
                                                    (simple-array t)
                                                    (let
                                                     ()
                                                     (let
                                                      ((N8825 rest)
                                                       (E8824
                                                        (let
                                                         ((A8823
                                                           (the
                                                            (integer
                                                             0
                                                             *)
                                                            cur))
                                                          (A8822
                                                           (the
                                                            (integer
                                                             0
                                                             *)
                                                            pos)))
                                                         (let
                                                          ((N8820 v)
                                                           (E8819
                                                            (the
                                                             (simple-array
                                                              t)
                                                             St)))
                                                          (let
                                                           ((E8821
                                                             E8819))
                                                           (nd-rec-tup-update
                                                            E8819
                                                            0
                                                            (pvs-function-update
                                                             (mkcopy-pvs-closure-hash
                                                              (svref
                                                               E8821
                                                               0))
                                                             A8822
                                                             (pvs-outer-array-update
                                                              (pvs-funcall
                                                               (svref
                                                                E8821
                                                                0)
                                                               A8822)
                                                              A8823
                                                              N8820
                                                              (the
                                                               (integer
                                                                0)
                                                               (_exp2
                                                                8))))))))))
                                                      (let
                                                       ((E8826 E8824))
                                                       (nd-rec-tup-update
                                                        E8824
                                                        1
                                                        N8825)))))))
                                                 (the
                                                  (simple-array t)
                                                  (if
                                                   (the
                                                    boolean
                                                    (concat_2? x))
                                                   (the
                                                    (simple-array t)
                                                    (the
                                                     (simple-array t)
                                                     (let
                                                      ((x#0
                                                        (pvs-funcall
                                                         (pvs-funcall
                                                          (project
                                                           1
                                                           (the
                                                            (simple-array
                                                             t)
                                                            St))
                                                          (the
                                                           (integer
                                                            0
                                                            *)
                                                           pos))
                                                         (the
                                                          (integer 0 *)
                                                          (peg-e1-3
                                                           x)))))
                                                      (declare
                                                       (type nil x#0))
                                                      (the
                                                       (simple-array t)
                                                       (if
                                                        (the
                                                         boolean
                                                         (fail_2? x#0))
                                                        (the
                                                         (simple-array
                                                          t)
                                                         (let
                                                          ()
                                                          (let
                                                           ((N8833
                                                             rest)
                                                            (E8832
                                                             (let
                                                              ((A8831
                                                                (the
                                                                 (integer
                                                                  0
                                                                  *)
                                                                 cur))
                                                               (A8830
                                                                (the
                                                                 (integer
                                                                  0
                                                                  *)
                                                                 pos)))
                                                              (let
                                                               ((N8828
                                                                 (make-fail_2))
                                                                (E8827
                                                                 (the
                                                                  (simple-array
                                                                   t)
                                                                  St)))
                                                               (let
                                                                ((E8829
                                                                  E8827))
                                                                (nd-rec-tup-update
                                                                 E8827
                                                                 0
                                                                 (pvs-function-update
                                                                  (mkcopy-pvs-closure-hash
                                                                   (svref
                                                                    E8829
                                                                    0))
                                                                  A8830
                                                                  (pvs-outer-array-update
                                                                   (pvs-funcall
                                                                    (svref
                                                                     E8829
                                                                     0)
                                                                    A8830)
                                                                   A8831
                                                                   N8828
                                                                   (the
                                                                    (integer
                                                                     0)
                                                                    (_exp2
                                                                     8))))))))))
                                                           (let
                                                            ((E8834
                                                              E8832))
                                                            (nd-rec-tup-update
                                                             E8832
                                                             1
                                                             N8833)))))
                                                        (the
                                                         (simple-array
                                                          t)
                                                         (if
                                                          (the
                                                           boolean
                                                           (loop_2?
                                                            x#0))
                                                          (the
                                                           (simple-array
                                                            t)
                                                           (let
                                                            ()
                                                            (let
                                                             ((N8841
                                                               rest)
                                                              (E8840
                                                               (let
                                                                ((A8839
                                                                  (the
                                                                   (integer
                                                                    0
                                                                    *)
                                                                   cur))
                                                                 (A8838
                                                                  (the
                                                                   (integer
                                                                    0
                                                                    *)
                                                                   pos)))
                                                                (let
                                                                 ((N8836
                                                                   (make-loop_2))
                                                                  (E8835
                                                                   (the
                                                                    (simple-array
                                                                     t)
                                                                    St)))
                                                                 (let
                                                                  ((E8837
                                                                    E8835))
                                                                  (nd-rec-tup-update
                                                                   E8835
                                                                   0
                                                                   (pvs-function-update
                                                                    (mkcopy-pvs-closure-hash
                                                                     (svref
                                                                      E8837
                                                                      0))
                                                                    A8838
                                                                    (pvs-outer-array-update
                                                                     (pvs-funcall
                                                                      (svref
                                                                       E8837
                                                                       0)
                                                                      A8838)
                                                                     A8839
                                                                     N8836
                                                                     (the
                                                                      (integer
                                                                       0)
                                                                      (_exp2
                                                                       8))))))))))
                                                             (let
                                                              ((E8842
                                                                E8840))
                                                              (nd-rec-tup-update
                                                               E8840
                                                               1
                                                               N8841)))))
                                                          (the
                                                           (simple-array
                                                            t)
                                                           (if
                                                            (the
                                                             boolean
                                                             (good_2?
                                                              x#0))
                                                            (the
                                                             (simple-array
                                                              t)
                                                             (the
                                                              (simple-array
                                                               t)
                                                              (let
                                                               ((x1
                                                                 (pvs-funcall
                                                                  (pvs-funcall
                                                                   (project
                                                                    1
                                                                    (the
                                                                     (simple-array
                                                                      t)
                                                                     St))
                                                                   (pvs__+
                                                                    (the
                                                                     (integer
                                                                      0
                                                                      *)
                                                                     pos)
                                                                    (the
                                                                     (integer
                                                                      0)
                                                                     (good_2-span
                                                                      x#0))))
                                                                  (the
                                                                   (integer
                                                                    0
                                                                    *)
                                                                   (peg-e2-3
                                                                    x)))))
                                                               (declare
                                                                (type
                                                                 nil
                                                                 x1))
                                                               (the
                                                                (simple-array
                                                                 t)
                                                                (if
                                                                 (the
                                                                  boolean
                                                                  (fail_2?
                                                                   x1))
                                                                 (the
                                                                  (simple-array
                                                                   t)
                                                                  (let
                                                                   ()
                                                                   (let
                                                                    ((N8849
                                                                      rest)
                                                                     (E8848
                                                                      (let
                                                                       ((A8847
                                                                         (the
                                                                          (integer
                                                                           0
                                                                           *)
                                                                          cur))
                                                                        (A8846
                                                                         (the
                                                                          (integer
                                                                           0
                                                                           *)
                                                                          pos)))
                                                                       (let
                                                                        ((N8844
                                                                          (make-fail_2))
                                                                         (E8843
                                                                          (the
                                                                           (simple-array
                                                                            t)
                                                                           St)))
                                                                        (let
                                                                         ((E8845
                                                                           E8843))
                                                                         (nd-rec-tup-update
                                                                          E8843
                                                                          0
                                                                          (pvs-function-update
                                                                           (mkcopy-pvs-closure-hash
                                                                            (svref
                                                                             E8845
                                                                             0))
                                                                           A8846
                                                                           (pvs-outer-array-update
                                                                            (pvs-funcall
                                                                             (svref
                                                                              E8845
                                                                              0)
                                                                             A8846)
                                                                            A8847
                                                                            N8844
                                                                            (the
                                                                             (integer
                                                                              0)
                                                                             (_exp2
                                                                              8))))))))))
                                                                    (let
                                                                     ((E8850
                                                                       E8848))
                                                                     (nd-rec-tup-update
                                                                      E8848
                                                                      1
                                                                      N8849)))))
                                                                 (the
                                                                  (simple-array
                                                                   t)
                                                                  (if
                                                                   (the
                                                                    boolean
                                                                    (loop_2?
                                                                     x1))
                                                                   (the
                                                                    (simple-array
                                                                     t)
                                                                    (let
                                                                     ()
                                                                     (let
                                                                      ((N8857
                                                                        rest)
                                                                       (E8856
                                                                        (let
                                                                         ((A8855
                                                                           (the
                                                                            (integer
                                                                             0
                                                                             *)
                                                                            cur))
                                                                          (A8854
                                                                           (the
                                                                            (integer
                                                                             0
                                                                             *)
                                                                            pos)))
                                                                         (let
                                                                          ((N8852
                                                                            (make-loop_2))
                                                                           (E8851
                                                                            (the
                                                                             (simple-array
                                                                              t)
                                                                             St)))
                                                                          (let
                                                                           ((E8853
                                                                             E8851))
                                                                           (nd-rec-tup-update
                                                                            E8851
                                                                            0
                                                                            (pvs-function-update
                                                                             (mkcopy-pvs-closure-hash
                                                                              (svref
                                                                               E8853
                                                                               0))
                                                                             A8854
                                                                             (pvs-outer-array-update
                                                                              (pvs-funcall
                                                                               (svref
                                                                                E8853
                                                                                0)
                                                                               A8854)
                                                                              A8855
                                                                              N8852
                                                                              (the
                                                                               (integer
                                                                                0)
                                                                               (_exp2
                                                                                8))))))))))
                                                                      (let
                                                                       ((E8858
                                                                         E8856))
                                                                       (nd-rec-tup-update
                                                                        E8856
                                                                        1
                                                                        N8857)))))
                                                                   (the
                                                                    (simple-array
                                                                     t)
                                                                    (if
                                                                     (the
                                                                      boolean
                                                                      (good_2?
                                                                       x1))
                                                                     (the
                                                                      (simple-array
                                                                       t)
                                                                      (let
                                                                       ()
                                                                       (let
                                                                        ((N8865
                                                                          rest)
                                                                         (E8864
                                                                          (let
                                                                           ((A8863
                                                                             (the
                                                                              (integer
                                                                               0
                                                                               *)
                                                                              cur))
                                                                            (A8862
                                                                             (the
                                                                              (integer
                                                                               0
                                                                               *)
                                                                              pos)))
                                                                           (let
                                                                            ((N8860
                                                                              (make-good_2
                                                                               (pvs__+
                                                                                (the
                                                                                 (integer
                                                                                  0)
                                                                                 (good_2-span
                                                                                  x#0))
                                                                                (the
                                                                                 (integer
                                                                                  0)
                                                                                 (good_2-span
                                                                                  x1)))))
                                                                             (E8859
                                                                              (the
                                                                               (simple-array
                                                                                t)
                                                                               St)))
                                                                            (let
                                                                             ((E8861
                                                                               E8859))
                                                                             (nd-rec-tup-update
                                                                              E8859
                                                                              0
                                                                              (pvs-function-update
                                                                               (mkcopy-pvs-closure-hash
                                                                                (svref
                                                                                 E8861
                                                                                 0))
                                                                               A8862
                                                                               (pvs-outer-array-update
                                                                                (pvs-funcall
                                                                                 (svref
                                                                                  E8861
                                                                                  0)
                                                                                 A8862)
                                                                                A8863
                                                                                N8860
                                                                                (the
                                                                                 (integer
                                                                                  0)
                                                                                 (_exp2
                                                                                  8))))))))))
                                                                        (let
                                                                         ((E8866
                                                                           E8864))
                                                                         (nd-rec-tup-update
                                                                          E8864
                                                                          1
                                                                          N8865)))))
                                                                     (the
                                                                      (simple-array
                                                                       t)
                                                                      (_putstack_1
                                                                       (the
                                                                        (integer
                                                                         0)
                                                                        len)
                                                                       G
                                                                       s8791
                                                                       (the
                                                                        (integer
                                                                         0
                                                                         *)
                                                                        start)
                                                                       (the
                                                                        (integer
                                                                         0
                                                                         *)
                                                                        root)
                                                                       (the
                                                                        (simple-array
                                                                         t)
                                                                        St)
                                                                       (pvs__+
                                                                        (the
                                                                         (integer
                                                                          0
                                                                          *)
                                                                         pos)
                                                                        (the
                                                                         (integer
                                                                          0)
                                                                         (good_2-span
                                                                          x#0)))
                                                                       (the
                                                                        (integer
                                                                         0
                                                                         *)
                                                                        (peg-e2-3
                                                                         x)))))))))))))
                                                            (the
                                                             (simple-array
                                                              t)
                                                             (_putstack_1
                                                              (the
                                                               (integer
                                                                0)
                                                               len)
                                                              G
                                                              s8791
                                                              (the
                                                               (integer
                                                                0
                                                                *)
                                                               start)
                                                              (the
                                                               (integer
                                                                0
                                                                *)
                                                               root)
                                                              (the
                                                               (simple-array
                                                                t)
                                                               St)
                                                              (the
                                                               (integer
                                                                0
                                                                *)
                                                               pos)
                                                              (the
                                                               (integer
                                                                0
                                                                *)
                                                               (peg-e1-3
                                                                x)))))))))))))
                                                   (the
                                                    (simple-array t)
                                                    (if
                                                     (the
                                                      boolean
                                                      (choice_2? x))
                                                     (the
                                                      (simple-array t)
                                                      (the
                                                       (simple-array t)
                                                       (let
                                                        ((x#0
                                                          (pvs-funcall
                                                           (pvs-funcall
                                                            scaf
                                                            (the
                                                             (integer
                                                              0
                                                              *)
                                                             pos))
                                                           (the
                                                            (integer
                                                             0
                                                             *)
                                                            (peg-e1-3
                                                             x)))))
                                                        (declare
                                                         (type
                                                          nil
                                                          x#0))
                                                        (the
                                                         (simple-array
                                                          t)
                                                         (if
                                                          (the
                                                           boolean
                                                           (fail_2?
                                                            x#0))
                                                          (the
                                                           (simple-array
                                                            t)
                                                           (the
                                                            (simple-array
                                                             t)
                                                            (let
                                                             ((x#1
                                                               (pvs-funcall
                                                                (pvs-funcall
                                                                 scaf
                                                                 (the
                                                                  (integer
                                                                   0
                                                                   *)
                                                                  pos))
                                                                (the
                                                                 (integer
                                                                  0
                                                                  *)
                                                                 (peg-e2-3
                                                                  x)))))
                                                             (declare
                                                              (type
                                                               nil
                                                               x#1))
                                                             (the
                                                              (simple-array
                                                               t)
                                                              (if
                                                               (the
                                                                boolean
                                                                (fail_2?
                                                                 x#1))
                                                               (the
                                                                (simple-array
                                                                 t)
                                                                (let
                                                                 ()
                                                                 (let
                                                                  ((N8873
                                                                    rest)
                                                                   (E8872
                                                                    (let
                                                                     ((A8871
                                                                       (the
                                                                        (integer
                                                                         0
                                                                         *)
                                                                        cur))
                                                                      (A8870
                                                                       (the
                                                                        (integer
                                                                         0
                                                                         *)
                                                                        pos)))
                                                                     (let
                                                                      ((N8868
                                                                        (make-fail_2))
                                                                       (E8867
                                                                        (the
                                                                         (simple-array
                                                                          t)
                                                                         St)))
                                                                      (let
                                                                       ((E8869
                                                                         E8867))
                                                                       (nd-rec-tup-update
                                                                        E8867
                                                                        0
                                                                        (pvs-function-update
                                                                         (mkcopy-pvs-closure-hash
                                                                          (svref
                                                                           E8869
                                                                           0))
                                                                         A8870
                                                                         (pvs-outer-array-update
                                                                          (pvs-funcall
                                                                           (svref
                                                                            E8869
                                                                            0)
                                                                           A8870)
                                                                          A8871
                                                                          N8868
                                                                          (the
                                                                           (integer
                                                                            0)
                                                                           (_exp2
                                                                            8))))))))))
                                                                  (let
                                                                   ((E8874
                                                                     E8872))
                                                                   (nd-rec-tup-update
                                                                    E8872
                                                                    1
                                                                    N8873)))))
                                                               (the
                                                                (simple-array
                                                                 t)
                                                                (if
                                                                 (the
                                                                  boolean
                                                                  (loop_2?
                                                                   x#1))
                                                                 (the
                                                                  (simple-array
                                                                   t)
                                                                  (let
                                                                   ()
                                                                   (let
                                                                    ((N8881
                                                                      rest)
                                                                     (E8880
                                                                      (let
                                                                       ((A8879
                                                                         (the
                                                                          (integer
                                                                           0
                                                                           *)
                                                                          cur))
                                                                        (A8878
                                                                         (the
                                                                          (integer
                                                                           0
                                                                           *)
                                                                          pos)))
                                                                       (let
                                                                        ((N8876
                                                                          (make-loop_2))
                                                                         (E8875
                                                                          (the
                                                                           (simple-array
                                                                            t)
                                                                           St)))
                                                                        (let
                                                                         ((E8877
                                                                           E8875))
                                                                         (nd-rec-tup-update
                                                                          E8875
                                                                          0
                                                                          (pvs-function-update
                                                                           (mkcopy-pvs-closure-hash
                                                                            (svref
                                                                             E8877
                                                                             0))
                                                                           A8878
                                                                           (pvs-outer-array-update
                                                                            (pvs-funcall
                                                                             (svref
                                                                              E8877
                                                                              0)
                                                                             A8878)
                                                                            A8879
                                                                            N8876
                                                                            (the
                                                                             (integer
                                                                              0)
                                                                             (_exp2
                                                                              8))))))))))
                                                                    (let
                                                                     ((E8882
                                                                       E8880))
                                                                     (nd-rec-tup-update
                                                                      E8880
                                                                      1
                                                                      N8881)))))
                                                                 (the
                                                                  (simple-array
                                                                   t)
                                                                  (if
                                                                   (the
                                                                    boolean
                                                                    (good_2?
                                                                     x#1))
                                                                   (the
                                                                    (simple-array
                                                                     t)
                                                                    (let
                                                                     ()
                                                                     (let
                                                                      ((N8889
                                                                        rest)
                                                                       (E8888
                                                                        (let
                                                                         ((A8887
                                                                           (the
                                                                            (integer
                                                                             0
                                                                             *)
                                                                            cur))
                                                                          (A8886
                                                                           (the
                                                                            (integer
                                                                             0
                                                                             *)
                                                                            pos)))
                                                                         (let
                                                                          ((N8884
                                                                            (make-good_2
                                                                             (the
                                                                              (integer
                                                                               0)
                                                                              (good_2-span
                                                                               x#1))))
                                                                           (E8883
                                                                            (the
                                                                             (simple-array
                                                                              t)
                                                                             St)))
                                                                          (let
                                                                           ((E8885
                                                                             E8883))
                                                                           (nd-rec-tup-update
                                                                            E8883
                                                                            0
                                                                            (pvs-function-update
                                                                             (mkcopy-pvs-closure-hash
                                                                              (svref
                                                                               E8885
                                                                               0))
                                                                             A8886
                                                                             (pvs-outer-array-update
                                                                              (pvs-funcall
                                                                               (svref
                                                                                E8885
                                                                                0)
                                                                               A8886)
                                                                              A8887
                                                                              N8884
                                                                              (the
                                                                               (integer
                                                                                0)
                                                                               (_exp2
                                                                                8))))))))))
                                                                      (let
                                                                       ((E8890
                                                                         E8888))
                                                                       (nd-rec-tup-update
                                                                        E8888
                                                                        1
                                                                        N8889)))))
                                                                   (the
                                                                    (simple-array
                                                                     t)
                                                                    (_putstack_1
                                                                     (the
                                                                      (integer
                                                                       0)
                                                                      len)
                                                                     G
                                                                     s8791
                                                                     (the
                                                                      (integer
                                                                       0
                                                                       *)
                                                                      start)
                                                                     (the
                                                                      (integer
                                                                       0
                                                                       *)
                                                                      root)
                                                                     (the
                                                                      (simple-array
                                                                       t)
                                                                      St)
                                                                     (the
                                                                      (integer
                                                                       0
                                                                       *)
                                                                      pos)
                                                                     (the
                                                                      (integer
                                                                       0
                                                                       *)
                                                                      (peg-e2-3
                                                                       x)))))))))))))
                                                          (the
                                                           (simple-array
                                                            t)
                                                           (if
                                                            (the
                                                             boolean
                                                             (loop_2?
                                                              x#0))
                                                            (the
                                                             (simple-array
                                                              t)
                                                             (let
                                                              ()
                                                              (let
                                                               ((N8897
                                                                 rest)
                                                                (E8896
                                                                 (let
                                                                  ((A8895
                                                                    (the
                                                                     (integer
                                                                      0
                                                                      *)
                                                                     cur))
                                                                   (A8894
                                                                    (the
                                                                     (integer
                                                                      0
                                                                      *)
                                                                     pos)))
                                                                  (let
                                                                   ((N8892
                                                                     (make-loop_2))
                                                                    (E8891
                                                                     (the
                                                                      (simple-array
                                                                       t)
                                                                      St)))
                                                                   (let
                                                                    ((E8893
                                                                      E8891))
                                                                    (nd-rec-tup-update
                                                                     E8891
                                                                     0
                                                                     (pvs-function-update
                                                                      (mkcopy-pvs-closure-hash
                                                                       (svref
                                                                        E8893
                                                                        0))
                                                                      A8894
                                                                      (pvs-outer-array-update
                                                                       (pvs-funcall
                                                                        (svref
                                                                         E8893
                                                                         0)
                                                                        A8894)
                                                                       A8895
                                                                       N8892
                                                                       (the
                                                                        (integer
                                                                         0)
                                                                        (_exp2
                                                                         8))))))))))
                                                               (let
                                                                ((E8898
                                                                  E8896))
                                                                (nd-rec-tup-update
                                                                 E8896
                                                                 1
                                                                 N8897)))))
                                                            (the
                                                             (simple-array
                                                              t)
                                                             (if
                                                              (the
                                                               boolean
                                                               (good_2?
                                                                x#0))
                                                              (the
                                                               (simple-array
                                                                t)
                                                               (let
                                                                ()
                                                                (let
                                                                 ((N8905
                                                                   rest)
                                                                  (E8904
                                                                   (let
                                                                    ((A8903
                                                                      (the
                                                                       (integer
                                                                        0
                                                                        *)
                                                                       cur))
                                                                     (A8902
                                                                      (the
                                                                       (integer
                                                                        0
                                                                        *)
                                                                       pos)))
                                                                    (let
                                                                     ((N8900
                                                                       (make-good_2
                                                                        (the
                                                                         (integer
                                                                          0)
                                                                         (good_2-span
                                                                          x#0))))
                                                                      (E8899
                                                                       (the
                                                                        (simple-array
                                                                         t)
                                                                        St)))
                                                                     (let
                                                                      ((E8901
                                                                        E8899))
                                                                      (nd-rec-tup-update
                                                                       E8899
                                                                       0
                                                                       (pvs-function-update
                                                                        (mkcopy-pvs-closure-hash
                                                                         (svref
                                                                          E8901
                                                                          0))
                                                                        A8902
                                                                        (pvs-outer-array-update
                                                                         (pvs-funcall
                                                                          (svref
                                                                           E8901
                                                                           0)
                                                                          A8902)
                                                                         A8903
                                                                         N8900
                                                                         (the
                                                                          (integer
                                                                           0)
                                                                          (_exp2
                                                                           8))))))))))
                                                                 (let
                                                                  ((E8906
                                                                    E8904))
                                                                  (nd-rec-tup-update
                                                                   E8904
                                                                   1
                                                                   N8905)))))
                                                              (the
                                                               (simple-array
                                                                t)
                                                               (_putstack_1
                                                                (the
                                                                 (integer
                                                                  0)
                                                                 len)
                                                                G
                                                                s8791
                                                                (the
                                                                 (integer
                                                                  0
                                                                  *)
                                                                 start)
                                                                (the
                                                                 (integer
                                                                  0
                                                                  *)
                                                                 root)
                                                                (the
                                                                 (simple-array
                                                                  t)
                                                                 St)
                                                                (the
                                                                 (integer
                                                                  0
                                                                  *)
                                                                 pos)
                                                                (the
                                                                 (integer
                                                                  0
                                                                  *)
                                                                 (peg-e1-3
                                                                  x)))))))))))))
                                                     (the
                                                      (simple-array t)
                                                      (if
                                                       (the
                                                        boolean
                                                        (check_2? x))
                                                       (the
                                                        (simple-array
                                                         t)
                                                        (the
                                                         (simple-array
                                                          t)
                                                         (let
                                                          ((x#0
                                                            (pvs-funcall
                                                             (pvs-funcall
                                                              scaf
                                                              (the
                                                               (integer
                                                                0
                                                                *)
                                                               pos))
                                                             (the
                                                              (integer
                                                               0
                                                               *)
                                                              (peg-e-3
                                                               x)))))
                                                          (declare
                                                           (type
                                                            nil
                                                            x#0))
                                                          (the
                                                           (simple-array
                                                            t)
                                                           (if
                                                            (the
                                                             boolean
                                                             (fail_2?
                                                              x#0))
                                                            (the
                                                             (simple-array
                                                              t)
                                                             (let
                                                              ()
                                                              (let
                                                               ((N8913
                                                                 rest)
                                                                (E8912
                                                                 (let
                                                                  ((A8911
                                                                    (the
                                                                     (integer
                                                                      0
                                                                      *)
                                                                     cur))
                                                                   (A8910
                                                                    (the
                                                                     (integer
                                                                      0
                                                                      *)
                                                                     pos)))
                                                                  (let
                                                                   ((N8908
                                                                     (make-fail_2))
                                                                    (E8907
                                                                     (the
                                                                      (simple-array
                                                                       t)
                                                                      St)))
                                                                   (let
                                                                    ((E8909
                                                                      E8907))
                                                                    (nd-rec-tup-update
                                                                     E8907
                                                                     0
                                                                     (pvs-function-update
                                                                      (mkcopy-pvs-closure-hash
                                                                       (svref
                                                                        E8909
                                                                        0))
                                                                      A8910
                                                                      (pvs-outer-array-update
                                                                       (pvs-funcall
                                                                        (svref
                                                                         E8909
                                                                         0)
                                                                        A8910)
                                                                       A8911
                                                                       N8908
                                                                       (the
                                                                        (integer
                                                                         0)
                                                                        (_exp2
                                                                         8))))))))))
                                                               (let
                                                                ((E8914
                                                                  E8912))
                                                                (nd-rec-tup-update
                                                                 E8912
                                                                 1
                                                                 N8913)))))
                                                            (the
                                                             (simple-array
                                                              t)
                                                             (if
                                                              (the
                                                               boolean
                                                               (loop_2?
                                                                x#0))
                                                              (the
                                                               (simple-array
                                                                t)
                                                               (let
                                                                ()
                                                                (let
                                                                 ((N8921
                                                                   rest)
                                                                  (E8920
                                                                   (let
                                                                    ((A8919
                                                                      (the
                                                                       (integer
                                                                        0
                                                                        *)
                                                                       cur))
                                                                     (A8918
                                                                      (the
                                                                       (integer
                                                                        0
                                                                        *)
                                                                       pos)))
                                                                    (let
                                                                     ((N8916
                                                                       (make-loop_2))
                                                                      (E8915
                                                                       (the
                                                                        (simple-array
                                                                         t)
                                                                        St)))
                                                                     (let
                                                                      ((E8917
                                                                        E8915))
                                                                      (nd-rec-tup-update
                                                                       E8915
                                                                       0
                                                                       (pvs-function-update
                                                                        (mkcopy-pvs-closure-hash
                                                                         (svref
                                                                          E8917
                                                                          0))
                                                                        A8918
                                                                        (pvs-outer-array-update
                                                                         (pvs-funcall
                                                                          (svref
                                                                           E8917
                                                                           0)
                                                                          A8918)
                                                                         A8919
                                                                         N8916
                                                                         (the
                                                                          (integer
                                                                           0)
                                                                          (_exp2
                                                                           8))))))))))
                                                                 (let
                                                                  ((E8922
                                                                    E8920))
                                                                  (nd-rec-tup-update
                                                                   E8920
                                                                   1
                                                                   N8921)))))
                                                              (the
                                                               (simple-array
                                                                t)
                                                               (if
                                                                (the
                                                                 boolean
                                                                 (good_2?
                                                                  x#0))
                                                                (the
                                                                 (simple-array
                                                                  t)
                                                                 (let
                                                                  ()
                                                                  (let
                                                                   ((N8929
                                                                     rest)
                                                                    (E8928
                                                                     (let
                                                                      ((A8927
                                                                        (the
                                                                         (integer
                                                                          0
                                                                          *)
                                                                         cur))
                                                                       (A8926
                                                                        (the
                                                                         (integer
                                                                          0
                                                                          *)
                                                                         pos)))
                                                                      (let
                                                                       ((N8924
                                                                         (make-good_2
                                                                          0))
                                                                        (E8923
                                                                         (the
                                                                          (simple-array
                                                                           t)
                                                                          St)))
                                                                       (let
                                                                        ((E8925
                                                                          E8923))
                                                                        (nd-rec-tup-update
                                                                         E8923
                                                                         0
                                                                         (pvs-function-update
                                                                          (mkcopy-pvs-closure-hash
                                                                           (svref
                                                                            E8925
                                                                            0))
                                                                          A8926
                                                                          (pvs-outer-array-update
                                                                           (pvs-funcall
                                                                            (svref
                                                                             E8925
                                                                             0)
                                                                            A8926)
                                                                           A8927
                                                                           N8924
                                                                           (the
                                                                            (integer
                                                                             0)
                                                                            (_exp2
                                                                             8))))))))))
                                                                   (let
                                                                    ((E8930
                                                                      E8928))
                                                                    (nd-rec-tup-update
                                                                     E8928
                                                                     1
                                                                     N8929)))))
                                                                (the
                                                                 (simple-array
                                                                  t)
                                                                 (_putstack_1
                                                                  (the
                                                                   (integer
                                                                    0)
                                                                   len)
                                                                  G
                                                                  s8791
                                                                  (the
                                                                   (integer
                                                                    0
                                                                    *)
                                                                   start)
                                                                  (the
                                                                   (integer
                                                                    0
                                                                    *)
                                                                   root)
                                                                  (the
                                                                   (simple-array
                                                                    t)
                                                                   St)
                                                                  (the
                                                                   (integer
                                                                    0
                                                                    *)
                                                                   pos)
                                                                  (the
                                                                   (integer
                                                                    0
                                                                    *)
                                                                   (peg-e-3
                                                                    x)))))))))))))
                                                       (the
                                                        (simple-array
                                                         t)
                                                        (the
                                                         (simple-array
                                                          t)
                                                         (let
                                                          ((x#0
                                                            (pvs-funcall
                                                             (pvs-funcall
                                                              scaf
                                                              (the
                                                               (integer
                                                                0
                                                                *)
                                                               pos))
                                                             (the
                                                              (integer
                                                               0
                                                               *)
                                                              (peg-e-3
                                                               x)))))
                                                          (declare
                                                           (type
                                                            nil
                                                            x#0))
                                                          (the
                                                           (simple-array
                                                            t)
                                                           (if
                                                            (the
                                                             boolean
                                                             (fail_2?
                                                              x#0))
                                                            (the
                                                             (simple-array
                                                              t)
                                                             (let
                                                              ()
                                                              (let
                                                               ((N8937
                                                                 rest)
                                                                (E8936
                                                                 (let
                                                                  ((A8935
                                                                    (the
                                                                     (integer
                                                                      0
                                                                      *)
                                                                     cur))
                                                                   (A8934
                                                                    (the
                                                                     (integer
                                                                      0
                                                                      *)
                                                                     pos)))
                                                                  (let
                                                                   ((N8932
                                                                     (make-good_2
                                                                      0))
                                                                    (E8931
                                                                     (the
                                                                      (simple-array
                                                                       t)
                                                                      St)))
                                                                   (let
                                                                    ((E8933
                                                                      E8931))
                                                                    (nd-rec-tup-update
                                                                     E8931
                                                                     0
                                                                     (pvs-function-update
                                                                      (mkcopy-pvs-closure-hash
                                                                       (svref
                                                                        E8933
                                                                        0))
                                                                      A8934
                                                                      (pvs-outer-array-update
                                                                       (pvs-funcall
                                                                        (svref
                                                                         E8933
                                                                         0)
                                                                        A8934)
                                                                       A8935
                                                                       N8932
                                                                       (the
                                                                        (integer
                                                                         0)
                                                                        (_exp2
                                                                         8))))))))))
                                                               (let
                                                                ((E8938
                                                                  E8936))
                                                                (nd-rec-tup-update
                                                                 E8936
                                                                 1
                                                                 N8937)))))
                                                            (the
                                                             (simple-array
                                                              t)
                                                             (if
                                                              (the
                                                               boolean
                                                               (loop_2?
                                                                x#0))
                                                              (the
                                                               (simple-array
                                                                t)
                                                               (let
                                                                ()
                                                                (let
                                                                 ((N8945
                                                                   rest)
                                                                  (E8944
                                                                   (let
                                                                    ((A8943
                                                                      (the
                                                                       (integer
                                                                        0
                                                                        *)
                                                                       cur))
                                                                     (A8942
                                                                      (the
                                                                       (integer
                                                                        0
                                                                        *)
                                                                       pos)))
                                                                    (let
                                                                     ((N8940
                                                                       (make-loop_2))
                                                                      (E8939
                                                                       (the
                                                                        (simple-array
                                                                         t)
                                                                        St)))
                                                                     (let
                                                                      ((E8941
                                                                        E8939))
                                                                      (nd-rec-tup-update
                                                                       E8939
                                                                       0
                                                                       (pvs-function-update
                                                                        (mkcopy-pvs-closure-hash
                                                                         (svref
                                                                          E8941
                                                                          0))
                                                                        A8942
                                                                        (pvs-outer-array-update
                                                                         (pvs-funcall
                                                                          (svref
                                                                           E8941
                                                                           0)
                                                                          A8942)
                                                                         A8943
                                                                         N8940
                                                                         (the
                                                                          (integer
                                                                           0)
                                                                          (_exp2
                                                                           8))))))))))
                                                                 (let
                                                                  ((E8946
                                                                    E8944))
                                                                  (nd-rec-tup-update
                                                                   E8944
                                                                   1
                                                                   N8945)))))
                                                              (the
                                                               (simple-array
                                                                t)
                                                               (if
                                                                (the
                                                                 boolean
                                                                 (good_2?
                                                                  x#0))
                                                                (the
                                                                 (simple-array
                                                                  t)
                                                                 (let
                                                                  ()
                                                                  (let
                                                                   ((N8953
                                                                     rest)
                                                                    (E8952
                                                                     (let
                                                                      ((A8951
                                                                        (the
                                                                         (integer
                                                                          0
                                                                          *)
                                                                         cur))
                                                                       (A8950
                                                                        (the
                                                                         (integer
                                                                          0
                                                                          *)
                                                                         pos)))
                                                                      (let
                                                                       ((N8948
                                                                         (make-fail_2))
                                                                        (E8947
                                                                         (the
                                                                          (simple-array
                                                                           t)
                                                                          St)))
                                                                       (let
                                                                        ((E8949
                                                                          E8947))
                                                                        (nd-rec-tup-update
                                                                         E8947
                                                                         0
                                                                         (pvs-function-update
                                                                          (mkcopy-pvs-closure-hash
                                                                           (svref
                                                                            E8949
                                                                            0))
                                                                          A8950
                                                                          (pvs-outer-array-update
                                                                           (pvs-funcall
                                                                            (svref
                                                                             E8949
                                                                             0)
                                                                            A8950)
                                                                           A8951
                                                                           N8948
                                                                           (the
                                                                            (integer
                                                                             0)
                                                                            (_exp2
                                                                             8))))))))))
                                                                   (let
                                                                    ((E8954
                                                                      E8952))
                                                                    (nd-rec-tup-update
                                                                     E8952
                                                                     1
                                                                     N8953)))))
                                                                (the
                                                                 (simple-array
                                                                  t)
                                                                 (_putstack_1
                                                                  (the
                                                                   (integer
                                                                    0)
                                                                   len)
                                                                  G
                                                                  s8791
                                                                  (the
                                                                   (integer
                                                                    0
                                                                    *)
                                                                   start)
                                                                  (the
                                                                   (integer
                                                                    0
                                                                    *)
                                                                   root)
                                                                  (the
                                                                   (simple-array
                                                                    t)
                                                                   St)
                                                                  (the
                                                                   (integer
                                                                    0
                                                                    *)
                                                                   pos)
                                                                  (the
                                                                   (integer
                                                                    0
                                                                    *)
                                                                   (peg-e-3
                                                                    x)))))))))))))))))))))))))))))))))))))))))))
(defun step!_1 (len G s8791 start root St)
  (declare (type (integer 0) len) (type (integer 0 *) start)
   (type (integer 0 *) root) (type (simple-array t) St))
  (the (simple-array t)
       (let ((scaf (project 1 (the (simple-array t) St))))
         (declare (type nil scaf))
         (the (simple-array t)
              (let ((stack (project 2 (the (simple-array t) St))))
                (declare (type nil stack))
                (the (simple-array t)
                     (if (the boolean (empty_2? stack))
                         (the (simple-array t)
                              (if (the
                                   boolean
                                   (pending_2?
                                    (pvs-funcall
                                     (pvs-funcall
                                      scaf
                                      (the (integer 0 *) start))
                                     (the (integer 0 *) root))))
                                  (the
                                   (simple-array t)
                                   (let
                                    ((RHS9261
                                      (make-push_2
                                       (the (integer 0 *) start)
                                       (the (integer 0 *) root)
                                       (make-empty_2)))
                                     (E9262 (the (simple-array t) St)))
                                    (let*
                                     ((E9263 E9262) (R9265 RHS9261))
                                     (rec-tup-update E9263 1 R9265)
                                     E9263)
                                    E9262))
                                (the (simple-array t) St)))
                       (the (simple-array t)
                            (let ((pos
                                   (the
                                    (integer 0 *)
                                    (push_2-pos stack))))
                              (declare (type (integer 0 *) pos))
                              (the (simple-array t)
                                   (let
                                    ((cur
                                      (the
                                       (integer 0 *)
                                       (push_2-nt stack))))
                                    (declare (type (integer 0 *) cur))
                                    (the
                                     (simple-array t)
                                     (let
                                      ((rest (push_2-rest stack)))
                                      (declare (type nil rest))
                                      (the
                                       (simple-array t)
                                       (the
                                        (simple-array t)
                                        (let
                                         ((x
                                           (pvs-funcall
                                            G
                                            (the (integer 0 *) cur))))
                                         (declare (type nil x))
                                         (the
                                          (simple-array t)
                                          (if
                                           (the boolean (epsilon_2? x))
                                           (the
                                            (simple-array t)
                                            (let
                                             ((RHS9274 rest)
                                              (E9275
                                               (let
                                                ((A9273
                                                  (the
                                                   (integer 0 *)
                                                   cur))
                                                 (LHS9271
                                                  (the
                                                   (integer 0 *)
                                                   pos)))
                                                (let
                                                 ((RHS9266
                                                   (make-good_2 0))
                                                  (E9267
                                                   (the
                                                    (simple-array t)
                                                    St)))
                                                 (let*
                                                  ((E9268 E9267)
                                                   (R9270
                                                    (let
                                                     ((E9272
                                                       (make-closure-hash
                                                        (svref
                                                         E9268
                                                         0))))
                                                     (pvs-function-update
                                                      E9272
                                                      LHS9271
                                                      (pvs-outer-array-update
                                                       (pvs-closure-hash-lookup
                                                        E9272
                                                        LHS9271)
                                                       A9273
                                                       RHS9266
                                                       (the
                                                        (integer 0)
                                                        (exp2! 8)))))))
                                                  (rec-tup-update
                                                   E9268
                                                   0
                                                   R9270)
                                                  E9268)
                                                 E9267))))
                                             (let*
                                              ((E9276 E9275)
                                               (R9278 RHS9274))
                                              (rec-tup-update
                                               E9276
                                               1
                                               R9278)
                                              E9276)
                                             E9275))
                                           (the
                                            (simple-array t)
                                            (if
                                             (the
                                              boolean
                                              (failure_2? x))
                                             (the
                                              (simple-array t)
                                              (let
                                               ((RHS9287 rest)
                                                (E9288
                                                 (let
                                                  ((A9286
                                                    (the
                                                     (integer 0 *)
                                                     cur))
                                                   (LHS9284
                                                    (the
                                                     (integer 0 *)
                                                     pos)))
                                                  (let
                                                   ((RHS9279
                                                     (make-fail_2))
                                                    (E9280
                                                     (the
                                                      (simple-array t)
                                                      St)))
                                                   (let*
                                                    ((E9281 E9280)
                                                     (R9283
                                                      (let
                                                       ((E9285
                                                         (make-closure-hash
                                                          (svref
                                                           E9281
                                                           0))))
                                                       (pvs-function-update
                                                        E9285
                                                        LHS9284
                                                        (pvs-outer-array-update
                                                         (pvs-closure-hash-lookup
                                                          E9285
                                                          LHS9284)
                                                         A9286
                                                         RHS9279
                                                         (the
                                                          (integer 0)
                                                          (exp2!
                                                           8)))))))
                                                    (rec-tup-update
                                                     E9281
                                                     0
                                                     R9283)
                                                    E9281)
                                                   E9280))))
                                               (let*
                                                ((E9289 E9288)
                                                 (R9291 RHS9287))
                                                (rec-tup-update
                                                 E9289
                                                 1
                                                 R9291)
                                                E9289)
                                               E9288))
                                             (the
                                              (simple-array t)
                                              (if
                                               (the boolean (any_3? x))
                                               (the
                                                (simple-array t)
                                                (let
                                                 ((v
                                                   (if
                                                    (the
                                                     boolean
                                                     (pvs__OR
                                                      (the
                                                       boolean
                                                       (=
                                                        (the
                                                         (integer 0 *)
                                                         pos)
                                                        (the
                                                         (integer 0)
                                                         len)))
                                                      (the
                                                       boolean
                                                       (pvs_NOT
                                                        (the
                                                         boolean
                                                         (pvs-funcall
                                                          (any_3-p x)
                                                          (the
                                                           fixnum
                                                           (pvs-funcall
                                                            s8791
                                                            (the
                                                             (integer
                                                              0
                                                              *)
                                                             pos)))))))))
                                                    (make-fail_2)
                                                    (make-good_2 1))))
                                                 (declare (type nil v))
                                                 (the
                                                  (simple-array t)
                                                  (let
                                                   ((RHS9300 rest)
                                                    (E9301
                                                     (let
                                                      ((A9299
                                                        (the
                                                         (integer 0 *)
                                                         cur))
                                                       (LHS9297
                                                        (the
                                                         (integer 0 *)
                                                         pos)))
                                                      (let
                                                       ((RHS9292 v)
                                                        (E9293
                                                         (the
                                                          (simple-array
                                                           t)
                                                          St)))
                                                       (let*
                                                        ((E9294 E9293)
                                                         (R9296
                                                          (let
                                                           ((E9298
                                                             (make-closure-hash
                                                              (svref
                                                               E9294
                                                               0))))
                                                           (pvs-function-update
                                                            E9298
                                                            LHS9297
                                                            (pvs-outer-array-update
                                                             (pvs-closure-hash-lookup
                                                              E9298
                                                              LHS9297)
                                                             A9299
                                                             RHS9292
                                                             (the
                                                              (integer
                                                               0)
                                                              (exp2!
                                                               8)))))))
                                                        (rec-tup-update
                                                         E9294
                                                         0
                                                         R9296)
                                                        E9294)
                                                       E9293))))
                                                   (let*
                                                    ((E9302 E9301)
                                                     (R9304 RHS9300))
                                                    (rec-tup-update
                                                     E9302
                                                     1
                                                     R9304)
                                                    E9302)
                                                   E9301))))
                                               (the
                                                (simple-array t)
                                                (if
                                                 (the
                                                  boolean
                                                  (terminal_2? x))
                                                 (the
                                                  (simple-array t)
                                                  (let
                                                   ((v
                                                     (if
                                                      (the
                                                       boolean
                                                       (pvs__OR
                                                        (the
                                                         boolean
                                                         (=
                                                          (the
                                                           (integer
                                                            0
                                                            *)
                                                           pos)
                                                          (the
                                                           (integer 0)
                                                           len)))
                                                        (the
                                                         boolean
                                                         (/=
                                                          (the
                                                           fixnum
                                                           (terminal_2-a
                                                            x))
                                                          (the
                                                           fixnum
                                                           (pvs-funcall
                                                            s8791
                                                            (the
                                                             (integer
                                                              0
                                                              *)
                                                             pos)))))))
                                                      (make-fail_2)
                                                      (make-good_2
                                                       1))))
                                                   (declare
                                                    (type nil v))
                                                   (the
                                                    (simple-array t)
                                                    (let
                                                     ((RHS9313 rest)
                                                      (E9314
                                                       (let
                                                        ((A9312
                                                          (the
                                                           (integer
                                                            0
                                                            *)
                                                           cur))
                                                         (LHS9310
                                                          (the
                                                           (integer
                                                            0
                                                            *)
                                                           pos)))
                                                        (let
                                                         ((RHS9305 v)
                                                          (E9306
                                                           (the
                                                            (simple-array
                                                             t)
                                                            St)))
                                                         (let*
                                                          ((E9307
                                                            E9306)
                                                           (R9309
                                                            (let
                                                             ((E9311
                                                               (make-closure-hash
                                                                (svref
                                                                 E9307
                                                                 0))))
                                                             (pvs-function-update
                                                              E9311
                                                              LHS9310
                                                              (pvs-outer-array-update
                                                               (pvs-closure-hash-lookup
                                                                E9311
                                                                LHS9310)
                                                               A9312
                                                               RHS9305
                                                               (the
                                                                (integer
                                                                 0)
                                                                (exp2!
                                                                 8)))))))
                                                          (rec-tup-update
                                                           E9307
                                                           0
                                                           R9309)
                                                          E9307)
                                                         E9306))))
                                                     (let*
                                                      ((E9315 E9314)
                                                       (R9317 RHS9313))
                                                      (rec-tup-update
                                                       E9315
                                                       1
                                                       R9317)
                                                      E9315)
                                                     E9314))))
                                                 (the
                                                  (simple-array t)
                                                  (if
                                                   (the
                                                    boolean
                                                    (concat_2? x))
                                                   (the
                                                    (simple-array t)
                                                    (the
                                                     (simple-array t)
                                                     (let
                                                      ((x#0
                                                        (pvs-funcall
                                                         (pvs-funcall
                                                          (project
                                                           1
                                                           (the
                                                            (simple-array
                                                             t)
                                                            St))
                                                          (the
                                                           (integer
                                                            0
                                                            *)
                                                           pos))
                                                         (the
                                                          (integer 0 *)
                                                          (peg-e1-3
                                                           x)))))
                                                      (declare
                                                       (type nil x#0))
                                                      (the
                                                       (simple-array t)
                                                       (if
                                                        (the
                                                         boolean
                                                         (fail_2? x#0))
                                                        (the
                                                         (simple-array
                                                          t)
                                                         (let
                                                          ((RHS9326
                                                            rest)
                                                           (E9327
                                                            (let
                                                             ((A9325
                                                               (the
                                                                (integer
                                                                 0
                                                                 *)
                                                                cur))
                                                              (LHS9323
                                                               (the
                                                                (integer
                                                                 0
                                                                 *)
                                                                pos)))
                                                             (let
                                                              ((RHS9318
                                                                (make-fail_2))
                                                               (E9319
                                                                (the
                                                                 (simple-array
                                                                  t)
                                                                 St)))
                                                              (let*
                                                               ((E9320
                                                                 E9319)
                                                                (R9322
                                                                 (let
                                                                  ((E9324
                                                                    (make-closure-hash
                                                                     (svref
                                                                      E9320
                                                                      0))))
                                                                  (pvs-function-update
                                                                   E9324
                                                                   LHS9323
                                                                   (pvs-outer-array-update
                                                                    (pvs-closure-hash-lookup
                                                                     E9324
                                                                     LHS9323)
                                                                    A9325
                                                                    RHS9318
                                                                    (the
                                                                     (integer
                                                                      0)
                                                                     (exp2!
                                                                      8)))))))
                                                               (rec-tup-update
                                                                E9320
                                                                0
                                                                R9322)
                                                               E9320)
                                                              E9319))))
                                                          (let*
                                                           ((E9328
                                                             E9327)
                                                            (R9330
                                                             RHS9326))
                                                           (rec-tup-update
                                                            E9328
                                                            1
                                                            R9330)
                                                           E9328)
                                                          E9327))
                                                        (the
                                                         (simple-array
                                                          t)
                                                         (if
                                                          (the
                                                           boolean
                                                           (loop_2?
                                                            x#0))
                                                          (the
                                                           (simple-array
                                                            t)
                                                           (let
                                                            ((RHS9339
                                                              rest)
                                                             (E9340
                                                              (let
                                                               ((A9338
                                                                 (the
                                                                  (integer
                                                                   0
                                                                   *)
                                                                  cur))
                                                                (LHS9336
                                                                 (the
                                                                  (integer
                                                                   0
                                                                   *)
                                                                  pos)))
                                                               (let
                                                                ((RHS9331
                                                                  (make-loop_2))
                                                                 (E9332
                                                                  (the
                                                                   (simple-array
                                                                    t)
                                                                   St)))
                                                                (let*
                                                                 ((E9333
                                                                   E9332)
                                                                  (R9335
                                                                   (let
                                                                    ((E9337
                                                                      (make-closure-hash
                                                                       (svref
                                                                        E9333
                                                                        0))))
                                                                    (pvs-function-update
                                                                     E9337
                                                                     LHS9336
                                                                     (pvs-outer-array-update
                                                                      (pvs-closure-hash-lookup
                                                                       E9337
                                                                       LHS9336)
                                                                      A9338
                                                                      RHS9331
                                                                      (the
                                                                       (integer
                                                                        0)
                                                                       (exp2!
                                                                        8)))))))
                                                                 (rec-tup-update
                                                                  E9333
                                                                  0
                                                                  R9335)
                                                                 E9333)
                                                                E9332))))
                                                            (let*
                                                             ((E9341
                                                               E9340)
                                                              (R9343
                                                               RHS9339))
                                                             (rec-tup-update
                                                              E9341
                                                              1
                                                              R9343)
                                                             E9341)
                                                            E9340))
                                                          (the
                                                           (simple-array
                                                            t)
                                                           (if
                                                            (the
                                                             boolean
                                                             (good_2?
                                                              x#0))
                                                            (the
                                                             (simple-array
                                                              t)
                                                             (the
                                                              (simple-array
                                                               t)
                                                              (let
                                                               ((x1
                                                                 (pvs-funcall
                                                                  (pvs-funcall
                                                                   (project
                                                                    1
                                                                    (the
                                                                     (simple-array
                                                                      t)
                                                                     St))
                                                                   (pvs__+
                                                                    (the
                                                                     (integer
                                                                      0
                                                                      *)
                                                                     pos)
                                                                    (the
                                                                     (integer
                                                                      0)
                                                                     (good_2-span
                                                                      x#0))))
                                                                  (the
                                                                   (integer
                                                                    0
                                                                    *)
                                                                   (peg-e2-3
                                                                    x)))))
                                                               (declare
                                                                (type
                                                                 nil
                                                                 x1))
                                                               (the
                                                                (simple-array
                                                                 t)
                                                                (if
                                                                 (the
                                                                  boolean
                                                                  (fail_2?
                                                                   x1))
                                                                 (the
                                                                  (simple-array
                                                                   t)
                                                                  (let
                                                                   ((RHS9352
                                                                     rest)
                                                                    (E9353
                                                                     (let
                                                                      ((A9351
                                                                        (the
                                                                         (integer
                                                                          0
                                                                          *)
                                                                         cur))
                                                                       (LHS9349
                                                                        (the
                                                                         (integer
                                                                          0
                                                                          *)
                                                                         pos)))
                                                                      (let
                                                                       ((RHS9344
                                                                         (make-fail_2))
                                                                        (E9345
                                                                         (the
                                                                          (simple-array
                                                                           t)
                                                                          St)))
                                                                       (let*
                                                                        ((E9346
                                                                          E9345)
                                                                         (R9348
                                                                          (let
                                                                           ((E9350
                                                                             (make-closure-hash
                                                                              (svref
                                                                               E9346
                                                                               0))))
                                                                           (pvs-function-update
                                                                            E9350
                                                                            LHS9349
                                                                            (pvs-outer-array-update
                                                                             (pvs-closure-hash-lookup
                                                                              E9350
                                                                              LHS9349)
                                                                             A9351
                                                                             RHS9344
                                                                             (the
                                                                              (integer
                                                                               0)
                                                                              (exp2!
                                                                               8)))))))
                                                                        (rec-tup-update
                                                                         E9346
                                                                         0
                                                                         R9348)
                                                                        E9346)
                                                                       E9345))))
                                                                   (let*
                                                                    ((E9354
                                                                      E9353)
                                                                     (R9356
                                                                      RHS9352))
                                                                    (rec-tup-update
                                                                     E9354
                                                                     1
                                                                     R9356)
                                                                    E9354)
                                                                   E9353))
                                                                 (the
                                                                  (simple-array
                                                                   t)
                                                                  (if
                                                                   (the
                                                                    boolean
                                                                    (loop_2?
                                                                     x1))
                                                                   (the
                                                                    (simple-array
                                                                     t)
                                                                    (let
                                                                     ((RHS9365
                                                                       rest)
                                                                      (E9366
                                                                       (let
                                                                        ((A9364
                                                                          (the
                                                                           (integer
                                                                            0
                                                                            *)
                                                                           cur))
                                                                         (LHS9362
                                                                          (the
                                                                           (integer
                                                                            0
                                                                            *)
                                                                           pos)))
                                                                        (let
                                                                         ((RHS9357
                                                                           (make-loop_2))
                                                                          (E9358
                                                                           (the
                                                                            (simple-array
                                                                             t)
                                                                            St)))
                                                                         (let*
                                                                          ((E9359
                                                                            E9358)
                                                                           (R9361
                                                                            (let
                                                                             ((E9363
                                                                               (make-closure-hash
                                                                                (svref
                                                                                 E9359
                                                                                 0))))
                                                                             (pvs-function-update
                                                                              E9363
                                                                              LHS9362
                                                                              (pvs-outer-array-update
                                                                               (pvs-closure-hash-lookup
                                                                                E9363
                                                                                LHS9362)
                                                                               A9364
                                                                               RHS9357
                                                                               (the
                                                                                (integer
                                                                                 0)
                                                                                (exp2!
                                                                                 8)))))))
                                                                          (rec-tup-update
                                                                           E9359
                                                                           0
                                                                           R9361)
                                                                          E9359)
                                                                         E9358))))
                                                                     (let*
                                                                      ((E9367
                                                                        E9366)
                                                                       (R9369
                                                                        RHS9365))
                                                                      (rec-tup-update
                                                                       E9367
                                                                       1
                                                                       R9369)
                                                                      E9367)
                                                                     E9366))
                                                                   (the
                                                                    (simple-array
                                                                     t)
                                                                    (if
                                                                     (the
                                                                      boolean
                                                                      (good_2?
                                                                       x1))
                                                                     (the
                                                                      (simple-array
                                                                       t)
                                                                      (let
                                                                       ((RHS9378
                                                                         rest)
                                                                        (E9379
                                                                         (let
                                                                          ((A9377
                                                                            (the
                                                                             (integer
                                                                              0
                                                                              *)
                                                                             cur))
                                                                           (LHS9375
                                                                            (the
                                                                             (integer
                                                                              0
                                                                              *)
                                                                             pos)))
                                                                          (let
                                                                           ((RHS9370
                                                                             (make-good_2
                                                                              (pvs__+
                                                                               (the
                                                                                (integer
                                                                                 0)
                                                                                (good_2-span
                                                                                 x#0))
                                                                               (the
                                                                                (integer
                                                                                 0)
                                                                                (good_2-span
                                                                                 x1)))))
                                                                            (E9371
                                                                             (the
                                                                              (simple-array
                                                                               t)
                                                                              St)))
                                                                           (let*
                                                                            ((E9372
                                                                              E9371)
                                                                             (R9374
                                                                              (let
                                                                               ((E9376
                                                                                 (make-closure-hash
                                                                                  (svref
                                                                                   E9372
                                                                                   0))))
                                                                               (pvs-function-update
                                                                                E9376
                                                                                LHS9375
                                                                                (pvs-outer-array-update
                                                                                 (pvs-closure-hash-lookup
                                                                                  E9376
                                                                                  LHS9375)
                                                                                 A9377
                                                                                 RHS9370
                                                                                 (the
                                                                                  (integer
                                                                                   0)
                                                                                  (exp2!
                                                                                   8)))))))
                                                                            (rec-tup-update
                                                                             E9372
                                                                             0
                                                                             R9374)
                                                                            E9372)
                                                                           E9371))))
                                                                       (let*
                                                                        ((E9380
                                                                          E9379)
                                                                         (R9382
                                                                          RHS9378))
                                                                        (rec-tup-update
                                                                         E9380
                                                                         1
                                                                         R9382)
                                                                        E9380)
                                                                       E9379))
                                                                     (the
                                                                      (simple-array
                                                                       t)
                                                                      (putstack!_1
                                                                       (the
                                                                        (integer
                                                                         0)
                                                                        len)
                                                                       G
                                                                       s8791
                                                                       (the
                                                                        (integer
                                                                         0
                                                                         *)
                                                                        start)
                                                                       (the
                                                                        (integer
                                                                         0
                                                                         *)
                                                                        root)
                                                                       (the
                                                                        (simple-array
                                                                         t)
                                                                        St)
                                                                       (pvs__+
                                                                        (the
                                                                         (integer
                                                                          0
                                                                          *)
                                                                         pos)
                                                                        (the
                                                                         (integer
                                                                          0)
                                                                         (good_2-span
                                                                          x#0)))
                                                                       (the
                                                                        (integer
                                                                         0
                                                                         *)
                                                                        (peg-e2-3
                                                                         x)))))))))))))
                                                            (the
                                                             (simple-array
                                                              t)
                                                             (putstack!_1
                                                              (the
                                                               (integer
                                                                0)
                                                               len)
                                                              G
                                                              s8791
                                                              (the
                                                               (integer
                                                                0
                                                                *)
                                                               start)
                                                              (the
                                                               (integer
                                                                0
                                                                *)
                                                               root)
                                                              (the
                                                               (simple-array
                                                                t)
                                                               St)
                                                              (the
                                                               (integer
                                                                0
                                                                *)
                                                               pos)
                                                              (the
                                                               (integer
                                                                0
                                                                *)
                                                               (peg-e1-3
                                                                x)))))))))))))
                                                   (the
                                                    (simple-array t)
                                                    (if
                                                     (the
                                                      boolean
                                                      (choice_2? x))
                                                     (the
                                                      (simple-array t)
                                                      (the
                                                       (simple-array t)
                                                       (let
                                                        ((x#0
                                                          (pvs-funcall
                                                           (pvs-funcall
                                                            scaf
                                                            (the
                                                             (integer
                                                              0
                                                              *)
                                                             pos))
                                                           (the
                                                            (integer
                                                             0
                                                             *)
                                                            (peg-e1-3
                                                             x)))))
                                                        (declare
                                                         (type
                                                          nil
                                                          x#0))
                                                        (the
                                                         (simple-array
                                                          t)
                                                         (if
                                                          (the
                                                           boolean
                                                           (fail_2?
                                                            x#0))
                                                          (the
                                                           (simple-array
                                                            t)
                                                           (the
                                                            (simple-array
                                                             t)
                                                            (let
                                                             ((x#1
                                                               (pvs-funcall
                                                                (pvs-funcall
                                                                 scaf
                                                                 (the
                                                                  (integer
                                                                   0
                                                                   *)
                                                                  pos))
                                                                (the
                                                                 (integer
                                                                  0
                                                                  *)
                                                                 (peg-e2-3
                                                                  x)))))
                                                             (declare
                                                              (type
                                                               nil
                                                               x#1))
                                                             (the
                                                              (simple-array
                                                               t)
                                                              (if
                                                               (the
                                                                boolean
                                                                (fail_2?
                                                                 x#1))
                                                               (the
                                                                (simple-array
                                                                 t)
                                                                (let
                                                                 ((RHS9391
                                                                   rest)
                                                                  (E9392
                                                                   (let
                                                                    ((A9390
                                                                      (the
                                                                       (integer
                                                                        0
                                                                        *)
                                                                       cur))
                                                                     (LHS9388
                                                                      (the
                                                                       (integer
                                                                        0
                                                                        *)
                                                                       pos)))
                                                                    (let
                                                                     ((RHS9383
                                                                       (make-fail_2))
                                                                      (E9384
                                                                       (the
                                                                        (simple-array
                                                                         t)
                                                                        St)))
                                                                     (let*
                                                                      ((E9385
                                                                        E9384)
                                                                       (R9387
                                                                        (let
                                                                         ((E9389
                                                                           (make-closure-hash
                                                                            (svref
                                                                             E9385
                                                                             0))))
                                                                         (pvs-function-update
                                                                          E9389
                                                                          LHS9388
                                                                          (pvs-outer-array-update
                                                                           (pvs-closure-hash-lookup
                                                                            E9389
                                                                            LHS9388)
                                                                           A9390
                                                                           RHS9383
                                                                           (the
                                                                            (integer
                                                                             0)
                                                                            (exp2!
                                                                             8)))))))
                                                                      (rec-tup-update
                                                                       E9385
                                                                       0
                                                                       R9387)
                                                                      E9385)
                                                                     E9384))))
                                                                 (let*
                                                                  ((E9393
                                                                    E9392)
                                                                   (R9395
                                                                    RHS9391))
                                                                  (rec-tup-update
                                                                   E9393
                                                                   1
                                                                   R9395)
                                                                  E9393)
                                                                 E9392))
                                                               (the
                                                                (simple-array
                                                                 t)
                                                                (if
                                                                 (the
                                                                  boolean
                                                                  (loop_2?
                                                                   x#1))
                                                                 (the
                                                                  (simple-array
                                                                   t)
                                                                  (let
                                                                   ((RHS9404
                                                                     rest)
                                                                    (E9405
                                                                     (let
                                                                      ((A9403
                                                                        (the
                                                                         (integer
                                                                          0
                                                                          *)
                                                                         cur))
                                                                       (LHS9401
                                                                        (the
                                                                         (integer
                                                                          0
                                                                          *)
                                                                         pos)))
                                                                      (let
                                                                       ((RHS9396
                                                                         (make-loop_2))
                                                                        (E9397
                                                                         (the
                                                                          (simple-array
                                                                           t)
                                                                          St)))
                                                                       (let*
                                                                        ((E9398
                                                                          E9397)
                                                                         (R9400
                                                                          (let
                                                                           ((E9402
                                                                             (make-closure-hash
                                                                              (svref
                                                                               E9398
                                                                               0))))
                                                                           (pvs-function-update
                                                                            E9402
                                                                            LHS9401
                                                                            (pvs-outer-array-update
                                                                             (pvs-closure-hash-lookup
                                                                              E9402
                                                                              LHS9401)
                                                                             A9403
                                                                             RHS9396
                                                                             (the
                                                                              (integer
                                                                               0)
                                                                              (exp2!
                                                                               8)))))))
                                                                        (rec-tup-update
                                                                         E9398
                                                                         0
                                                                         R9400)
                                                                        E9398)
                                                                       E9397))))
                                                                   (let*
                                                                    ((E9406
                                                                      E9405)
                                                                     (R9408
                                                                      RHS9404))
                                                                    (rec-tup-update
                                                                     E9406
                                                                     1
                                                                     R9408)
                                                                    E9406)
                                                                   E9405))
                                                                 (the
                                                                  (simple-array
                                                                   t)
                                                                  (if
                                                                   (the
                                                                    boolean
                                                                    (good_2?
                                                                     x#1))
                                                                   (the
                                                                    (simple-array
                                                                     t)
                                                                    (let
                                                                     ((RHS9417
                                                                       rest)
                                                                      (E9418
                                                                       (let
                                                                        ((A9416
                                                                          (the
                                                                           (integer
                                                                            0
                                                                            *)
                                                                           cur))
                                                                         (LHS9414
                                                                          (the
                                                                           (integer
                                                                            0
                                                                            *)
                                                                           pos)))
                                                                        (let
                                                                         ((RHS9409
                                                                           (make-good_2
                                                                            (the
                                                                             (integer
                                                                              0)
                                                                             (good_2-span
                                                                              x#1))))
                                                                          (E9410
                                                                           (the
                                                                            (simple-array
                                                                             t)
                                                                            St)))
                                                                         (let*
                                                                          ((E9411
                                                                            E9410)
                                                                           (R9413
                                                                            (let
                                                                             ((E9415
                                                                               (make-closure-hash
                                                                                (svref
                                                                                 E9411
                                                                                 0))))
                                                                             (pvs-function-update
                                                                              E9415
                                                                              LHS9414
                                                                              (pvs-outer-array-update
                                                                               (pvs-closure-hash-lookup
                                                                                E9415
                                                                                LHS9414)
                                                                               A9416
                                                                               RHS9409
                                                                               (the
                                                                                (integer
                                                                                 0)
                                                                                (exp2!
                                                                                 8)))))))
                                                                          (rec-tup-update
                                                                           E9411
                                                                           0
                                                                           R9413)
                                                                          E9411)
                                                                         E9410))))
                                                                     (let*
                                                                      ((E9419
                                                                        E9418)
                                                                       (R9421
                                                                        RHS9417))
                                                                      (rec-tup-update
                                                                       E9419
                                                                       1
                                                                       R9421)
                                                                      E9419)
                                                                     E9418))
                                                                   (the
                                                                    (simple-array
                                                                     t)
                                                                    (putstack!_1
                                                                     (the
                                                                      (integer
                                                                       0)
                                                                      len)
                                                                     G
                                                                     s8791
                                                                     (the
                                                                      (integer
                                                                       0
                                                                       *)
                                                                      start)
                                                                     (the
                                                                      (integer
                                                                       0
                                                                       *)
                                                                      root)
                                                                     (the
                                                                      (simple-array
                                                                       t)
                                                                      St)
                                                                     (the
                                                                      (integer
                                                                       0
                                                                       *)
                                                                      pos)
                                                                     (the
                                                                      (integer
                                                                       0
                                                                       *)
                                                                      (peg-e2-3
                                                                       x)))))))))))))
                                                          (the
                                                           (simple-array
                                                            t)
                                                           (if
                                                            (the
                                                             boolean
                                                             (loop_2?
                                                              x#0))
                                                            (the
                                                             (simple-array
                                                              t)
                                                             (let
                                                              ((RHS9430
                                                                rest)
                                                               (E9431
                                                                (let
                                                                 ((A9429
                                                                   (the
                                                                    (integer
                                                                     0
                                                                     *)
                                                                    cur))
                                                                  (LHS9427
                                                                   (the
                                                                    (integer
                                                                     0
                                                                     *)
                                                                    pos)))
                                                                 (let
                                                                  ((RHS9422
                                                                    (make-loop_2))
                                                                   (E9423
                                                                    (the
                                                                     (simple-array
                                                                      t)
                                                                     St)))
                                                                  (let*
                                                                   ((E9424
                                                                     E9423)
                                                                    (R9426
                                                                     (let
                                                                      ((E9428
                                                                        (make-closure-hash
                                                                         (svref
                                                                          E9424
                                                                          0))))
                                                                      (pvs-function-update
                                                                       E9428
                                                                       LHS9427
                                                                       (pvs-outer-array-update
                                                                        (pvs-closure-hash-lookup
                                                                         E9428
                                                                         LHS9427)
                                                                        A9429
                                                                        RHS9422
                                                                        (the
                                                                         (integer
                                                                          0)
                                                                         (exp2!
                                                                          8)))))))
                                                                   (rec-tup-update
                                                                    E9424
                                                                    0
                                                                    R9426)
                                                                   E9424)
                                                                  E9423))))
                                                              (let*
                                                               ((E9432
                                                                 E9431)
                                                                (R9434
                                                                 RHS9430))
                                                               (rec-tup-update
                                                                E9432
                                                                1
                                                                R9434)
                                                               E9432)
                                                              E9431))
                                                            (the
                                                             (simple-array
                                                              t)
                                                             (if
                                                              (the
                                                               boolean
                                                               (good_2?
                                                                x#0))
                                                              (the
                                                               (simple-array
                                                                t)
                                                               (let
                                                                ((RHS9443
                                                                  rest)
                                                                 (E9444
                                                                  (let
                                                                   ((A9442
                                                                     (the
                                                                      (integer
                                                                       0
                                                                       *)
                                                                      cur))
                                                                    (LHS9440
                                                                     (the
                                                                      (integer
                                                                       0
                                                                       *)
                                                                      pos)))
                                                                   (let
                                                                    ((RHS9435
                                                                      (make-good_2
                                                                       (the
                                                                        (integer
                                                                         0)
                                                                        (good_2-span
                                                                         x#0))))
                                                                     (E9436
                                                                      (the
                                                                       (simple-array
                                                                        t)
                                                                       St)))
                                                                    (let*
                                                                     ((E9437
                                                                       E9436)
                                                                      (R9439
                                                                       (let
                                                                        ((E9441
                                                                          (make-closure-hash
                                                                           (svref
                                                                            E9437
                                                                            0))))
                                                                        (pvs-function-update
                                                                         E9441
                                                                         LHS9440
                                                                         (pvs-outer-array-update
                                                                          (pvs-closure-hash-lookup
                                                                           E9441
                                                                           LHS9440)
                                                                          A9442
                                                                          RHS9435
                                                                          (the
                                                                           (integer
                                                                            0)
                                                                           (exp2!
                                                                            8)))))))
                                                                     (rec-tup-update
                                                                      E9437
                                                                      0
                                                                      R9439)
                                                                     E9437)
                                                                    E9436))))
                                                                (let*
                                                                 ((E9445
                                                                   E9444)
                                                                  (R9447
                                                                   RHS9443))
                                                                 (rec-tup-update
                                                                  E9445
                                                                  1
                                                                  R9447)
                                                                 E9445)
                                                                E9444))
                                                              (the
                                                               (simple-array
                                                                t)
                                                               (putstack!_1
                                                                (the
                                                                 (integer
                                                                  0)
                                                                 len)
                                                                G
                                                                s8791
                                                                (the
                                                                 (integer
                                                                  0
                                                                  *)
                                                                 start)
                                                                (the
                                                                 (integer
                                                                  0
                                                                  *)
                                                                 root)
                                                                (the
                                                                 (simple-array
                                                                  t)
                                                                 St)
                                                                (the
                                                                 (integer
                                                                  0
                                                                  *)
                                                                 pos)
                                                                (the
                                                                 (integer
                                                                  0
                                                                  *)
                                                                 (peg-e1-3
                                                                  x)))))))))))))
                                                     (the
                                                      (simple-array t)
                                                      (if
                                                       (the
                                                        boolean
                                                        (check_2? x))
                                                       (the
                                                        (simple-array
                                                         t)
                                                        (the
                                                         (simple-array
                                                          t)
                                                         (let
                                                          ((x#0
                                                            (pvs-funcall
                                                             (pvs-funcall
                                                              scaf
                                                              (the
                                                               (integer
                                                                0
                                                                *)
                                                               pos))
                                                             (the
                                                              (integer
                                                               0
                                                               *)
                                                              (peg-e-3
                                                               x)))))
                                                          (declare
                                                           (type
                                                            nil
                                                            x#0))
                                                          (the
                                                           (simple-array
                                                            t)
                                                           (if
                                                            (the
                                                             boolean
                                                             (fail_2?
                                                              x#0))
                                                            (the
                                                             (simple-array
                                                              t)
                                                             (let
                                                              ((RHS9456
                                                                rest)
                                                               (E9457
                                                                (let
                                                                 ((A9455
                                                                   (the
                                                                    (integer
                                                                     0
                                                                     *)
                                                                    cur))
                                                                  (LHS9453
                                                                   (the
                                                                    (integer
                                                                     0
                                                                     *)
                                                                    pos)))
                                                                 (let
                                                                  ((RHS9448
                                                                    (make-fail_2))
                                                                   (E9449
                                                                    (the
                                                                     (simple-array
                                                                      t)
                                                                     St)))
                                                                  (let*
                                                                   ((E9450
                                                                     E9449)
                                                                    (R9452
                                                                     (let
                                                                      ((E9454
                                                                        (make-closure-hash
                                                                         (svref
                                                                          E9450
                                                                          0))))
                                                                      (pvs-function-update
                                                                       E9454
                                                                       LHS9453
                                                                       (pvs-outer-array-update
                                                                        (pvs-closure-hash-lookup
                                                                         E9454
                                                                         LHS9453)
                                                                        A9455
                                                                        RHS9448
                                                                        (the
                                                                         (integer
                                                                          0)
                                                                         (exp2!
                                                                          8)))))))
                                                                   (rec-tup-update
                                                                    E9450
                                                                    0
                                                                    R9452)
                                                                   E9450)
                                                                  E9449))))
                                                              (let*
                                                               ((E9458
                                                                 E9457)
                                                                (R9460
                                                                 RHS9456))
                                                               (rec-tup-update
                                                                E9458
                                                                1
                                                                R9460)
                                                               E9458)
                                                              E9457))
                                                            (the
                                                             (simple-array
                                                              t)
                                                             (if
                                                              (the
                                                               boolean
                                                               (loop_2?
                                                                x#0))
                                                              (the
                                                               (simple-array
                                                                t)
                                                               (let
                                                                ((RHS9469
                                                                  rest)
                                                                 (E9470
                                                                  (let
                                                                   ((A9468
                                                                     (the
                                                                      (integer
                                                                       0
                                                                       *)
                                                                      cur))
                                                                    (LHS9466
                                                                     (the
                                                                      (integer
                                                                       0
                                                                       *)
                                                                      pos)))
                                                                   (let
                                                                    ((RHS9461
                                                                      (make-loop_2))
                                                                     (E9462
                                                                      (the
                                                                       (simple-array
                                                                        t)
                                                                       St)))
                                                                    (let*
                                                                     ((E9463
                                                                       E9462)
                                                                      (R9465
                                                                       (let
                                                                        ((E9467
                                                                          (make-closure-hash
                                                                           (svref
                                                                            E9463
                                                                            0))))
                                                                        (pvs-function-update
                                                                         E9467
                                                                         LHS9466
                                                                         (pvs-outer-array-update
                                                                          (pvs-closure-hash-lookup
                                                                           E9467
                                                                           LHS9466)
                                                                          A9468
                                                                          RHS9461
                                                                          (the
                                                                           (integer
                                                                            0)
                                                                           (exp2!
                                                                            8)))))))
                                                                     (rec-tup-update
                                                                      E9463
                                                                      0
                                                                      R9465)
                                                                     E9463)
                                                                    E9462))))
                                                                (let*
                                                                 ((E9471
                                                                   E9470)
                                                                  (R9473
                                                                   RHS9469))
                                                                 (rec-tup-update
                                                                  E9471
                                                                  1
                                                                  R9473)
                                                                 E9471)
                                                                E9470))
                                                              (the
                                                               (simple-array
                                                                t)
                                                               (if
                                                                (the
                                                                 boolean
                                                                 (good_2?
                                                                  x#0))
                                                                (the
                                                                 (simple-array
                                                                  t)
                                                                 (let
                                                                  ((RHS9482
                                                                    rest)
                                                                   (E9483
                                                                    (let
                                                                     ((A9481
                                                                       (the
                                                                        (integer
                                                                         0
                                                                         *)
                                                                        cur))
                                                                      (LHS9479
                                                                       (the
                                                                        (integer
                                                                         0
                                                                         *)
                                                                        pos)))
                                                                     (let
                                                                      ((RHS9474
                                                                        (make-good_2
                                                                         0))
                                                                       (E9475
                                                                        (the
                                                                         (simple-array
                                                                          t)
                                                                         St)))
                                                                      (let*
                                                                       ((E9476
                                                                         E9475)
                                                                        (R9478
                                                                         (let
                                                                          ((E9480
                                                                            (make-closure-hash
                                                                             (svref
                                                                              E9476
                                                                              0))))
                                                                          (pvs-function-update
                                                                           E9480
                                                                           LHS9479
                                                                           (pvs-outer-array-update
                                                                            (pvs-closure-hash-lookup
                                                                             E9480
                                                                             LHS9479)
                                                                            A9481
                                                                            RHS9474
                                                                            (the
                                                                             (integer
                                                                              0)
                                                                             (exp2!
                                                                              8)))))))
                                                                       (rec-tup-update
                                                                        E9476
                                                                        0
                                                                        R9478)
                                                                       E9476)
                                                                      E9475))))
                                                                  (let*
                                                                   ((E9484
                                                                     E9483)
                                                                    (R9486
                                                                     RHS9482))
                                                                   (rec-tup-update
                                                                    E9484
                                                                    1
                                                                    R9486)
                                                                   E9484)
                                                                  E9483))
                                                                (the
                                                                 (simple-array
                                                                  t)
                                                                 (putstack!_1
                                                                  (the
                                                                   (integer
                                                                    0)
                                                                   len)
                                                                  G
                                                                  s8791
                                                                  (the
                                                                   (integer
                                                                    0
                                                                    *)
                                                                   start)
                                                                  (the
                                                                   (integer
                                                                    0
                                                                    *)
                                                                   root)
                                                                  (the
                                                                   (simple-array
                                                                    t)
                                                                   St)
                                                                  (the
                                                                   (integer
                                                                    0
                                                                    *)
                                                                   pos)
                                                                  (the
                                                                   (integer
                                                                    0
                                                                    *)
                                                                   (peg-e-3
                                                                    x)))))))))))))
                                                       (the
                                                        (simple-array
                                                         t)
                                                        (the
                                                         (simple-array
                                                          t)
                                                         (let
                                                          ((x#0
                                                            (pvs-funcall
                                                             (pvs-funcall
                                                              scaf
                                                              (the
                                                               (integer
                                                                0
                                                                *)
                                                               pos))
                                                             (the
                                                              (integer
                                                               0
                                                               *)
                                                              (peg-e-3
                                                               x)))))
                                                          (declare
                                                           (type
                                                            nil
                                                            x#0))
                                                          (the
                                                           (simple-array
                                                            t)
                                                           (if
                                                            (the
                                                             boolean
                                                             (fail_2?
                                                              x#0))
                                                            (the
                                                             (simple-array
                                                              t)
                                                             (let
                                                              ((RHS9495
                                                                rest)
                                                               (E9496
                                                                (let
                                                                 ((A9494
                                                                   (the
                                                                    (integer
                                                                     0
                                                                     *)
                                                                    cur))
                                                                  (LHS9492
                                                                   (the
                                                                    (integer
                                                                     0
                                                                     *)
                                                                    pos)))
                                                                 (let
                                                                  ((RHS9487
                                                                    (make-good_2
                                                                     0))
                                                                   (E9488
                                                                    (the
                                                                     (simple-array
                                                                      t)
                                                                     St)))
                                                                  (let*
                                                                   ((E9489
                                                                     E9488)
                                                                    (R9491
                                                                     (let
                                                                      ((E9493
                                                                        (make-closure-hash
                                                                         (svref
                                                                          E9489
                                                                          0))))
                                                                      (pvs-function-update
                                                                       E9493
                                                                       LHS9492
                                                                       (pvs-outer-array-update
                                                                        (pvs-closure-hash-lookup
                                                                         E9493
                                                                         LHS9492)
                                                                        A9494
                                                                        RHS9487
                                                                        (the
                                                                         (integer
                                                                          0)
                                                                         (exp2!
                                                                          8)))))))
                                                                   (rec-tup-update
                                                                    E9489
                                                                    0
                                                                    R9491)
                                                                   E9489)
                                                                  E9488))))
                                                              (let*
                                                               ((E9497
                                                                 E9496)
                                                                (R9499
                                                                 RHS9495))
                                                               (rec-tup-update
                                                                E9497
                                                                1
                                                                R9499)
                                                               E9497)
                                                              E9496))
                                                            (the
                                                             (simple-array
                                                              t)
                                                             (if
                                                              (the
                                                               boolean
                                                               (loop_2?
                                                                x#0))
                                                              (the
                                                               (simple-array
                                                                t)
                                                               (let
                                                                ((RHS9508
                                                                  rest)
                                                                 (E9509
                                                                  (let
                                                                   ((A9507
                                                                     (the
                                                                      (integer
                                                                       0
                                                                       *)
                                                                      cur))
                                                                    (LHS9505
                                                                     (the
                                                                      (integer
                                                                       0
                                                                       *)
                                                                      pos)))
                                                                   (let
                                                                    ((RHS9500
                                                                      (make-loop_2))
                                                                     (E9501
                                                                      (the
                                                                       (simple-array
                                                                        t)
                                                                       St)))
                                                                    (let*
                                                                     ((E9502
                                                                       E9501)
                                                                      (R9504
                                                                       (let
                                                                        ((E9506
                                                                          (make-closure-hash
                                                                           (svref
                                                                            E9502
                                                                            0))))
                                                                        (pvs-function-update
                                                                         E9506
                                                                         LHS9505
                                                                         (pvs-outer-array-update
                                                                          (pvs-closure-hash-lookup
                                                                           E9506
                                                                           LHS9505)
                                                                          A9507
                                                                          RHS9500
                                                                          (the
                                                                           (integer
                                                                            0)
                                                                           (exp2!
                                                                            8)))))))
                                                                     (rec-tup-update
                                                                      E9502
                                                                      0
                                                                      R9504)
                                                                     E9502)
                                                                    E9501))))
                                                                (let*
                                                                 ((E9510
                                                                   E9509)
                                                                  (R9512
                                                                   RHS9508))
                                                                 (rec-tup-update
                                                                  E9510
                                                                  1
                                                                  R9512)
                                                                 E9510)
                                                                E9509))
                                                              (the
                                                               (simple-array
                                                                t)
                                                               (if
                                                                (the
                                                                 boolean
                                                                 (good_2?
                                                                  x#0))
                                                                (the
                                                                 (simple-array
                                                                  t)
                                                                 (let
                                                                  ((RHS9521
                                                                    rest)
                                                                   (E9522
                                                                    (let
                                                                     ((A9520
                                                                       (the
                                                                        (integer
                                                                         0
                                                                         *)
                                                                        cur))
                                                                      (LHS9518
                                                                       (the
                                                                        (integer
                                                                         0
                                                                         *)
                                                                        pos)))
                                                                     (let
                                                                      ((RHS9513
                                                                        (make-fail_2))
                                                                       (E9514
                                                                        (the
                                                                         (simple-array
                                                                          t)
                                                                         St)))
                                                                      (let*
                                                                       ((E9515
                                                                         E9514)
                                                                        (R9517
                                                                         (let
                                                                          ((E9519
                                                                            (make-closure-hash
                                                                             (svref
                                                                              E9515
                                                                              0))))
                                                                          (pvs-function-update
                                                                           E9519
                                                                           LHS9518
                                                                           (pvs-outer-array-update
                                                                            (pvs-closure-hash-lookup
                                                                             E9519
                                                                             LHS9518)
                                                                            A9520
                                                                            RHS9513
                                                                            (the
                                                                             (integer
                                                                              0)
                                                                             (exp2!
                                                                              8)))))))
                                                                       (rec-tup-update
                                                                        E9515
                                                                        0
                                                                        R9517)
                                                                       E9515)
                                                                      E9514))))
                                                                  (let*
                                                                   ((E9523
                                                                     E9522)
                                                                    (R9525
                                                                     RHS9521))
                                                                   (rec-tup-update
                                                                    E9523
                                                                    1
                                                                    R9525)
                                                                   E9523)
                                                                  E9522))
                                                                (the
                                                                 (simple-array
                                                                  t)
                                                                 (putstack!_1
                                                                  (the
                                                                   (integer
                                                                    0)
                                                                   len)
                                                                  G
                                                                  s8791
                                                                  (the
                                                                   (integer
                                                                    0
                                                                    *)
                                                                   start)
                                                                  (the
                                                                   (integer
                                                                    0
                                                                    *)
                                                                   root)
                                                                  (the
                                                                   (simple-array
                                                                    t)
                                                                   St)
                                                                  (the
                                                                   (integer
                                                                    0
                                                                    *)
                                                                   pos)
                                                                  (the
                                                                   (integer
                                                                    0
                                                                    *)
                                                                   (peg-e-3
                                                                    x)))))))))))))))))))))))))))))))))))))))))))
(defun parse_2 ()
  #'(lambda (lamvar#0)
      (let ((len (project 1 lamvar#0))
            (G (project 2 lamvar#0))
            (s74583 (project 3 lamvar#0))
            (start (project 4 lamvar#0))
            (root (project 5 lamvar#0)))
        (declare (type (integer 0) len) (type (integer 0 *) start)
         (type (integer 0 *) root))
        #'(lambda (St)
            (the (simple-array t)
                 (if (the boolean
                          (pvs_NOT (the
                                    boolean
                                    (pending_2?
                                     (pvs-funcall
                                      (pvs-funcall
                                       (project
                                        1
                                        (the (simple-array t) St))
                                       (the (integer 0 *) start))
                                      (the (integer 0 *) root))))))
                     (the (simple-array t) St)
                   (the (simple-array t)
                        (_parse_1 (the (integer 0) len) G s74583
                                  (the (integer 0 *) start)
                                  (the (integer 0 *) root)
                                  (the
                                   (simple-array t)
                                   (_step_1
                                    (the (integer 0) len)
                                    G
                                    s74583
                                    (the (integer 0 *) start)
                                    (the (integer 0 *) root)
                                    (the (simple-array t) St)))))))))))
(defun _parse_1 (len G s9753 start root St)
  (declare (type (integer 0) len) (type (integer 0 *) start)
   (type (integer 0 *) root) (type (simple-array t) St))
  (the (simple-array t)
       (if (the boolean
                (pvs_NOT (the boolean
                              (pending_2? (pvs-funcall
                                           (pvs-funcall
                                            (project
                                             1
                                             (the (simple-array t) St))
                                            (the (integer 0 *) start))
                                           (the
                                            (integer 0 *)
                                            root))))))
           (the (simple-array t) St)
         (the (simple-array t)
              (_parse_1 (the (integer 0) len) G s9753
                        (the (integer 0 *) start)
                        (the (integer 0 *) root)
                        (the (simple-array t)
                             (_step_1 (the (integer 0) len) G s9753
                                      (the (integer 0 *) start)
                                      (the (integer 0 *) root)
                                      (the (simple-array t) St))))))))
(defun parse!_1 (len G s9753 start root St)
  (declare (type (integer 0) len) (type (integer 0 *) start)
   (type (integer 0 *) root) (type (simple-array t) St))
  (the (simple-array t)
       (if (the boolean
                (pvs_NOT (the boolean
                              (pending_2? (pvs-funcall
                                           (pvs-funcall
                                            (project
                                             1
                                             (the (simple-array t) St))
                                            (the (integer 0 *) start))
                                           (the
                                            (integer 0 *)
                                            root))))))
           (the (simple-array t) St)
         (the (simple-array t)
              (parse!_1 (the (integer 0) len) G s9753
                        (the (integer 0 *) start)
                        (the (integer 0 *) root)
                        (the (simple-array t)
                             (_step_1 (the (integer 0) len) G s9753
                                      (the (integer 0 *) start)
                                      (the (integer 0 *) root)
                                      (the (simple-array t) St))))))))
(defun doparse_1 ()
  #'(lambda (lamvar#0)
      (let ((len (project 1 lamvar#0))
            (G (project 2 lamvar#0))
            (s74583 (project 3 lamvar#0))
            (n (project 4 lamvar#0)))
        (declare (type (integer 0) len) (type (integer 0 *) n))
        (let ((pend #'(lambda (n#0) (make-pending_2))))
          (declare (type nil pend))
          (let ((St
                 (the (simple-array t)
                      (pvs2cl_record #'(lambda (i) pend)
                                     (make-empty_2)))))
            (declare (type (simple-array t) St))
            (pvs-funcall (pvs-funcall (project
                                       1
                                       (the
                                        (simple-array t)
                                        (_parse_1
                                         (the (integer 0) len)
                                         G
                                         s74583
                                         0
                                         (the (integer 0 *) n)
                                         (the (simple-array t) St))))
                                      0)
                         (the (integer 0 *) n)))))))
(defun _doparse_1 (len G s9760 n)
  (declare (type (integer 0) len) (type (integer 0 *) n))
  (let ((pend #'(lambda (n#0) (make-pending_2))))
    (declare (type nil pend))
    (let ((St
           (the (simple-array t)
                (pvs2cl_record #'(lambda (i) pend) (make-empty_2)))))
      (declare (type (simple-array t) St))
      (pvs-funcall (pvs-funcall (project
                                 1
                                 (the
                                  (simple-array t)
                                  (_parse_1
                                   (the (integer 0) len)
                                   G
                                   s9760
                                   0
                                   (the (integer 0 *) n)
                                   (the (simple-array t) St))))
                                0)
                   (the (integer 0 *) n)))))
(defun doparse!_1 (len G s9760 n)
  (declare (type (integer 0) len) (type (integer 0 *) n))
  (let ((pend #'(lambda (n#0) (make-pending_2))))
    (declare (type nil pend))
    (let ((St
           (the (simple-array t)
                (pvs2cl_record #'(lambda (i) pend) (make-empty_2)))))
      (declare (type (simple-array t) St))
      (pvs-funcall (pvs-funcall (project
                                 1
                                 (the
                                  (simple-array t)
                                  (parse!_1
                                   (the (integer 0) len)
                                   G
                                   s9760
                                   0
                                   (the (integer 0 *) n)
                                   (the (simple-array t) St))))
                                0)
                   (the (integer 0 *) n)))))