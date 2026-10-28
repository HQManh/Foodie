// rea decompile_all
// name: AnhPD.FoodOrder.ConveyorChainRopeView$$DrawAnchors
// address: 0x40d8d08
// body: available
// range: 0x40d8d08-0x40d8f63 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40d8f4c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_ConveyorChainRopeView__DrawAnchors(long param_1,uint param_2)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  undefined8 uVar6;
  
  if ((DAT_09516022 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b1a68);
    FUN_03f5c2a4(&DAT_091b0428);
    FUN_03f5c2a4(&DAT_091b1a70);
    FUN_03f5c2a4(&DAT_091b0430);
    FUN_03f5c2a4(&DAT_091aba98);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09516022 = 1;
  }
  uVar6 = *(undefined8 *)(param_1 + 0x88);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = UnityEngine_Object__op_Implicit(uVar6,0);
  if ((uVar2 & 1) != 0) {
    uVar6 = *(undefined8 *)(param_1 + 0x30);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar2 = UnityEngine_Object__op_Implicit(uVar6,0);
    if ((uVar2 & 1) != 0) {
      lVar4 = *(long *)(param_1 + 0x20);
      if (lVar4 != 0) {
        iVar5 = 0;
        do {
          iVar1 = *(int *)(lVar4 + 0x18);
          if (iVar1 <= iVar5) {
            lVar4 = *(long *)(param_1 + 0x18);
            goto joined_r0x040d8ec4;
          }
          lVar4 = AnhPD_FoodOrder_ConveyorChainRopeView__GetAnchor(param_1,iVar5);
          if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
            FUN_03f5c424(DAT_09188ad0);
          }
          uVar2 = UnityEngine_Object__op_Implicit(lVar4,0);
          if ((uVar2 & 1) != 0) {
            if ((lVar4 == 0) || (lVar3 = UnityEngine_Component__get_gameObject(lVar4,0), lVar3 == 0)
               ) break;
            UnityEngine_GameObject__SetActive(lVar3,1,0);
            UnityEngine_SpriteRenderer__set_maskInteraction(lVar4,param_2 & 1,0);
            if (*(long *)(param_1 + 0x28) == 0) break;
            FUN_0572e758(*(long *)(param_1 + 0x28),iVar5,DAT_091aba98);
            UnityEngine_SpriteRenderer__set_color(lVar4,0);
            lVar4 = UnityEngine_Component__get_transform(lVar4,0);
            if ((*(long *)(param_1 + 0x20) == 0) ||
               (FUN_058b15e4(*(long *)(param_1 + 0x20),iVar5,DAT_091b1a70), lVar4 == 0)) break;
            UnityEngine_Transform__set_position(lVar4,0);
          }
          lVar4 = *(long *)(param_1 + 0x20);
          iVar5 = iVar5 + 1;
        } while (lVar4 != 0);
      }
LAB_040d8f4c:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
  }
  return;
joined_r0x040d8ec4:
  if (lVar4 == 0) goto LAB_040d8f4c;
  if (*(int *)(lVar4 + 0x18) <= iVar1) {
    return;
  }
  uVar6 = FUN_057e0998(lVar4,iVar1,DAT_091b0430);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424(DAT_09188ad0);
  }
  uVar2 = UnityEngine_Object__op_Implicit(uVar6,0);
  if ((uVar2 & 1) != 0) {
    if (((*(long *)(param_1 + 0x18) == 0) ||
        (lVar4 = FUN_057e0998(*(long *)(param_1 + 0x18),iVar1,DAT_091b0430), lVar4 == 0)) ||
       (lVar4 = UnityEngine_Component__get_gameObject(lVar4,0), lVar4 == 0)) goto LAB_040d8f4c;
    UnityEngine_GameObject__SetActive(lVar4,0,0);
  }
  lVar4 = *(long *)(param_1 + 0x18);
  iVar1 = iVar1 + 1;
  goto joined_r0x040d8ec4;
}

