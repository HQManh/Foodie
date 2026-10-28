// rea decompile_all
// name: System.Runtime.Remoting.Activation.ConstructionLevelActivator$$Activate
// address: 0x749b1e4
// body: available
// range: 0x749b1e4-0x749b2d3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x749b2c4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x749b2d0 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Runtime_Remoting_Activation_ConstructionLevelActivator__Activate
               (undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  
  if ((DAT_09521350 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09185860);
    FUN_03f5c2a4(&DAT_09186090);
    DAT_09521350 = 1;
  }
  lVar2 = System_Threading_Thread__get_CurrentContext(0);
  if ((lVar2 == 0) ||
     (plVar3 = (long *)System_Runtime_Remoting_Contexts_Context__GetServerContextSinkChain(),
     plVar3 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  lVar2 = *plVar3;
  uVar6 = (ulong)*(ushort *)(lVar2 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == DAT_09186090) {
        puVar4 = (undefined8 *)(lVar2 + (long)*piVar7 * 0x10 + 0x138);
        goto LAB_0749b288;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar4 = (undefined8 *)FUN_03f95da8(plVar3,DAT_09186090,0);
LAB_0749b288:
  lVar2 = (*(code *)*puVar4)(plVar3,param_2,puVar4[1]);
  uVar1 = DAT_09185860;
  if (lVar2 != 0) {
    lVar5 = thunk_FUN_03f99350(lVar2,DAT_09185860);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c8d0(lVar2,uVar1);
    }
  }
  return;
}

