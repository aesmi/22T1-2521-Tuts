-- If you want to play around with this code on CSE, save the file and then
-- run the following commands in the directory the file is located in:
--   $ cabal repl
--   ...
--   Prelude> :l Evaluator.hs
---  ...
--   *MinHS> eval onePlusOne
--   IntV 2
--   *MinHS> eval onePlusOneRecfun
--   BoolV True
--   ...

module MinHS where

data Type = IntTy
          | BoolTy
          | FunTy Type Type
          deriving (Eq, Show)

data Expr = Num    Int
          | Lit    Bool
          | Plus   Expr Expr
          | Eq     Expr Expr
          | If     Expr Expr Expr
          | Apply  Expr Expr
          | Recfun Type Type (Expr -> Expr -> Expr)

data Value = IntV  Int
           | BoolV Bool
           | FunV  {- TODO: What should go here? -}

-- | Evaluates a given MinHS expression.
eval :: Expr -> Value
eval (Num    n       ) = error "TODO: 'eval' unimplemented"
eval (Lit    b       ) = error "TODO: 'eval' unimplemented"
eval (Plus   e1 e2   ) = error "TODO: 'eval' unimplemented"
eval (Eq     e1 e2   ) = error "TODO: 'eval' unimplemented"
eval (If     ec et ee) = error "TODO: 'eval' unimplemented"
eval (Apply  ef ex   ) = error "TODO: 'eval' unimplemented"
eval (Recfun t1 t2 f ) = error "TODO: 'eval' unimplemented"

-- | The "inverse" of eval: converts a value to an equivalent expression.
--   You might find this handy to use in the Apply case of eval.
uneval :: Value -> Expr
uneval (IntV  n) = error "TODO?: 'uneval' unimplemented"
uneval (BoolV b) = error "TODO?: 'uneval' unimplemented"
uneval FunV {--} = error "TODO?: 'uneval' unimplemented"

-- | Example to try: What's 1 + 1?
onePlusOne :: Expr
onePlusOne = Plus (Num 1) (Num 1)

-- | Example to try: Does evaluating 1 + 1 with recfuns give the same answer?
onePlusOneRecfun :: Expr
onePlusOneRecfun =
  Eq (Apply (Apply add (Num 1)) (Num 1)) (Plus (Num 1) (Num 1))
  where
    add = Recfun IntTy (FunTy IntTy IntTy) (\_ x ->
            Recfun IntTy IntTy (\_ y -> Plus x y))

-- This bit of code lets us print something of our Value type.
-- Disregard it for now: more on this later on in the course.
instance Show Value where
  show (IntV n)  = "IntV "  ++ show n
  show (BoolV b) = "BoolV " ++ show b
  show _         = undefined
