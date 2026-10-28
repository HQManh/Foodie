// rea decompile_all
// name: Newtonsoft.Json.Utilities.DateTimeUtils$$TryParseDateTimeOffsetIso
// address: 0x768df34
// body: available
// range: 0x768df34-0x768e1af inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x768e1ac to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
Newtonsoft_Json_Utilities_DateTimeUtils__TryParseDateTimeOffsetIso
          (undefined8 param_1,ulong param_2,undefined8 *param_3)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  long local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 local_38;
  
  if ((DAT_09522584 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091835b0);
    FUN_03f5c2a4(&DAT_091835c0);
    FUN_03f5c2a4(&DAT_09183548);
    FUN_03f5c2a4(&DAT_0918bd60);
    FUN_03f5c2a4(&DAT_0918bdc0);
    DAT_09522584 = 1;
  }
  local_50 = 0;
  local_38 = 0;
  local_88 = 0;
  uStack_68 = 0;
  local_70 = 0;
  uStack_58 = 0;
  local_60 = 0;
  uStack_78 = 0;
  local_80 = 0;
  if (*(int *)(DAT_091835b0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar3 = Newtonsoft_Json_Utilities_DateTimeParser__Parse
                    (&local_80,param_1,param_2 & 0xffffffff,param_2 >> 0x20);
  if ((uVar3 & 1) == 0) goto LAB_0768e18c;
  uStack_b8 = uStack_78;
  local_c0 = local_80;
  uStack_a8 = uStack_68;
  uStack_b0 = local_70;
  uStack_98 = uStack_58;
  local_a0 = local_60;
  local_90 = local_50;
  if (*(int *)(DAT_091835c0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar4 = Newtonsoft_Json_Utilities_DateTimeUtils__CreateDateTime(&local_c0);
  iVar2 = (int)local_60;
  iVar1 = uStack_68._4_4_;
  local_38 = uVar4;
  if (local_60._4_4_ == 3) {
    if (*(int *)(DAT_0918bd60 + 0xe4) == 0) {
      FUN_03f5c424();
    }
LAB_0768e0bc:
    System_TimeSpan___ctor(&local_88,iVar1,iVar2,0,0);
  }
  else {
    if (local_60._4_4_ == 2) {
      if (*(int *)(DAT_0918bd60 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      iVar1 = -iVar1;
      iVar2 = -iVar2;
      goto LAB_0768e0bc;
    }
    if (local_60._4_4_ == 1) {
      if (*(int *)(DAT_0918bd60 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      local_88 = 0;
    }
    else {
      if (*(int *)(DAT_0918bdc0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar5 = System_TimeZoneInfo__get_Local(0);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      local_88 = System_TimeZoneInfo__GetUtcOffset(lVar5,uVar4,0);
    }
  }
  if (*(int *)(DAT_09183548 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar5 = System_DateTime__get_Ticks(&local_38,0);
  if (*(int *)(DAT_0918bd60 + 0xe4) == 0) {
    FUN_03f5c424(DAT_0918bd60);
  }
  if ((ulong)(lVar5 - local_88) < 0x2bca2875f4374000) {
    local_d0 = 0;
    uStack_c8 = 0;
    System_DateTimeOffset___ctor(&local_d0,local_38,local_88,0);
    param_3[1] = uStack_c8;
    *param_3 = local_d0;
    return 1;
  }
LAB_0768e18c:
  *param_3 = 0;
  param_3[1] = 0;
  return 0;
}

