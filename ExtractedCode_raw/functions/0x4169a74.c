// rea decompile_all
// name: AnhPD.FoodOrder.SushiDropPlayer$$Kill
// address: 0x4169a74
// body: available
// range: 0x4169a74-0x4169c03 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4169bc8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4169be8 to 0x3f5c248 thunk_FUN_03f5d7b8 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x4169c00 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_SushiDropPlayer__Kill(long param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  
  if ((DAT_0951659d & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_0951659d = 1;
  }
  lVar1 = *(long *)(param_1 + 0x50);
  if (lVar1 != 0) {
    DG_Tweening_TweenExtensions__Kill(lVar1,0,0);
  }
  *(undefined8 *)(param_1 + 0x50) = 0;
  thunk_FUN_03f5d7b8((long *)(param_1 + 0x50),0);
  plVar4 = (long *)(param_1 + 0x30);
  lVar1 = *plVar4;
  if (lVar1 == 0) {
    return;
  }
  lVar5 = 0;
  uVar6 = 0;
  do {
    if ((long)(int)*(uint *)(lVar1 + 0x18) <= (long)uVar6) {
      *plVar4 = 0;
      thunk_FUN_03f5d7b8(plVar4,0);
      return;
    }
    if (*(uint *)(lVar1 + 0x18) <= uVar6) goto LAB_04169c00;
    lVar1 = *(long *)(lVar1 + uVar6 * 8 + 0x20);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar2 = UnityEngine_Object__op_Implicit(lVar1,0);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 0x38);
      if (lVar3 == 0) break;
      if (*(uint *)(lVar3 + 0x18) <= uVar6) {
LAB_04169c00:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      if (lVar1 == 0) break;
      lVar3 = lVar3 + lVar5;
      UnityEngine_Transform__set_localPosition
                (*(undefined4 *)(lVar3 + 0x20),*(undefined4 *)(lVar3 + 0x24),
                 *(undefined4 *)(lVar3 + 0x28),lVar1,0);
      lVar3 = *(long *)(param_1 + 0x40);
      if (lVar3 == 0) break;
      if (*(uint *)(lVar3 + 0x18) <= uVar6) goto LAB_04169c00;
      lVar3 = lVar3 + lVar5;
      UnityEngine_Transform__set_localScale
                (*(undefined4 *)(lVar3 + 0x20),*(undefined4 *)(lVar3 + 0x24),
                 *(undefined4 *)(lVar3 + 0x28),lVar1,0);
      lVar1 = UnityEngine_Component__get_gameObject(lVar1,0);
      lVar3 = *(long *)(param_1 + 0x48);
      if (lVar3 == 0) break;
      if (*(uint *)(lVar3 + 0x18) <= uVar6) goto LAB_04169c00;
      if (lVar1 == 0) break;
      UnityEngine_GameObject__SetActive(lVar1,*(undefined1 *)(lVar3 + uVar6 + 0x20),0);
    }
    lVar1 = *plVar4;
    uVar6 = uVar6 + 1;
    lVar5 = lVar5 + 0xc;
  } while (lVar1 != 0);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

