// rea decompile_all
// name: Cysharp.Threading.Tasks.Triggers.AsyncTriggerEnterTrigger$$OnTriggerEnterAsync
// address: 0x7dc3008
// body: available
// range: 0x7dc3008-0x7dc3113 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7dc3110 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Cysharp_Threading_Tasks_Triggers_AsyncTriggerEnterTrigger__OnTriggerEnterAsync
               (undefined8 *param_1,undefined8 param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  if ((DAT_095260f7 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09199488);
    FUN_03f5c2a4(&DAT_09175328);
    FUN_03f5c2a4(&DAT_091855b0);
    DAT_095260f7 = 1;
  }
  plVar1 = (long *)thunk_FUN_03f9944c(DAT_09175328);
  FUN_06a9b6a8(plVar1,param_2,1,DAT_09199488);
  if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  lVar3 = *plVar1;
  uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == DAT_091855b0) {
        puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
        goto LAB_07dc30dc;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  puVar2 = (undefined8 *)FUN_03f95da8(plVar1,DAT_091855b0,0);
LAB_07dc30dc:
  (*(code *)*puVar2)(&local_48,plVar1,puVar2[1]);
  param_1[1] = uStack_40;
  *param_1 = local_48;
  param_1[2] = local_38;
  return;
}

