// rea decompile_all
// name: CookingGraph.Execution.CookingExecution$$RemoveGridAssembly
// address: 0x449a294
// body: available
// range: 0x449a294-0x449a4a3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x449a49c to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x449a4a0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CookingGraph_Execution_CookingExecution__RemoveGridAssembly(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  
  if ((DAT_095181b8 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0919c860);
    FUN_03f5c2a4(&DAT_091c9538);
    FUN_03f5c2a4(&DAT_091c9540);
    FUN_03f5c2a4(&DAT_09179320);
    FUN_03f5c2a4(&DAT_09179330);
    FUN_03f5c2a4(&DAT_091e6cc0);
    FUN_03f5c2a4(&DAT_091e6cc8);
    FUN_03f5c2a4(&DAT_0918ef28);
    DAT_095181b8 = 1;
  }
  lVar1 = thunk_FUN_03f9944c(DAT_0918ef28);
  System_Object___ctor(lVar1,0);
  if (lVar1 != 0) {
    puVar5 = (undefined8 *)(lVar1 + 0x10);
    *puVar5 = param_2;
    thunk_FUN_03f5d7b8(puVar5,param_2);
    uVar4 = *(undefined8 *)(param_1 + 0x38);
    uVar2 = thunk_FUN_03f9944c(DAT_09179320);
    FUN_05322d94(uVar2,lVar1,DAT_091e6cc0,0);
    uVar3 = FUN_04ab6f28(uVar4,uVar2,DAT_091c9538);
    if ((uVar3 & 1) == 0) {
      uVar4 = *(undefined8 *)(param_1 + 0x48);
      uVar2 = thunk_FUN_03f9944c(DAT_09179330);
      FUN_05322d94(uVar2,lVar1,DAT_091e6cc8,0);
      uVar3 = FUN_04ab6f28(uVar4,uVar2,DAT_091c9540);
      if ((uVar3 & 1) == 0) {
        lVar1 = *(long *)(param_1 + 0x18);
        local_78 = 0;
        uStack_70 = 0;
        local_68 = 0;
        CookingGraph_Execution_CookingEndpoint___ctor(&local_78,4,*puVar5,0,0);
        if (lVar1 != 0) {
          uStack_58 = uStack_70;
          local_60 = local_78;
          local_50 = local_68;
          FUN_06e87894(lVar1,&local_60,DAT_0919c860);
          return;
        }
        goto LAB_0449a4a0;
      }
    }
    thunk_FUN_03fc39d4(&DAT_091870e0);
    uVar2 = thunk_FUN_03f9944c();
    uVar4 = thunk_FUN_03fc39d4(&DAT_091fb8c0);
    System_InvalidOperationException___ctor(uVar2,uVar4,0);
    uVar4 = thunk_FUN_03fc39d4(&DAT_091c64a8);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar2,uVar4);
  }
LAB_0449a4a0:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

