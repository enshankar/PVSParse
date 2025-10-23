(defun mkc (mod main?)
  (setq *suppress-output* t)
  (pvs2c-theory mod t)
  (when main?
    (make-c-tests-main mod)))
