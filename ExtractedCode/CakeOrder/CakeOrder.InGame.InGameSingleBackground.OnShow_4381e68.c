// rea decompile_all
// name: CakeOrder.InGame.InGameSingleBackground$$OnShow
// address: 0x4381e68
// body: available
// range: 0x4381e68-0x4382143 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4382128 to 0x450b56c Utilities.GlobalShaderControl$$Apply (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x4382140 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_InGame_InGameSingleBackground__OnShow(long param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  if ((DAT_09517975 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b4c00);
    FUN_03f5c2a4(&DAT_091b4c08);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09216a10);
    DAT_09517975 = 1;
  }
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = UnityEngine_Object__op_Implicit(uVar5,0);
  if ((uVar2 & 1) != 0) {
    lVar4 = *(long *)(param_1 + 0x48);
    if (lVar4 == 0) goto LAB_04382140;
    lVar3 = *(long *)(param_1 + 0x28);
    uVar7 = 0xba83126f;
    iVar1 = *(int *)(lVar4 + 0x20) + 1;
    *(int *)(lVar4 + 0x20) = iVar1;
    *(float *)(lVar4 + 0x28) = *(float *)(lVar4 + 0x28) + -0.001;
    if (lVar3 == 0) goto LAB_04382140;
    UnityEngine_Rendering_SortingGroup__set_sortingOrder(lVar3,iVar1,0);
    if ((*(long *)(param_1 + 0x28) == 0) ||
       (lVar4 = UnityEngine_Component__get_transform(*(long *)(param_1 + 0x28),0), lVar4 == 0))
    goto LAB_04382140;
    uVar6 = UnityEngine_Transform__get_localPosition(lVar4,0);
    if ((*(long *)(param_1 + 0x48) == 0) || (*(long *)(param_1 + 0x28) == 0)) goto LAB_04382140;
    uVar8 = *(undefined4 *)(*(long *)(param_1 + 0x48) + 0x28);
    lVar4 = UnityEngine_Component__get_transform(*(long *)(param_1 + 0x28),0);
    if (lVar4 == 0) goto LAB_04382140;
    UnityEngine_Transform__set_localPosition(uVar6,uVar7,uVar8,lVar4,0);
    if ((*(long *)(param_1 + 0x28) == 0) ||
       (lVar4 = UnityEngine_Component__get_transform(*(long *)(param_1 + 0x28),0), lVar4 == 0))
    goto LAB_04382140;
    UnityEngine_Transform__SetAsLastSibling(lVar4,0);
  }
  uVar5 = *(undefined8 *)(param_1 + 0x30);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = UnityEngine_Object__op_Implicit(uVar5,0);
  if ((uVar2 & 1) != 0) {
    lVar4 = *(long *)(param_1 + 0x48);
    if (lVar4 == 0) goto LAB_04382140;
    lVar3 = *(long *)(param_1 + 0x30);
    uVar7 = 0xba83126f;
    iVar1 = *(int *)(lVar4 + 0x24) + 1;
    *(int *)(lVar4 + 0x24) = iVar1;
    *(float *)(lVar4 + 0x2c) = *(float *)(lVar4 + 0x2c) + -0.001;
    if (lVar3 == 0) goto LAB_04382140;
    UnityEngine_Rendering_SortingGroup__set_sortingOrder(lVar3,iVar1,0);
    if ((*(long *)(param_1 + 0x30) == 0) ||
       (lVar4 = UnityEngine_Component__get_transform(*(long *)(param_1 + 0x30),0), lVar4 == 0))
    goto LAB_04382140;
    uVar6 = UnityEngine_Transform__get_localPosition(lVar4,0);
    if ((*(long *)(param_1 + 0x48) == 0) || (*(long *)(param_1 + 0x30) == 0)) goto LAB_04382140;
    uVar8 = *(undefined4 *)(*(long *)(param_1 + 0x48) + 0x2c);
    lVar4 = UnityEngine_Component__get_transform(*(long *)(param_1 + 0x30),0);
    if (lVar4 == 0) goto LAB_04382140;
    UnityEngine_Transform__set_localPosition(uVar6,uVar7,uVar8,lVar4,0);
    if ((*(long *)(param_1 + 0x30) == 0) ||
       (lVar4 = UnityEngine_Component__get_transform(*(long *)(param_1 + 0x30),0), lVar4 == 0))
    goto LAB_04382140;
    UnityEngine_Transform__SetAsLastSibling(lVar4,0);
  }
  uVar2 = FUN_05a8f088(DAT_091b4c08);
  if ((uVar2 & 1) == 0) {
    return;
  }
  lVar4 = *(long *)(DAT_091b4c00 + 0x20);
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_03f95a6c();
  }
  lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x10);
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_03f95a6c();
  }
  if (**(long **)(lVar4 + 0xb8) != 0) {
    Utilities_GlobalShaderControl__SetFloat
              (*(undefined4 *)(param_1 + 0x38),**(long **)(lVar4 + 0xb8),DAT_09216a10,0);
    lVar4 = *(long *)(DAT_091b4c00 + 0x20);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_03f95a6c();
    }
    lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x10);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_03f95a6c();
    }
    if (**(long **)(lVar4 + 0xb8) != 0) {
      Utilities_GlobalShaderControl__Apply(**(long **)(lVar4 + 0xb8),0);
      return;
    }
  }
LAB_04382140:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

