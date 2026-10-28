// rea decompile_all
// name: CookingGraph.Execution.CookingExecution$$SeedAssemblyBase
// address: 0x4499dd0
// body: available
// range: 0x4499dd0-0x4499fa7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4499f58 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4499fa0 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4499fa4 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CookingGraph_Execution_CookingExecution__SeedAssemblyBase
               (undefined8 param_1,undefined8 param_2,uint param_3)

{
  int iVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  int *piVar7;
  long *plVar8;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  long local_28;
  
  if ((DAT_095181b7 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0917b378);
    DAT_095181b7 = 1;
  }
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  local_28 = 0;
  CookingGraph_Execution_CookingEndpoint___ctor(&local_48,4,param_2,0,param_3);
  uStack_58 = uStack_40;
  local_60 = local_48;
  local_50 = local_38;
  uVar2 = CookingGraph_Execution_CookingExecution__TryDish(param_1,&local_60,&local_28);
  if ((uVar2 & 1) == 0) goto LAB_04499f5c;
  if ((local_28 != 0) && (lVar6 = *(long *)(local_28 + 0x10), lVar6 != 0)) {
    if (*(uint *)(lVar6 + 0x18) <= param_3) {
LAB_04499fa4:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
    lVar6 = *(long *)(lVar6 + (long)(int)param_3 * 8 + 0x20);
    if ((lVar6 != 0) && (plVar8 = *(long **)(lVar6 + 0x28), plVar8 != (long *)0x0)) {
      lVar6 = *plVar8;
      uVar2 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar2 != 0) {
        piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == DAT_0917b378) {
            puVar3 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_04499edc;
          }
          uVar2 = uVar2 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar2 != 0);
      }
      puVar3 = (undefined8 *)FUN_03f95da8(plVar8,DAT_0917b378,0);
LAB_04499edc:
      iVar1 = (*(code *)*puVar3)(plVar8,puVar3[1]);
      if (iVar1 != 0) {
LAB_04499f5c:
        thunk_FUN_03fc39d4(&DAT_09181548);
        uVar4 = thunk_FUN_03f9944c();
        uVar5 = thunk_FUN_03fc39d4(&DAT_091fb8b8);
        System_ArgumentException___ctor(uVar4,uVar5,0);
        uVar5 = thunk_FUN_03fc39d4(&DAT_091c64c0);
                    /* WARNING: Subroutine does not return */
        FUN_03f5c414(uVar4,uVar5);
      }
      if ((local_28 != 0) && (lVar6 = *(long *)(local_28 + 0x10), lVar6 != 0)) {
        if (*(uint *)(lVar6 + 0x18) <= param_3) goto LAB_04499fa4;
        lVar6 = *(long *)(lVar6 + (long)(int)param_3 * 8 + 0x20);
        if (lVar6 != 0) {
          if (*(double *)(lVar6 + 0x20) == 0.0) {
            *(undefined1 *)(local_28 + 0x20) = 1;
            uStack_78 = uStack_40;
            local_80 = local_48;
            local_70 = local_38;
            CookingGraph_Execution_CookingExecution__Fill(param_1,&local_80);
            return;
          }
          goto LAB_04499f5c;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

