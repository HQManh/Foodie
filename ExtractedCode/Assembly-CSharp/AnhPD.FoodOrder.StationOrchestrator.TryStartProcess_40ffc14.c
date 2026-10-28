// rea decompile_all
// name: AnhPD.FoodOrder.StationOrchestrator$$TryStartProcess
// address: 0x40ffc14
// body: available
// range: 0x40ffc14-0x40ffdf7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40ffdec to 0x4104774 AnhPD.FoodOrder.AutoProcessor$$StartProcess (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x40ffdf0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40ffdf4 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_StationOrchestrator__TryStartProcess(long param_1,ulong param_2)

{
  undefined8 uVar1;
  uint uVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  float fVar9;
  
  if ((DAT_09516186 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180e78);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091d9ff8);
    DAT_09516186 = 1;
  }
  if ((param_2 & 0x8000000080000000) != 0) {
    return;
  }
  lVar6 = *(long *)(param_1 + 0x10);
  if (lVar6 != 0) {
    if (*(char *)(lVar6 + 0x10) != '\0') {
      return;
    }
    lVar7 = *(long *)(param_1 + 0x18);
    if (lVar7 != 0) {
      if (*(uint *)(lVar7 + 0x18) <= (uint)param_2) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      lVar7 = *(long *)(lVar7 + (param_2 & 0x7fffffff) * 8 + 0x20);
      if (lVar7 != 0) {
        if (*(int *)(lVar7 + 0x18) == 0) {
          if (*(int *)(lVar7 + 0x3c) < 1) {
            return;
          }
        }
        else {
          if (*(long *)(lVar7 + 0x10) == 0) goto LAB_040ffdf0;
          if (*(int *)(lVar7 + 0x3c) < *(int *)(*(long *)(lVar7 + 0x10) + 0x18)) {
            return;
          }
        }
        *(ulong *)(lVar6 + 0x14) = param_2;
        lVar8 = *(long *)(param_1 + 0x48);
        *(undefined1 *)(lVar6 + 0x10) = 1;
        if (lVar8 != 0) {
          (**(code **)(lVar8 + 0x18))(*(undefined8 *)(lVar8 + 0x40),1,*(undefined8 *)(lVar8 + 0x28))
          ;
        }
        plVar3 = (long *)AnhPD_FoodOrder_StationInteractGroup__get_View(lVar7);
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424(DAT_09188ad0);
        }
        uVar4 = UnityEngine_Object__op_Implicit(plVar3,0);
        if ((uVar4 & 1) != 0) {
          if ((*(long *)(param_1 + 0x20) == 0) || (plVar3 == (long *)0x0)) goto LAB_040ffdf0;
          fVar9 = (float)(**(code **)(*plVar3 + 0x1a8))
                                   (*(undefined4 *)(*(long *)(param_1 + 0x20) + 0x10),plVar3,
                                    *(undefined8 *)(*plVar3 + 0x1b0));
          if (0.0 < fVar9) {
            if (*(long *)(param_1 + 0x20) == 0) goto LAB_040ffdf0;
            *(float *)(*(long *)(param_1 + 0x20) + 0x10) = fVar9;
          }
        }
        if (*(long *)(param_1 + 0x20) != 0) {
          uVar2 = *(uint *)(*(long *)(param_1 + 0x20) + 0x10);
          plVar3 = (long *)AnhPD_FoodOrder_StationInteractGroup__get_View(lVar7);
          if (plVar3 != (long *)0x0) {
            (**(code **)(*plVar3 + 0x218))
                      (plVar3,(ulong)uVar2 << 0x20 | 1,*(undefined8 *)(*plVar3 + 0x220));
          }
          lVar6 = *(long *)(param_1 + 0x20);
          uVar1 = *(undefined8 *)(param_1 + 0x28);
          uVar5 = thunk_FUN_03f9944c(DAT_09180e78);
          System_Action___ctor(uVar5,param_1,DAT_091d9ff8,0);
          if (lVar6 != 0) {
            AnhPD_FoodOrder_AutoProcessor__StartProcess(lVar6,uVar1,uVar5);
            return;
          }
        }
      }
    }
  }
LAB_040ffdf0:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

