// rea decompile_all
// name: CakeOrder.Home.Journey.UIJourneyProgressBar$$SetFillAtWorldY
// address: 0x435d890
// body: available
// range: 0x435d890-0x435d9bb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x435d9b0 to 0x435d720 CakeOrder.Home.Journey.UIJourneyProgressBar$$SetFillNormalized (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x435d9b4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x435d9b8 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_Home_Journey_UIJourneyProgressBar__SetFillAtWorldY(float param_1,long param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  if ((DAT_09517833 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_0918c430);
    DAT_09517833 = 1;
  }
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = UnityEngine_Object__op_Implicit(uVar2,0);
  if ((uVar1 & 1) != 0) {
    lVar3 = *(long *)(param_2 + 0x20);
    if (*(int *)(DAT_0918c430 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if (lVar3 != 0) {
      UnityEngine_RectTransform__GetWorldCorners(lVar3,**(undefined8 **)(DAT_0918c430 + 0xb8),0);
      lVar3 = **(long **)(DAT_0918c430 + 0xb8);
      if (lVar3 != 0) {
        if ((*(int *)(lVar3 + 0x18) != 0) && (*(int *)(lVar3 + 0x18) != 1)) {
          fVar4 = *(float *)(lVar3 + 0x24);
          if (fVar4 == *(float *)(lVar3 + 0x30)) {
            fVar4 = 0.0;
          }
          else {
            fVar5 = (param_1 - fVar4) / (*(float *)(lVar3 + 0x30) - fVar4);
            fVar6 = 1.0;
            if (fVar5 <= 1.0) {
              fVar6 = fVar5;
            }
            fVar4 = 0.0;
            if (0.0 <= fVar5) {
              fVar4 = fVar6;
            }
          }
          CakeOrder_Home_Journey_UIJourneyProgressBar__SetFillNormalized(fVar4,param_2);
          return;
        }
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  return;
}

