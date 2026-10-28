// rea decompile_all
// name: CookingGraph.Execution.CookingExecution$$RemoveSource
// address: 0x449bc40
// body: available
// range: 0x449bc40-0x449bd8f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x449bd8c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CookingGraph_Execution_CookingExecution__RemoveSource(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  
  if ((DAT_095181cb & 1) == 0) {
    FUN_03f5c2a4(&DAT_0919c898);
    FUN_03f5c2a4(&DAT_091ac0f8);
    FUN_03f5c2a4(&DAT_0917df88);
    FUN_03f5c2a4(&DAT_091e6d68);
    FUN_03f5c2a4(&DAT_0918ef88);
    DAT_095181cb = 1;
  }
  lVar1 = thunk_FUN_03f9944c(DAT_0918ef88);
  System_Object___ctor(lVar1,0);
  if (lVar1 != 0) {
    plVar4 = (long *)(lVar1 + 0x10);
    *plVar4 = param_2;
    thunk_FUN_03f5d7b8(plVar4,param_2);
    lVar3 = *plVar4;
    if (lVar3 != 0) {
      if (*(char *)(lVar3 + 0x98) != '\0') {
        return;
      }
      if (*(long *)(param_1 + 0x10) != 0) {
        uStack_48 = *(undefined8 *)(lVar3 + 0x38);
        local_50 = *(undefined8 *)(lVar3 + 0x30);
        local_40 = *(undefined8 *)(lVar3 + 0x40);
        lVar3 = FUN_06e860c0(*(long *)(param_1 + 0x10),&local_50,DAT_0919c898);
        if (lVar3 != 0) {
          lVar3 = *(long *)(lVar3 + 0x18);
          uVar2 = thunk_FUN_03f9944c(DAT_0917df88);
          FUN_05d75e70(uVar2,lVar1,DAT_091e6d68,0);
          if (lVar3 != 0) {
            FUN_05749c70(lVar3,uVar2,DAT_091ac0f8);
            if (*plVar4 != 0) {
              *(undefined1 *)(*plVar4 + 0x98) = 1;
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

