// rea decompile_all
// name: CakeOrder.Home.Map.HomeLevelLink$$ShowElement
// address: 0x434c718
// body: available
// range: 0x434c718-0x434c89f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x434c894 to 0x3f5c248 thunk_FUN_03f5d7b8 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x434c898 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x434c89c to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_Home_Map_HomeLevelLink__ShowElement
               (undefined1 param_1 [16],float param_2,float param_3,long param_4)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  float fVar9;
  
  plVar5 = (long *)(param_4 + 0x58);
  if (*plVar5 != 0) {
    UnityEngine_MonoBehaviour__StopCoroutine(param_4,*plVar5,0);
    *(undefined8 *)(param_4 + 0x58) = 0;
    thunk_FUN_03f5d7b8(plVar5,0);
  }
  lVar2 = UnityEngine_Component__get_gameObject(param_4,0);
  if (lVar2 != 0) {
    UnityEngine_GameObject__SetActive(lVar2,1,0);
    if (*(char *)(param_4 + 0x60) == '\0') {
      *(undefined1 *)(param_4 + 0x60) = 1;
      uVar4 = CakeOrder_Home_Map_HomeLevelLink__<ShowElement>g__IEShowLine_11_0(param_4);
      uVar4 = UnityEngine_MonoBehaviour__StartCoroutine(param_4,uVar4,0);
      *(undefined8 *)(param_4 + 0x58) = uVar4;
      thunk_FUN_03f5d7b8(plVar5);
      return;
    }
    lVar2 = *(long *)(param_4 + 0x38);
    if (lVar2 != 0) {
      uVar1 = *(uint *)(lVar2 + 0x18);
      if (0 < (int)uVar1) {
        lVar7 = 0;
        do {
          if (uVar1 <= (uint)lVar7) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c558();
          }
          lVar8 = *(long *)(lVar2 + 0x20 + lVar7 * 8);
          if ((lVar8 == 0) || (*(long *)(param_4 + 0x40) == 0)) goto LAB_0434c898;
          lVar6 = *(long *)(lVar8 + 0x10);
          lVar3 = UnityEngine_Component__get_transform(*(long *)(param_4 + 0x40),0);
          if ((lVar3 == 0) ||
             (fVar9 = (float)UnityEngine_Transform__get_position(lVar3,0), lVar6 == 0))
          goto LAB_0434c898;
          param_3 = param_3 + *(float *)(lVar8 + 0x20);
          param_2 = param_2 + *(float *)(lVar8 + 0x1c);
          UnityEngine_LineRenderer__SetPosition
                    (fVar9 + *(float *)(lVar8 + 0x18),param_2,param_3,lVar6,0,0);
          if (*(long *)(param_4 + 0x48) == 0) goto LAB_0434c898;
          lVar6 = *(long *)(lVar8 + 0x10);
          lVar3 = UnityEngine_Component__get_transform(*(long *)(param_4 + 0x48),0);
          if ((lVar3 == 0) ||
             (fVar9 = (float)UnityEngine_Transform__get_position(lVar3,0), lVar6 == 0))
          goto LAB_0434c898;
          param_3 = param_3 + *(float *)(lVar8 + 0x20);
          param_2 = param_2 + *(float *)(lVar8 + 0x1c);
          UnityEngine_LineRenderer__SetPosition
                    (fVar9 + *(float *)(lVar8 + 0x18),param_2,param_3,lVar6,1,0);
          uVar1 = *(uint *)(lVar2 + 0x18);
          lVar7 = lVar7 + 1;
        } while ((int)lVar7 < (int)uVar1);
      }
      return;
    }
  }
LAB_0434c898:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

