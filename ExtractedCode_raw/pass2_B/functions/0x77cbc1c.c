// rea decompile_all
// name: _GAME.Inbox.PopupInboxDetailCtrl$$ClearRewardCells
// address: 0x77cbc1c
// body: available
// range: 0x77cbc1c-0x77cbeff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x77cbee0 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77cbee4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77cbee8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77cbeec to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77cbef0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77cbef4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77cbefc to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x077cbef8) */

void _GAME_Inbox_PopupInboxDetailCtrl__ClearRewardCells(long param_1)

{
  int iVar1;
  long *plVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  
  if ((DAT_09522f8c & 1) == 0) {
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_09185b10);
    FUN_03f5c2a4(&DAT_091afa80);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_0918c010);
    DAT_09522f8c = 1;
  }
  if (*(long *)(param_1 + 0x130) != 0) {
    plVar2 = (long *)UnityEngine_Transform__GetEnumerator(*(long *)(param_1 + 0x130),0);
    do {
      if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar6 = *plVar2;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == DAT_09185b10) {
            puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_077cbd24;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar3 = (undefined8 *)FUN_03f95da8(plVar2,DAT_09185b10,0);
LAB_077cbd24:
      uVar7 = (*(code *)*puVar3)(plVar2,puVar3[1]);
      if ((uVar7 & 1) == 0) {
        plVar2 = (long *)thunk_FUN_03f99350(plVar2,DAT_09185a58);
        if (plVar2 == (long *)0x0) goto LAB_077cbe94;
        lVar6 = *plVar2;
        uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar7 == 0) goto LAB_077cbe6c;
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        goto LAB_077cbe54;
      }
      if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar6 = *plVar2;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == DAT_09185b10) {
            puVar3 = (undefined8 *)(lVar6 + (long)(*piVar8 + 1) * 0x10 + 0x138);
            goto LAB_077cbd8c;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar3 = (undefined8 *)FUN_03f95da8(plVar2,DAT_09185b10,1);
LAB_077cbd8c:
      plVar4 = (long *)(*(code *)*puVar3)(plVar2,puVar3[1]);
      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      if ((*(byte *)(*plVar4 + 0x130) < *(byte *)(DAT_0918c010 + 0x130)) ||
         (*(long *)(*(long *)(*plVar4 + 200) + (ulong)*(byte *)(DAT_0918c010 + 0x130) * 8 + -8) !=
          DAT_0918c010)) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c8d0(plVar4);
      }
      lVar6 = UnityEngine_Component__get_gameObject(plVar4,0);
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      UnityEngine_GameObject__SetActive(lVar6,0,0);
      uVar5 = UnityEngine_Component__get_gameObject(plVar4,0);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      UnityEngine_Object__Destroy(uVar5,0);
    } while( true );
  }
  goto LAB_077cbef4;
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar8 = piVar8 + 4;
    if (uVar7 == 0) break;
LAB_077cbe54:
    if (*(long *)(piVar8 + -2) == DAT_09185a58) {
      puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
      goto LAB_077cbe88;
    }
  }
LAB_077cbe6c:
  puVar3 = (undefined8 *)FUN_03f95da8(plVar2,DAT_09185a58,0);
LAB_077cbe88:
  (*(code *)*puVar3)(plVar2,puVar3[1]);
LAB_077cbe94:
  lVar6 = *(long *)(param_1 + 0x128);
  if (lVar6 != 0) {
    iVar1 = *(int *)(lVar6 + 0x18);
    *(undefined4 *)(lVar6 + 0x18) = 0;
    *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
    if (0 < iVar1) {
      System_Array__Clear(*(undefined8 *)(lVar6 + 0x10),0,iVar1,0);
    }
    return;
  }
LAB_077cbef4:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

