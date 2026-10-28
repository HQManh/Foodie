// rea decompile_all
// name: System.DateTime$$TryCreate
// address: 0x75984cc
// body: available
// range: 0x75984cc-0x75986bb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x75986b4 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75986b8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4
System_DateTime__TryCreate
          (int param_1,uint param_2,int param_3,uint param_4,uint param_5,uint param_6,uint param_7,
          undefined8 *param_8)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  undefined8 local_58;
  
  if ((DAT_09521bc0 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09183548);
    DAT_09521bc0 = 1;
  }
  if (*(int *)(DAT_09183548 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  *param_8 = *(undefined8 *)(*(long *)(DAT_09183548 + 0xb8) + 0x10);
  if ((param_1 - 1U < 9999) && (uVar1 = param_2 - 1, uVar1 < 0xc)) {
    if (*(int *)(DAT_09183548 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar2 = System_DateTime__IsLeapYear(param_1);
    if ((uVar2 & 1) == 0) {
      if (*(int *)(DAT_09183548 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      plVar4 = *(long **)(DAT_09183548 + 0xb8);
    }
    else {
      if (*(int *)(DAT_09183548 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      plVar4 = (long *)(*(long *)(DAT_09183548 + 0xb8) + 8);
    }
    if (0 < param_3) {
      lVar5 = *plVar4;
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      if ((*(uint *)(lVar5 + 0x18) <= param_2) || (*(uint *)(lVar5 + 0x18) <= uVar1)) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      if (999 < param_7) {
        return 0;
      }
      if (0x3b < param_6) {
        return 0;
      }
      if (0x3b < param_5) {
        return 0;
      }
      if (0x17 < param_4) {
        return 0;
      }
      if (*(int *)(lVar5 + 0x20 + (ulong)param_2 * 4) - *(int *)(lVar5 + 0x20 + (ulong)uVar1 * 4) <
          param_3) {
        return 0;
      }
      if (*(int *)(DAT_09183548 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar5 = System_DateTime__DateToTicks(param_1,param_2,param_3);
      lVar3 = System_DateTime__TimeToTicks(param_4,param_5,param_6);
      uVar2 = lVar5 + (ulong)param_7 * 10000 + lVar3;
      if (uVar2 < 0x2bca2875f4374000) {
        local_58 = 0;
        System_DateTime___ctor(&local_58,uVar2,0);
        *param_8 = local_58;
        return 1;
      }
    }
  }
  return 0;
}

