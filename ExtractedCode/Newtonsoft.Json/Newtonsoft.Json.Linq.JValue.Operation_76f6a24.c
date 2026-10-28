// rea decompile_all
// name: Newtonsoft.Json.Linq.JValue$$Operation
// address: 0x76f6a24
// body: available
// range: 0x76f6a24-0x76f721f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x76f721c to 0x89db930 <EXTERNAL>::__stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Newtonsoft_Json_Linq_JValue__Operation
               (uint param_1,long *param_2,long *param_3,undefined8 *param_4)

{
  long lVar1;
  undefined1 auVar2 [16];
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  double dVar10;
  double dVar11;
  undefined1 auVar12 [16];
  undefined1 local_68 [16];
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  if ((DAT_095228e5 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09181b78);
    FUN_03f5c2a4(&DAT_09182b90);
    FUN_03f5c2a4(&DAT_09182b88);
    FUN_03f5c2a4(&DAT_09182ff8);
    FUN_03f5c2a4(&DAT_091837d8);
    DAT_095228e5 = 1;
  }
  if ((((param_2 == (long *)0x0) || (*param_2 != DAT_09535468)) &&
      ((param_3 == (long *)0x0 || (*param_3 != DAT_09535468)))) ||
     ((param_1 != 0x3f && (param_1 != 0)))) {
    if (((param_2 == (long *)0x0) || (*param_2 != DAT_09181b78)) &&
       ((param_3 == (long *)0x0 || (*param_3 != DAT_09181b78)))) {
      if ((((param_2 == (long *)0x0) || (*param_2 != DAT_09535448)) &&
          ((param_3 == (long *)0x0 || (*param_3 != DAT_09535448)))) &&
         (((param_2 == (long *)0x0 || (*param_2 != DAT_091837d8)) &&
          ((param_3 == (long *)0x0 || (*param_3 != DAT_091837d8)))))) {
        if ((((param_2 == (long *)0x0) || (*param_2 != DAT_09535450)) &&
            ((param_3 == (long *)0x0 || (*param_3 != DAT_09535450)))) &&
           (((param_2 == (long *)0x0 || (*param_2 != DAT_09535458)) &&
            ((param_3 == (long *)0x0 || (*param_3 != DAT_09535458)))))) {
          if (((param_2 != (long *)0x0) &&
              (((((lVar9 = *param_2, lVar9 == DAT_09535420 || (lVar9 == DAT_09535428)) ||
                 (lVar9 == DAT_09535440)) || ((lVar9 == DAT_09535410 || (lVar9 == DAT_09535418))))
               || ((lVar9 == DAT_09535408 || (lVar9 == DAT_095353f0)))))) ||
             ((param_3 != (long *)0x0 &&
              ((((lVar9 = *param_3, lVar9 == DAT_09535420 || (lVar9 == DAT_09535428)) ||
                ((lVar9 == DAT_09535440 ||
                 (((lVar9 == DAT_09535410 || (lVar9 == DAT_09535418)) || (lVar9 == DAT_09535408)))))
                ) || (lVar9 == DAT_095353f0)))))) {
            if ((param_2 == (long *)0x0) || (param_3 == (long *)0x0)) goto LAB_076f7120;
            if (*(int *)(DAT_09182ff8 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            uVar3 = System_Globalization_CultureInfo__get_InvariantCulture(0);
            if (*(int *)(DAT_09182b88 + 0xe4) == 0) {
              FUN_03f5c424(DAT_09182b88);
            }
            lVar5 = System_Convert__ToInt64(param_2,uVar3,0);
            uVar3 = System_Globalization_CultureInfo__get_InvariantCulture(0);
            lVar6 = System_Convert__ToInt64(param_3,uVar3,0);
            lVar9 = DAT_09535440;
            if (0x2a < (int)param_1) {
              if (param_1 < 0x42) {
                if (param_1 == 0x3f) {
LAB_076f7208:
                  auVar12._8_8_ = local_68._8_8_;
                  auVar12._0_8_ = lVar6 + lVar5;
                }
                else {
                  if (param_1 != 0x41) goto LAB_076f71d4;
LAB_076f71f8:
                  auVar2._8_8_ = 0;
                  auVar2._0_8_ = local_68._8_8_;
                  auVar12 = auVar2 << 0x40;
                  if (lVar6 != 0) {
                    auVar12._8_8_ = local_68._8_8_;
                    auVar12._0_8_ = lVar5 / lVar6;
                  }
                }
              }
              else if (param_1 == 0x45) {
LAB_076f7200:
                auVar12._8_8_ = local_68._8_8_;
                auVar12._0_8_ = lVar6 * lVar5;
              }
              else {
                if (param_1 != 0x49) goto LAB_076f71d4;
LAB_076f71a4:
                auVar12._8_8_ = local_68._8_8_;
                auVar12._0_8_ = lVar5 - lVar6;
              }
              goto LAB_076f7020;
            }
            if ((int)param_1 < 0xd) {
              if (param_1 == 0) goto LAB_076f7208;
              if (param_1 == 0xc) goto LAB_076f71f8;
            }
            else {
              if (param_1 == 0x1a) goto LAB_076f7200;
              if (param_1 == 0x2a) goto LAB_076f71a4;
            }
          }
        }
        else {
          if ((param_2 == (long *)0x0) || (param_3 == (long *)0x0)) goto LAB_076f7120;
          if (*(int *)(DAT_09182ff8 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar3 = System_Globalization_CultureInfo__get_InvariantCulture(0);
          if (*(int *)(DAT_09182b88 + 0xe4) == 0) {
            FUN_03f5c424(DAT_09182b88);
          }
          dVar10 = (double)System_Convert__ToDouble(param_2,uVar3,0);
          uVar3 = System_Globalization_CultureInfo__get_InvariantCulture(0);
          dVar11 = (double)System_Convert__ToDouble(param_3,uVar3,0);
          lVar9 = DAT_09535458;
          if ((int)param_1 < 0x2b) {
            if ((int)param_1 < 0xd) {
              if (param_1 == 0) goto LAB_076f71b4;
              if (param_1 == 0xc) goto LAB_076f7184;
            }
            else {
              if (param_1 == 0x1a) goto LAB_076f71ac;
              if (param_1 == 0x2a) goto LAB_076f6fa4;
            }
          }
          else if (param_1 < 0x42) {
            if (param_1 == 0x3f) {
LAB_076f71b4:
              auVar12._8_8_ = local_68._8_8_;
              auVar12._0_8_ = dVar10 + dVar11;
              goto LAB_076f7020;
            }
            if (param_1 == 0x41) {
LAB_076f7184:
              auVar12._8_8_ = local_68._8_8_;
              auVar12._0_8_ = dVar10 / dVar11;
              goto LAB_076f7020;
            }
          }
          else {
            if (param_1 == 0x45) {
LAB_076f71ac:
              auVar12._8_8_ = local_68._8_8_;
              auVar12._0_8_ = dVar10 * dVar11;
              goto LAB_076f7020;
            }
            if (param_1 == 0x49) {
LAB_076f6fa4:
              auVar12._8_8_ = local_68._8_8_;
              auVar12._0_8_ = dVar10 - dVar11;
              goto LAB_076f7020;
            }
          }
        }
      }
      else {
        if ((param_2 == (long *)0x0) || (param_3 == (long *)0x0)) goto LAB_076f7120;
        if (*(int *)(DAT_09182ff8 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar3 = System_Globalization_CultureInfo__get_InvariantCulture(0);
        if (*(int *)(DAT_09182b88 + 0xe4) == 0) {
          FUN_03f5c424(DAT_09182b88);
        }
        auVar12 = System_Convert__ToDecimal(param_2,uVar3,0);
        uVar7 = auVar12._8_8_;
        uVar3 = auVar12._0_8_;
        uVar4 = System_Globalization_CultureInfo__get_InvariantCulture(0);
        auVar12 = System_Convert__ToDecimal(param_3,uVar4,0);
        uVar8 = auVar12._8_8_;
        uVar4 = auVar12._0_8_;
        if ((int)param_1 < 0x2b) {
          if ((int)param_1 < 0xd) {
            if (param_1 == 0) goto LAB_076f6fe0;
            if (param_1 == 0xc) goto LAB_076f6efc;
          }
          else {
            if (param_1 == 0x1a) goto LAB_076f6fac;
            if (param_1 == 0x2a) goto LAB_076f6e5c;
          }
        }
        else if (param_1 < 0x42) {
          if (param_1 == 0x3f) {
LAB_076f6fe0:
            if (*(int *)(DAT_091837d8 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            auVar12 = System_Decimal__op_Addition(uVar3,uVar7,uVar4,uVar8,0);
            lVar9 = DAT_091837d8;
            goto LAB_076f7020;
          }
          if (param_1 == 0x41) {
LAB_076f6efc:
            if (*(int *)(DAT_091837d8 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            auVar12 = System_Decimal__op_Division(uVar3,uVar7,uVar4,uVar8,0);
            lVar9 = DAT_091837d8;
            goto LAB_076f7020;
          }
        }
        else {
          if (param_1 == 0x45) {
LAB_076f6fac:
            if (*(int *)(DAT_091837d8 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            auVar12 = System_Decimal__op_Multiply(uVar3,uVar7,uVar4,uVar8,0);
            lVar9 = DAT_091837d8;
            goto LAB_076f7020;
          }
          if (param_1 == 0x49) {
LAB_076f6e5c:
            if (*(int *)(DAT_091837d8 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            auVar12 = System_Decimal__op_Subtraction(uVar3,uVar7,uVar4,uVar8,0);
            lVar9 = DAT_091837d8;
            goto LAB_076f7020;
          }
        }
      }
LAB_076f71d4:
      *param_4 = 0;
      thunk_FUN_03f5d7b8(param_4,0);
      uVar3 = 0;
      goto LAB_076f7134;
    }
    if ((param_2 != (long *)0x0) && (param_3 != (long *)0x0)) {
      if (*(int *)(DAT_09182b90 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      auVar12 = Newtonsoft_Json_Utilities_ConvertUtils__ToBigInteger(param_2,0);
      uVar7 = auVar12._8_8_;
      uVar3 = auVar12._0_8_;
      auVar12 = Newtonsoft_Json_Utilities_ConvertUtils__ToBigInteger(param_3,0);
      uVar8 = auVar12._8_8_;
      uVar4 = auVar12._0_8_;
      if ((int)param_1 < 0x2b) {
        if ((int)param_1 < 0xd) {
          if (param_1 == 0) goto LAB_076f6f5c;
          if (param_1 == 0xc) goto LAB_076f6eb0;
        }
        else {
          if (param_1 == 0x1a) goto LAB_076f6f30;
          if (param_1 == 0x2a) goto LAB_076f6e18;
        }
        goto LAB_076f71d4;
      }
      if (param_1 < 0x42) {
        if (param_1 != 0x3f) {
          if (param_1 == 0x41) {
LAB_076f6eb0:
            if (*(int *)(DAT_09181b78 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            auVar12 = System_Numerics_BigInteger__op_Division(uVar3,uVar7,uVar4,uVar8,0);
            lVar9 = DAT_09181b78;
            goto LAB_076f7020;
          }
          goto LAB_076f71d4;
        }
LAB_076f6f5c:
        if (*(int *)(DAT_09181b78 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        auVar12 = System_Numerics_BigInteger__op_Addition(uVar3,uVar7,uVar4,uVar8,0);
        lVar9 = DAT_09181b78;
      }
      else {
        if (param_1 != 0x45) {
          if (param_1 == 0x49) {
LAB_076f6e18:
            if (*(int *)(DAT_09181b78 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            auVar12 = System_Numerics_BigInteger__op_Subtraction(uVar3,uVar7,uVar4,uVar8,0);
            lVar9 = DAT_09181b78;
            goto LAB_076f7020;
          }
          goto LAB_076f71d4;
        }
LAB_076f6f30:
        if (*(int *)(DAT_09181b78 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        auVar12 = System_Numerics_BigInteger__op_Multiply(uVar3,uVar7,uVar4,uVar8,0);
        lVar9 = DAT_09181b78;
      }
LAB_076f7020:
      local_68 = auVar12;
      uVar3 = FUN_03f5c42c(lVar9,local_68);
      goto LAB_076f7024;
    }
LAB_076f7120:
    uVar3 = 0;
    *param_4 = 0;
  }
  else {
    if (param_2 == (long *)0x0) {
      uVar3 = 0;
      if (param_3 != (long *)0x0) goto LAB_076f6b00;
LAB_076f6d54:
      uVar4 = 0;
    }
    else {
      uVar3 = (**(code **)(*param_2 + 0x168))(param_2,*(undefined8 *)(*param_2 + 0x170));
      if (param_3 == (long *)0x0) goto LAB_076f6d54;
LAB_076f6b00:
      uVar4 = (**(code **)(*param_3 + 0x168))(param_3,*(undefined8 *)(*param_3 + 0x170));
    }
    uVar3 = System_String__Concat(uVar3,uVar4,0);
LAB_076f7024:
    *param_4 = uVar3;
  }
  thunk_FUN_03f5d7b8(param_4,uVar3);
  uVar3 = 1;
LAB_076f7134:
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar3);
  }
  return;
}

