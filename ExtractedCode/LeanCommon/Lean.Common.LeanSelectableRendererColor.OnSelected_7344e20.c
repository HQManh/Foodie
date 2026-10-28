// rea decompile_all
// name: Lean.Common.LeanSelectableRendererColor$$OnSelected
// address: 0x7344e20
// body: available
// range: 0x7344e20-0x7344e23 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Lean_Common_LeanSelectableRendererColor__OnSelected(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  
  if ((DAT_095206d6 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c5438);
    FUN_03f5c2a4(&DAT_09187e40);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09214df0);
    DAT_095206d6 = 1;
  }
  plVar8 = (long *)(param_1 + 0x48);
  lVar9 = *plVar8;
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = UnityEngine_Object__op_Equality(lVar9,0,0);
  if ((uVar1 & 1) != 0) {
    uVar2 = FUN_04a6a14c(param_1,DAT_091c5438);
    *(undefined8 *)(param_1 + 0x48) = uVar2;
    thunk_FUN_03f5d7b8(plVar8,uVar2);
  }
  uVar2 = Lean_Common_LeanSelectableBehaviour__get_Selectable(param_1);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424(DAT_09188ad0);
  }
  uVar1 = UnityEngine_Object__op_Inequality(uVar2,0,0);
  if ((uVar1 & 1) == 0) {
LAB_07344d3c:
    puVar4 = (undefined4 *)(param_1 + 0x28);
    puVar3 = (undefined4 *)(param_1 + 0x2c);
    puVar5 = (undefined4 *)(param_1 + 0x30);
    puVar6 = (undefined4 *)(param_1 + 0x34);
  }
  else {
    lVar9 = Lean_Common_LeanSelectableBehaviour__get_Selectable(param_1);
    if (lVar9 == 0) goto LAB_07344df8;
    uVar1 = Lean_Common_LeanSelectable__get_IsSelected();
    if ((uVar1 & 1) == 0) goto LAB_07344d3c;
    puVar4 = (undefined4 *)(param_1 + 0x38);
    puVar3 = (undefined4 *)(param_1 + 0x3c);
    puVar5 = (undefined4 *)(param_1 + 0x40);
    puVar6 = (undefined4 *)(param_1 + 0x44);
  }
  uVar10 = *puVar4;
  plVar7 = (long *)(param_1 + 0x50);
  uVar11 = *puVar3;
  uVar12 = *puVar5;
  uVar13 = *puVar6;
  if (*plVar7 == 0) {
    lVar9 = thunk_FUN_03f9944c(DAT_09187e40);
    UnityEngine_MaterialPropertyBlock___ctor(lVar9,0);
    *plVar7 = lVar9;
    thunk_FUN_03f5d7b8(plVar7,lVar9);
  }
  if (*plVar8 != 0) {
    UnityEngine_Renderer__Internal_GetPropertyBlock(*plVar8,*plVar7,0);
    if (*plVar7 != 0) {
      UnityEngine_MaterialPropertyBlock__SetColor
                (uVar10,uVar11,uVar12,uVar13,*plVar7,DAT_09214df0,0);
      if (*plVar8 != 0) {
        UnityEngine_Renderer__SetPropertyBlock(*plVar8,*plVar7,0);
        return;
      }
    }
  }
LAB_07344df8:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

