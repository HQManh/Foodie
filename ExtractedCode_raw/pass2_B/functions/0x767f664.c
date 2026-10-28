// rea decompile_all
// name: Newtonsoft.Json.JsonWriter$$WriteToken
// address: 0x767f664
// body: available
// range: 0x767f664-0x767fd2f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x767f9b4 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x767fcc4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x767fd2c to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Newtonsoft_Json_JsonWriter__WriteToken(long *param_1,undefined4 param_2,long *param_3)

{
  uint uVar1;
  long *plVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  code *UNRECOVERED_JUMPTABLE;
  undefined1 auVar10 [16];
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  plVar2 = param_1;
  if ((DAT_09522509 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09181b78);
    FUN_03f5c2a4(&DAT_0917fc88);
    FUN_03f5c2a4(&DAT_09182b88);
    FUN_03f5c2a4(&DAT_09182ff8);
    FUN_03f5c2a4(&DAT_09183590);
    FUN_03f5c2a4(&DAT_091837d8);
    FUN_03f5c2a4(&DAT_09184f30);
    plVar2 = (long *)FUN_03f5c2a4(&DAT_09225370);
    DAT_09522509 = 1;
  }
  switch(param_2) {
  case 0:
    return;
  case 1:
    uVar6 = *(undefined8 *)(*param_1 + 0x580);
    UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x578);
    goto LAB_0767f9e0;
  case 2:
    uVar6 = *(undefined8 *)(*param_1 + 0x5a0);
    UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x598);
    goto LAB_0767f9e0;
  case 3:
    auVar10 = Newtonsoft_Json_Utilities_ValidationUtils__ArgumentNotNull(param_3,DAT_09225370,0);
    if (param_3 == (long *)0x0) {
LAB_0767fcc4:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550(auVar10._0_8_,auVar10._8_8_);
    }
    plVar3 = (long *)(**(code **)(*param_3 + 0x168))(param_3,*(undefined8 *)(*param_3 + 0x170));
    uVar6 = *(undefined8 *)(*param_1 + 0x5c0);
    UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x5b8);
    break;
  case 4:
    auVar10 = Newtonsoft_Json_Utilities_ValidationUtils__ArgumentNotNull(param_3,DAT_09225370,0);
    if (param_3 == (long *)0x0) goto LAB_0767fcc4;
    plVar3 = (long *)(**(code **)(*param_3 + 0x168))(param_3,*(undefined8 *)(*param_3 + 0x170));
    uVar6 = *(undefined8 *)(*param_1 + 0x5e0);
    UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x5d8);
    break;
  case 5:
    if (param_3 == (long *)0x0) {
      plVar3 = (long *)0x0;
    }
    else {
      plVar2 = (long *)(**(code **)(*param_3 + 0x168))(param_3,*(undefined8 *)(*param_3 + 0x170));
      plVar3 = plVar2;
    }
    auVar10._8_8_ = plVar3;
    auVar10._0_8_ = plVar2;
    if (param_1 == (long *)0x0) goto LAB_0767fcc4;
    uVar6 = *(undefined8 *)(*param_1 + 0x900);
    UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x8f8);
    break;
  case 6:
    if (param_3 == (long *)0x0) {
      plVar3 = (long *)0x0;
    }
    else {
      plVar2 = (long *)(**(code **)(*param_3 + 0x168))(param_3,*(undefined8 *)(*param_3 + 0x170));
      plVar3 = plVar2;
    }
    auVar10._8_8_ = plVar3;
    auVar10._0_8_ = plVar2;
    if (param_1 == (long *)0x0) goto LAB_0767fcc4;
    uVar6 = *(undefined8 *)(*param_1 + 0x690);
    UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x688);
    break;
  case 7:
    Newtonsoft_Json_Utilities_ValidationUtils__ArgumentNotNull(param_3,DAT_09225370,0);
    if ((param_3 != (long *)0x0) && (*param_3 == DAT_09181b78)) {
      puVar4 = (undefined8 *)thunk_FUN_03f99594(param_3);
      uStack_48 = puVar4[1];
      local_50 = *puVar4;
      local_40 = local_50;
      uStack_38 = uStack_48;
      uVar6 = FUN_03f5c42c(DAT_09181b78,&local_50);
      (**(code **)(*param_1 + 0x8e8))(param_1,uVar6,*(undefined8 *)(*param_1 + 0x8f0));
      return;
    }
    if (*(int *)(DAT_09182ff8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar6 = System_Globalization_CultureInfo__get_InvariantCulture(0);
    if (*(int *)(DAT_09182b88 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09182b88);
    }
    plVar3 = (long *)System_Convert__ToInt64(param_3,uVar6,0);
    uVar6 = *(undefined8 *)(*param_1 + 0x6d0);
    UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x6c8);
    break;
  case 8:
    Newtonsoft_Json_Utilities_ValidationUtils__ArgumentNotNull(param_3,DAT_09225370,0);
    if (param_3 != (long *)0x0) {
      lVar9 = *param_3;
      if (lVar9 == DAT_091837d8) {
        puVar4 = (undefined8 *)thunk_FUN_03f99594(param_3);
        uVar6 = *puVar4;
        uVar7 = puVar4[1];
        uVar8 = *(undefined8 *)(*param_1 + 0x770);
        UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x768);
        goto LAB_0767fc4c;
      }
      if (lVar9 == DAT_09535458) {
        puVar4 = (undefined8 *)FUN_039aef84(param_3);
        lVar9 = *param_1;
        uVar6 = *puVar4;
        goto LAB_0767fc74;
      }
      if (lVar9 == DAT_09535450) {
        puVar5 = (undefined4 *)FUN_039aef84(param_3);
                    /* WARNING: Could not recover jumptable at 0x0767fcc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0x6e8))(*puVar5,param_1,*(undefined8 *)(*param_1 + 0x6f0));
        return;
      }
    }
    if (*(int *)(DAT_09182ff8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar6 = System_Globalization_CultureInfo__get_InvariantCulture(0);
    if (*(int *)(DAT_09182b88 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09182b88);
    }
    uVar6 = System_Convert__ToDouble(param_3,uVar6,0);
    lVar9 = *param_1;
LAB_0767fc74:
                    /* WARNING: Could not recover jumptable at 0x0767fc90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar9 + 0x6f8))(uVar6,param_1,*(undefined8 *)(lVar9 + 0x700));
    return;
  case 9:
    if (param_3 == (long *)0x0) {
      plVar3 = (long *)0x0;
    }
    else {
      plVar2 = (long *)(**(code **)(*param_3 + 0x168))(param_3,*(undefined8 *)(*param_3 + 0x170));
      plVar3 = plVar2;
    }
    auVar10._8_8_ = plVar3;
    auVar10._0_8_ = plVar2;
    if (param_1 == (long *)0x0) goto LAB_0767fcc4;
    uVar6 = *(undefined8 *)(*param_1 + 0x6a0);
    UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x698);
    break;
  case 10:
    Newtonsoft_Json_Utilities_ValidationUtils__ArgumentNotNull(param_3,DAT_09225370,0);
    if (*(int *)(DAT_09182ff8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar6 = System_Globalization_CultureInfo__get_InvariantCulture(0);
    if (*(int *)(DAT_09182b88 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09182b88);
    }
    uVar1 = System_Convert__ToBoolean(param_3,uVar6,0);
                    /* WARNING: Could not recover jumptable at 0x0767faa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x708))(param_1,uVar1 & 1,*(undefined8 *)(*param_1 + 0x710));
    return;
  case 0xb:
    uVar6 = *(undefined8 *)(*param_1 + 0x660);
    UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x658);
    goto LAB_0767f9e0;
  case 0xc:
    uVar6 = *(undefined8 *)(*param_1 + 0x670);
    UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x668);
    goto LAB_0767f9e0;
  case 0xd:
    uVar6 = *(undefined8 *)(*param_1 + 0x590);
    UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x588);
    goto LAB_0767f9e0;
  case 0xe:
    uVar6 = *(undefined8 *)(*param_1 + 0x5b0);
    UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x5a8);
    goto LAB_0767f9e0;
  case 0xf:
    uVar6 = *(undefined8 *)(*param_1 + 0x5d0);
    UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x5c8);
LAB_0767f9e0:
                    /* WARNING: Could not recover jumptable at 0x0767f9f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(param_1,uVar6);
    return;
  case 0x10:
    Newtonsoft_Json_Utilities_ValidationUtils__ArgumentNotNull(param_3,DAT_09225370,0);
    if ((param_3 != (long *)0x0) && (*param_3 == DAT_09183590)) {
      puVar4 = (undefined8 *)thunk_FUN_03f99594(param_3);
      uVar6 = *puVar4;
      uVar7 = puVar4[1];
      uVar8 = *(undefined8 *)(*param_1 + 0x790);
      UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x788);
LAB_0767fc4c:
                    /* WARNING: Could not recover jumptable at 0x0767fc60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(param_1,uVar6,uVar7,uVar8);
      return;
    }
    if (*(int *)(DAT_09182ff8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar6 = System_Globalization_CultureInfo__get_InvariantCulture(0);
    if (*(int *)(DAT_09182b88 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09182b88);
    }
    plVar3 = (long *)System_Convert__ToDateTime(param_3,uVar6,0);
    uVar6 = *(undefined8 *)(*param_1 + 0x780);
    UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x778);
    break;
  case 0x11:
    Newtonsoft_Json_Utilities_ValidationUtils__ArgumentNotNull(param_3,DAT_09225370,0);
    uVar6 = DAT_0917fc88;
    if (param_3 == (long *)0x0) {
      plVar3 = (long *)0x0;
    }
    else {
      if (*param_3 == DAT_09184f30) {
        puVar4 = (undefined8 *)thunk_FUN_03f99594(param_3);
        uVar6 = *puVar4;
        uVar7 = puVar4[1];
        uVar8 = *(undefined8 *)(*param_1 + 0x7a0);
        UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x798);
        goto LAB_0767fc4c;
      }
      plVar3 = (long *)thunk_FUN_03f99350(param_3,DAT_0917fc88);
      if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c8d0(param_3,uVar6);
      }
    }
    uVar6 = *(undefined8 *)(*param_1 + 0x8d0);
    UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x8c8);
    break;
  default:
    local_40 = CONCAT44(local_40._4_4_,param_2);
    uVar6 = thunk_FUN_03fc39d4(&DAT_09187478);
    uVar6 = FUN_03f5c42c(uVar6,&local_40);
    uVar7 = thunk_FUN_03fc39d4(&DAT_09224098);
    uVar8 = thunk_FUN_03fc39d4(&DAT_09211ed8);
    uVar6 = Newtonsoft_Json_Utilities_MiscellaneousUtils__CreateArgumentOutOfRangeException
                      (uVar7,uVar6,uVar8,0);
    uVar7 = thunk_FUN_03fc39d4(&DAT_091d1fb8);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar6,uVar7);
  }
                    /* WARNING: Could not recover jumptable at 0x0767fbbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,plVar3,uVar6);
  return;
}

