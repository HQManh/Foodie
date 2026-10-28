// rea decompile_all
// name: System.Text.EncodingHelper$$InvokeI18N
// address: 0x744de40
// body: available
// range: 0x744de40-0x744e0d7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x744e0cc to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x744e0d0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x744e0d4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0744e0cc) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 System_Text_EncodingHelper__InvokeI18N(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  char local_34 [4];
  
  if ((DAT_09521104 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09183fc0);
    FUN_03f5c2a4(&DAT_0920ad78);
    FUN_03f5c2a4(&DAT_092041c8);
    FUN_03f5c2a4(&DAT_092041c0);
    DAT_09521104 = 1;
  }
  local_34[0] = '\0';
  if (*(int *)(DAT_09183fc0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  local_34[0] = '\0';
  uVar1 = *(undefined8 *)(*(long *)(DAT_09183fc0 + 0xb8) + 8);
  System_Threading_Monitor__Enter(uVar1,local_34,0);
  if (*(int *)(DAT_09183fc0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar5 = *(long *)(DAT_09183fc0 + 0xb8);
  if (*(char *)(lVar5 + 0x18) == '\0') {
    if (*(int *)(DAT_09183fc0 + 0xe4) == 0) {
      FUN_03f5c424();
      lVar5 = *(long *)(DAT_09183fc0 + 0xb8);
    }
    uVar2 = System_Reflection_Assembly__op_Equality(*(undefined8 *)(lVar5 + 0x10),0,0);
    if ((uVar2 & 1) != 0) {
      uVar6 = System_Reflection_Assembly__Load(DAT_092041c0,0);
      if (*(int *)(DAT_09183fc0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      puVar3 = (undefined8 *)(*(long *)(DAT_09183fc0 + 0xb8) + 0x10);
      *puVar3 = uVar6;
      thunk_FUN_03f5d7b8(puVar3,uVar6);
      if (*(int *)(DAT_09183fc0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar2 = System_Reflection_Assembly__op_Equality
                        (*(undefined8 *)(*(long *)(DAT_09183fc0 + 0xb8) + 0x10),0,0);
      if ((uVar2 & 1) != 0) goto LAB_0744df10;
    }
    if (*(int *)(DAT_09183fc0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    plVar4 = *(long **)(*(long *)(DAT_09183fc0 + 0xb8) + 0x10);
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    plVar4 = (long *)(**(code **)(*plVar4 + 0x288))
                               (plVar4,DAT_092041c8,*(undefined8 *)(*plVar4 + 0x290));
    if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar2 = System_Type__op_Equality(plVar4,0,0);
    if ((uVar2 & 1) == 0) {
      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar5 = (**(code **)(*plVar4 + 0x8b8))
                        (plVar4,DAT_0920ad78,0x1018,0,0,0,0,0,0,*(undefined8 *)(*plVar4 + 0x8c0));
      if (lVar5 != 0) {
        uVar6 = (**(code **)(*plVar4 + 0x8b8))
                          (plVar4,param_1,0x114,0,lVar5,param_2,0,0,0,
                           *(undefined8 *)(*plVar4 + 0x8c0));
        goto LAB_0744df14;
      }
    }
  }
LAB_0744df10:
  uVar6 = 0;
LAB_0744df14:
  if (local_34[0] != '\0') {
    System_Threading_Monitor__Exit(uVar1,0);
  }
  return uVar6;
}

