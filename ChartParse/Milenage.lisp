(in-package :pvs)

(defun nbyv ()
  #'(lambda (lamvar#0)
      (let ((x (project 1 lamvar#0)) (n (project 2 lamvar#0)))
        (declare (type (integer 0 *) x) (type (integer 0 *) n))
        #'(lambda (j) (the (integer 0 *) x)))))
(defun _nbyv (x n j)
  (declare (type (integer 0 *) x) (type (integer 0 *) n)
   (type (integer 0 *) j))
  (the (integer 0 *) x))
(defun nbyv! (x n j)
  (declare (type (integer 0 *) x) (type (integer 0 *) n)
   (type (integer 0 *) j))
  (the (integer 0 *) x))
(defun c1 ()
  (pvs-funcall (nbyv)
               (the (simple-array t)
                    (pvs2cl_tuple (the (integer 0 *) 0)
                                  (the (integer 0 *) 16)))))
(defun _c1 ()
  (pvs-funcall (nbyv)
               (the (simple-array t)
                    (pvs2cl_tuple (the (integer 0 *) 0)
                                  (the (integer 0 *) 16)))))
(defun c1! ()
  (pvs-funcall (nbyv)
               (the (simple-array t)
                    (pvs2cl_tuple (the (integer 0 *) 0)
                                  (the (integer 0 *) 16)))))
(defun c2 ()
  (let ((A292 (the (integer 0 *) 15)))
    (let ((N291 (the (integer 0 *) 1)) (E290 (_c1)))
      (pvs-outer-array-update E290 A292 N291 (the (integer 0 *) 16)))))
(defun _c2 ()
  (let ((A277 (the (integer 0 *) 15)))
    (let ((N276 (the (integer 0 *) 1)) (E275 (_c1)))
      (pvs-outer-array-update E275 A277 N276 (the (integer 0 *) 16)))))
(defun c2! ()
  (let ((LHS284 (the (integer 0 *) 15)))
    (let ((RHS282 (the (integer 0 *) 1))
          (E283
           (if (<= (the (integer 0 *) 16) 1000000)
               (mk-fun-array (c1!) (the (integer 0 *) 16))
             (make-closure-hash (c1!)))))
      (let ((E285 E283)) (pvs-setf E285 LHS284 RHS282))
      E283)))
(defun c3 ()
  (let ((A529 (the (integer 0 *) 15)))
    (let ((N528 (the (integer 0 *) 2)) (E527 (_c1)))
      (pvs-outer-array-update E527 A529 N528 (the (integer 0 *) 16)))))
(defun _c3 ()
  (let ((A514 (the (integer 0 *) 15)))
    (let ((N513 (the (integer 0 *) 2)) (E512 (_c1)))
      (pvs-outer-array-update E512 A514 N513 (the (integer 0 *) 16)))))
(defun c3! ()
  (let ((LHS521 (the (integer 0 *) 15)))
    (let ((RHS519 (the (integer 0 *) 2))
          (E520
           (if (<= (the (integer 0 *) 16) 1000000)
               (mk-fun-array (c1!) (the (integer 0 *) 16))
             (make-closure-hash (c1!)))))
      (let ((E522 E520)) (pvs-setf E522 LHS521 RHS519))
      E520)))
(defun c4 ()
  (let ((A502 (the (integer 0 *) 15)))
    (let ((N501 (the (integer 0 *) 4)) (E500 (_c1)))
      (pvs-outer-array-update E500 A502 N501 (the (integer 0 *) 16)))))
(defun _c4 ()
  (let ((A487 (the (integer 0 *) 15)))
    (let ((N486 (the (integer 0 *) 4)) (E485 (_c1)))
      (pvs-outer-array-update E485 A487 N486 (the (integer 0 *) 16)))))
(defun c4! ()
  (let ((LHS494 (the (integer 0 *) 15)))
    (let ((RHS492 (the (integer 0 *) 4))
          (E493
           (if (<= (the (integer 0 *) 16) 1000000)
               (mk-fun-array (c1!) (the (integer 0 *) 16))
             (make-closure-hash (c1!)))))
      (let ((E495 E493)) (pvs-setf E495 LHS494 RHS492))
      E493)))
(defun c5 ()
  (let ((A744 (the (integer 0 *) 15)))
    (let ((N743 (the (integer 0 *) 8)) (E742 (_c1)))
      (pvs-outer-array-update E742 A744 N743 (the (integer 0 *) 16)))))
(defun _c5 ()
  (let ((A729 (the (integer 0 *) 15)))
    (let ((N728 (the (integer 0 *) 8)) (E727 (_c1)))
      (pvs-outer-array-update E727 A729 N728 (the (integer 0 *) 16)))))
(defun c5! ()
  (let ((LHS736 (the (integer 0 *) 15)))
    (let ((RHS734 (the (integer 0 *) 8))
          (E735
           (if (<= (the (integer 0 *) 16) 1000000)
               (mk-fun-array (c1!) (the (integer 0 *) 16))
             (make-closure-hash (c1!)))))
      (let ((E737 E735)) (pvs-setf E737 LHS736 RHS734))
      E735)))
(defun r1 () (the (integer 0 *) 64))
(defun _r1 () (the (integer 0 *) 64))
(defun r1! () (the (integer 0 *) 64))
(defun r2 () (the (integer 0 *) 0))
(defun _r2 () (the (integer 0 *) 0))
(defun r2! () (the (integer 0 *) 0))
(defun r3 () (the (integer 0 *) 32))
(defun _r3 () (the (integer 0 *) 32))
(defun r3! () (the (integer 0 *) 32))
(defun r4 () (the (integer 0 *) 64))
(defun _r4 () (the (integer 0 *) 64))
(defun r4! () (the (integer 0 *) 64))
(defun r5 () (the (integer 0 *) 96))
(defun _r5 () (the (integer 0 *) 96))
(defun r5! () (the (integer 0 *) 96))
(defun byvto ()
  #'(lambda (lamvar#0)
      (let ((n (project 1 lamvar#0))
            (X (project 2 lamvar#0))
            (to (project 3 lamvar#0)))
        (declare (type (integer 0 *) n) (type (integer 0 *) to))
        #'(lambda (i)
            (the (integer 0 *)
                 (pvs-funcall X (the (integer 0 *) i)))))))
(defun _byvto (n X to i)
  (declare (type (integer 0 *) n) (type (integer 0 *) to)
   (type (integer 0 *) i))
  (the (integer 0 *) (pvs-funcall X (the (integer 0 *) i))))
(defun byvto! (n X to i)
  (declare (type (integer 0 *) n) (type (integer 0 *) to)
   (type (integer 0 *) i))
  (the (integer 0 *) (pvs-funcall X (the (integer 0 *) i))))
(defun byvfrom ()
  #'(lambda (lamvar#0)
      (let ((n (project 1 lamvar#0))
            (X (project 2 lamvar#0))
            (frm (project 3 lamvar#0)))
        (declare (type (integer 0 *) n) (type (integer 0 *) frm))
        #'(lambda (i)
            (the (integer 0 *)
                 (pvs-funcall X
                              (pvs__+ (the (integer 0 *) i)
                                      (the (integer 0 *) frm))))))))
(defun _byvfrom (n X frm i)
  (declare (type (integer 0 *) n) (type (integer 0 *) frm)
   (type (integer 0 *) i))
  (the (integer 0 *)
       (pvs-funcall X
                    (pvs__+ (the (integer 0 *) i)
                            (the (integer 0 *) frm)))))
(defun byvfrom! (n X frm i)
  (declare (type (integer 0 *) n) (type (integer 0 *) frm)
   (type (integer 0 *) i))
  (the (integer 0 *)
       (pvs-funcall X
                    (pvs__+ (the (integer 0 *) i)
                            (the (integer 0 *) frm)))))
(defun OUT1 ()
  #'(lambda (E)
      #'(lambda (lamvar#0)
          (let ((K (project 1 lamvar#0))
                (TEMP (project 2 lamvar#0))
                (IN1 (project 3 lamvar#0))
                (OPC (project 4 lamvar#0)))
            (let ((X
                   (pvs-funcall (bytevectors_byvXOR
                                 (the (integer 0 *) 16))
                                (the
                                 (simple-array t)
                                 (pvs2cl_tuple IN1 OPC)))))
              (declare (type nil X))
              (let ((Y
                     (bytevectors__byvrightrotate
                       (the (integer 0 *) 16) X
                       (the (integer 0 *) (_r1)))))
                (declare (type nil Y))
                (let ((Z1
                       (pvs-funcall (bytevectors_byvXOR
                                     (the (integer 0 *) 16))
                                    (the
                                     (simple-array t)
                                     (pvs2cl_tuple TEMP Y)))))
                  (declare (type nil Z1))
                  (let ((Z
                         (pvs-funcall (bytevectors_byvXOR
                                       (the (integer 0 *) 16))
                                      (the
                                       (simple-array t)
                                       (pvs2cl_tuple Z1 (_c1))))))
                    (declare (type nil Z))
                    (let ((U
                           (pvs-funcall E
                                        (the
                                         (simple-array t)
                                         (pvs2cl_tuple Z K)))))
                      (declare (type nil U))
                      (pvs-funcall (bytevectors_byvXOR
                                    (the (integer 0 *) 16))
                                   (the
                                    (simple-array t)
                                    (pvs2cl_tuple U OPC))))))))))))
(defun _OUT1 (E K TEMP IN1 OPC)
  (let ((X
         (pvs-funcall (bytevectors_byvXOR (the (integer 0 *) 16))
                      (the (simple-array t) (pvs2cl_tuple IN1 OPC)))))
    (declare (type nil X))
    (let ((Y
           (bytevectors__byvrightrotate (the (integer 0 *) 16) X
             (the (integer 0 *) (_r1)))))
      (declare (type nil Y))
      (let ((Z1
             (pvs-funcall (bytevectors_byvXOR (the (integer 0 *) 16))
                          (the (simple-array t)
                               (pvs2cl_tuple TEMP Y)))))
        (declare (type nil Z1))
        (let ((Z
               (pvs-funcall (bytevectors_byvXOR (the (integer 0 *) 16))
                            (the (simple-array t)
                                 (pvs2cl_tuple Z1 (_c1))))))
          (declare (type nil Z))
          (let ((U
                 (pvs-funcall E
                              (the (simple-array t)
                                   (pvs2cl_tuple Z K)))))
            (declare (type nil U))
            (pvs-funcall (bytevectors_byvXOR (the (integer 0 *) 16))
                         (the (simple-array t)
                              (pvs2cl_tuple U OPC)))))))))
(defun OUT1! (E K TEMP IN1 OPC)
  (let ((X
         (pvs-funcall (bytevectors_byvXOR (the (integer 0 *) 16))
                      (the (simple-array t) (pvs2cl_tuple IN1 OPC)))))
    (declare (type nil X))
    (let ((Y
           (bytevectors!byvrightrotate (the (integer 0 *) 16) X
             (the (integer 0 *) (r1!)))))
      (declare (type nil Y))
      (let ((Z1
             (pvs-funcall (bytevectors_byvXOR (the (integer 0 *) 16))
                          (the (simple-array t)
                               (pvs2cl_tuple TEMP Y)))))
        (declare (type nil Z1))
        (let ((Z
               (pvs-funcall (bytevectors_byvXOR (the (integer 0 *) 16))
                            (the (simple-array t)
                                 (pvs2cl_tuple Z1 (c1!))))))
          (declare (type nil Z))
          (let ((U
                 (pvs-funcall E
                              (the (simple-array t)
                                   (pvs2cl_tuple Z K)))))
            (declare (type nil U))
            (pvs-funcall (bytevectors_byvXOR (the (integer 0 *) 16))
                         (the (simple-array t)
                              (pvs2cl_tuple U OPC)))))))))
(defun OUT2 ()
  #'(lambda (E)
      #'(lambda (lamvar#0)
          (let ((K (project 1 lamvar#0))
                (X (project 2 lamvar#0))
                (OPC (project 3 lamvar#0)))
            (let ((Y
                   (bytevectors__byvrightrotate (the (integer 0 *) 16)
                     X (the (integer 0 *) (_r2)))))
              (declare (type nil Y))
              (let ((Z
                     (pvs-funcall (bytevectors_byvXOR
                                   (the (integer 0 *) 16))
                                  (the
                                   (simple-array t)
                                   (pvs2cl_tuple Y (_c2))))))
                (declare (type nil Z))
                (let ((U
                       (pvs-funcall E
                                    (the
                                     (simple-array t)
                                     (pvs2cl_tuple Z K)))))
                  (declare (type nil U))
                  (pvs-funcall (bytevectors_byvXOR
                                (the (integer 0 *) 16))
                               (the
                                (simple-array t)
                                (pvs2cl_tuple U OPC))))))))))
(defun _OUT2 (E K X OPC)
  (let ((Y
         (bytevectors__byvrightrotate (the (integer 0 *) 16) X
           (the (integer 0 *) (_r2)))))
    (declare (type nil Y))
    (let ((Z
           (pvs-funcall (bytevectors_byvXOR (the (integer 0 *) 16))
                        (the (simple-array t)
                             (pvs2cl_tuple Y (_c2))))))
      (declare (type nil Z))
      (let ((U
             (pvs-funcall E
                          (the (simple-array t) (pvs2cl_tuple Z K)))))
        (declare (type nil U))
        (pvs-funcall (bytevectors_byvXOR (the (integer 0 *) 16))
                     (the (simple-array t) (pvs2cl_tuple U OPC)))))))
(defun OUT2! (E K X OPC)
  (let ((Y
         (bytevectors!byvrightrotate (the (integer 0 *) 16) X
           (the (integer 0 *) (r2!)))))
    (declare (type nil Y))
    (let ((Z
           (pvs-funcall (bytevectors_byvXOR (the (integer 0 *) 16))
                        (the (simple-array t)
                             (pvs2cl_tuple Y (c2!))))))
      (declare (type nil Z))
      (let ((U
             (pvs-funcall E
                          (the (simple-array t) (pvs2cl_tuple Z K)))))
        (declare (type nil U))
        (pvs-funcall (bytevectors_byvXOR (the (integer 0 *) 16))
                     (the (simple-array t) (pvs2cl_tuple U OPC)))))))
(defun OUT3 ()
  #'(lambda (E)
      #'(lambda (lamvar#0)
          (let ((K (project 1 lamvar#0))
                (X (project 2 lamvar#0))
                (OPC (project 3 lamvar#0)))
            (let ((Y
                   (bytevectors__byvrightrotate (the (integer 0 *) 16)
                     X (the (integer 0 *) (_r3)))))
              (declare (type nil Y))
              (let ((Z
                     (pvs-funcall (bytevectors_byvXOR
                                   (the (integer 0 *) 16))
                                  (the
                                   (simple-array t)
                                   (pvs2cl_tuple Y (_c3))))))
                (declare (type nil Z))
                (let ((U
                       (pvs-funcall E
                                    (the
                                     (simple-array t)
                                     (pvs2cl_tuple Z K)))))
                  (declare (type nil U))
                  (pvs-funcall (bytevectors_byvXOR
                                (the (integer 0 *) 16))
                               (the
                                (simple-array t)
                                (pvs2cl_tuple U OPC))))))))))
(defun _OUT3 (E K X OPC)
  (let ((Y
         (bytevectors__byvrightrotate (the (integer 0 *) 16) X
           (the (integer 0 *) (_r3)))))
    (declare (type nil Y))
    (let ((Z
           (pvs-funcall (bytevectors_byvXOR (the (integer 0 *) 16))
                        (the (simple-array t)
                             (pvs2cl_tuple Y (_c3))))))
      (declare (type nil Z))
      (let ((U
             (pvs-funcall E
                          (the (simple-array t) (pvs2cl_tuple Z K)))))
        (declare (type nil U))
        (pvs-funcall (bytevectors_byvXOR (the (integer 0 *) 16))
                     (the (simple-array t) (pvs2cl_tuple U OPC)))))))
(defun OUT3! (E K X OPC)
  (let ((Y
         (bytevectors!byvrightrotate (the (integer 0 *) 16) X
           (the (integer 0 *) (r3!)))))
    (declare (type nil Y))
    (let ((Z
           (pvs-funcall (bytevectors_byvXOR (the (integer 0 *) 16))
                        (the (simple-array t)
                             (pvs2cl_tuple Y (c3!))))))
      (declare (type nil Z))
      (let ((U
             (pvs-funcall E
                          (the (simple-array t) (pvs2cl_tuple Z K)))))
        (declare (type nil U))
        (pvs-funcall (bytevectors_byvXOR (the (integer 0 *) 16))
                     (the (simple-array t) (pvs2cl_tuple U OPC)))))))
(defun OUT4 ()
  #'(lambda (E)
      #'(lambda (lamvar#0)
          (let ((K (project 1 lamvar#0))
                (X (project 2 lamvar#0))
                (OPC (project 3 lamvar#0)))
            (let ((Y
                   (bytevectors__byvrightrotate (the (integer 0 *) 16)
                     X (the (integer 0 *) (_r4)))))
              (declare (type nil Y))
              (let ((Z
                     (pvs-funcall (bytevectors_byvXOR
                                   (the (integer 0 *) 16))
                                  (the
                                   (simple-array t)
                                   (pvs2cl_tuple Y (_c4))))))
                (declare (type nil Z))
                (let ((U
                       (pvs-funcall E
                                    (the
                                     (simple-array t)
                                     (pvs2cl_tuple Z K)))))
                  (declare (type nil U))
                  (pvs-funcall (bytevectors_byvXOR
                                (the (integer 0 *) 16))
                               (the
                                (simple-array t)
                                (pvs2cl_tuple U OPC))))))))))
(defun _OUT4 (E K X OPC)
  (let ((Y
         (bytevectors__byvrightrotate (the (integer 0 *) 16) X
           (the (integer 0 *) (_r4)))))
    (declare (type nil Y))
    (let ((Z
           (pvs-funcall (bytevectors_byvXOR (the (integer 0 *) 16))
                        (the (simple-array t)
                             (pvs2cl_tuple Y (_c4))))))
      (declare (type nil Z))
      (let ((U
             (pvs-funcall E
                          (the (simple-array t) (pvs2cl_tuple Z K)))))
        (declare (type nil U))
        (pvs-funcall (bytevectors_byvXOR (the (integer 0 *) 16))
                     (the (simple-array t) (pvs2cl_tuple U OPC)))))))
(defun OUT4! (E K X OPC)
  (let ((Y
         (bytevectors!byvrightrotate (the (integer 0 *) 16) X
           (the (integer 0 *) (r4!)))))
    (declare (type nil Y))
    (let ((Z
           (pvs-funcall (bytevectors_byvXOR (the (integer 0 *) 16))
                        (the (simple-array t)
                             (pvs2cl_tuple Y (c4!))))))
      (declare (type nil Z))
      (let ((U
             (pvs-funcall E
                          (the (simple-array t) (pvs2cl_tuple Z K)))))
        (declare (type nil U))
        (pvs-funcall (bytevectors_byvXOR (the (integer 0 *) 16))
                     (the (simple-array t) (pvs2cl_tuple U OPC)))))))
(defun OUT5 ()
  #'(lambda (E)
      #'(lambda (lamvar#0)
          (let ((K (project 1 lamvar#0))
                (X (project 2 lamvar#0))
                (OPC (project 3 lamvar#0)))
            (let ((Y
                   (bytevectors__byvrightrotate (the (integer 0 *) 16)
                     X (the (integer 0 *) (_r5)))))
              (declare (type nil Y))
              (let ((Z
                     (pvs-funcall (bytevectors_byvXOR
                                   (the (integer 0 *) 16))
                                  (the
                                   (simple-array t)
                                   (pvs2cl_tuple Y (_c5))))))
                (declare (type nil Z))
                (let ((U
                       (pvs-funcall E
                                    (the
                                     (simple-array t)
                                     (pvs2cl_tuple Z K)))))
                  (declare (type nil U))
                  (pvs-funcall (bytevectors_byvXOR
                                (the (integer 0 *) 16))
                               (the
                                (simple-array t)
                                (pvs2cl_tuple U OPC))))))))))
(defun _OUT5 (E K X OPC)
  (let ((Y
         (bytevectors__byvrightrotate (the (integer 0 *) 16) X
           (the (integer 0 *) (_r5)))))
    (declare (type nil Y))
    (let ((Z
           (pvs-funcall (bytevectors_byvXOR (the (integer 0 *) 16))
                        (the (simple-array t)
                             (pvs2cl_tuple Y (_c5))))))
      (declare (type nil Z))
      (let ((U
             (pvs-funcall E
                          (the (simple-array t) (pvs2cl_tuple Z K)))))
        (declare (type nil U))
        (pvs-funcall (bytevectors_byvXOR (the (integer 0 *) 16))
                     (the (simple-array t) (pvs2cl_tuple U OPC)))))))
(defun OUT5! (E K X OPC)
  (let ((Y
         (bytevectors!byvrightrotate (the (integer 0 *) 16) X
           (the (integer 0 *) (r5!)))))
    (declare (type nil Y))
    (let ((Z
           (pvs-funcall (bytevectors_byvXOR (the (integer 0 *) 16))
                        (the (simple-array t)
                             (pvs2cl_tuple Y (c5!))))))
      (declare (type nil Z))
      (let ((U
             (pvs-funcall E
                          (the (simple-array t) (pvs2cl_tuple Z K)))))
        (declare (type nil U))
        (pvs-funcall (bytevectors_byvXOR (the (integer 0 *) 16))
                     (the (simple-array t) (pvs2cl_tuple U OPC)))))))
(defun testSQN () #'(lambda (i) (the (integer 0 *) 63)))
(defun _testSQN (i) (declare (type fixnum i)) (the (integer 0 *) 63))
(defun testSQN! (i) (declare (type fixnum i)) (the (integer 0 *) 63))
(defun testAMF () #'(lambda (i) (the (integer 0 *) 27)))
(defun _testAMF (i) (declare (type fixnum i)) (the (integer 0 *) 27))
(defun testAMF! (i) (declare (type fixnum i)) (the (integer 0 *) 27))
(defun IN1 ()
  #'(lambda (lamvar#0)
      (let ((SQN (project 1 lamvar#0)) (AMF (project 2 lamvar#0)))
        (pvs-funcall (byvconcat_++ 14 (the (integer 0 *) 2))
                     (the (simple-array t)
                          (pvs2cl_tuple (pvs-funcall
                                         (byvconcat_++
                                          8
                                          (the (integer 0 *) 6))
                                         (the
                                          (simple-array t)
                                          (pvs2cl_tuple
                                           (pvs-funcall
                                            (byvconcat_++
                                             (the (integer 0 *) 6)
                                             (the (integer 0 *) 2))
                                            (the
                                             (simple-array t)
                                             (pvs2cl_tuple SQN AMF)))
                                           SQN)))
                                        AMF))))))
(defun _IN1 (SQN AMF)
  (pvs-funcall (byvconcat_++ 14 (the (integer 0 *) 2))
               (the (simple-array t)
                    (pvs2cl_tuple (pvs-funcall
                                   (byvconcat_++
                                    8
                                    (the (integer 0 *) 6))
                                   (the
                                    (simple-array t)
                                    (pvs2cl_tuple
                                     (pvs-funcall
                                      (byvconcat_++
                                       (the (integer 0 *) 6)
                                       (the (integer 0 *) 2))
                                      (the
                                       (simple-array t)
                                       (pvs2cl_tuple SQN AMF)))
                                     SQN)))
                                  AMF))))
(defun IN1! (SQN AMF)
  (pvs-funcall (byvconcat_++ 14 (the (integer 0 *) 2))
               (the (simple-array t)
                    (pvs2cl_tuple (pvs-funcall
                                   (byvconcat_++
                                    8
                                    (the (integer 0 *) 6))
                                   (the
                                    (simple-array t)
                                    (pvs2cl_tuple
                                     (pvs-funcall
                                      (byvconcat_++
                                       (the (integer 0 *) 6)
                                       (the (integer 0 *) 2))
                                      (the
                                       (simple-array t)
                                       (pvs2cl_tuple SQN AMF)))
                                     SQN)))
                                  AMF))))
(defun OPC ()
  #'(lambda (E)
      #'(lambda (lamvar#0)
          (let ((K (project 1 lamvar#0)) (OP (project 2 lamvar#0)))
            (pvs-funcall (bytevectors_byvXOR (the (integer 0 *) 16))
                         (the (simple-array t)
                              (pvs2cl_tuple OP
                                            (pvs-funcall
                                             E
                                             (the
                                              (simple-array t)
                                              (pvs2cl_tuple
                                               OP
                                               K))))))))))
(defun _OPC (E K OP)
  (pvs-funcall (bytevectors_byvXOR (the (integer 0 *) 16))
               (the (simple-array t)
                    (pvs2cl_tuple OP
                                  (pvs-funcall
                                   E
                                   (the
                                    (simple-array t)
                                    (pvs2cl_tuple OP K)))))))
(defun OPC! (E K OP)
  (pvs-funcall (bytevectors_byvXOR (the (integer 0 *) 16))
               (the (simple-array t)
                    (pvs2cl_tuple OP
                                  (pvs-funcall
                                   E
                                   (the
                                    (simple-array t)
                                    (pvs2cl_tuple OP K)))))))
(defun TEMP ()
  #'(lambda (E)
      #'(lambda (lamvar#0)
          (let ((K (project 1 lamvar#0))
                (RAND (project 2 lamvar#0))
                (OPC (project 3 lamvar#0)))
            (pvs-funcall E
                         (the (simple-array t)
                              (pvs2cl_tuple (pvs-funcall
                                             (bytevectors_byvXOR
                                              (the (integer 0 *) 16))
                                             (the
                                              (simple-array t)
                                              (pvs2cl_tuple RAND OPC)))
                                            K)))))))
(defun _TEMP (E K RAND OPC)
  (pvs-funcall E
               (the (simple-array t)
                    (pvs2cl_tuple (pvs-funcall
                                   (bytevectors_byvXOR
                                    (the (integer 0 *) 16))
                                   (the
                                    (simple-array t)
                                    (pvs2cl_tuple RAND OPC)))
                                  K))))
(defun TEMP! (E K RAND OPC)
  (pvs-funcall E
               (the (simple-array t)
                    (pvs2cl_tuple (pvs-funcall
                                   (bytevectors_byvXOR
                                    (the (integer 0 *) 16))
                                   (the
                                    (simple-array t)
                                    (pvs2cl_tuple RAND OPC)))
                                  K))))
(defun testK ()
  (pvs-funcall (nbyv)
               (the (simple-array t)
                    (pvs2cl_tuple (the (integer 0 *) 173)
                                  (the (integer 0 *) 16)))))
(defun _testK ()
  (pvs-funcall (nbyv)
               (the (simple-array t)
                    (pvs2cl_tuple (the (integer 0 *) 173)
                                  (the (integer 0 *) 16)))))
(defun testK! ()
  (pvs-funcall (nbyv)
               (the (simple-array t)
                    (pvs2cl_tuple (the (integer 0 *) 173)
                                  (the (integer 0 *) 16)))))
(defun testRAND ()
  (pvs-funcall (nbyv)
               (the (simple-array t)
                    (pvs2cl_tuple (the (integer 0 *) 82)
                                  (the (integer 0 *) 16)))))
(defun _testRAND ()
  (pvs-funcall (nbyv)
               (the (simple-array t)
                    (pvs2cl_tuple (the (integer 0 *) 82)
                                  (the (integer 0 *) 16)))))
(defun testRAND! ()
  (pvs-funcall (nbyv)
               (the (simple-array t)
                    (pvs2cl_tuple (the (integer 0 *) 82)
                                  (the (integer 0 *) 16)))))
(defun testOP ()
  (pvs-funcall (nbyv)
               (the (simple-array t)
                    (pvs2cl_tuple (the (integer 0 *) 99)
                                  (the (integer 0 *) 16)))))
(defun _testOP ()
  (pvs-funcall (nbyv)
               (the (simple-array t)
                    (pvs2cl_tuple (the (integer 0 *) 99)
                                  (the (integer 0 *) 16)))))
(defun testOP! ()
  (pvs-funcall (nbyv)
               (the (simple-array t)
                    (pvs2cl_tuple (the (integer 0 *) 99)
                                  (the (integer 0 *) 16)))))
(defun allfun ()
  #'(lambda (E)
      #'(lambda (lamvar#0)
          (let ((SQN (project 1 lamvar#0))
                (AMF (project 2 lamvar#0))
                (K (project 3 lamvar#0))
                (RAND (project 4 lamvar#0))
                (OP (project 5 lamvar#0)))
            (the (simple-array t)
                 (let ((in1 (_IN1 SQN AMF)))
                   (declare (type nil in1))
                   (the (simple-array t)
                        (let ((opc (_OPC E K OP)))
                          (declare (type nil opc))
                          (the (simple-array t)
                               (let
                                ((temp (_TEMP E K RAND opc)))
                                (declare (type nil temp))
                                (the
                                 (simple-array t)
                                 (let
                                  ((X
                                    (pvs-funcall
                                     (bytevectors_byvXOR
                                      (the (integer 0 *) 16))
                                     (the
                                      (simple-array t)
                                      (pvs2cl_tuple temp opc)))))
                                  (declare (type nil X))
                                  (the
                                   (simple-array t)
                                   (let
                                    ((out1 (_OUT1 E K temp in1 opc)))
                                    (declare (type nil out1))
                                    (the
                                     (simple-array t)
                                     (let
                                      ((out2 (_OUT2 E K X opc)))
                                      (declare (type nil out2))
                                      (the
                                       (simple-array t)
                                       (let
                                        ((out3 (_OUT3 E K X opc)))
                                        (declare (type nil out3))
                                        (the
                                         (simple-array t)
                                         (let
                                          ((out4 (_OUT4 E K X opc)))
                                          (declare (type nil out4))
                                          (the
                                           (simple-array t)
                                           (let
                                            ((out5 (_OUT2 E K X opc)))
                                            (declare (type nil out5))
                                            (the
                                             (simple-array t)
                                             (let
                                              ((f1
                                                (pvs-funcall
                                                 (byvto)
                                                 (the
                                                  (simple-array t)
                                                  (pvs2cl_tuple
                                                   (the
                                                    (integer 0 *)
                                                    16)
                                                   out1
                                                   (the
                                                    (integer 0 *)
                                                    8))))))
                                              (declare (type nil f1))
                                              (the
                                               (simple-array t)
                                               (let
                                                ((f1star
                                                  (pvs-funcall
                                                   (byvfrom)
                                                   (the
                                                    (simple-array t)
                                                    (pvs2cl_tuple
                                                     (the
                                                      (integer 0 *)
                                                      16)
                                                     out1
                                                     (the
                                                      (integer 0 *)
                                                      8))))))
                                                (declare
                                                 (type nil f1star))
                                                (the
                                                 (simple-array t)
                                                 (let
                                                  ((f2
                                                    (pvs-funcall
                                                     (byvfrom)
                                                     (the
                                                      (simple-array t)
                                                      (pvs2cl_tuple
                                                       (the
                                                        (integer 0 *)
                                                        16)
                                                       out2
                                                       (the
                                                        (integer 0 *)
                                                        8))))))
                                                  (declare
                                                   (type nil f2))
                                                  (the
                                                   (simple-array t)
                                                   (let
                                                    ((f3 out3))
                                                    (declare
                                                     (type nil f3))
                                                    (the
                                                     (simple-array t)
                                                     (let
                                                      ((f4 out4))
                                                      (declare
                                                       (type nil f4))
                                                      (the
                                                       (simple-array t)
                                                       (let
                                                        ((f5
                                                          (pvs-funcall
                                                           (byvto)
                                                           (the
                                                            (simple-array
                                                             t)
                                                            (pvs2cl_tuple
                                                             (the
                                                              (integer
                                                               0
                                                               *)
                                                              16)
                                                             out2
                                                             (the
                                                              (integer
                                                               0
                                                               *)
                                                              6))))))
                                                        (declare
                                                         (type nil f5))
                                                        (the
                                                         (simple-array
                                                          t)
                                                         (let
                                                          ((f5star
                                                            (pvs-funcall
                                                             (byvto)
                                                             (the
                                                              (simple-array
                                                               t)
                                                              (pvs2cl_tuple
                                                               (the
                                                                (integer
                                                                 0
                                                                 *)
                                                                16)
                                                               out5
                                                               (the
                                                                (integer
                                                                 0
                                                                 *)
                                                                6))))))
                                                          (declare
                                                           (type
                                                            nil
                                                            f5star))
                                                          (the
                                                           (simple-array
                                                            t)
                                                           (pvs2cl_record
                                                            f1
                                                            f1star
                                                            f2
                                                            f3
                                                            f4
                                                            f5
                                                            f5star))))))))))))))))))))))))))))))))))))))
(defun _allfun (E SQN AMF K RAND OP)
  (the (simple-array t)
       (let ((in1 (_IN1 SQN AMF)))
         (declare (type nil in1))
         (the (simple-array t)
              (let ((opc (_OPC E K OP)))
                (declare (type nil opc))
                (the (simple-array t)
                     (let ((temp (_TEMP E K RAND opc)))
                       (declare (type nil temp))
                       (the (simple-array t)
                            (let ((X
                                   (pvs-funcall
                                    (bytevectors_byvXOR
                                     (the (integer 0 *) 16))
                                    (the
                                     (simple-array t)
                                     (pvs2cl_tuple temp opc)))))
                              (declare (type nil X))
                              (the (simple-array t)
                                   (let
                                    ((out1 (_OUT1 E K temp in1 opc)))
                                    (declare (type nil out1))
                                    (the
                                     (simple-array t)
                                     (let
                                      ((out2 (_OUT2 E K X opc)))
                                      (declare (type nil out2))
                                      (the
                                       (simple-array t)
                                       (let
                                        ((out3 (_OUT3 E K X opc)))
                                        (declare (type nil out3))
                                        (the
                                         (simple-array t)
                                         (let
                                          ((out4 (_OUT4 E K X opc)))
                                          (declare (type nil out4))
                                          (the
                                           (simple-array t)
                                           (let
                                            ((out5 (_OUT2 E K X opc)))
                                            (declare (type nil out5))
                                            (the
                                             (simple-array t)
                                             (let
                                              ((f1
                                                (pvs-funcall
                                                 (byvto)
                                                 (the
                                                  (simple-array t)
                                                  (pvs2cl_tuple
                                                   (the
                                                    (integer 0 *)
                                                    16)
                                                   out1
                                                   (the
                                                    (integer 0 *)
                                                    8))))))
                                              (declare (type nil f1))
                                              (the
                                               (simple-array t)
                                               (let
                                                ((f1star
                                                  (pvs-funcall
                                                   (byvfrom)
                                                   (the
                                                    (simple-array t)
                                                    (pvs2cl_tuple
                                                     (the
                                                      (integer 0 *)
                                                      16)
                                                     out1
                                                     (the
                                                      (integer 0 *)
                                                      8))))))
                                                (declare
                                                 (type nil f1star))
                                                (the
                                                 (simple-array t)
                                                 (let
                                                  ((f2
                                                    (pvs-funcall
                                                     (byvfrom)
                                                     (the
                                                      (simple-array t)
                                                      (pvs2cl_tuple
                                                       (the
                                                        (integer 0 *)
                                                        16)
                                                       out2
                                                       (the
                                                        (integer 0 *)
                                                        8))))))
                                                  (declare
                                                   (type nil f2))
                                                  (the
                                                   (simple-array t)
                                                   (let
                                                    ((f3 out3))
                                                    (declare
                                                     (type nil f3))
                                                    (the
                                                     (simple-array t)
                                                     (let
                                                      ((f4 out4))
                                                      (declare
                                                       (type nil f4))
                                                      (the
                                                       (simple-array t)
                                                       (let
                                                        ((f5
                                                          (pvs-funcall
                                                           (byvto)
                                                           (the
                                                            (simple-array
                                                             t)
                                                            (pvs2cl_tuple
                                                             (the
                                                              (integer
                                                               0
                                                               *)
                                                              16)
                                                             out2
                                                             (the
                                                              (integer
                                                               0
                                                               *)
                                                              6))))))
                                                        (declare
                                                         (type nil f5))
                                                        (the
                                                         (simple-array
                                                          t)
                                                         (let
                                                          ((f5star
                                                            (pvs-funcall
                                                             (byvto)
                                                             (the
                                                              (simple-array
                                                               t)
                                                              (pvs2cl_tuple
                                                               (the
                                                                (integer
                                                                 0
                                                                 *)
                                                                16)
                                                               out5
                                                               (the
                                                                (integer
                                                                 0
                                                                 *)
                                                                6))))))
                                                          (declare
                                                           (type
                                                            nil
                                                            f5star))
                                                          (the
                                                           (simple-array
                                                            t)
                                                           (pvs2cl_record
                                                            f1
                                                            f1star
                                                            f2
                                                            f3
                                                            f4
                                                            f5
                                                            f5star)))))))))))))))))))))))))))))))))))
(defun allfun! (E SQN AMF K RAND OP)
  (the (simple-array t)
       (let ((in1 (IN1! SQN AMF)))
         (declare (type nil in1))
         (the (simple-array t)
              (let ((opc (OPC! E K OP)))
                (declare (type nil opc))
                (the (simple-array t)
                     (let ((temp (TEMP! E K RAND opc)))
                       (declare (type nil temp))
                       (the (simple-array t)
                            (let ((X
                                   (pvs-funcall
                                    (bytevectors_byvXOR
                                     (the (integer 0 *) 16))
                                    (the
                                     (simple-array t)
                                     (pvs2cl_tuple temp opc)))))
                              (declare (type nil X))
                              (the (simple-array t)
                                   (let
                                    ((out1 (OUT1! E K temp in1 opc)))
                                    (declare (type nil out1))
                                    (the
                                     (simple-array t)
                                     (let
                                      ((out2 (OUT2! E K X opc)))
                                      (declare (type nil out2))
                                      (the
                                       (simple-array t)
                                       (let
                                        ((out3 (OUT3! E K X opc)))
                                        (declare (type nil out3))
                                        (the
                                         (simple-array t)
                                         (let
                                          ((out4 (OUT4! E K X opc)))
                                          (declare (type nil out4))
                                          (the
                                           (simple-array t)
                                           (let
                                            ((out5 (OUT2! E K X opc)))
                                            (declare (type nil out5))
                                            (the
                                             (simple-array t)
                                             (let
                                              ((f1
                                                (pvs-funcall
                                                 (byvto)
                                                 (the
                                                  (simple-array t)
                                                  (pvs2cl_tuple
                                                   (the
                                                    (integer 0 *)
                                                    16)
                                                   out1
                                                   (the
                                                    (integer 0 *)
                                                    8))))))
                                              (declare (type nil f1))
                                              (the
                                               (simple-array t)
                                               (let
                                                ((f1star
                                                  (pvs-funcall
                                                   (byvfrom)
                                                   (the
                                                    (simple-array t)
                                                    (pvs2cl_tuple
                                                     (the
                                                      (integer 0 *)
                                                      16)
                                                     out1
                                                     (the
                                                      (integer 0 *)
                                                      8))))))
                                                (declare
                                                 (type nil f1star))
                                                (the
                                                 (simple-array t)
                                                 (let
                                                  ((f2
                                                    (pvs-funcall
                                                     (byvfrom)
                                                     (the
                                                      (simple-array t)
                                                      (pvs2cl_tuple
                                                       (the
                                                        (integer 0 *)
                                                        16)
                                                       out2
                                                       (the
                                                        (integer 0 *)
                                                        8))))))
                                                  (declare
                                                   (type nil f2))
                                                  (the
                                                   (simple-array t)
                                                   (let
                                                    ((f3 out3))
                                                    (declare
                                                     (type nil f3))
                                                    (the
                                                     (simple-array t)
                                                     (let
                                                      ((f4 out4))
                                                      (declare
                                                       (type nil f4))
                                                      (the
                                                       (simple-array t)
                                                       (let
                                                        ((f5
                                                          (pvs-funcall
                                                           (byvto)
                                                           (the
                                                            (simple-array
                                                             t)
                                                            (pvs2cl_tuple
                                                             (the
                                                              (integer
                                                               0
                                                               *)
                                                              16)
                                                             out2
                                                             (the
                                                              (integer
                                                               0
                                                               *)
                                                              6))))))
                                                        (declare
                                                         (type nil f5))
                                                        (the
                                                         (simple-array
                                                          t)
                                                         (let
                                                          ((f5star
                                                            (pvs-funcall
                                                             (byvto)
                                                             (the
                                                              (simple-array
                                                               t)
                                                              (pvs2cl_tuple
                                                               (the
                                                                (integer
                                                                 0
                                                                 *)
                                                                16)
                                                               out5
                                                               (the
                                                                (integer
                                                                 0
                                                                 *)
                                                                6))))))
                                                          (declare
                                                           (type
                                                            nil
                                                            f5star))
                                                          (the
                                                           (simple-array
                                                            t)
                                                           (pvs2cl_record
                                                            f1
                                                            f1star
                                                            f2
                                                            f3
                                                            f4
                                                            f5
                                                            f5star)))))))))))))))))))))))))))))))))))