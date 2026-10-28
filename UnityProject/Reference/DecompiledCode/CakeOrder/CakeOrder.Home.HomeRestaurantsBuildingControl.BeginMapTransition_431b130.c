// rea decompile_all
// name: CakeOrder.Home.HomeRestaurantsBuildingControl$$BeginMapTransition
// address: 0x431b130
// body: available
// range: 0x431b130-0x431b2b3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x431b298 to 0x431a100 CakeOrder.Home.HomeMapTransitionFog$$ShowForTransition (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x431b2b0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_Home_HomeRestaurantsBuildingControl__BeginMapTransition(long param_1,int param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  int iVar4;
  float fVar5;
  undefined4 uVar6;
  float fVar7;
  
  if ((DAT_09517626 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09517626 = 1;
  }
  iVar4 = *(int *)(param_1 + 100);
  if (iVar4 != param_2) {
    if (*(int *)(param_1 + 0x6c) == param_2) {
      uVar6 = *(undefined4 *)(param_1 + 0x70);
      *(int *)(param_1 + 0x6c) = iVar4;
      *(int *)(param_1 + 100) = param_2;
      *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_1 + 0x68);
      *(undefined4 *)(param_1 + 0x68) = uVar6;
    }
    else {
      fVar7 = *(float *)(param_1 + 0x68);
      if (-1 < *(int *)(param_1 + 0x6c)) {
        uVar3 = *(undefined8 *)(param_1 + 0x30);
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar2 = UnityEngine_Object__op_Implicit(uVar3,0);
        if ((uVar2 & 1) != 0) {
          if ((*(long *)(param_1 + 0x30) == 0) ||
             (lVar1 = UnityEngine_Component__get_transform(*(long *)(param_1 + 0x30),0), lVar1 == 0)
             ) goto LAB_0431b2b0;
          fVar5 = (float)UnityEngine_Transform__get_position(lVar1,0);
          fVar5 = fVar5 - (*(float *)(param_1 + 0x38) + *(float *)(param_1 + 0x7c));
          if (ABS(fVar5 - *(float *)(param_1 + 0x70)) < ABS(fVar5 - *(float *)(param_1 + 0x68))) {
            iVar4 = *(int *)(param_1 + 0x6c);
            fVar7 = *(float *)(param_1 + 0x70);
          }
        }
      }
      *(int *)(param_1 + 0x6c) = iVar4;
      *(float *)(param_1 + 0x70) = fVar7;
      *(int *)(param_1 + 100) = param_2;
      fVar5 = -*(float *)(param_1 + 0x50);
      if (-1 < param_2 - iVar4) {
        fVar5 = *(float *)(param_1 + 0x50);
      }
      *(float *)(param_1 + 0x68) = fVar7 + fVar5;
    }
    CakeOrder_Home_HomeRestaurantsBuildingControl__ApplyBuildingLayout(param_1);
    uVar3 = *(undefined8 *)(param_1 + 0x58);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar2 = UnityEngine_Object__op_Implicit(uVar3,0);
    if (((uVar2 & 1) != 0) && (-1 < *(int *)(param_1 + 0x6c))) {
      if (*(long *)(param_1 + 0x58) != 0) {
        CakeOrder_Home_HomeMapTransitionFog__ShowForTransition();
        return;
      }
LAB_0431b2b0:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
  }
  return;
}

