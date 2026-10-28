// rea decompile_all
// name: Utilities.UIScrollSnap$$HandleOcclusionCulling
// address: 0x452d828
// body: available
// range: 0x452d828-0x452da47 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x452da40 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x452da44 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Utilities_UIScrollSnap__HandleOcclusionCulling
               (undefined1 param_1 [16],float param_2,float param_3,float param_4,long param_5,
               ulong param_6)

{
  float *pfVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  float fVar6;
  undefined8 uVar7;
  float fVar8;
  
  if ((DAT_09518628 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09189c30);
    DAT_09518628 = 1;
  }
  if (*(char *)(param_5 + 0x50) != '\0') {
    uVar7 = *(undefined8 *)(param_5 + 0xb0);
    if (DAT_09516ea4 == '\0') {
      FUN_03f5c2a4(&DAT_09187e80);
      DAT_09516ea4 = '\x01';
    }
    if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    fVar6 = (float)uVar7;
    fVar8 = (float)((ulong)uVar7 >> 0x20);
    if (((0.0 < SQRT(fVar6 * fVar6 + fVar8 * fVar8)) || ((param_6 & 1) != 0)) &&
       (iVar2 = Utilities_UIScrollSnap__get_NumberOfPanels(param_5), 0 < iVar2)) {
      lVar5 = 4;
      do {
        if (*(int *)(param_5 + 0x24) == 1) {
          lVar4 = *(long *)(param_5 + 0xf0);
          if (lVar4 == 0) goto LAB_0452da40;
          if ((ulong)*(uint *)(lVar4 + 0x18) <= lVar5 - 4U) {
LAB_0452da44:
                    /* WARNING: Subroutine does not return */
            FUN_03f5c558();
          }
          lVar4 = *(long *)(lVar4 + lVar5 * 8);
          if (lVar4 == 0) goto LAB_0452da40;
          lVar4 = UnityEngine_Component__get_gameObject(lVar4,0);
          Utilities_UIScrollSnap__GetDisplacementFromCenter(param_5,(int)lVar5 + -4);
          lVar3 = Utilities_UIScrollSnap__get_ScrollRect(param_5);
          if ((lVar3 == 0) || (*(long *)(lVar3 + 0x40) == 0)) goto LAB_0452da40;
          UnityEngine_RectTransform__get_rect(*(long *)(lVar3 + 0x40),0);
          pfVar1 = (float *)(param_5 + 0x38);
          param_3 = param_4;
          if (*(int *)(DAT_09189c30 + 0xe4) == 0) {
            FUN_03f5c424();
          }
joined_r0x0452d9e0:
          if (lVar4 == 0) {
LAB_0452da40:
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          fVar6 = ABS(param_2);
          param_2 = param_3 * 0.5;
          param_3 = *pfVar1;
          param_2 = param_2 + param_3;
          UnityEngine_GameObject__SetActive(lVar4,fVar6 <= param_2,0);
        }
        else if (*(int *)(param_5 + 0x24) == 0) {
          lVar4 = *(long *)(param_5 + 0xf0);
          if (lVar4 == 0) goto LAB_0452da40;
          if ((ulong)*(uint *)(lVar4 + 0x18) <= lVar5 - 4U) goto LAB_0452da44;
          lVar4 = *(long *)(lVar4 + lVar5 * 8);
          if (lVar4 == 0) goto LAB_0452da40;
          lVar4 = UnityEngine_Component__get_gameObject(lVar4,0);
          param_2 = (float)Utilities_UIScrollSnap__GetDisplacementFromCenter
                                     (param_5,(int)lVar5 + -4);
          lVar3 = Utilities_UIScrollSnap__get_ScrollRect(param_5);
          if ((lVar3 == 0) || (*(long *)(lVar3 + 0x40) == 0)) goto LAB_0452da40;
          UnityEngine_RectTransform__get_rect(*(long *)(lVar3 + 0x40),0);
          pfVar1 = (float *)(param_5 + 0x34);
          if (*(int *)(DAT_09189c30 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          goto joined_r0x0452d9e0;
        }
        iVar2 = Utilities_UIScrollSnap__get_NumberOfPanels(param_5);
        lVar4 = lVar5 + -3;
        lVar5 = lVar5 + 1;
      } while (lVar4 < iVar2);
    }
  }
  return;
}

