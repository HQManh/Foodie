// rea decompile_all
// name: AnhPD.FoodOrder.TutorialFocusCanvasView$$SetupStencil
// address: 0x4122b84
// body: available
// range: 0x4122b84-0x4122df7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4122ddc to 0x86700ac UnityEngine.Transform$$SetAsFirstSibling (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x4122df4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_TutorialFocusCanvasView__SetupStencil(long param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  
  if ((DAT_095162a6 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09187e28);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09216498);
    FUN_03f5c2a4(&DAT_09216490);
    FUN_03f5c2a4(&DAT_09211480);
    FUN_03f5c2a4(&DAT_092164b0);
    FUN_03f5c2a4(&DAT_092116e0);
    FUN_03f5c2a4(&DAT_092168b8);
    FUN_03f5c2a4(&DAT_09214e30);
    DAT_095162a6 = 1;
  }
  uVar1 = UnityEngine_Shader__Find(DAT_09211480,0);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424(DAT_09188ad0);
  }
  uVar2 = UnityEngine_Object__op_Implicit(uVar1,0);
  if ((uVar2 & 1) != 0) {
    lVar3 = thunk_FUN_03f9944c(DAT_09187e28);
    UnityEngine_Material___ctor(lVar3,uVar1,0);
    if (lVar3 != 0) {
      UnityEngine_Material__SetInt(lVar3,DAT_09216490,1,0);
      UnityEngine_Material__SetInt(lVar3,DAT_09216498,8,0);
      UnityEngine_Material__SetInt(lVar3,DAT_092164b0,2,0);
      UnityEngine_Material__SetInt(lVar3,DAT_09214e30,0,0);
      UnityEngine_Material__SetInt(lVar3,DAT_092168b8,1,0);
      UnityEngine_Material__EnableKeyword(lVar3,DAT_092116e0,0);
      plVar4 = *(long **)(param_1 + 0x28);
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x348))(plVar4,lVar3,*(undefined8 *)(*plVar4 + 0x350));
        lVar3 = thunk_FUN_03f9944c(DAT_09187e28);
        UnityEngine_Material___ctor(lVar3,uVar1,0);
        if (lVar3 != 0) {
          UnityEngine_Material__SetInt(lVar3,DAT_09216490,1,0);
          UnityEngine_Material__SetInt(lVar3,DAT_09216498,6,0);
          UnityEngine_Material__SetInt(lVar3,DAT_092164b0,0,0);
          plVar4 = *(long **)(param_1 + 0x20);
          if (plVar4 != (long *)0x0) {
            (**(code **)(*plVar4 + 0x348))(plVar4,lVar3,*(undefined8 *)(*plVar4 + 0x350));
            if ((*(long *)(param_1 + 0x28) != 0) &&
               (lVar3 = UnityEngine_Component__get_transform(*(long *)(param_1 + 0x28),0),
               lVar3 != 0)) {
              UnityEngine_Transform__SetAsFirstSibling(lVar3,0);
              return;
            }
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  return;
}

