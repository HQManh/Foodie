// rea decompile_all
// name: UniRx.MainThreadDispatcher$$DestroyDispatcher
// address: 0x40a5ea4
// body: available
// range: 0x40a5ea4-0x40a605f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40a601c to 0x8662bb0 UnityEngine.Object$$Destroy (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x40a605c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void UniRx_MainThreadDispatcher__DestroyDispatcher(long param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  if ((DAT_09515e4f & 1) == 0) {
    FUN_03f5c2a4(&DAT_091cdb38);
    FUN_03f5c2a4(&DAT_09187d70);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_0918c010);
    DAT_09515e4f = 1;
  }
  if (*(int *)(DAT_09187d70 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar5 = *(undefined8 *)(*(long *)(DAT_09187d70 + 0xb8) + 8);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424(DAT_09188ad0);
  }
  uVar2 = UnityEngine_Object__op_Inequality(param_1,uVar5,0);
  if ((uVar2 & 1) == 0) {
    return;
  }
  if ((param_1 == 0) || (lVar3 = UnityEngine_Component__get_gameObject(param_1,0), lVar3 == 0)) {
LAB_040a605c:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  lVar3 = FUN_04b7cbb8(lVar3,DAT_091cdb38);
  lVar4 = UnityEngine_Component__get_gameObject(param_1,0);
  if ((lVar4 == 0) || (lVar4 = UnityEngine_GameObject__get_transform(lVar4,0), lVar4 == 0))
  goto LAB_040a605c;
  iVar1 = UnityEngine_Transform__get_childCount(lVar4,0);
  if (iVar1 == 0) {
    if (lVar3 == 0) goto LAB_040a605c;
    if (*(int *)(lVar3 + 0x18) == 2) {
      if (*(long **)(lVar3 + 0x20) == (long *)0x0) {
        return;
      }
      lVar4 = **(long **)(lVar3 + 0x20);
      if (*(byte *)(lVar4 + 0x130) < *(byte *)(DAT_0918c010 + 0x130)) {
        return;
      }
      if (*(long *)(*(long *)(lVar4 + 200) + (ulong)*(byte *)(DAT_0918c010 + 0x130) * 8 + -8) !=
          DAT_0918c010) {
        return;
      }
      if (*(long **)(lVar3 + 0x28) == (long *)0x0) {
        return;
      }
      if (**(long **)(lVar3 + 0x28) != DAT_09187d70) {
        return;
      }
      param_1 = UnityEngine_Component__get_gameObject(param_1,0);
      iVar1 = *(int *)(DAT_09188ad0 + 0xe4);
      goto joined_r0x040a6000;
    }
  }
  iVar1 = *(int *)(DAT_09188ad0 + 0xe4);
joined_r0x040a6000:
  if (iVar1 == 0) {
    FUN_03f5c424(DAT_09188ad0);
  }
  UnityEngine_Object__Destroy(param_1,0);
  return;
}

