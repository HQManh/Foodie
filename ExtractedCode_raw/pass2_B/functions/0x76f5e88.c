// rea decompile_all
// name: Newtonsoft.Json.Linq.JValue$$Compare
// address: 0x76f5e88
// body: available
// range: 0x76f5e88-0x76f6927 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x76f5ff0 to 0x76996e0 Newtonsoft.Json.Utilities.MiscellaneousUtils$$ByteArrayCompare (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x76f6314 to 0x742d898 System.String$$CompareOrdinal (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x76f64cc to 0x76f6928 Newtonsoft.Json.Linq.JValue$$CompareFloat (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x76f6508 to 0x76f5ba0 Newtonsoft.Json.Linq.JValue$$CompareBigInteger (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x76f67b4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76f686c to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76f6924 to 0x89db930 <EXTERNAL>::__stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Newtonsoft_Json_Linq_JValue__Compare(long *param_1,long *param_2,long *param_3)

{
  long lVar1;
  undefined1 auVar2 [16];
  uint uVar3;
  int iVar4;
  long lVar5;
  undefined8 *puVar6;
  ulong *puVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long lVar16;
  undefined1 auVar17 [16];
  int local_b8;
  int local_b4;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_58;
  byte local_4c [4];
  undefined1 local_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  iVar4 = (int)param_1;
  if ((DAT_095228e3 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09181b78);
    FUN_03f5c2a4(&DAT_0917fc88);
    FUN_03f5c2a4(&DAT_0919b618);
    FUN_03f5c2a4(&DAT_09182b88);
    FUN_03f5c2a4(&DAT_09182ff8);
    FUN_03f5c2a4(&DAT_09183590);
    FUN_03f5c2a4(&DAT_09183548);
    FUN_03f5c2a4(&DAT_091837d8);
    FUN_03f5c2a4(&DAT_09184f30);
    FUN_03f5c2a4(&DAT_0918bd60);
    param_1 = (long *)FUN_03f5c2a4(&DAT_0918c918);
    DAT_095228e3 = 1;
  }
  local_4c[0] = 0;
  local_58 = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_80 = 0;
  local_78 = 0;
  local_48._0_8_ = 0;
  local_48._8_8_ = 0;
  auVar2 = ZEXT816(0);
  auVar17 = ZEXT816(0);
  local_90 = 0;
  uStack_88 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  if (param_2 == param_3) {
    param_1 = (long *)0x0;
  }
  else if (param_3 == (long *)0x0) {
    param_1 = (long *)0x1;
    auVar17 = ZEXT816(0);
  }
  else if (param_2 == (long *)0x0) {
    param_1 = (long *)0xffffffff;
    auVar17 = ZEXT816(0);
  }
  else {
    if (0xb < iVar4) {
      if (iVar4 < 0xf) {
        if (iVar4 == 0xc) {
          if (*param_2 == DAT_09183548) {
            puVar6 = (undefined8 *)FUN_039aef84(param_2);
            local_58 = *puVar6;
            if (*param_3 == DAT_09183590) {
              puVar6 = (undefined8 *)FUN_039aef84(param_3);
              uStack_88 = puVar6[1];
              local_90 = *puVar6;
              if (*(int *)(DAT_09183590 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              uVar11 = System_DateTimeOffset__get_DateTime(&local_90,0);
            }
            else {
              if (*(int *)(DAT_09182ff8 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              uVar11 = System_Globalization_CultureInfo__get_InvariantCulture(0);
              if (*(int *)(DAT_09182b88 + 0xe4) == 0) {
                FUN_03f5c424(DAT_09182b88);
              }
              uVar11 = System_Convert__ToDateTime(param_3,uVar11,0);
            }
            if (*(int *)(DAT_09183548 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            param_1 = (long *)System_DateTime__CompareTo(&local_58,uVar11,0);
            auVar17._8_8_ = local_48._8_8_;
            auVar17._0_8_ = local_48._0_8_;
          }
          else {
            puVar6 = (undefined8 *)FUN_039aef84(param_2,DAT_09183590);
            uStack_98 = puVar6[1];
            local_a0 = *puVar6;
            if (*param_3 == DAT_09183590) {
              puVar6 = (undefined8 *)FUN_039aef84(param_3);
              uStack_a8 = puVar6[1];
              local_b0 = *puVar6;
            }
            else {
              if (*(int *)(DAT_09182ff8 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              uVar11 = System_Globalization_CultureInfo__get_InvariantCulture(0);
              if (*(int *)(DAT_09182b88 + 0xe4) == 0) {
                FUN_03f5c424(DAT_09182b88);
              }
              uVar11 = System_Convert__ToDateTime(param_3,uVar11,0);
              if (*(int *)(DAT_09183590 + 0xe4) == 0) {
                FUN_03f5c424(DAT_09183590);
              }
              System_DateTimeOffset___ctor(&local_b0,uVar11,0);
            }
            uVar13 = uStack_a8;
            uVar11 = local_b0;
            if (*(int *)(DAT_09183590 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            param_1 = (long *)System_DateTimeOffset__CompareTo(&local_a0,uVar11,uVar13,0);
            auVar17._8_8_ = local_48._8_8_;
            auVar17._0_8_ = local_48._0_8_;
          }
          goto LAB_076f6008;
        }
        if (iVar4 == 0xd) goto LAB_076f627c;
        if (iVar4 != 0xe) goto LAB_076f6870;
        lVar5 = thunk_FUN_03f99350(param_3,DAT_0917fc88);
        if (lVar5 != 0) {
          param_1 = (long *)thunk_FUN_03f99350(param_2,DAT_0917fc88);
          auVar2._8_8_ = local_48._8_8_;
          auVar2._0_8_ = local_48._0_8_;
          if (*(long *)(lVar1 + 0x28) == local_38) {
            Newtonsoft_Json_Utilities_MiscellaneousUtils__ByteArrayCompare(param_1,lVar5,0);
            return;
          }
          goto LAB_076f6924;
        }
        thunk_FUN_03fc39d4(&DAT_09181548);
        uVar11 = thunk_FUN_03f9944c();
        puVar12 = &DAT_09209508;
      }
      else if (iVar4 == 0xf) {
        if (*param_3 == DAT_09184f30) {
          puVar6 = (undefined8 *)FUN_039aef84(param_2);
          uStack_68 = puVar6[1];
          local_70 = *puVar6;
          puVar6 = (undefined8 *)FUN_039aef84(param_3,DAT_09184f30);
          param_1 = (long *)System_Guid__CompareTo(&local_70,*puVar6,puVar6[1],0);
          auVar17._8_8_ = local_48._8_8_;
          auVar17._0_8_ = local_48._0_8_;
          goto LAB_076f6008;
        }
        thunk_FUN_03fc39d4(&DAT_09181548);
        uVar11 = thunk_FUN_03f9944c();
        puVar12 = &DAT_092094a0;
      }
      else if (iVar4 == 0x10) {
        if (*(byte *)(*param_3 + 0x130) < *(byte *)(DAT_0918c918 + 0x130)) {
          param_3 = (long *)0x0;
        }
        else if (*(long *)(*(long *)(*param_3 + 200) + (ulong)*(byte *)(DAT_0918c918 + 0x130) * 8 +
                          -8) != DAT_0918c918) {
          param_3 = (long *)0x0;
        }
        if (*(int *)(DAT_0918c918 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar8 = System_Uri__op_Equality(param_3,0,0);
        if ((uVar8 & 1) == 0) {
          plVar9 = (long *)FUN_039bb5f0(param_2,DAT_0918c918);
          plVar10 = (long *)FUN_06cf28b0(DAT_0919b618);
          param_1 = plVar10;
          if ((plVar9 != (long *)0x0) &&
             (plVar9 = (long *)(**(code **)(*plVar9 + 0x168))
                                         (plVar9,*(undefined8 *)(*plVar9 + 0x170)), param_1 = plVar9
             , param_3 != (long *)0x0)) {
            param_1 = (long *)(**(code **)(*param_3 + 0x168))
                                        (param_3,*(undefined8 *)(*param_3 + 0x170));
            auVar2._8_8_ = local_48._8_8_;
            auVar2._0_8_ = local_48._0_8_;
            if (plVar10 != (long *)0x0) {
              if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* WARNING: Could not recover jumptable at 0x076f6670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (**(code **)(*plVar10 + 0x198))
                          (plVar10,plVar9,param_1,*(undefined8 *)(*plVar10 + 0x1a0));
                return;
              }
              goto LAB_076f6924;
            }
          }
          auVar2._8_8_ = local_48._8_8_;
          auVar2._0_8_ = local_48._0_8_;
          if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          goto LAB_076f6924;
        }
        thunk_FUN_03fc39d4(&DAT_09181548);
        uVar11 = thunk_FUN_03f9944c();
        puVar12 = &DAT_092094f8;
      }
      else {
        if (iVar4 != 0x11) goto LAB_076f6870;
        if (*param_3 == DAT_0918bd60) {
          puVar6 = (undefined8 *)FUN_039aef84(param_2);
          local_78 = *puVar6;
          puVar6 = (undefined8 *)FUN_039aef84(param_3,DAT_0918bd60);
          uVar11 = *puVar6;
          if (*(int *)(DAT_0918bd60 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          param_1 = (long *)System_TimeSpan__CompareTo(&local_78,uVar11,0);
          auVar17._8_8_ = local_48._8_8_;
          auVar17._0_8_ = local_48._0_8_;
          goto LAB_076f6008;
        }
        thunk_FUN_03fc39d4(&DAT_09181548);
        uVar11 = thunk_FUN_03f9944c();
        puVar12 = &DAT_092094d8;
      }
      uVar13 = thunk_FUN_03fc39d4(puVar12);
      param_1 = (long *)System_ArgumentException___ctor(uVar11,uVar13,0);
      auVar2._8_8_ = local_48._8_8_;
      auVar2._0_8_ = local_48._0_8_;
      if (*(long *)(lVar1 + 0x28) == local_38) {
        param_1 = (long *)thunk_FUN_03fc39d4(&DAT_091d1588);
LAB_076f6864:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c414(uVar11,param_1);
      }
      goto LAB_076f6924;
    }
    if (iVar4 < 7) {
      if (iVar4 == 5) {
LAB_076f627c:
        if (*(int *)(DAT_09182ff8 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar11 = System_Globalization_CultureInfo__get_InvariantCulture(0);
        if (*(int *)(DAT_09182b88 + 0xe4) == 0) {
          FUN_03f5c424(DAT_09182b88);
        }
        uVar11 = System_Convert__ToString(param_2,uVar11,0);
        uVar13 = System_Globalization_CultureInfo__get_InvariantCulture(0);
        param_1 = (long *)System_Convert__ToString(param_3,uVar13,0);
        auVar2._8_8_ = local_48._8_8_;
        auVar2._0_8_ = local_48._0_8_;
        if (*(long *)(lVar1 + 0x28) == local_38) {
          System_String__CompareOrdinal(uVar11,param_1,0);
          return;
        }
        goto LAB_076f6924;
      }
      if (iVar4 != 6) {
LAB_076f6870:
        local_b4 = iVar4;
        uVar11 = thunk_FUN_03fc39d4(&DAT_09187268);
        uVar11 = FUN_03f5c42c(uVar11,&local_b4);
        thunk_FUN_03fc39d4(&DAT_09182ff8);
        FUN_039afb80();
        uVar13 = System_Globalization_CultureInfo__get_InvariantCulture(0);
        local_b8 = iVar4;
        uVar14 = thunk_FUN_03fc39d4(&DAT_09187268);
        uVar14 = FUN_03f5c42c(uVar14,&local_b8);
        uVar15 = thunk_FUN_03fc39d4(&DAT_09211f98);
        uVar13 = Newtonsoft_Json_Utilities_StringUtils__FormatWith(uVar15,uVar13,uVar14,0);
        uVar14 = thunk_FUN_03fc39d4(&DAT_092253c8);
        uVar11 = Newtonsoft_Json_Utilities_MiscellaneousUtils__CreateArgumentOutOfRangeException
                           (uVar14,uVar11,uVar13,0);
        param_1 = (long *)thunk_FUN_03fc39d4(&DAT_091d1588);
        auVar2._8_8_ = local_48._8_8_;
        auVar2._0_8_ = local_48._0_8_;
        if (*(long *)(lVar1 + 0x28) == local_38) goto LAB_076f6864;
        goto LAB_076f6924;
      }
      lVar5 = *param_2;
      if (lVar5 == DAT_09181b78) goto LAB_076f64d0;
      lVar16 = *param_3;
      if (lVar16 == DAT_09181b78) goto LAB_076f6674;
      if ((((lVar5 == DAT_09535448) || (lVar16 == DAT_09535448)) || (lVar5 == DAT_091837d8)) ||
         (lVar16 == DAT_091837d8)) goto LAB_076f650c;
      if (((lVar5 == DAT_09535450) || (lVar16 == DAT_09535450)) ||
         ((lVar5 == DAT_09535458 || (lVar16 == DAT_09535458)))) goto LAB_076f64a4;
      if (*(int *)(DAT_09182ff8 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar11 = System_Globalization_CultureInfo__get_InvariantCulture(0);
      if (*(int *)(DAT_09182b88 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09182b88);
      }
      local_80 = System_Convert__ToInt64(param_2,uVar11,0);
      uVar11 = System_Globalization_CultureInfo__get_InvariantCulture(0);
      uVar11 = System_Convert__ToInt64(param_3,uVar11,0);
      param_1 = (long *)System_Int64__CompareTo(&local_80,uVar11,0);
      auVar17._8_8_ = local_48._8_8_;
      auVar17._0_8_ = local_48._0_8_;
    }
    else if (iVar4 == 7) {
      lVar5 = *param_2;
      if (lVar5 == DAT_09181b78) {
LAB_076f64d0:
        puVar7 = (ulong *)FUN_039aef84(param_2);
        auVar2._8_8_ = local_48._8_8_;
        auVar2._0_8_ = local_48._0_8_;
        param_1 = (long *)*puVar7;
        if (*(long *)(lVar1 + 0x28) == local_38) {
          Newtonsoft_Json_Linq_JValue__CompareBigInteger(param_1,puVar7[1],param_3);
          return;
        }
        goto LAB_076f6924;
      }
      lVar16 = *param_3;
      if (lVar16 == DAT_09181b78) {
LAB_076f6674:
        puVar6 = (undefined8 *)FUN_039aef84(param_3);
        iVar4 = Newtonsoft_Json_Linq_JValue__CompareBigInteger(*puVar6,puVar6[1],param_2);
        auVar17._8_8_ = local_48._8_8_;
        auVar17._0_8_ = local_48._0_8_;
        param_1 = (long *)(ulong)(uint)-iVar4;
      }
      else {
        if (((lVar5 != DAT_09535448) && (lVar16 != DAT_09535448)) &&
           ((lVar5 != DAT_091837d8 && (lVar16 != DAT_091837d8)))) {
LAB_076f64a4:
          if (*(long *)(lVar1 + 0x28) == local_38) {
            Newtonsoft_Json_Linq_JValue__CompareFloat(param_2,param_3);
            return;
          }
          goto LAB_076f6924;
        }
LAB_076f650c:
        if (*(int *)(DAT_09182ff8 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar11 = System_Globalization_CultureInfo__get_InvariantCulture(0);
        if (*(int *)(DAT_09182b88 + 0xe4) == 0) {
          FUN_03f5c424(DAT_09182b88);
        }
        local_48 = System_Convert__ToDecimal(param_2,uVar11,0);
        uVar11 = System_Globalization_CultureInfo__get_InvariantCulture(0);
        auVar17 = System_Convert__ToDecimal(param_3,uVar11,0);
        if (*(int *)(DAT_091837d8 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        param_1 = (long *)System_Decimal__CompareTo(local_48,auVar17._0_8_,auVar17._8_8_,0);
        auVar17 = local_48;
      }
    }
    else {
      if (iVar4 == 8) goto LAB_076f627c;
      if (iVar4 != 9) goto LAB_076f6870;
      if (*(int *)(DAT_09182ff8 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar11 = System_Globalization_CultureInfo__get_InvariantCulture(0);
      if (*(int *)(DAT_09182b88 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09182b88);
      }
      local_4c[0] = System_Convert__ToBoolean(param_2,uVar11,0);
      local_4c[0] = local_4c[0] & 1;
      uVar11 = System_Globalization_CultureInfo__get_InvariantCulture(0);
      uVar3 = System_Convert__ToBoolean(param_3,uVar11,0);
      if (*(int *)(DAT_09535400 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09535400);
      }
      param_1 = (long *)System_Boolean__CompareTo(local_4c,uVar3 & 1,0);
      auVar17._8_8_ = local_48._8_8_;
      auVar17._0_8_ = local_48._0_8_;
    }
  }
LAB_076f6008:
  auVar2 = auVar17;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
LAB_076f6924:
  local_48 = auVar2;
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}

