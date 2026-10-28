// rea decompile_all
// name: Utilities.UIScrollSnap$$HandleTransitionEffects
// address: 0x452de8c
// body: available
// range: 0x452de8c-0x452dfdf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x452dfd8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x452dfdc to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Utilities_UIScrollSnap__HandleTransitionEffects
               (undefined1 param_1 [16],float param_2,long param_3)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  float fVar6;
  
  if ((DAT_0951862a & 1) == 0) {
    FUN_03f5c2a4(&DAT_091be198);
    DAT_0951862a = 1;
  }
  if (*(long *)(param_3 + 200) != 0) {
    iVar1 = UnityEngine_Events_UnityEventBase__GetPersistentEventCount(*(long *)(param_3 + 200),0);
    if ((iVar1 != 0) && (iVar1 = Utilities_UIScrollSnap__get_NumberOfPanels(param_3), 0 < iVar1)) {
      uVar4 = 0;
      do {
        fVar6 = (float)Utilities_UIScrollSnap__GetDisplacementFromCenter(param_3,uVar4 & 0xffffffff)
        ;
        if (*(int *)(param_3 + 0x20) == 1) {
          if (DAT_09516ea4 == '\0') {
            FUN_03f5c2a4(&DAT_09187e80);
            DAT_09516ea4 = '\x01';
          }
          if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          param_2 = param_2 * param_2;
          fVar6 = SQRT(fVar6 * fVar6 + param_2);
        }
        else if (*(int *)(param_3 + 0x24) != 0) {
          fVar6 = param_2;
        }
        lVar3 = *(long *)(param_3 + 0xf0);
        if (lVar3 == 0) goto LAB_0452dfd8;
        if (*(uint *)(lVar3 + 0x18) <= (uint)uVar4) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        lVar3 = *(long *)(lVar3 + uVar4 * 8 + 0x20);
        if (lVar3 == 0) goto LAB_0452dfd8;
        lVar5 = *(long *)(param_3 + 200);
        uVar2 = UnityEngine_Component__get_gameObject(lVar3,0);
        if (lVar5 == 0) goto LAB_0452dfd8;
        FUN_0648247c(fVar6,lVar5,uVar2,DAT_091be198);
        iVar1 = Utilities_UIScrollSnap__get_NumberOfPanels(param_3);
        uVar4 = uVar4 + 1;
      } while ((int)uVar4 < iVar1);
    }
    return;
  }
LAB_0452dfd8:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

