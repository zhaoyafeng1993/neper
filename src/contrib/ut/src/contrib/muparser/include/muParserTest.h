/*
                 __________                                      
    _____   __ __\______   \_____  _______  ______  ____ _______ 
   /     \ |  |  \|     ___/\__  \ \_  __ \/  ___/_/ __ \\_  __ \
  |  Y Y  \|  |  /|    |     / __ \_|  | \/\___ \ \  ___/ |  | \/
  |__|_|  /|____/ |____|    (____  /|__|  /____  > \___  >|__|   
        \/                       \/            \/      \/        
  Copyright (C) 2013 Ingo Berg

  Permission is hereby granted, free of charge, to any person obtaining a copy of this 
  software and associated documentation files (the "Software"), to deal in the Software
  without restriction, including without limitation the rights to use, copy, modify, 
  merge, publish, distribute, sublicense, and/or sell copies of the Software, and to 
  permit persons to whom the Software is furnished to do so, subject to the following conditions:

  The above copyright notice and this permission notice shall be included in all copies or 
  substantial portions of the Software.

  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT
  NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND 
  NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, 
  DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, 
  OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE. 
*/ 
  
  
#ifndef MU_PARSER_TEST_H
#define MU_PARSER_TEST_H
  
#include <string>
#include <cstdlib>
#include <numeric>              // for accumulate
#include "muParser.h"
#include "muParserInt.h"
  
/** \file
    \brief This file contains the parser test class.
*/ 
  
{
  
  /** \brief Namespace for test cases. */ 
    namespace Test 
  {
    
      //------------------------------------------------------------------------------
    /** \brief Test cases for unit testing.

      (C) 2004-2011 Ingo Berg
    */ 
      class ParserTester        // final
    {
    
      
        // Multiarg callbacks
      static value_type f1of1 (value_type v)
      {
        return v;
      };
      
      {
        return v;
      };
      
      {
        return v;
      };
      
      {
        return v;
      };
      
      {
        return v;
      };
      
      {
        return v;
      };
      
                                  value_type)
      {
        return v;
      }
      
                                value_type)
      {
        return v;
      }
      
                                value_type)
      {
        return v;
      }
      
                                value_type v)
      {
        return v;
      }
      
                                  value_type, value_type)
      {
        return v;
      }
      
                                value_type, value_type)
      {
        return v;
      }
      
                                value_type, value_type)
      {
        return v;
      }
      
                                value_type v, value_type)
      {
        return v;
      }
      
                                value_type, value_type v)
      {
        return v;
      }
      
      {
        return (a_fVal1 < a_fVal2) ? a_fVal1 : a_fVal2;
      }
      
      {
        return (a_fVal1 > a_fVal2) ? a_fVal1 : a_fVal2;
      }
      
      {
        return v1 + 2;
      }
      
      {
        return v1 * 3;
      }
      
      {
        return v1 * v1;
      }
      
      {
        return -v;
      }
      
      {
        return v1 + v2;
      }
      
      {
        return (int) v1 & (int) v2;
      } 
                                         int a_iArgc) 
      {
        
          
            exception_type (_T ("too few arguments for function FirstArg."));
        
      
      
      {
        
          
            exception_type (_T ("too few arguments for function LastArg."));
        
      
      
      {
        
          
            exception_type (_T ("too few arguments for function sum."));
        
        
          fRes += a_afArg[i];
        
      
      
      {
        
      
      
      {
        
                              (1000.0f * std::rand () / (RAND_MAX + 1.0)));
      
      
      {
        
      
      
      {
        
      
      
      {
        
        
        
      
      
      {
        
        
        
      
      
                                    value_type v3) 
      {
        
        
        
      
      
      {
        
        
        
      
      
        // postfix operator callback
      static value_type Mega (value_type a_fVal)
      {
        return a_fVal * (value_type) 1e6;
      }
      
      {
        return a_fVal * (value_type) 1e-6;
      }
      
      {
        return a_fVal / (value_type) 1e3;
      }
      
        // Custom value recognition
      static int IsHexVal (const char_type * a_szExpr, int *a_iPos,
                           value_type * a_fVal);
      
      
      
      
      
      
      
      
      
      
      
      
      
      
    
      
      
    
      
      
        // Test Double Parser
      int EqnTest (const string_type & a_str, double a_fRes, bool a_fPass);
      
                                 
                                 
      
                      true);
      
        // Test Int Parser
      int EqnTestInt (const string_type & a_str, double a_fRes, bool a_fPass);
      
        // Test Bulkmode
      int EqnTestBulk (const string_type & a_str, double a_fRes[4],
                       bool a_fPass);
    
  
}                               // namespace mu


#endif  /* 
  