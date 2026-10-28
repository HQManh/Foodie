// rea decompile_all
// name: CookingGraph.Execution.CookingExecution$$Consume
// address: 0x44992f0
// body: available
// range: 0x44992f0-0x449948b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4499488 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
CookingGraph_Execution_CookingExecution__Consume
          (long param_1,undefined8 *param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  long local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  
  if ((DAT_095181b3 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0919c890);
    FUN_03f5c2a4(&DAT_091a8318);
    FUN_03f5c2a4(&DAT_091a8330);
    FUN_03f5c2a4(&DAT_091ac0f8);
    FUN_03f5c2a4(&DAT_0917df88);
    FUN_03f5c2a4(&DAT_091e6ca0);
    FUN_03f5c2a4(&DAT_0918ef10);
    DAT_095181b3 = 1;
  }
  local_58 = 0;
  lVar2 = thunk_FUN_03f9944c(DAT_0918ef10);
  System_Object___ctor(lVar2,0);
  if (lVar2 != 0) {
    lVar3 = *(long *)(param_1 + 0x28);
    *(undefined8 *)(lVar2 + 0x10) = param_3;
    if (lVar3 != 0) {
      uVar4 = FUN_053e1824(lVar3,param_3,DAT_091a8318);
      if ((uVar4 & 1) != 0) {
        return 0;
      }
      if (*(long *)(param_1 + 0x10) != 0) {
        uStack_48 = param_2[1];
        local_50 = *param_2;
        local_40 = param_2[2];
        uVar4 = FUN_06e88030(*(long *)(param_1 + 0x10),&local_50,&local_58,DAT_0919c890);
        if ((uVar4 & 1) == 0) {
          return 0;
        }
        if (local_58 != 0) {
          lVar3 = *(long *)(local_58 + 0x18);
          uVar5 = thunk_FUN_03f9944c(DAT_0917df88);
          FUN_05d75e70(uVar5,lVar2,DAT_091e6ca0,0);
          if (lVar3 != 0) {
            iVar1 = FUN_05749c70(lVar3,uVar5,DAT_091ac0f8);
            if (iVar1 != 1) {
              return 0;
            }
            if (*(long *)(param_1 + 0x30) != 0) {
              FUN_053e19f4(*(long *)(param_1 + 0x30),*(undefined8 *)(lVar2 + 0x10),DAT_091a8330);
              return 1;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

