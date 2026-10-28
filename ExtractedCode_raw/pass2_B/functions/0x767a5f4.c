// rea decompile_all
// name: Newtonsoft.Json.JsonWriter$$WriteTokenAsync
// address: 0x767a5f4
// body: available
// range: 0x767a5f4-0x767ad3f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x767acd4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x767ad3c to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
Newtonsoft_Json_JsonWriter__WriteTokenAsync
          (long *param_1,undefined4 param_2,long *param_3,undefined8 param_4)

{
  uint uVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined4 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  code *pcVar10;
  undefined1 auVar11 [16];
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_38;
  
  local_38 = param_4;
  if ((DAT_095224d1 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091817a0);
    FUN_03f5c2a4(&DAT_09181b78);
    FUN_03f5c2a4(&DAT_0917fc88);
    FUN_03f5c2a4(&DAT_09182348);
    FUN_03f5c2a4(&DAT_09182b88);
    FUN_03f5c2a4(&DAT_09182ff8);
    FUN_03f5c2a4(&DAT_09183590);
    FUN_03f5c2a4(&DAT_091837d8);
    FUN_03f5c2a4(&DAT_09184f30);
    FUN_03f5c2a4(&DAT_09225370);
    DAT_095224d1 = 1;
  }
  if (*(int *)(DAT_09182348 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = System_Threading_CancellationToken__get_IsCancellationRequested(&local_38,0);
  uVar3 = local_38;
  if ((uVar2 & 1) != 0) {
    if (*(int *)(DAT_091817a0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar3 = Newtonsoft_Json_Utilities_AsyncUtils__FromCanceled(uVar3,0);
    return uVar3;
  }
  switch(param_2) {
  case 0:
    if (*(int *)(DAT_091817a0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    return *(undefined8 *)(*(long *)(DAT_091817a0 + 0xb8) + 0x10);
  case 1:
    pcVar10 = *(code **)(*param_1 + 0x2a8);
    uVar3 = *(undefined8 *)(*param_1 + 0x2b0);
    goto LAB_0767aa34;
  case 2:
    pcVar10 = *(code **)(*param_1 + 0x268);
    uVar3 = *(undefined8 *)(*param_1 + 0x270);
    goto LAB_0767aa34;
  case 3:
    auVar11 = Newtonsoft_Json_Utilities_ValidationUtils__ArgumentNotNull(param_3,DAT_09225370,0);
    if (param_3 == (long *)0x0) {
LAB_0767acd4:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550(auVar11._0_8_,auVar11._8_8_);
    }
    uVar4 = (**(code **)(*param_3 + 0x168))(param_3,*(undefined8 *)(*param_3 + 0x170));
    pcVar10 = *(code **)(*param_1 + 0x298);
    uVar7 = *(undefined8 *)(*param_1 + 0x2a0);
    uVar3 = local_38;
    break;
  case 4:
    auVar11 = Newtonsoft_Json_Utilities_ValidationUtils__ArgumentNotNull(param_3,DAT_09225370,0);
    if (param_3 == (long *)0x0) goto LAB_0767acd4;
    uVar4 = (**(code **)(*param_3 + 0x168))(param_3,*(undefined8 *)(*param_3 + 0x170));
    pcVar10 = *(code **)(*param_1 + 0x248);
    uVar7 = *(undefined8 *)(*param_1 + 0x250);
    uVar3 = local_38;
    break;
  case 5:
    if (param_3 == (long *)0x0) {
      uVar4 = 0;
    }
    else {
      uVar2 = (**(code **)(*param_3 + 0x168))(param_3,*(undefined8 *)(*param_3 + 0x170));
      uVar4 = uVar2;
    }
    auVar11._8_8_ = uVar4;
    auVar11._0_8_ = uVar2;
    if (param_1 == (long *)0x0) goto LAB_0767acd4;
    pcVar10 = *(code **)(*param_1 + 0x278);
    uVar7 = *(undefined8 *)(*param_1 + 0x280);
    uVar3 = local_38;
    break;
  case 6:
    if (param_3 == (long *)0x0) {
      uVar4 = 0;
    }
    else {
      uVar2 = (**(code **)(*param_3 + 0x168))(param_3,*(undefined8 *)(*param_3 + 0x170));
      uVar4 = uVar2;
    }
    auVar11._8_8_ = uVar4;
    auVar11._0_8_ = uVar2;
    if (param_1 == (long *)0x0) goto LAB_0767acd4;
    pcVar10 = *(code **)(*param_1 + 0x288);
    uVar7 = *(undefined8 *)(*param_1 + 0x290);
    uVar3 = local_38;
    break;
  case 7:
    Newtonsoft_Json_Utilities_ValidationUtils__ArgumentNotNull(param_3,DAT_09225370,0);
    if ((param_3 == (long *)0x0) || (*param_3 != DAT_09181b78)) {
      if (*(int *)(DAT_09182ff8 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar3 = System_Globalization_CultureInfo__get_InvariantCulture(0);
      if (*(int *)(DAT_09182b88 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09182b88);
      }
      uVar4 = System_Convert__ToInt64(param_3,uVar3,0);
      pcVar10 = *(code **)(*param_1 + 0x418);
      uVar7 = *(undefined8 *)(*param_1 + 0x420);
      uVar3 = local_38;
    }
    else {
      puVar5 = (undefined8 *)FUN_039aef84(param_3);
      uStack_58 = puVar5[1];
      local_60 = *puVar5;
      local_50 = local_60;
      uStack_48 = uStack_58;
      uVar4 = FUN_03f5c42c(DAT_09181b78,&local_60);
      pcVar10 = *(code **)(*param_1 + 0x438);
      uVar7 = *(undefined8 *)(*param_1 + 0x440);
      uVar3 = local_38;
    }
    break;
  case 8:
    Newtonsoft_Json_Utilities_ValidationUtils__ArgumentNotNull(param_3,DAT_09225370,0);
    if (param_3 != (long *)0x0) {
      lVar9 = *param_3;
      if (lVar9 == DAT_091837d8) {
        puVar5 = (undefined8 *)FUN_039aef84(param_3,DAT_091837d8);
        uVar3 = *puVar5;
        uVar7 = puVar5[1];
        pcVar10 = *(code **)(*param_1 + 0x378);
        uVar8 = *(undefined8 *)(*param_1 + 0x380);
        goto LAB_0767ac78;
      }
      if (lVar9 == DAT_09535458) {
        puVar5 = (undefined8 *)FUN_039aef84(param_3);
        lVar9 = *param_1;
        uVar3 = *puVar5;
        goto LAB_0767ac94;
      }
      if (lVar9 == DAT_09535450) {
        puVar6 = (undefined4 *)FUN_039aef84(param_3);
        uVar3 = (**(code **)(*param_1 + 0x3b8))
                          (*puVar6,param_1,local_38,*(undefined8 *)(*param_1 + 0x3c0));
        return uVar3;
      }
    }
    if (*(int *)(DAT_09182ff8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar3 = System_Globalization_CultureInfo__get_InvariantCulture(0);
    if (*(int *)(DAT_09182b88 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09182b88);
    }
    uVar3 = System_Convert__ToDouble(param_3,uVar3,0);
    lVar9 = *param_1;
LAB_0767ac94:
    uVar3 = (**(code **)(lVar9 + 0x398))(uVar3,param_1,local_38,*(undefined8 *)(lVar9 + 0x3a0));
    return uVar3;
  case 9:
    auVar11 = Newtonsoft_Json_Utilities_ValidationUtils__ArgumentNotNull(param_3,DAT_09225370,0);
    if (param_3 == (long *)0x0) goto LAB_0767acd4;
    uVar4 = (**(code **)(*param_3 + 0x168))(param_3,*(undefined8 *)(*param_3 + 0x170));
    pcVar10 = *(code **)(*param_1 + 0x488);
    uVar7 = *(undefined8 *)(*param_1 + 0x490);
    uVar3 = local_38;
    break;
  case 10:
    Newtonsoft_Json_Utilities_ValidationUtils__ArgumentNotNull(param_3,DAT_09225370,0);
    if (*(int *)(DAT_09182ff8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar3 = System_Globalization_CultureInfo__get_InvariantCulture(0);
    if (*(int *)(DAT_09182b88 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09182b88);
    }
    uVar1 = System_Convert__ToBoolean(param_3,uVar3,0);
    uVar3 = (**(code **)(*param_1 + 0x2c8))
                      (param_1,uVar1 & 1,local_38,*(undefined8 *)(*param_1 + 0x2d0));
    return uVar3;
  case 0xb:
    pcVar10 = *(code **)(*param_1 + 0x238);
    uVar3 = *(undefined8 *)(*param_1 + 0x240);
    goto LAB_0767aa34;
  case 0xc:
    pcVar10 = *(code **)(*param_1 + 0x528);
    uVar3 = *(undefined8 *)(*param_1 + 0x530);
    goto LAB_0767aa34;
  case 0xd:
    pcVar10 = *(code **)(*param_1 + 0x228);
    uVar3 = *(undefined8 *)(*param_1 + 0x230);
    goto LAB_0767aa34;
  case 0xe:
    pcVar10 = *(code **)(*param_1 + 0x208);
    uVar3 = *(undefined8 *)(*param_1 + 0x210);
    goto LAB_0767aa34;
  case 0xf:
    pcVar10 = *(code **)(*param_1 + 0x218);
    uVar3 = *(undefined8 *)(*param_1 + 0x220);
LAB_0767aa34:
    uVar3 = (*pcVar10)(param_1,local_38,uVar3);
    return uVar3;
  case 0x10:
    Newtonsoft_Json_Utilities_ValidationUtils__ArgumentNotNull(param_3,DAT_09225370,0);
    if ((param_3 != (long *)0x0) && (*param_3 == DAT_09183590)) {
      puVar5 = (undefined8 *)FUN_039aef84(param_3);
      uVar3 = *puVar5;
      uVar7 = puVar5[1];
      pcVar10 = *(code **)(*param_1 + 0x358);
      uVar8 = *(undefined8 *)(*param_1 + 0x360);
LAB_0767ac78:
      uVar3 = (*pcVar10)(param_1,uVar3,uVar7,local_38,uVar8);
      return uVar3;
    }
    if (*(int *)(DAT_09182ff8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar3 = System_Globalization_CultureInfo__get_InvariantCulture(0);
    if (*(int *)(DAT_09182b88 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09182b88);
    }
    uVar4 = System_Convert__ToDateTime(param_3,uVar3,0);
    pcVar10 = *(code **)(*param_1 + 0x338);
    uVar7 = *(undefined8 *)(*param_1 + 0x340);
    uVar3 = local_38;
    break;
  case 0x11:
    Newtonsoft_Json_Utilities_ValidationUtils__ArgumentNotNull(param_3,DAT_09225370,0);
    uVar3 = local_38;
    if ((param_3 != (long *)0x0) && (*param_3 == DAT_09184f30)) {
      puVar5 = (undefined8 *)FUN_039aef84(param_3);
      uVar3 = *puVar5;
      uVar7 = puVar5[1];
      pcVar10 = *(code **)(*param_1 + 0x3d8);
      uVar8 = *(undefined8 *)(*param_1 + 0x3e0);
      goto LAB_0767ac78;
    }
    uVar4 = FUN_039bcaa8(param_3,DAT_0917fc88);
    pcVar10 = *(code **)(*param_1 + 0x308);
    uVar7 = *(undefined8 *)(*param_1 + 0x310);
    break;
  default:
    local_50 = CONCAT44(local_50._4_4_,param_2);
    uVar3 = thunk_FUN_03fc39d4(&DAT_09187478);
    uVar3 = FUN_03f5c42c(uVar3,&local_50);
    uVar7 = thunk_FUN_03fc39d4(&DAT_09224098);
    uVar8 = thunk_FUN_03fc39d4(&DAT_09211ed8);
    uVar3 = Newtonsoft_Json_Utilities_MiscellaneousUtils__CreateArgumentOutOfRangeException
                      (uVar7,uVar3,uVar8,0);
    uVar7 = thunk_FUN_03fc39d4(&DAT_091d1fc8);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar3,uVar7);
  }
  uVar3 = (*pcVar10)(param_1,uVar4,uVar3,uVar7);
  return uVar3;
}

