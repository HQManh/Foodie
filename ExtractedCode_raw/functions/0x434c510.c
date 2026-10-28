// rea decompile_all
// name: CakeOrder.Home.Map.HomeLevelLink$$SetUp
// address: 0x434c510
// body: available
// range: 0x434c510-0x434c65f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x434c654 to 0x42cae94 CakeOrder.BaseUI.UIElementAbstract$$HideImmediate (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x434c658 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x434c65c to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_Home_Map_HomeLevelLink__SetUp
               (undefined1 param_1 [16],float param_2,float param_3,long param_4,undefined8 param_5,
               long param_6,undefined8 param_7)

{
  long lVar1;
  uint uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  float fVar8;
  
  *(undefined8 *)(param_4 + 0x50) = param_5;
  thunk_FUN_03f5d7b8();
  plVar3 = (long *)(param_4 + 0x40);
  *plVar3 = param_6;
  thunk_FUN_03f5d7b8(plVar3,param_6);
  *(undefined8 *)(param_4 + 0x48) = param_7;
  thunk_FUN_03f5d7b8((undefined8 *)(param_4 + 0x48),param_7);
  lVar5 = *(long *)(param_4 + 0x38);
  if (lVar5 != 0) {
    uVar2 = *(uint *)(lVar5 + 0x18);
    if (0 < (int)uVar2) {
      lVar6 = 0;
      do {
        if (uVar2 <= (uint)lVar6) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        lVar7 = *(long *)(lVar5 + 0x20 + lVar6 * 8);
        if ((lVar7 == 0) || (*(long *)(lVar7 + 0x10) == 0)) goto LAB_0434c658;
        UnityEngine_LineRenderer__set_positionCount(*(long *)(lVar7 + 0x10),2,0);
        if (*plVar3 == 0) goto LAB_0434c658;
        lVar4 = *(long *)(lVar7 + 0x10);
        lVar1 = UnityEngine_Component__get_transform(*plVar3,0);
        if ((lVar1 == 0) ||
           (fVar8 = (float)UnityEngine_Transform__get_position(lVar1,0), lVar4 == 0))
        goto LAB_0434c658;
        param_3 = param_3 + *(float *)(lVar7 + 0x20);
        param_2 = param_2 + *(float *)(lVar7 + 0x1c);
        UnityEngine_LineRenderer__SetPosition
                  (fVar8 + *(float *)(lVar7 + 0x18),param_2,param_3,lVar4,0,0);
        if (*plVar3 == 0) goto LAB_0434c658;
        lVar4 = *(long *)(lVar7 + 0x10);
        lVar1 = UnityEngine_Component__get_transform(*plVar3,0);
        if ((lVar1 == 0) ||
           (fVar8 = (float)UnityEngine_Transform__get_position(lVar1,0), lVar4 == 0))
        goto LAB_0434c658;
        param_3 = param_3 + *(float *)(lVar7 + 0x20);
        param_2 = param_2 + *(float *)(lVar7 + 0x1c);
        UnityEngine_LineRenderer__SetPosition
                  (fVar8 + *(float *)(lVar7 + 0x18),param_2,param_3,lVar4,1,0);
        uVar2 = *(uint *)(lVar5 + 0x18);
        lVar6 = lVar6 + 1;
      } while ((int)lVar6 < (int)uVar2);
    }
    CakeOrder_BaseUI_UIElementAbstract__HideImmediate(param_4,0);
    return;
  }
LAB_0434c658:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

