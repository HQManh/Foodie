// rea decompile_all
// name: CakeOrder.Home.UIHomeNavControl$$Update
// address: 0x4301240
// body: available
// range: 0x4301240-0x43014e3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x43014a0 to 0x866c2d0 UnityEngine.RectTransform$$SetSizeWithCurrentAnchors (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x43014dc to 0x43009f0 CakeOrder.Home.UIHomeNavControl$$ParkHighlight (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x43014e0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_Home_UIHomeNavControl__Update
               (undefined1 param_1 [16],float param_2,float param_3,long param_4)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  if ((DAT_09517547 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09189c30);
    DAT_09517547 = 1;
  }
  uVar3 = *(undefined8 *)(param_4 + 0xa8);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = UnityEngine_Object__op_Equality(uVar3,0,0);
  if ((uVar1 & 1) != 0) {
    return;
  }
  if (*(long *)(param_4 + 0xb0) != 0) {
    fVar4 = (float)UnityEngine_Transform__get_position(*(long *)(param_4 + 0xb0),0);
    if ((*(long *)(param_4 + 0xa8) != 0) &&
       (lVar2 = *(long *)(*(long *)(param_4 + 0xa8) + 0xb8), lVar2 != 0)) {
      fVar7 = param_2;
      fVar5 = (float)UnityEngine_Transform__get_position(lVar2,0);
      fVar11 = fVar5 - fVar4;
      fVar10 = fVar7 - param_2;
      fVar12 = param_3 - param_3;
      if (fVar12 * fVar12 + fVar11 * fVar11 + fVar10 * fVar10 <= 0.0001) {
LAB_043014bc:
        CakeOrder_Home_UIHomeNavControl__ParkHighlight(param_4);
        return;
      }
      fVar6 = 1.0;
      if (0.0 < *(float *)(param_4 + 0x90)) {
        fVar6 = (float)UnityEngine_Time__get_unscaledDeltaTime(0);
        fVar6 = expf((fVar6 * -4.0) / *(float *)(param_4 + 0x90));
        fVar6 = 1.0 - fVar6;
      }
      lVar2 = *(long *)(param_4 + 0xb0);
      fVar8 = 1.0;
      if (fVar6 <= 1.0) {
        fVar8 = fVar6;
      }
      fVar9 = 0.0;
      if (0.0 <= fVar6) {
        fVar9 = fVar8;
      }
      fVar12 = param_3 + fVar12 * fVar9;
      fVar4 = fVar5 - (fVar4 + fVar11 * fVar9);
      fVar10 = fVar7 - (param_2 + fVar10 * fVar9);
      if ((param_3 - fVar12) * (param_3 - fVar12) + fVar4 * fVar4 + fVar10 * fVar10 <= 0.0001) {
        if (lVar2 != 0) {
          UnityEngine_Transform__set_position(fVar5,fVar7,param_3,lVar2,0);
          goto LAB_043014bc;
        }
      }
      else if (lVar2 != 0) {
        UnityEngine_Transform__set_position(lVar2,0);
        if ((*(long *)(param_4 + 0xa8) != 0) &&
           (lVar2 = *(long *)(*(long *)(param_4 + 0xa8) + 0xb8), lVar2 != 0)) {
          UnityEngine_RectTransform__get_rect(lVar2,0);
          fVar4 = fVar12;
          if (*(int *)(DAT_09189c30 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          fVar7 = (float)UnityEngine_Transform__get_lossyScale(lVar2,0);
          if (*(long *)(param_4 + 0xb0) != 0) {
            fVar5 = (float)UnityEngine_Transform__get_lossyScale(*(long *)(param_4 + 0xb0),0);
            lVar2 = *(long *)(param_4 + 0xb0);
            if (lVar2 != 0) {
              if (fVar5 <= 0.0001) {
                fVar5 = 0.0001;
              }
              UnityEngine_RectTransform__get_rect(lVar2,0);
              UnityEngine_RectTransform__SetSizeWithCurrentAnchors
                        (fVar4 + fVar9 * ((fVar12 * fVar7) / fVar5 - fVar4),lVar2,0,0);
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

