// rea decompile_all
// name: Newtonsoft.Json.Linq.JValue$$WriteTo
// address: 0x76f7460
// body: available
// range: 0x76f7460-0x76f7d7f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x76f775c to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76f7cd0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76f7ce4 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76f7d00 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76f7d78 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76f7d7c to 0x89db930 <EXTERNAL>::__stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Newtonsoft_Json_Linq_JValue__WriteTo(long param_1,long *param_2,long param_3)

{
  long lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined8 uVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  uint uVar9;
  undefined8 extraout_x1;
  code *UNRECOVERED_JUMPTABLE_00;
  undefined8 uVar10;
  long lVar11;
  undefined8 extraout_d0;
  undefined1 auVar12 [16];
  uint *local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined4 local_a0;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined4 local_50;
  long local_48;
  
  auVar12._8_8_ = param_2;
  auVar12._0_8_ = param_1;
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if ((DAT_095228ee & 1) == 0) {
    FUN_03f5c2a4(&DAT_09181b78);
    FUN_03f5c2a4(&DAT_0917fc88);
    FUN_03f5c2a4(&DAT_09182b88);
    FUN_03f5c2a4(&DAT_09182ff8);
    FUN_03f5c2a4(&DAT_09183590);
    FUN_03f5c2a4(&DAT_091837d8);
    FUN_03f5c2a4(&DAT_0917dc70);
    FUN_03f5c2a4(&DAT_0917dca8);
    auVar12 = FUN_03f5c2a4(&DAT_0918c918);
    DAT_095228ee = 1;
  }
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  if ((param_3 != 0) && (*(long *)(param_3 + 0x18) != 0)) {
    auVar2._8_8_ = 0;
    auVar2._0_8_ = auVar12._8_8_;
    auVar12 = auVar2 << 0x40;
    if (*(long *)(param_1 + 0x38) != 0) {
      uVar5 = System_Object__GetType(*(long *)(param_1 + 0x38),0);
      auVar12 = Newtonsoft_Json_JsonSerializer__GetMatchingConverter(param_3,uVar5,0);
      plVar6 = auVar12._0_8_;
      auVar3._8_8_ = 0;
      auVar3._0_8_ = auVar12._8_8_;
      auVar12 = auVar3 << 0x40;
      if ((plVar6 != (long *)0x0) &&
         (auVar12 = (**(code **)(*plVar6 + 0x1b8))(plVar6,*(undefined8 *)(*plVar6 + 0x1c0)),
         (auVar12._0_8_ & 1) != 0)) {
        uVar10 = *(undefined8 *)(param_1 + 0x38);
        uVar5 = Newtonsoft_Json_JsonSerializer__CreateDefault(0);
        if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* WARNING: Could not recover jumptable at 0x076f75b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar6 + 0x178))
                    (plVar6,param_2,uVar10,uVar5,*(undefined8 *)(*plVar6 + 0x180));
          return;
        }
        goto LAB_076f7d7c;
      }
    }
  }
  uVar5 = DAT_0917fc88;
  switch(*(undefined4 *)(param_1 + 0x30)) {
  case 5:
    plVar6 = *(long **)(param_1 + 0x38);
    if (plVar6 == (long *)0x0) {
      plVar6 = (long *)0x0;
    }
    else {
      plVar6 = (long *)(**(code **)(*plVar6 + 0x168))(plVar6,*(undefined8 *)(*plVar6 + 0x170));
    }
    auVar12._8_8_ = plVar6;
    auVar12._0_8_ = plVar6;
    if (param_2 != (long *)0x0) {
      UNRECOVERED_JUMPTABLE_00 = *(code **)(*param_2 + 0x8f8);
      uVar5 = *(undefined8 *)(*param_2 + 0x900);
LAB_076f7ae8:
      if (*(long *)(lVar1 + 0x28) == local_48) {
LAB_076f7af8:
                    /* WARNING: Could not recover jumptable at 0x076f7b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE_00)(param_2,plVar6,uVar5);
        return;
      }
      goto LAB_076f7d7c;
    }
    break;
  case 6:
    plVar6 = *(long **)(param_1 + 0x38);
    if (plVar6 == (long *)0x0) {
LAB_076f78e8:
      if (*(int *)(DAT_09182ff8 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar5 = System_Globalization_CultureInfo__get_InvariantCulture(0);
      if (*(int *)(DAT_09182b88 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09182b88);
      }
      auVar12 = System_Convert__ToInt64(plVar6,uVar5,0);
      plVar6 = auVar12._0_8_;
      if (param_2 != (long *)0x0) {
        UNRECOVERED_JUMPTABLE_00 = *(code **)(*param_2 + 0x6c8);
        uVar5 = *(undefined8 *)(*param_2 + 0x6d0);
LAB_076f7948:
        if (*(long *)(lVar1 + 0x28) == local_48) goto LAB_076f7af8;
        goto LAB_076f7d7c;
      }
    }
    else {
      lVar11 = *plVar6;
      if (lVar11 == DAT_09535420) {
        auVar12 = thunk_FUN_03f99594(plVar6);
        if (param_2 != (long *)0x0) {
          uVar9 = *auVar12._0_8_;
          UNRECOVERED_JUMPTABLE_00 = *(code **)(*param_2 + 0x6a8);
          uVar5 = *(undefined8 *)(*param_2 + 0x6b0);
          if (*(long *)(lVar1 + 0x28) == local_48) goto LAB_076f76c4;
          goto LAB_076f7d7c;
        }
      }
      else if (lVar11 == DAT_09535440) {
        auVar12 = FUN_039aef84(plVar6);
        if (param_2 != (long *)0x0) {
          plVar6 = (long *)*auVar12._0_8_;
          UNRECOVERED_JUMPTABLE_00 = *(code **)(*param_2 + 0x6c8);
          uVar5 = *(undefined8 *)(*param_2 + 0x6d0);
          goto LAB_076f7ae8;
        }
      }
      else if (lVar11 == DAT_09535448) {
        auVar12 = FUN_039aef84(plVar6);
        if (param_2 != (long *)0x0) {
          plVar6 = (long *)*auVar12._0_8_;
          UNRECOVERED_JUMPTABLE_00 = *(code **)(*param_2 + 0x6d8);
          uVar5 = *(undefined8 *)(*param_2 + 0x6e0);
          goto LAB_076f7ae8;
        }
      }
      else {
        if (lVar11 != DAT_09181b78) goto LAB_076f78e8;
        puVar7 = (undefined8 *)FUN_039aef84(plVar6);
        uStack_88 = puVar7[1];
        local_90 = *puVar7;
        local_60 = local_90;
        uStack_58 = uStack_88;
        auVar12 = FUN_03f5c42c(DAT_09181b78,&local_90);
        if (param_2 != (long *)0x0) {
          (**(code **)(*param_2 + 0x8e8))(param_2,auVar12._0_8_,*(undefined8 *)(*param_2 + 0x8f0));
          goto LAB_076f7a98;
        }
      }
    }
    break;
  case 7:
    plVar6 = *(long **)(param_1 + 0x38);
    if (plVar6 == (long *)0x0) {
LAB_076f77a0:
      if (*(int *)(DAT_09182ff8 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar5 = System_Globalization_CultureInfo__get_InvariantCulture(0);
      if (*(int *)(DAT_09182b88 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09182b88);
      }
      uVar5 = System_Convert__ToDouble(plVar6,uVar5,0);
      auVar12._8_8_ = extraout_x1;
      auVar12._0_8_ = uVar5;
      if (param_2 != (long *)0x0) {
        lVar11 = *param_2;
        uVar5 = extraout_d0;
LAB_076f7bc0:
        if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* WARNING: Could not recover jumptable at 0x076f7bf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(lVar11 + 0x6f8))(uVar5,param_2,*(undefined8 *)(lVar11 + 0x700));
          return;
        }
        goto LAB_076f7d7c;
      }
    }
    else {
      lVar11 = *plVar6;
      if (lVar11 == DAT_091837d8) {
        auVar12 = thunk_FUN_03f99594(plVar6);
        if (param_2 != (long *)0x0) {
          uVar5 = *auVar12._0_8_;
          uVar10 = auVar12._0_8_[1];
          UNRECOVERED_JUMPTABLE_00 = *(code **)(*param_2 + 0x768);
          uVar8 = *(undefined8 *)(*param_2 + 0x770);
          goto LAB_076f7b50;
        }
      }
      else if (lVar11 == DAT_09535458) {
        auVar12 = FUN_039aef84(plVar6);
        if (param_2 != (long *)0x0) {
          lVar11 = *param_2;
          uVar5 = *auVar12._0_8_;
          goto LAB_076f7bc0;
        }
      }
      else {
        if (lVar11 != DAT_09535450) goto LAB_076f77a0;
        auVar12 = FUN_039aef84(plVar6);
        if (param_2 != (long *)0x0) {
          if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* WARNING: Could not recover jumptable at 0x076f7c58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*param_2 + 0x6e8))
                      (*auVar12._0_8_,param_2,*(undefined8 *)(*param_2 + 0x6f0));
            return;
          }
          goto LAB_076f7d7c;
        }
      }
    }
    break;
  case 8:
    plVar6 = *(long **)(param_1 + 0x38);
    if (plVar6 == (long *)0x0) {
      plVar6 = (long *)0x0;
    }
    else {
      plVar6 = (long *)(**(code **)(*plVar6 + 0x168))(plVar6,*(undefined8 *)(*plVar6 + 0x170));
    }
    auVar12._8_8_ = plVar6;
    auVar12._0_8_ = plVar6;
    if (param_2 != (long *)0x0) {
      UNRECOVERED_JUMPTABLE_00 = *(code **)(*param_2 + 0x698);
      uVar5 = *(undefined8 *)(*param_2 + 0x6a0);
      goto LAB_076f7ae8;
    }
    break;
  case 9:
    uVar5 = *(undefined8 *)(param_1 + 0x38);
    if (*(int *)(DAT_09182ff8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar10 = System_Globalization_CultureInfo__get_InvariantCulture(0);
    if (*(int *)(DAT_09182b88 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09182b88);
    }
    auVar12 = System_Convert__ToBoolean(uVar5,uVar10,0);
    if (param_2 != (long *)0x0) {
      UNRECOVERED_JUMPTABLE_00 = *(code **)(*param_2 + 0x708);
      uVar5 = *(undefined8 *)(*param_2 + 0x710);
      if (*(long *)(lVar1 + 0x28) == local_48) {
        uVar9 = auVar12._0_4_ & 1;
LAB_076f76c4:
                    /* WARNING: Could not recover jumptable at 0x076f76dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE_00)(param_2,uVar9,uVar5);
        return;
      }
      goto LAB_076f7d7c;
    }
    break;
  case 10:
    if (param_2 != (long *)0x0) {
      UNRECOVERED_JUMPTABLE_00 = *(code **)(*param_2 + 0x658);
      uVar5 = *(undefined8 *)(*param_2 + 0x660);
LAB_076f7984:
      if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* WARNING: Could not recover jumptable at 0x076f79ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE_00)(param_2,uVar5);
        return;
      }
      goto LAB_076f7d7c;
    }
    break;
  case 0xb:
    if (param_2 != (long *)0x0) {
      UNRECOVERED_JUMPTABLE_00 = *(code **)(*param_2 + 0x668);
      uVar5 = *(undefined8 *)(*param_2 + 0x670);
      goto LAB_076f7984;
    }
    break;
  case 0xc:
    plVar6 = *(long **)(param_1 + 0x38);
    if ((plVar6 == (long *)0x0) || (*plVar6 != DAT_09183590)) {
      if (*(int *)(DAT_09182ff8 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar5 = System_Globalization_CultureInfo__get_InvariantCulture(0);
      if (*(int *)(DAT_09182b88 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09182b88);
      }
      auVar12 = System_Convert__ToDateTime(plVar6,uVar5,0);
      plVar6 = auVar12._0_8_;
      if (param_2 != (long *)0x0) {
        UNRECOVERED_JUMPTABLE_00 = *(code **)(*param_2 + 0x778);
        uVar5 = *(undefined8 *)(*param_2 + 0x780);
        goto LAB_076f7948;
      }
    }
    else {
      auVar12 = thunk_FUN_03f99594(plVar6);
      if (param_2 != (long *)0x0) {
        uVar5 = *auVar12._0_8_;
        uVar10 = auVar12._0_8_[1];
        UNRECOVERED_JUMPTABLE_00 = *(code **)(*param_2 + 0x788);
        uVar8 = *(undefined8 *)(*param_2 + 0x790);
LAB_076f7b50:
        if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* WARNING: Could not recover jumptable at 0x076f7b78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE_00)(param_2,uVar5,uVar10,uVar8);
          return;
        }
        goto LAB_076f7d7c;
      }
    }
    break;
  case 0xd:
    plVar6 = *(long **)(param_1 + 0x38);
    if (plVar6 == (long *)0x0) {
      plVar6 = (long *)0x0;
    }
    else {
      plVar6 = (long *)(**(code **)(*plVar6 + 0x168))(plVar6,*(undefined8 *)(*plVar6 + 0x170));
    }
    auVar12._8_8_ = plVar6;
    auVar12._0_8_ = plVar6;
    if (param_2 != (long *)0x0) {
      UNRECOVERED_JUMPTABLE_00 = *(code **)(*param_2 + 0x688);
      uVar5 = *(undefined8 *)(*param_2 + 0x690);
      goto LAB_076f7ae8;
    }
    break;
  case 0xe:
    if (param_2 != (long *)0x0) {
      lVar11 = *(long *)(param_1 + 0x38);
      if (lVar11 == 0) {
        plVar6 = (long *)0x0;
      }
      else {
        plVar6 = (long *)thunk_FUN_03f99350(lVar11,DAT_0917fc88);
        if (plVar6 == (long *)0x0) {
          if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c8d0(lVar11,uVar5);
          }
          goto LAB_076f7d7c;
        }
      }
      UNRECOVERED_JUMPTABLE_00 = *(code **)(*param_2 + 0x8c8);
      uVar5 = *(undefined8 *)(*param_2 + 0x8d0);
      goto LAB_076f7ae8;
    }
    break;
  case 0xf:
    plVar6 = *(long **)(param_1 + 0x38);
    if (plVar6 == (long *)0x0) {
      local_80 = 0;
      uStack_78 = 0;
      local_70 = 0;
      auVar4._8_8_ = 0;
      auVar4._0_8_ = auVar12._8_8_;
      auVar12 = auVar4 << 0x40;
    }
    else {
      if (*plVar6 != *(long *)(DAT_0917dc70 + 0x40)) {
LAB_076f7cd4:
        if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c8d0();
        }
        goto LAB_076f7d7c;
      }
      auVar12 = thunk_FUN_03f9959c(plVar6,DAT_0917dc70,&local_b0);
      uStack_78 = uStack_a8;
      local_80 = local_b0;
      local_70 = local_a0;
    }
    if (param_2 != (long *)0x0) {
      uStack_58 = uStack_78;
      local_60 = local_80;
      local_50 = local_70;
      (**(code **)(*param_2 + 0x8a8))(param_2,&local_60,*(undefined8 *)(*param_2 + 0x8b0));
LAB_076f7a98:
      if (*(long *)(lVar1 + 0x28) == local_48) {
        return;
      }
      goto LAB_076f7d7c;
    }
    break;
  case 0x10:
    if (param_2 != (long *)0x0) {
      plVar6 = *(long **)(param_1 + 0x38);
      if (plVar6 != (long *)0x0) {
        if ((*(byte *)(*plVar6 + 0x130) < *(byte *)(DAT_0918c918 + 0x130)) ||
           (*(long *)(*(long *)(*plVar6 + 200) + (ulong)*(byte *)(DAT_0918c918 + 0x130) * 8 + -8) !=
            DAT_0918c918)) {
          if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c8d0(plVar6,DAT_0918c918);
          }
          goto LAB_076f7d7c;
        }
      }
      UNRECOVERED_JUMPTABLE_00 = *(code **)(*param_2 + 0x8d8);
      uVar5 = *(undefined8 *)(*param_2 + 0x8e0);
      goto LAB_076f7ae8;
    }
    break;
  case 0x11:
    plVar6 = *(long **)(param_1 + 0x38);
    if (plVar6 == (long *)0x0) {
      uStack_b8 = 0;
      local_c0 = (uint *)0x0;
      uVar5 = 0;
    }
    else {
      if (*plVar6 != *(long *)(DAT_0917dca8 + 0x40)) goto LAB_076f7cd4;
      uVar5 = thunk_FUN_03f9959c(plVar6,DAT_0917dca8,&local_c0);
    }
    auVar12._8_8_ = local_c0;
    auVar12._0_8_ = uVar5;
    if (param_2 != (long *)0x0) {
      (**(code **)(*param_2 + 0x8b8))(param_2,local_c0,uStack_b8,*(undefined8 *)(*param_2 + 0x8c0));
      goto LAB_076f7a98;
    }
    break;
  default:
    local_60 = CONCAT44(local_60._4_4_,*(undefined4 *)(param_1 + 0x30));
    uVar5 = thunk_FUN_03fc39d4(&DAT_09187268);
    uVar5 = FUN_03f5c42c(uVar5,&local_60);
    uVar10 = thunk_FUN_03fc39d4(&DAT_09211128);
    uVar8 = thunk_FUN_03fc39d4(&DAT_09211ed8);
    uVar5 = Newtonsoft_Json_Utilities_MiscellaneousUtils__CreateArgumentOutOfRangeException
                      (uVar10,uVar5,uVar8,0);
    uVar10 = thunk_FUN_03fc39d4(&DAT_091d1598);
    if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c414(uVar5,uVar10);
    }
    goto LAB_076f7d7c;
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550(auVar12._0_8_,auVar12._8_8_);
  }
LAB_076f7d7c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

