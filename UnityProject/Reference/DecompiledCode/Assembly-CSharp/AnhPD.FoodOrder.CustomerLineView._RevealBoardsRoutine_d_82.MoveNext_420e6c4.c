// rea decompile_all
// name: AnhPD.FoodOrder.CustomerLineView.<RevealBoardsRoutine>d__82$$MoveNext
// address: 0x420e6c4
// body: available
// range: 0x420e6c4-0x420e983 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x420e980 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 AnhPD_FoodOrder_CustomerLineView_<RevealBoardsRoutine>d__82__MoveNext(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  undefined4 *puVar6;
  long lVar7;
  undefined4 uVar8;
  
  if ((DAT_09516c5d & 1) == 0) {
    FUN_03f5c2a4(&DAT_091aa748);
    FUN_03f5c2a4(&DAT_091aec58);
    FUN_03f5c2a4(&DAT_091aa6c8);
    FUN_03f5c2a4(&DAT_091aa750);
    FUN_03f5c2a4(&DAT_091dbeb0);
    FUN_03f5c2a4(&DAT_0918ce90);
    DAT_09516c5d = 1;
  }
  lVar7 = *(long *)(param_1 + 0x20);
  if (*(int *)(param_1 + 0x10) == 1) {
    iVar5 = *(int *)(param_1 + 0x30);
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    goto LAB_0420e8ec;
  }
  if (*(int *)(param_1 + 0x10) != 0) {
    return 0;
  }
  iVar5 = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  do {
    if (*(long *)(param_1 + 0x28) == 0) {
LAB_0420e980:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if (*(int *)(*(long *)(param_1 + 0x28) + 0x18) <= iVar5) {
      if (lVar7 != 0) {
        *(undefined8 *)(lVar7 + 0xf8) = 0;
        thunk_FUN_03f5d7b8((undefined8 *)(lVar7 + 0xf8),0);
        return 0;
      }
      goto LAB_0420e980;
    }
    if ((((lVar7 == 0) || (*(long *)(lVar7 + 0x30) == 0)) ||
        (plVar1 = (long *)FUN_057e0998(*(long *)(lVar7 + 0x30),iVar5,DAT_091aec58),
        plVar1 == (long *)0x0)) ||
       (lVar2 = UnityEngine_Component__get_gameObject(plVar1,0), lVar2 == 0)) goto LAB_0420e980;
    UnityEngine_GameObject__SetActive(lVar2,1,0);
    (**(code **)(*plVar1 + 0x218))(plVar1,*(undefined8 *)(*plVar1 + 0x220));
    uVar3 = UnityEngine_Component__get_transform(plVar1,0);
    DG_Tweening_ShortcutExtensions__DOKill(uVar3,0,0);
    lVar2 = UnityEngine_Component__get_transform(plVar1,0);
    if (DAT_09515ce6 == '\0') {
      FUN_03f5c2a4(&DAT_0918cbd0);
      DAT_09515ce6 = '\x01';
    }
    if (lVar2 == 0) goto LAB_0420e980;
    puVar6 = *(undefined4 **)(DAT_0918cbd0 + 0xb8);
    UnityEngine_Transform__set_localScale(*puVar6,puVar6[1],puVar6[2],lVar2,0);
    uVar3 = UnityEngine_Component__get_transform(plVar1,0);
    uVar3 = DG_Tweening_ShortcutExtensions__DOScale
                      (*(undefined4 *)(lVar7 + 0xe8),*(undefined4 *)(lVar7 + 0xec),
                       *(undefined4 *)(lVar7 + 0xf0),*(undefined4 *)(lVar7 + 0xe0),uVar3,0);
    FUN_04d95e8c(uVar3,0x1b,DAT_091dbeb0);
    if (*(long *)(param_1 + 0x28) == 0) goto LAB_0420e980;
    uVar3 = FUN_057e0998(*(long *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x30),DAT_091aa750);
    if (*(long *)(lVar7 + 0x150) == 0) goto LAB_0420e980;
    uVar4 = FUN_057e0998(*(long *)(lVar7 + 0x150),*(undefined4 *)(param_1 + 0x30),DAT_091aa6c8);
    uVar4 = AnhPD_FoodOrder_CustomerLineView__LooksOf(lVar7,uVar4);
    (**(code **)(*plVar1 + 0x1e8))(plVar1,uVar3,uVar4,*(undefined8 *)(*plVar1 + 0x1f0));
    if (*(long *)(param_1 + 0x28) == 0) goto LAB_0420e980;
    iVar5 = *(int *)(param_1 + 0x30);
    if (iVar5 < *(int *)(*(long *)(param_1 + 0x28) + 0x18) + -1) {
      uVar8 = *(undefined4 *)(lVar7 + 0xe4);
      uVar3 = thunk_FUN_03f9944c(DAT_0918ce90);
      UnityEngine_WaitForSeconds___ctor(uVar8,uVar3,0);
      *(undefined8 *)(param_1 + 0x18) = uVar3;
      thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x18),uVar3);
      *(undefined4 *)(param_1 + 0x10) = 1;
      return 1;
    }
LAB_0420e8ec:
    iVar5 = iVar5 + 1;
    *(int *)(param_1 + 0x30) = iVar5;
  } while( true );
}

