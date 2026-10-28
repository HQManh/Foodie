// rea decompile_all
// name: CookingGraph.CookingLevelSimulation.<>c__DisplayClass170_0$$<ProcessTools>b__7
// address: 0x448f4d4
// body: available
// range: 0x448f4d4-0x448f64f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x448f648 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x448f64c to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
CookingGraph_CookingLevelSimulation_<>c__DisplayClass170_0__<ProcessTools>b__7
          (long param_1,uint param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  ulong uVar3;
  int *piVar4;
  long lVar5;
  undefined1 auStack_78 [8];
  undefined4 local_70;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_28;
  
  if ((DAT_0951815b & 1) == 0) {
    FUN_03f5c2a4(&DAT_0917b4c0);
    FUN_03f5c2a4(&DAT_091bec98);
    DAT_0951815b = 1;
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    lVar5 = *(long *)(*(long *)(param_1 + 0x18) + 0x178);
    CookingGraph_CookingLevelSimulation__ToolAddress
              (&local_40,*(undefined4 *)(param_1 + 0x10),param_2,0);
    if (lVar5 != 0) {
      uStack_58 = uStack_38;
      local_60 = local_40;
      local_50 = local_30;
      plVar1 = (long *)CookingGraph_Execution_CookingExecution__UnitsAt(lVar5,&local_60,0);
      if (plVar1 != (long *)0x0) {
        lVar5 = *plVar1;
        uVar3 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar3 != 0) {
          piVar4 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar4 + -2) == DAT_0917b4c0) {
              puVar2 = (undefined8 *)(lVar5 + (long)*piVar4 * 0x10 + 0x138);
              goto LAB_0448f5b4;
            }
            uVar3 = uVar3 - 1;
            piVar4 = piVar4 + 4;
          } while (uVar3 != 0);
        }
        puVar2 = (undefined8 *)FUN_03f95da8(plVar1,DAT_0917b4c0,0);
LAB_0448f5b4:
        (*(code *)*puVar2)(auStack_78,plVar1,0,puVar2[1]);
        if (((*(long *)(param_1 + 0x18) != 0) &&
            (lVar5 = *(long *)(*(long *)(param_1 + 0x18) + 0x78), lVar5 != 0)) &&
           (lVar5 = *(long *)(lVar5 + 0x20), lVar5 != 0)) {
          if (*(uint *)(param_1 + 0x10) < *(uint *)(lVar5 + 0x18)) {
            lVar5 = *(long *)(lVar5 + (long)(int)*(uint *)(param_1 + 0x10) * 8 + 0x20);
            if ((lVar5 == 0) || (lVar5 = *(long *)(lVar5 + 0x10), lVar5 == 0)) goto LAB_0448f648;
            if (param_2 < *(uint *)(lVar5 + 0x18)) {
              local_28 = 0;
              FUN_066c1fdc(&local_28,local_70,*(undefined4 *)(lVar5 + (long)(int)param_2 * 8 + 0x20)
                           ,DAT_091bec98);
              return local_28;
            }
          }
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
      }
    }
  }
LAB_0448f648:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

