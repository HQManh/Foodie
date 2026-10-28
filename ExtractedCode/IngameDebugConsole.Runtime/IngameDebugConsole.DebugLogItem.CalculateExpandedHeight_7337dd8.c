// rea decompile_all
// name: IngameDebugConsole.DebugLogItem$$CalculateExpandedHeight
// address: 0x7337dd8
// body: available
// range: 0x7337dd8-0x7337ee7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7337ee4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


float IngameDebugConsole_DebugLogItem__CalculateExpandedHeight
                (long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  long *plVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  
  plVar2 = *(long **)(param_1 + 0x38);
  if (plVar2 != (long *)0x0) {
    uVar3 = (**(code **)(*plVar2 + 0x5d8))(plVar2,*(undefined8 *)(*plVar2 + 0x5e0));
    if (*(long *)(param_1 + 0x38) != 0) {
      uVar1 = UnityEngine_UI_Text__get_horizontalOverflow(*(long *)(param_1 + 0x38),0);
      uStack_58 = param_3[1];
      local_60 = *param_3;
      local_50 = param_3[2];
      IngameDebugConsole_DebugLogItem__SetText(param_1,param_2,&local_60,1);
      if (*(long *)(param_1 + 0x38) != 0) {
        UnityEngine_UI_Text__set_horizontalOverflow(*(long *)(param_1 + 0x38),0,0);
        plVar2 = *(long **)(param_1 + 0x38);
        if (plVar2 != (long *)0x0) {
          fVar4 = (float)(**(code **)(*plVar2 + 0x658))(plVar2,*(undefined8 *)(*plVar2 + 0x660));
          plVar2 = *(long **)(param_1 + 0x38);
          if (plVar2 != (long *)0x0) {
            fVar5 = *(float *)(param_1 + 0x98);
            (**(code **)(*plVar2 + 0x5e8))(plVar2,uVar3,*(undefined8 *)(*plVar2 + 0x5f0));
            if (*(long *)(param_1 + 0x38) != 0) {
              UnityEngine_UI_Text__set_horizontalOverflow(*(long *)(param_1 + 0x38),uVar1,0);
              if (*(long *)(param_1 + 0xa0) != 0) {
                fVar4 = fVar4 + fVar5;
                fVar5 = *(float *)(*(long *)(param_1 + 0xa0) + 0x70);
                if (fVar5 <= fVar4) {
                  fVar5 = fVar4;
                }
                return fVar5;
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

