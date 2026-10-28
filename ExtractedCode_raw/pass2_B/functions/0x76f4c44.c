// rea decompile_all
// name: Newtonsoft.Json.Linq.JValue$$WriteToAsync
// address: 0x76f4c44
// body: available
// range: 0x76f4c44-0x76f55bb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x76f4f60 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76f550c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76f5520 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76f553c to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76f55b4 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76f55b8 to 0x89db930 <EXTERNAL>::__stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Newtonsoft_Json_Linq_JValue__WriteToAsync
               (long param_1,long *param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined8 uVar4;
  uint *puVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  uint uVar9;
  uint *puVar10;
  undefined8 extraout_x1;
  code *UNRECOVERED_JUMPTABLE_00;
  undefined8 uVar11;
  long lVar12;
  undefined8 extraout_d0;
  undefined1 auVar13 [16];
  uint *local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined4 local_b0;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined4 local_80;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined4 local_60;
  long local_58;
  
  auVar13._8_8_ = param_2;
  auVar13._0_8_ = param_1;
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  if ((DAT_095228d4 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091817a0);
    FUN_03f5c2a4(&DAT_09181b78);
    FUN_03f5c2a4(&DAT_0917fc88);
    FUN_03f5c2a4(&DAT_09182b88);
    FUN_03f5c2a4(&DAT_09182ff8);
    FUN_03f5c2a4(&DAT_09183590);
    FUN_03f5c2a4(&DAT_091837d8);
    FUN_03f5c2a4(&DAT_0917dc70);
    FUN_03f5c2a4(&DAT_0917dca8);
    auVar13 = FUN_03f5c2a4(&DAT_0918c918);
    DAT_095228d4 = 1;
  }
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  if ((param_4 != 0) && (*(long *)(param_4 + 0x18) != 0)) {
    auVar2._8_8_ = 0;
    auVar2._0_8_ = auVar13._8_8_;
    auVar13 = auVar2 << 0x40;
    if (*(long *)(param_1 + 0x38) == 0) goto LAB_076f4db4;
    uVar4 = System_Object__GetType(*(long *)(param_1 + 0x38),0);
    auVar13 = Newtonsoft_Json_JsonSerializer__GetMatchingConverter(param_4,uVar4,0);
    plVar6 = auVar13._0_8_;
    auVar3._8_8_ = 0;
    auVar3._0_8_ = auVar13._8_8_;
    auVar13 = auVar3 << 0x40;
    if ((plVar6 == (long *)0x0) ||
       (auVar13 = (**(code **)(*plVar6 + 0x1b8))(plVar6,*(undefined8 *)(*plVar6 + 0x1c0)),
       (auVar13._0_8_ & 1) == 0)) goto LAB_076f4db4;
    uVar11 = *(undefined8 *)(param_1 + 0x38);
    uVar4 = Newtonsoft_Json_JsonSerializer__CreateDefault(0);
    (**(code **)(*plVar6 + 0x178))(plVar6,param_2,uVar11,uVar4,*(undefined8 *)(*plVar6 + 0x180));
    if (*(int *)(DAT_091817a0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    puVar5 = *(uint **)(*(long *)(DAT_091817a0 + 0xb8) + 0x10);
LAB_076f52ac:
    if (*(long *)(lVar1 + 0x28) == local_58) {
      return;
    }
    goto LAB_076f55b8;
  }
LAB_076f4db4:
  uVar4 = DAT_0917fc88;
  puVar5 = auVar13._0_8_;
  switch(*(undefined4 *)(param_1 + 0x30)) {
  case 5:
    plVar6 = *(long **)(param_1 + 0x38);
    if (plVar6 == (long *)0x0) {
      puVar5 = (uint *)0x0;
    }
    else {
      puVar5 = (uint *)(**(code **)(*plVar6 + 0x168))(plVar6,*(undefined8 *)(*plVar6 + 0x170));
    }
    auVar13._8_8_ = puVar5;
    auVar13._0_8_ = puVar5;
    if (param_2 != (long *)0x0) {
      UNRECOVERED_JUMPTABLE_00 = *(code **)(*param_2 + 0x278);
      uVar4 = *(undefined8 *)(*param_2 + 0x280);
      puVar10 = puVar5;
LAB_076f5300:
      if (*(long *)(lVar1 + 0x28) == local_58) {
LAB_076f5310:
                    /* WARNING: Could not recover jumptable at 0x076f5330. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE_00)(param_2,puVar10,param_3,uVar4);
        return;
      }
      goto LAB_076f55b8;
    }
    break;
  case 6:
    plVar6 = *(long **)(param_1 + 0x38);
    if (plVar6 == (long *)0x0) {
LAB_076f50ec:
      if (*(int *)(DAT_09182ff8 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar4 = System_Globalization_CultureInfo__get_InvariantCulture(0);
      if (*(int *)(DAT_09182b88 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09182b88);
      }
      auVar13 = System_Convert__ToInt64(plVar6,uVar4,0);
      puVar5 = auVar13._0_8_;
      if (param_2 != (long *)0x0) {
        UNRECOVERED_JUMPTABLE_00 = *(code **)(*param_2 + 0x418);
        uVar4 = *(undefined8 *)(*param_2 + 0x420);
LAB_076f514c:
        puVar10 = puVar5;
        if (*(long *)(lVar1 + 0x28) == local_58) goto LAB_076f5310;
        goto LAB_076f55b8;
      }
    }
    else {
      lVar12 = *plVar6;
      if (lVar12 == DAT_09535420) {
        auVar13 = thunk_FUN_03f99594(plVar6);
        puVar5 = auVar13._0_8_;
        if (param_2 != (long *)0x0) {
          uVar9 = *puVar5;
          UNRECOVERED_JUMPTABLE_00 = *(code **)(*param_2 + 0x3f8);
          uVar4 = *(undefined8 *)(*param_2 + 0x400);
          if (*(long *)(lVar1 + 0x28) == local_58) goto LAB_076f4ec0;
          goto LAB_076f55b8;
        }
      }
      else if (lVar12 == DAT_09535440) {
        auVar13 = FUN_039aef84(plVar6);
        puVar5 = auVar13._0_8_;
        if (param_2 != (long *)0x0) {
          UNRECOVERED_JUMPTABLE_00 = *(code **)(*param_2 + 0x418);
          uVar4 = *(undefined8 *)(*param_2 + 0x420);
          puVar10 = *(uint **)puVar5;
          goto LAB_076f5300;
        }
      }
      else if (lVar12 == DAT_09535448) {
        auVar13 = FUN_039aef84(plVar6);
        puVar5 = auVar13._0_8_;
        if (param_2 != (long *)0x0) {
          UNRECOVERED_JUMPTABLE_00 = *(code **)(*param_2 + 0x4d8);
          uVar4 = *(undefined8 *)(*param_2 + 0x4e0);
          puVar10 = *(uint **)puVar5;
          goto LAB_076f5300;
        }
      }
      else {
        if (lVar12 != DAT_09181b78) goto LAB_076f50ec;
        puVar7 = (undefined8 *)FUN_039aef84(plVar6);
        uStack_98 = puVar7[1];
        local_a0 = *puVar7;
        local_70 = local_a0;
        uStack_68 = uStack_98;
        auVar13 = FUN_03f5c42c(DAT_09181b78,&local_a0);
        if (param_2 != (long *)0x0) {
          puVar5 = (uint *)(**(code **)(*param_2 + 0x438))
                                     (param_2,auVar13._0_8_,param_3,
                                      *(undefined8 *)(*param_2 + 0x440));
          goto LAB_076f52ac;
        }
      }
    }
    break;
  case 7:
    plVar6 = *(long **)(param_1 + 0x38);
    if (plVar6 == (long *)0x0) {
LAB_076f4fa4:
      if (*(int *)(DAT_09182ff8 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar4 = System_Globalization_CultureInfo__get_InvariantCulture(0);
      if (*(int *)(DAT_09182b88 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09182b88);
      }
      puVar5 = (uint *)System_Convert__ToDouble(plVar6,uVar4,0);
      auVar13._8_8_ = extraout_x1;
      auVar13._0_8_ = puVar5;
      if (param_2 != (long *)0x0) {
        lVar12 = *param_2;
        uVar4 = extraout_d0;
LAB_076f53e8:
        if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Could not recover jumptable at 0x076f5420. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(lVar12 + 0x398))(uVar4,param_2,param_3,*(undefined8 *)(lVar12 + 0x3a0));
          return;
        }
        goto LAB_076f55b8;
      }
    }
    else {
      lVar12 = *plVar6;
      if (lVar12 == DAT_091837d8) {
        auVar13 = thunk_FUN_03f99594(plVar6);
        puVar5 = auVar13._0_8_;
        if (param_2 != (long *)0x0) {
          uVar4 = *(undefined8 *)puVar5;
          uVar11 = *(undefined8 *)(puVar5 + 2);
          UNRECOVERED_JUMPTABLE_00 = *(code **)(*param_2 + 0x378);
          uVar8 = *(undefined8 *)(*param_2 + 0x380);
          goto LAB_076f5370;
        }
      }
      else if (lVar12 == DAT_09535458) {
        auVar13 = FUN_039aef84(plVar6);
        puVar5 = auVar13._0_8_;
        if (param_2 != (long *)0x0) {
          lVar12 = *param_2;
          uVar4 = *(undefined8 *)puVar5;
          goto LAB_076f53e8;
        }
      }
      else {
        if (lVar12 != DAT_09535450) goto LAB_076f4fa4;
        auVar13 = FUN_039aef84(plVar6);
        puVar5 = auVar13._0_8_;
        if (param_2 != (long *)0x0) {
          if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Could not recover jumptable at 0x076f5490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*param_2 + 0x3b8))
                      (*puVar5,param_2,param_3,*(undefined8 *)(*param_2 + 0x3c0));
            return;
          }
          goto LAB_076f55b8;
        }
      }
    }
    break;
  case 8:
    plVar6 = *(long **)(param_1 + 0x38);
    if (plVar6 == (long *)0x0) {
      puVar5 = (uint *)0x0;
    }
    else {
      puVar5 = (uint *)(**(code **)(*plVar6 + 0x168))(plVar6,*(undefined8 *)(*plVar6 + 0x170));
    }
    auVar13._8_8_ = puVar5;
    auVar13._0_8_ = puVar5;
    if (param_2 != (long *)0x0) {
      UNRECOVERED_JUMPTABLE_00 = *(code **)(*param_2 + 0x488);
      uVar4 = *(undefined8 *)(*param_2 + 0x490);
      puVar10 = puVar5;
      goto LAB_076f5300;
    }
    break;
  case 9:
    uVar4 = *(undefined8 *)(param_1 + 0x38);
    if (*(int *)(DAT_09182ff8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar11 = System_Globalization_CultureInfo__get_InvariantCulture(0);
    if (*(int *)(DAT_09182b88 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09182b88);
    }
    auVar13 = System_Convert__ToBoolean(uVar4,uVar11,0);
    puVar5 = auVar13._0_8_;
    if (param_2 != (long *)0x0) {
      UNRECOVERED_JUMPTABLE_00 = *(code **)(*param_2 + 0x2c8);
      uVar4 = *(undefined8 *)(*param_2 + 0x2d0);
      if (*(long *)(lVar1 + 0x28) == local_58) {
        uVar9 = auVar13._0_4_ & 1;
LAB_076f4ec0:
                    /* WARNING: Could not recover jumptable at 0x076f4ee0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE_00)(param_2,uVar9,param_3,uVar4);
        return;
      }
      goto LAB_076f55b8;
    }
    break;
  case 10:
    if (param_2 != (long *)0x0) {
      UNRECOVERED_JUMPTABLE_00 = *(code **)(*param_2 + 0x238);
      uVar4 = *(undefined8 *)(*param_2 + 0x240);
LAB_076f5188:
      if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Could not recover jumptable at 0x076f51b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE_00)(param_2,param_3,uVar4);
        return;
      }
      goto LAB_076f55b8;
    }
    break;
  case 0xb:
    if (param_2 != (long *)0x0) {
      UNRECOVERED_JUMPTABLE_00 = *(code **)(*param_2 + 0x528);
      uVar4 = *(undefined8 *)(*param_2 + 0x530);
      goto LAB_076f5188;
    }
    break;
  case 0xc:
    plVar6 = *(long **)(param_1 + 0x38);
    if ((plVar6 == (long *)0x0) || (*plVar6 != DAT_09183590)) {
      if (*(int *)(DAT_09182ff8 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar4 = System_Globalization_CultureInfo__get_InvariantCulture(0);
      if (*(int *)(DAT_09182b88 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09182b88);
      }
      auVar13 = System_Convert__ToDateTime(plVar6,uVar4,0);
      puVar5 = auVar13._0_8_;
      if (param_2 != (long *)0x0) {
        UNRECOVERED_JUMPTABLE_00 = *(code **)(*param_2 + 0x338);
        uVar4 = *(undefined8 *)(*param_2 + 0x340);
        goto LAB_076f514c;
      }
    }
    else {
      auVar13 = thunk_FUN_03f99594(plVar6);
      puVar5 = auVar13._0_8_;
      if (param_2 != (long *)0x0) {
        uVar4 = *(undefined8 *)puVar5;
        uVar11 = *(undefined8 *)(puVar5 + 2);
        UNRECOVERED_JUMPTABLE_00 = *(code **)(*param_2 + 0x358);
        uVar8 = *(undefined8 *)(*param_2 + 0x360);
LAB_076f5370:
        if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Could not recover jumptable at 0x076f53a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE_00)(param_2,uVar4,uVar11,param_3,uVar8);
          return;
        }
        goto LAB_076f55b8;
      }
    }
    break;
  case 0xd:
    plVar6 = *(long **)(param_1 + 0x38);
    if (plVar6 == (long *)0x0) {
      puVar5 = (uint *)0x0;
    }
    else {
      puVar5 = (uint *)(**(code **)(*plVar6 + 0x168))(plVar6,*(undefined8 *)(*plVar6 + 0x170));
    }
    auVar13._8_8_ = puVar5;
    auVar13._0_8_ = puVar5;
    if (param_2 != (long *)0x0) {
      UNRECOVERED_JUMPTABLE_00 = *(code **)(*param_2 + 0x288);
      uVar4 = *(undefined8 *)(*param_2 + 0x290);
      puVar10 = puVar5;
      goto LAB_076f5300;
    }
    break;
  case 0xe:
    if (param_2 != (long *)0x0) {
      lVar12 = *(long *)(param_1 + 0x38);
      if (lVar12 == 0) {
        puVar10 = (uint *)0x0;
      }
      else {
        puVar5 = (uint *)thunk_FUN_03f99350(lVar12,DAT_0917fc88);
        puVar10 = puVar5;
        if (puVar5 == (uint *)0x0) {
          if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c8d0(lVar12,uVar4);
          }
          goto LAB_076f55b8;
        }
      }
      UNRECOVERED_JUMPTABLE_00 = *(code **)(*param_2 + 0x308);
      uVar4 = *(undefined8 *)(*param_2 + 0x310);
      goto LAB_076f5300;
    }
    break;
  case 0xf:
    puVar5 = *(uint **)(param_1 + 0x38);
    auVar13._8_8_ = auVar13._8_8_;
    auVar13._0_8_ = puVar5;
    if (puVar5 == (uint *)0x0) {
      local_90 = 0;
      uStack_88 = 0;
      local_80 = 0;
    }
    else {
      if (*(long *)puVar5 != *(long *)(DAT_0917dc70 + 0x40)) {
LAB_076f5510:
        if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c8d0();
        }
        goto LAB_076f55b8;
      }
      auVar13 = thunk_FUN_03f9959c(puVar5,DAT_0917dc70,&local_c0);
      uStack_88 = uStack_b8;
      local_90 = local_c0;
      local_80 = local_b0;
    }
    if (param_2 != (long *)0x0) {
      uStack_68 = uStack_88;
      local_70 = local_90;
      local_60 = local_80;
      puVar5 = (uint *)(**(code **)(*param_2 + 1000))
                                 (param_2,&local_70,param_3,*(undefined8 *)(*param_2 + 0x3f0));
      goto LAB_076f52ac;
    }
    break;
  case 0x10:
    if (param_2 != (long *)0x0) {
      puVar10 = *(uint **)(param_1 + 0x38);
      if (puVar10 != (uint *)0x0) {
        if ((*(byte *)(*(long *)puVar10 + 0x130) < *(byte *)(DAT_0918c918 + 0x130)) ||
           (*(long *)(*(long *)(*(long *)puVar10 + 200) + (ulong)*(byte *)(DAT_0918c918 + 0x130) * 8
                     + -8) != DAT_0918c918)) {
          if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c8d0(puVar10,DAT_0918c918);
          }
          goto LAB_076f55b8;
        }
      }
      UNRECOVERED_JUMPTABLE_00 = *(code **)(*param_2 + 0x4f8);
      uVar4 = *(undefined8 *)(*param_2 + 0x500);
      goto LAB_076f5300;
    }
    break;
  case 0x11:
    puVar5 = *(uint **)(param_1 + 0x38);
    if (puVar5 == (uint *)0x0) {
      uStack_c8 = 0;
      local_d0 = (uint *)0x0;
      uVar4 = 0;
    }
    else {
      if (*(long *)puVar5 != *(long *)(DAT_0917dca8 + 0x40)) goto LAB_076f5510;
      uVar4 = thunk_FUN_03f9959c(puVar5,DAT_0917dca8,&local_d0);
    }
    auVar13._8_8_ = local_d0;
    auVar13._0_8_ = uVar4;
    if (param_2 != (long *)0x0) {
      puVar5 = (uint *)(**(code **)(*param_2 + 0x4a8))
                                 (param_2,local_d0,uStack_c8,param_3,
                                  *(undefined8 *)(*param_2 + 0x4b0));
      goto LAB_076f52ac;
    }
    break;
  default:
    local_70 = CONCAT44(local_70._4_4_,*(undefined4 *)(param_1 + 0x30));
    uVar4 = thunk_FUN_03fc39d4(&DAT_09187268);
    uVar4 = FUN_03f5c42c(uVar4,&local_70);
    uVar11 = thunk_FUN_03fc39d4(&DAT_09211128);
    uVar8 = thunk_FUN_03fc39d4(&DAT_09211ed8);
    uVar4 = Newtonsoft_Json_Utilities_MiscellaneousUtils__CreateArgumentOutOfRangeException
                      (uVar11,uVar4,uVar8,0);
    puVar5 = (uint *)thunk_FUN_03fc39d4(&DAT_091d15a0);
    if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c414(uVar4,puVar5);
    }
    goto LAB_076f55b8;
  }
  puVar5 = auVar13._0_8_;
  if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550(puVar5,auVar13._8_8_);
  }
LAB_076f55b8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(puVar5);
}

