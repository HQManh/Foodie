// rea decompile_all
// name: Newtonsoft.Json.JsonTextReader$$ParseReadNumber
// address: 0x765528c
// body: available
// range: 0x765528c-0x7655e6f inclusive
// range: 0x76562f4-0x76562f7 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7655c6c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7655c80 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7655cb0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7655cc4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7655d18 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7655d2c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7655d40 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7655e6c to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76562f4 to 0x89db930 <EXTERNAL>::__stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Newtonsoft_Json_JsonTextReader__ParseReadNumber
               (long param_1,int param_2,ulong param_3,int param_4)

{
  uint uVar1;
  undefined4 uVar2;
  short sVar3;
  long lVar4;
  bool bVar5;
  bool bVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  ulong uVar10;
  long lVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  double dVar16;
  undefined1 auVar17 [16];
  double local_a0;
  long local_98;
  double local_90;
  int local_84;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  if ((DAT_095223b9 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09181f98);
    FUN_03f5c2a4(&DAT_09182b90);
    FUN_03f5c2a4(&DAT_09182b88);
    FUN_03f5c2a4(&DAT_09182ff8);
    FUN_03f5c2a4(&DAT_091837d8);
    FUN_03f5c2a4(&DAT_091f9738);
    DAT_095223b9 = 1;
  }
  uVar7 = 8;
  local_80 = 0;
  local_84 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_98 = 0;
  local_90 = 0.0;
  local_68 = 0;
  uStack_60 = 0;
  local_a0 = 0.0;
  if ((*(int *)(param_1 + 0x28) == 0) && (uVar7 = 0xc, *(char *)(param_1 + 0x71) != '\0')) {
    uVar7 = 8;
  }
  *(undefined4 *)(param_1 + 0x24) = uVar7;
  if (*(char *)(param_1 + 0x38) != '\0') {
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
  }
  local_78 = 0;
  uStack_70 = 0;
  Newtonsoft_Json_Utilities_StringReference___ctor
            (&local_78,*(undefined8 *)(param_1 + 0x80),param_4,*(int *)(param_1 + 0x8c) - param_4,0)
  ;
  *(undefined8 *)(param_1 + 0xb8) = uStack_70;
  *(undefined8 *)(param_1 + 0xb0) = local_78;
  thunk_FUN_03f5d7b8(param_1 + 0xb0,0);
  if (*(int *)(DAT_09535460 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar10 = System_Char__IsDigit(param_3 & 0xffffffff,0);
  if ((uVar10 & 1) == 0) {
    bVar5 = false;
  }
  else {
    bVar5 = *(int *)(param_1 + 0xbc) == 1;
  }
  iVar8 = ((uint)param_3 & 0xffff) - 0x30;
  if ((iVar8 == 0) && (1 < *(int *)(param_1 + 0xbc))) {
    lVar11 = *(long *)(param_1 + 0xb0);
    if (lVar11 != 0) {
      uVar1 = *(int *)(param_1 + 0xb8) + 1;
      if (*(uint *)(lVar11 + 0x18) <= uVar1) {
        if (*(long *)(lVar4 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        goto LAB_076562f4;
      }
      sVar3 = *(short *)(lVar11 + (long)(int)uVar1 * 2 + 0x20);
      bVar6 = false;
      if ((sVar3 != 0x2e) && (bVar6 = false, sVar3 != 0x65)) {
        bVar6 = sVar3 != 0x45;
      }
      goto LAB_076553f8;
    }
LAB_07655c5c:
    if (*(long *)(lVar4 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    goto LAB_076562f4;
  }
  bVar6 = false;
LAB_076553f8:
  if (param_2 < 4) {
    if (param_2 == 0) {
LAB_07655414:
      if (bVar5) {
        if (*(int *)(DAT_09181f98 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        lVar11 = (param_3 & 0xffff) - 0x30;
LAB_07655438:
        lVar11 = Newtonsoft_Json_Utilities_BoxedPrimitives__Get(lVar11,0);
      }
      else if (bVar6) {
        lVar11 = Newtonsoft_Json_Utilities_StringReference__ToString(param_1 + 0xb0,0);
        if (lVar11 == 0) {
          if (*(long *)(lVar4 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          goto LAB_076562f4;
        }
        uVar10 = System_String__StartsWith(lVar11,DAT_091f9738,5,0);
        if ((uVar10 & 1) == 0) {
          if (*(int *)(DAT_09182b88 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar15 = System_Convert__ToInt64(lVar11,8,0);
        }
        else {
          if (*(int *)(DAT_09182b88 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar15 = System_Convert__ToInt64(lVar11,0x10,0);
        }
        if (*(int *)(DAT_09181f98 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        lVar11 = Newtonsoft_Json_Utilities_BoxedPrimitives__Get(uVar15,0);
      }
      else {
        uVar15 = *(undefined8 *)(param_1 + 0xb0);
        uVar7 = *(undefined4 *)(param_1 + 0xb8);
        uVar2 = *(undefined4 *)(param_1 + 0xbc);
        if (*(int *)(DAT_09182b90 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        iVar8 = Newtonsoft_Json_Utilities_ConvertUtils__Int64TryParse
                          (uVar15,uVar7,uVar2,&local_98,0);
        lVar11 = local_98;
        if (iVar8 != 2) {
          if (iVar8 != 1) {
            if (*(int *)(param_1 + 0x5c) != 1) {
              uVar15 = Newtonsoft_Json_Utilities_StringReference__ToString(param_1 + 0xb0,0);
              if (*(int *)(DAT_09182ff8 + 0xe4) == 0) {
                FUN_03f5c424(DAT_09182ff8);
              }
              uVar12 = System_Globalization_CultureInfo__get_InvariantCulture(0);
              uVar10 = System_Double__TryParse(uVar15,0xa7,uVar12,&local_a0,0);
              dVar16 = local_a0;
              if ((uVar10 & 1) == 0) goto LAB_07655768;
              goto LAB_07655bf4;
            }
            uVar15 = *(undefined8 *)(param_1 + 0xb0);
            uVar7 = *(undefined4 *)(param_1 + 0xb8);
            uVar2 = *(undefined4 *)(param_1 + 0xbc);
            if (*(int *)(DAT_09182b90 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            iVar8 = Newtonsoft_Json_Utilities_ConvertUtils__DecimalTryParse
                              (uVar15,uVar7,uVar2,&local_68,0);
            auVar17._8_8_ = uStack_60;
            auVar17._0_8_ = local_68;
            if (iVar8 != 1) goto LAB_07655d44;
            goto LAB_0765559c;
          }
          if (*(int *)(DAT_09181f98 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          goto LAB_07655438;
        }
        lVar11 = Newtonsoft_Json_Utilities_StringReference__ToString(param_1 + 0xb0,0);
        if (lVar11 == 0) goto LAB_07655c5c;
        if (0x17c < *(int *)(lVar11 + 0x10)) {
          thunk_FUN_03fc39d4(&DAT_09182ff8);
          FUN_039afb80();
          uVar15 = System_Globalization_CultureInfo__get_InvariantCulture(0);
          uVar12 = Newtonsoft_Json_Utilities_StringReference__ToString(param_1 + 0xb0,0);
          puVar13 = &DAT_09206320;
          goto LAB_07655e20;
        }
        if (*(int *)(DAT_09182ff8 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar15 = System_Globalization_CultureInfo__get_InvariantCulture(0);
        lVar11 = Newtonsoft_Json_JsonTextReader__BigIntegerParse(lVar11,uVar15);
      }
    }
    else {
      if (param_2 != 1) {
        if (param_2 == 2) goto LAB_07655414;
LAB_07655c84:
        uVar15 = thunk_FUN_03fc39d4(&DAT_091fe108);
        uVar15 = Newtonsoft_Json_JsonReaderException__Create(param_1,uVar15);
LAB_07655e44:
        uVar12 = thunk_FUN_03fc39d4(&DAT_091d1c60);
        if (*(long *)(lVar4 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c414(uVar15,uVar12);
        }
        goto LAB_076562f4;
      }
      if (bVar5) {
        if (*(int *)(DAT_09181f98 + 0xe4) == 0) {
          FUN_03f5c424();
        }
      }
      else {
        if (bVar6) {
          lVar11 = Newtonsoft_Json_Utilities_StringReference__ToString(param_1 + 0xb0,0);
          if (lVar11 == 0) {
            if (*(long *)(lVar4 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            goto LAB_076562f4;
          }
          uVar10 = System_String__StartsWith(lVar11,DAT_091f9738,5,0);
          if ((uVar10 & 1) == 0) {
            if (*(int *)(DAT_09182b88 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            uVar7 = System_Convert__ToInt32(lVar11,8,0);
          }
          else {
            if (*(int *)(DAT_09182b88 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            uVar7 = System_Convert__ToInt32(lVar11,0x10,0);
          }
          if (*(int *)(DAT_09181f98 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          lVar11 = Newtonsoft_Json_Utilities_BoxedPrimitives__Get(uVar7,0);
          goto LAB_07655b38;
        }
        uVar15 = *(undefined8 *)(param_1 + 0xb0);
        uVar7 = *(undefined4 *)(param_1 + 0xb8);
        uVar2 = *(undefined4 *)(param_1 + 0xbc);
        if (*(int *)(DAT_09182b90 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        iVar9 = Newtonsoft_Json_Utilities_ConvertUtils__Int32TryParse
                          (uVar15,uVar7,uVar2,&local_84,0);
        iVar8 = local_84;
        if (iVar9 != 1) {
          if (iVar9 == 2) {
            thunk_FUN_03fc39d4(&DAT_09182ff8);
            FUN_039afb80();
            uVar15 = System_Globalization_CultureInfo__get_InvariantCulture(0);
            uVar12 = Newtonsoft_Json_Utilities_StringReference__ToString(param_1 + 0xb0,0);
            puVar13 = &DAT_09206318;
          }
          else {
            thunk_FUN_03fc39d4(&DAT_09182ff8);
            FUN_039afb80();
            uVar15 = System_Globalization_CultureInfo__get_InvariantCulture(0);
            uVar12 = Newtonsoft_Json_Utilities_StringReference__ToString(param_1 + 0xb0,0);
            puVar13 = &DAT_09204c80;
          }
          goto LAB_07655e20;
        }
        if (*(int *)(DAT_09181f98 + 0xe4) == 0) {
          FUN_03f5c424();
        }
      }
      lVar11 = Newtonsoft_Json_Utilities_BoxedPrimitives__Get(iVar8,0);
    }
LAB_07655b38:
    uVar15 = 7;
  }
  else {
    if (param_2 == 8) {
      if (bVar5) {
        if (*(int *)(DAT_09181f98 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        dVar16 = (double)((uint)param_3 & 0xffff) + -48.0;
      }
      else {
        lVar11 = Newtonsoft_Json_Utilities_StringReference__ToString(param_1 + 0xb0,0);
        if (bVar6) {
          if (lVar11 == 0) {
            if (*(long *)(lVar4 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            goto LAB_076562f4;
          }
          uVar10 = System_String__StartsWith(lVar11,DAT_091f9738,5,0);
          if ((uVar10 & 1) == 0) {
            if (*(int *)(DAT_09182b88 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            uVar15 = System_Convert__ToInt64(lVar11,8,0);
          }
          else {
            if (*(int *)(DAT_09182b88 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            uVar15 = System_Convert__ToInt64(lVar11,0x10,0);
          }
          if (*(int *)(DAT_09182b88 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar15 = System_Convert__ToDouble(uVar15,0);
          if (*(int *)(DAT_09181f98 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          lVar11 = Newtonsoft_Json_Utilities_BoxedPrimitives__Get(uVar15,0);
          goto LAB_07655c10;
        }
        if (*(int *)(DAT_09182ff8 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar15 = System_Globalization_CultureInfo__get_InvariantCulture(0);
        uVar10 = System_Double__TryParse(lVar11,0xa7,uVar15,&local_90,0);
        dVar16 = local_90;
        if ((uVar10 & 1) == 0) {
          thunk_FUN_03fc39d4(&DAT_09182ff8);
          FUN_039afb80();
          uVar15 = System_Globalization_CultureInfo__get_InvariantCulture(0);
          uVar12 = Newtonsoft_Json_Utilities_StringReference__ToString(param_1 + 0xb0,0);
          puVar13 = &DAT_09204c78;
          goto LAB_07655e20;
        }
LAB_07655bf4:
        if (*(int *)(DAT_09181f98 + 0xe4) == 0) {
          FUN_03f5c424();
        }
      }
      lVar11 = Newtonsoft_Json_Utilities_BoxedPrimitives__Get(dVar16,0);
    }
    else {
      if (param_2 != 5) {
        if (param_2 != 4) goto LAB_07655c84;
        lVar11 = Newtonsoft_Json_Utilities_StringReference__ToString(param_1 + 0xb0,0);
        if (bVar6) {
          if (lVar11 == 0) {
            if (*(long *)(lVar4 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            goto LAB_076562f4;
          }
          uVar10 = System_String__StartsWith(lVar11,DAT_091f9738,5,0);
          if ((uVar10 & 1) == 0) {
            if (*(int *)(DAT_09182b88 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            System_Convert__ToInt64(lVar11,8,0);
          }
          else {
            if (*(int *)(DAT_09182b88 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            System_Convert__ToInt64(lVar11,0x10,0);
          }
        }
        else {
          if (*(int *)(DAT_09182ff8 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar15 = System_Globalization_CultureInfo__get_InvariantCulture(0);
          uVar10 = System_Double__TryParse(lVar11,0xa7,uVar15,&local_80,0);
          if ((uVar10 & 1) == 0) {
LAB_07655768:
            thunk_FUN_03fc39d4(&DAT_09182ff8);
            FUN_039afb80();
            uVar15 = System_Globalization_CultureInfo__get_InvariantCulture(0);
            uVar12 = Newtonsoft_Json_Utilities_StringReference__ToString(param_1 + 0xb0,0);
            puVar13 = &DAT_09204c88;
            goto LAB_07655e20;
          }
        }
        uVar15 = 9;
        goto LAB_07655c18;
      }
      if (!bVar5) {
        if (bVar6) {
          lVar11 = Newtonsoft_Json_Utilities_StringReference__ToString(param_1 + 0xb0,0);
          if (lVar11 == 0) {
            if (*(long *)(lVar4 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            goto LAB_076562f4;
          }
          uVar10 = System_String__StartsWith(lVar11,DAT_091f9738,5,0);
          if ((uVar10 & 1) == 0) {
            if (*(int *)(DAT_09182b88 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            uVar15 = System_Convert__ToInt64(lVar11,8,0);
          }
          else {
            if (*(int *)(DAT_09182b88 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            uVar15 = System_Convert__ToInt64(lVar11,0x10,0);
          }
          if (*(int *)(DAT_09182b88 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          auVar17 = System_Convert__ToDecimal(uVar15,0);
          if (*(int *)(DAT_09181f98 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          lVar11 = Newtonsoft_Json_Utilities_BoxedPrimitives__Get(auVar17._0_8_,auVar17._8_8_,0);
          goto LAB_07655c10;
        }
        uVar15 = *(undefined8 *)(param_1 + 0xb0);
        uVar7 = *(undefined4 *)(param_1 + 0xb8);
        uVar2 = *(undefined4 *)(param_1 + 0xbc);
        if (*(int *)(DAT_09182b90 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        iVar8 = Newtonsoft_Json_Utilities_ConvertUtils__DecimalTryParse
                          (uVar15,uVar7,uVar2,&local_58,0);
        auVar17._8_8_ = uStack_50;
        auVar17._0_8_ = local_58;
        if (iVar8 == 1) goto LAB_0765559c;
LAB_07655d44:
        thunk_FUN_03fc39d4(&DAT_09182ff8);
        FUN_039afb80();
        uVar15 = System_Globalization_CultureInfo__get_InvariantCulture(0);
        uVar12 = Newtonsoft_Json_Utilities_StringReference__ToString(param_1 + 0xb0,0);
        puVar13 = &DAT_09204c70;
LAB_07655e20:
        uVar14 = thunk_FUN_03fc39d4(puVar13);
        uVar15 = Newtonsoft_Json_Utilities_StringUtils__FormatWith(uVar14,uVar15,uVar12,0);
        uVar15 = Newtonsoft_Json_JsonTextReader__ThrowReaderError(param_1,uVar15,0);
        goto LAB_07655e44;
      }
      if (*(int *)(DAT_091837d8 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      auVar17 = System_Decimal__op_Implicit(param_3 & 0xffffffff,0);
      local_78 = 0;
      uStack_70 = 0;
      System_Decimal___ctor(&local_78,0x30,0);
      auVar17 = System_Decimal__op_Subtraction(auVar17._0_8_,auVar17._8_8_,local_78,uStack_70,0);
LAB_0765559c:
      if (*(int *)(DAT_09181f98 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar11 = Newtonsoft_Json_Utilities_BoxedPrimitives__Get(auVar17._0_8_,auVar17._8_8_,0);
    }
LAB_07655c10:
    uVar15 = 8;
  }
LAB_07655c18:
  *(undefined4 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  Newtonsoft_Json_JsonReader__SetToken(param_1,uVar15,lVar11,0);
  if (*(long *)(lVar4 + 0x28) == local_48) {
    return;
  }
LAB_076562f4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

