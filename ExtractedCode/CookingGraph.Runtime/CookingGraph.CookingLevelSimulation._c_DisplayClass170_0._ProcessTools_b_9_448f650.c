// rea decompile_all
// name: CookingGraph.CookingLevelSimulation.<>c__DisplayClass170_0$$<ProcessTools>b__9
// address: 0x448f650
// body: available
// range: 0x448f650-0x448f767 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x448f764 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CookingGraph_CookingLevelSimulation_<>c__DisplayClass170_0__<ProcessTools>b__9
               (undefined8 *param_1,long param_2,undefined4 param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  ulong uVar3;
  int *piVar4;
  long lVar5;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  if ((DAT_0951815c & 1) == 0) {
    FUN_03f5c2a4(&DAT_0917b4c0);
    DAT_0951815c = 1;
  }
  if (*(long *)(param_2 + 0x18) != 0) {
    lVar5 = *(long *)(*(long *)(param_2 + 0x18) + 0x178);
    CookingGraph_CookingLevelSimulation__ToolAddress
              (&local_48,*(undefined4 *)(param_2 + 0x10),param_3,0);
    if (lVar5 != 0) {
      uStack_58 = uStack_40;
      local_60 = local_48;
      local_50 = local_38;
      plVar1 = (long *)CookingGraph_Execution_CookingExecution__UnitsAt(lVar5,&local_60,0);
      if (plVar1 != (long *)0x0) {
        lVar5 = *plVar1;
        uVar3 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar3 != 0) {
          piVar4 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar4 + -2) == DAT_0917b4c0) {
              puVar2 = (undefined8 *)(lVar5 + (long)*piVar4 * 0x10 + 0x138);
              goto LAB_0448f72c;
            }
            uVar3 = uVar3 - 1;
            piVar4 = piVar4 + 4;
          } while (uVar3 != 0);
        }
        puVar2 = (undefined8 *)FUN_03f95da8(plVar1,DAT_0917b4c0,0);
LAB_0448f72c:
        (*(code *)*puVar2)(&local_78,plVar1,0,puVar2[1]);
        param_1[1] = uStack_70;
        *param_1 = local_78;
        param_1[2] = local_68;
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

