// rea decompile_all
// name: CookingGraph.Execution.CookingExecution$$UnitsAt
// address: 0x4493d2c
// body: available
// range: 0x4493d2c-0x4493e63 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4493e60 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CookingGraph_Execution_CookingExecution__UnitsAt(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  
  if ((DAT_095181b0 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c0038);
    FUN_03f5c2a4(&DAT_091c0138);
    FUN_03f5c2a4(&DAT_0919c890);
    FUN_03f5c2a4(&DAT_091ac108);
    DAT_095181b0 = 1;
  }
  local_48 = 0;
  if (*(long *)(param_1 + 0x10) != 0) {
    uStack_38 = param_2[1];
    local_40 = *param_2;
    local_30 = param_2[2];
    uVar1 = FUN_06e88030(*(long *)(param_1 + 0x10),&local_40,&local_48,DAT_0919c890);
    lVar3 = DAT_091c0138;
    if ((uVar1 & 1) == 0) {
      lVar4 = *(long *)(DAT_091c0138 + 0x38);
      if (lVar4 == 0) {
        FUN_03f95ac8(DAT_091c0138);
        lVar4 = *(long *)(lVar3 + 0x38);
      }
      lVar4 = *(long *)(lVar4 + 0x10);
      if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_03f95a6c();
      }
      if (*(int *)(lVar4 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar3 = *(long *)(*(long *)(lVar3 + 0x38) + 0x10);
      if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_03f95a6c();
      }
      uVar2 = **(undefined8 **)(lVar3 + 0xb8);
    }
    else {
      if ((local_48 == 0) || (*(long *)(local_48 + 0x18) == 0)) goto LAB_04493e60;
      uVar2 = FUN_0574a164(*(long *)(local_48 + 0x18),DAT_091ac108);
    }
    FUN_04df18ec(uVar2,DAT_091c0038);
    return;
  }
LAB_04493e60:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

