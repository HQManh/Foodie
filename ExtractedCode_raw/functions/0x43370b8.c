// rea decompile_all
// name: CakeOrder.Home.UIPetAssistantDetails$$OnAssignPet
// address: 0x43370b8
// body: available
// range: 0x43370b8-0x43371d3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x433712c to 0x865b360 UnityEngine.GameObject$$SetActive (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x43371b4 to 0x877f618 UnityEngine.UI.Image$$set_sprite (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x43371d0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_Home_UIPetAssistantDetails__OnAssignPet(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  
  uVar2 = System_String__op_Equality(param_2,*(undefined8 *)(param_1 + 0x48),0);
  if ((uVar2 & 1) == 0) {
    return;
  }
  plVar5 = (long *)(param_1 + 0x68);
  *plVar5 = param_3;
  thunk_FUN_03f5d7b8(plVar5,param_3);
  if ((param_3 != 0) &&
     (uVar2 = System_String__IsNullOrEmpty(*(undefined8 *)(param_3 + 0x18),0), (uVar2 & 1) == 0)) {
    if (*plVar5 == 0) goto LAB_043371d0;
    iVar1 = *(int *)(*plVar5 + 0x20);
    if (iVar1 - 2U < 2) {
      if ((*(long *)(param_1 + 0xc0) != 0) && (lVar3 = *(long *)(param_1 + 0xb0), lVar3 != 0)) {
        uVar4 = *(undefined8 *)(*(long *)(param_1 + 0xc0) + 0x10);
LAB_043371a8:
        UnityEngine_UI_Image__set_sprite(lVar3,uVar4,0);
        return;
      }
      goto LAB_043371d0;
    }
    if (iVar1 == 1) {
      if ((*(long *)(param_1 + 0xc0) != 0) && (lVar3 = *(long *)(param_1 + 0xb0), lVar3 != 0)) {
        uVar4 = *(undefined8 *)(*(long *)(param_1 + 0xc0) + 0x20);
        goto LAB_043371a8;
      }
      goto LAB_043371d0;
    }
    if (iVar1 == 4) {
      if ((*(long *)(param_1 + 0xc0) != 0) && (lVar3 = *(long *)(param_1 + 0xb0), lVar3 != 0)) {
        uVar4 = *(undefined8 *)(*(long *)(param_1 + 0xc0) + 0x18);
        goto LAB_043371a8;
      }
      goto LAB_043371d0;
    }
    if (*(long *)(param_1 + 0xb0) == 0) goto LAB_043371d0;
    UnityEngine_UI_Image__set_sprite(*(long *)(param_1 + 0xb0),0,0);
  }
  if ((*(long *)(param_1 + 0xb0) != 0) &&
     (lVar3 = UnityEngine_Component__get_gameObject(*(long *)(param_1 + 0xb0),0), lVar3 != 0)) {
    UnityEngine_GameObject__SetActive(lVar3,0,0);
    return;
  }
LAB_043371d0:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

