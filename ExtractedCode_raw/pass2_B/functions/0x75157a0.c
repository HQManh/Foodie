// rea decompile_all
// name: System.TimeZoneInfo$$GetAdjustmentRuleForTime
// address: 0x75157a0
// body: available
// range: 0x75157a0-0x7515957 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7515950 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7515954 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
System_TimeZoneInfo__GetAdjustmentRuleForTime
          (long param_1,undefined8 param_2,uint param_3,undefined8 *param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  uint uVar9;
  int iVar10;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  
  local_58 = param_2;
  if ((DAT_09521706 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09183548);
    FUN_03f5c2a4(&DAT_091b6f98);
    DAT_09521706 = 1;
  }
  local_60 = 0;
  if ((*(long *)(param_1 + 0x40) != 0) && (*(long *)(*(long *)(param_1 + 0x40) + 0x18) != 0)) {
    if ((param_3 & 1) == 0) {
      if (*(int *)(DAT_09183548 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      puVar4 = &local_58;
    }
    else {
      uVar7 = *(undefined8 *)(param_1 + 0x30);
      if (*(int *)(DAT_09183548 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      local_60 = System_DateTime__op_Addition(param_2,uVar7,0);
      puVar4 = &local_60;
    }
    uVar7 = System_DateTime__get_Date(puVar4,0);
    if (*(long *)(param_1 + 0x40) == 0) {
LAB_07515954:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar9 = *(int *)(*(long *)(param_1 + 0x40) + 0x18) - 1;
    if (-1 < (int)uVar9) {
      iVar10 = 0;
LAB_07515884:
      do {
        lVar6 = *(long *)(param_1 + 0x40);
        if (lVar6 == 0) goto LAB_07515954;
        uVar1 = iVar10 + ((int)(uVar9 - iVar10) >> 1);
        if (*(uint *)(lVar6 + 0x18) <= uVar1) {
LAB_07515950:
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        uVar2 = uVar1 - 1;
        uVar8 = *(undefined8 *)(lVar6 + (long)(int)uVar1 * 8 + 0x20);
        uVar5 = uVar8;
        if (0 < (int)uVar1) {
          if (*(uint *)(lVar6 + 0x18) <= uVar2) goto LAB_07515950;
          uVar5 = *(undefined8 *)(lVar6 + (ulong)uVar2 * 8 + 0x20);
        }
        iVar3 = System_TimeZoneInfo__CompareAdjustmentRuleToDateTime
                          (param_1,uVar8,uVar5,local_58,uVar7,param_3 & 1);
        if (iVar3 == 0) {
          local_68 = 0;
          FUN_05c3078c(&local_68,uVar1,DAT_091b6f98);
          *param_4 = local_68;
          return uVar8;
        }
        if (iVar3 < 0) {
          iVar10 = uVar1 + 1;
          if ((int)uVar9 < iVar10) break;
          goto LAB_07515884;
        }
        uVar9 = uVar2;
      } while (iVar10 <= (int)uVar2);
    }
  }
  *param_4 = 0;
  return 0;
}

