// rea decompile_all
// name: System.TimeZoneInfo$$NormalizeAdjustmentRuleOffset
// address: 0x7510d50
// body: available
// range: 0x7510d50-0x7510fab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7510fa8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_TimeZoneInfo__NormalizeAdjustmentRuleOffset(undefined8 param_1,long *param_2)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  
  if ((DAT_0952171b & 1) == 0) {
    FUN_03f5c2a4(&DAT_0918bd60);
    FUN_03f5c2a4(&DAT_0918bdc0);
    DAT_0952171b = 1;
  }
  lVar5 = *param_2;
  if (*(int *)(DAT_0918bdc0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar3 = System_TimeZoneInfo__GetUtcOffset(param_1,lVar5);
  if (*(int *)(DAT_0918bd60 + 0xe4) == 0) {
    FUN_03f5c424(DAT_0918bd60);
  }
  uVar6 = **(undefined8 **)(DAT_0918bd60 + 0xb8);
  uVar4 = System_TimeSpan__op_GreaterThan
                    (uVar3,*(undefined8 *)(*(long *)(DAT_0918bdc0 + 0xb8) + 0x20),0);
  if ((uVar4 & 1) == 0) {
    if (*(int *)(DAT_0918bdc0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar7 = *(undefined8 *)(*(long *)(DAT_0918bdc0 + 0xb8) + 0x28);
    if (*(int *)(DAT_0918bd60 + 0xe4) == 0) {
      FUN_03f5c424(DAT_0918bd60);
    }
    uVar4 = System_TimeSpan__op_LessThan(uVar3,uVar7,0);
    if ((uVar4 & 1) == 0) goto LAB_07510ebc;
    if (*(int *)(DAT_0918bdc0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    iVar2 = *(int *)(DAT_0918bd60 + 0xe4);
    uVar6 = *(undefined8 *)(*(long *)(DAT_0918bdc0 + 0xb8) + 0x28);
  }
  else {
    if (*(int *)(DAT_0918bdc0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    iVar2 = *(int *)(DAT_0918bd60 + 0xe4);
    uVar6 = *(undefined8 *)(*(long *)(DAT_0918bdc0 + 0xb8) + 0x20);
  }
  if (iVar2 == 0) {
    FUN_03f5c424(DAT_0918bd60);
  }
  uVar6 = System_TimeSpan__op_Subtraction(uVar6,uVar3,0);
LAB_07510ebc:
  if (*(int *)(DAT_0918bd60 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar4 = System_TimeSpan__op_Inequality(uVar6,**(undefined8 **)(DAT_0918bd60 + 0xb8),0);
  if ((uVar4 & 1) == 0) {
    return;
  }
  lVar5 = *param_2;
  if (lVar5 != 0) {
    uStack_58 = *(undefined8 *)(lVar5 + 0x30);
    local_60 = *(undefined8 *)(lVar5 + 0x28);
    local_50 = *(undefined8 *)(lVar5 + 0x38);
    uVar3 = *(undefined8 *)(lVar5 + 0x10);
    uVar7 = *(undefined8 *)(lVar5 + 0x18);
    uVar8 = *(undefined8 *)(lVar5 + 0x20);
    uStack_78 = *(undefined8 *)(lVar5 + 0x48);
    local_80 = *(undefined8 *)(lVar5 + 0x40);
    local_70 = *(undefined8 *)(lVar5 + 0x50);
    uVar1 = *(undefined8 *)(lVar5 + 0x58);
    if (*(int *)(DAT_0918bd60 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar6 = System_TimeSpan__op_Addition(uVar1,uVar6,0);
    if (*param_2 != 0) {
      uStack_98 = uStack_58;
      local_a0 = local_60;
      local_90 = local_50;
      uStack_b8 = uStack_78;
      local_c0 = local_80;
      local_b0 = local_70;
      lVar5 = System_TimeZoneInfo_AdjustmentRule__CreateAdjustmentRule
                        (uVar3,uVar7,uVar8,&local_a0,&local_c0,uVar6,
                         *(undefined1 *)(*param_2 + 0x60));
      *param_2 = lVar5;
      thunk_FUN_03f5d7b8(param_2,lVar5);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

