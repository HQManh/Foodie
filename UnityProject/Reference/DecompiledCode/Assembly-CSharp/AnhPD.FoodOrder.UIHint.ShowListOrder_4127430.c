// rea decompile_all
// name: AnhPD.FoodOrder.UIHint$$ShowListOrder
// address: 0x4127430
// body: available
// range: 0x4127430-0x41276b3 inclusive
// range: 0x412771c-0x4127a0b inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x41276ac to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41276b0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4127954 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_UIHint__ShowListOrder
               (long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  int iVar9;
  int iVar10;
  undefined8 local_98;
  undefined8 *puStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 *puStack_78;
  undefined8 local_70;
  
  if ((DAT_095162e0 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a4598);
    FUN_03f5c2a4(&DAT_091a45a0);
    FUN_03f5c2a4(&DAT_091a45a8);
    FUN_03f5c2a4(&DAT_091b0570);
    FUN_03f5c2a4(&DAT_091b0588);
    FUN_03f5c2a4(&DAT_091b0590);
    FUN_03f5c2a4(&DAT_091b05a8);
    FUN_03f5c2a4(&DAT_091b05b8);
    FUN_03f5c2a4(&DAT_091b13c0);
    FUN_03f5c2a4(&DAT_091b1398);
    FUN_03f5c2a4(&DAT_091b0608);
    FUN_03f5c2a4(&DAT_091b13c8);
    FUN_03f5c2a4(&DAT_091b0610);
    FUN_03f5c2a4(&DAT_091b13a0);
    FUN_03f5c2a4(&DAT_091b0620);
    FUN_03f5c2a4(&DAT_091d4c98);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_095162e0 = 1;
  }
  local_80 = 0;
  puStack_78 = (undefined8 *)0x0;
  local_70 = 0;
  *(undefined8 *)(param_1 + 0x148) = param_4;
  thunk_FUN_03f5d7b8(param_1 + 0x148,param_4);
  lVar6 = *(long *)(param_1 + 0x138);
  if (lVar6 != 0) {
    iVar9 = *(int *)(lVar6 + 0x18);
    *(undefined4 *)(lVar6 + 0x18) = 0;
    *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
    if (0 < iVar9) {
      System_Array__Clear(*(undefined8 *)(lVar6 + 0x10),0,iVar9,0);
    }
    if (param_2 != 0) {
      FUN_057e185c(&local_98,param_2,DAT_091b05a8);
      local_70 = local_88;
      puStack_78 = puStack_90;
      local_80 = local_98;
      local_98 = 0;
      puStack_90 = &local_80;
LAB_04127600:
      uVar2 = FUN_071bd28c(&local_80,DAT_091a45a0);
      uVar4 = local_70;
      if ((uVar2 & 1) != 0) {
        if (*(long *)(param_1 + 0x138) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        uVar2 = FUN_057e1004(*(long *)(param_1 + 0x138),local_70,DAT_091b0590);
        lVar6 = DAT_091b0570;
        if ((uVar2 & 1) == 0) {
          lVar3 = *(long *)(param_1 + 0x138);
          if (lVar3 != 0) {
            lVar7 = *(long *)(lVar3 + 0x10);
            *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
            if (lVar7 != 0) {
              uVar1 = *(uint *)(lVar3 + 0x18);
              if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                *(uint *)(lVar3 + 0x18) = uVar1 + 1;
                puVar8 = (undefined8 *)(lVar7 + (long)(int)uVar1 * 8 + 0x20);
                *puVar8 = uVar4;
                thunk_FUN_03f5d7b8(puVar8,uVar4);
              }
              else {
                FUN_057e0c68(lVar3,uVar4,
                             *(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
              }
              goto LAB_04127600;
            }
          }
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        goto LAB_04127600;
      }
      FUN_071bd288(&local_80,DAT_091a4598);
      while ((lVar6 = *(long *)(param_1 + 0x128), lVar6 != 0 && (*(long *)(param_1 + 0x138) != 0)))
      {
        if (*(int *)(*(long *)(param_1 + 0x138) + 0x18) <= *(int *)(lVar6 + 0x18)) {
          iVar9 = 0;
          goto LAB_04127770;
        }
        uVar4 = *(undefined8 *)(param_1 + 0xd8);
        uVar5 = *(undefined8 *)(param_1 + 0xe0);
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar4 = FUN_04c35338(uVar4,uVar5,DAT_091d4c98);
        AnhPD_FoodOrder_UIHint__RegisterBookmark(param_1,uVar4);
      }
    }
  }
LAB_04127954:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
LAB_04127770:
  lVar3 = *(long *)(param_1 + 0x138);
  if (*(int *)(lVar6 + 0x18) <= iVar9) {
    if (lVar3 != 0) {
      iVar9 = 0;
      goto LAB_04127800;
    }
    goto LAB_04127954;
  }
  if (lVar3 == 0) goto LAB_04127954;
  iVar10 = *(int *)(lVar3 + 0x18);
  lVar6 = FUN_057e0998(lVar6,iVar9,DAT_091b13a0);
  if (iVar9 < iVar10) {
    if ((*(long *)(param_1 + 0x138) == 0) ||
       (uVar4 = FUN_057e0998(*(long *)(param_1 + 0x138),iVar9,DAT_091b0610), lVar6 == 0))
    goto LAB_04127954;
    AnhPD_FoodOrder_UIHintBookmark__Init(lVar6,uVar4);
  }
  else {
    if ((lVar6 == 0) || (lVar6 = UnityEngine_Component__get_gameObject(lVar6,0), lVar6 == 0))
    goto LAB_04127954;
    UnityEngine_GameObject__SetActive(lVar6,0,0);
  }
  lVar6 = *(long *)(param_1 + 0x128);
  iVar9 = iVar9 + 1;
  if (lVar6 == 0) goto LAB_04127954;
  goto LAB_04127770;
LAB_04127800:
  iVar10 = *(int *)(lVar3 + 0x18);
  if (iVar10 <= iVar9) {
    lVar6 = *(long *)(param_1 + 0x118);
    if (lVar6 != 0) goto LAB_04127914;
    goto LAB_04127954;
  }
  AnhPD_FoodOrder_UIHint__EnsureHolder(param_1,iVar9);
  if (*(long *)(param_1 + 0x120) == 0) goto LAB_04127954;
  uVar4 = FUN_057e0998(*(long *)(param_1 + 0x120),iVar9,DAT_091b0610);
  if (*(long *)(param_1 + 0x138) == 0) goto LAB_04127954;
  uVar5 = FUN_057e0998(*(long *)(param_1 + 0x138),iVar9,DAT_091b0610);
  uVar2 = System_String__op_Inequality(uVar4,uVar5,0);
  if ((uVar2 & 1) != 0) {
    if (*(long *)(param_1 + 0x118) == 0) goto LAB_04127954;
    uVar4 = FUN_057e0998(*(long *)(param_1 + 0x118),iVar9,DAT_091b13c8);
    if (*(long *)(param_1 + 0x138) == 0) goto LAB_04127954;
    uVar5 = FUN_057e0998(*(long *)(param_1 + 0x138),iVar9,DAT_091b0610);
    AnhPD_FoodOrder_UIHint__InitHolderForId(param_1,uVar4,uVar5);
    if (*(long *)(param_1 + 0x138) == 0) goto LAB_04127954;
    lVar6 = *(long *)(param_1 + 0x120);
    uVar4 = FUN_057e0998(*(long *)(param_1 + 0x138),iVar9,DAT_091b0610);
    if (lVar6 == 0) goto LAB_04127954;
    FUN_057e09ec(lVar6,iVar9,uVar4,DAT_091b0620);
  }
  if (((*(long *)(param_1 + 0x118) == 0) ||
      (lVar6 = FUN_057e0998(*(long *)(param_1 + 0x118),iVar9,DAT_091b13c8), lVar6 == 0)) ||
     (lVar6 = UnityEngine_Component__get_gameObject(lVar6,0), lVar6 == 0)) goto LAB_04127954;
  UnityEngine_GameObject__SetActive(lVar6,0,0);
  lVar3 = *(long *)(param_1 + 0x138);
  iVar9 = iVar9 + 1;
  if (lVar3 == 0) goto LAB_04127954;
  goto LAB_04127800;
LAB_04127914:
  if (*(int *)(lVar6 + 0x18) <= iVar10) {
    *(undefined1 *)(param_1 + 0x140) = 1;
    uVar2 = System_String__IsNullOrEmpty(param_3,0);
    if ((uVar2 & 1) == 0) {
      if (*(long *)(param_1 + 0x138) == 0) goto LAB_04127954;
      uVar1 = FUN_057e1a08(*(long *)(param_1 + 0x138),param_3,DAT_091b05b8);
    }
    else {
      uVar1 = 0xffffffff;
    }
    if (*(long *)(param_1 + 0x128) != 0) {
      uVar4 = FUN_057e0998(*(long *)(param_1 + 0x128),uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU),
                           DAT_091b13a0);
      AnhPD_FoodOrder_UIHint__OnBookmarkSelected(param_1,uVar4);
      if (*(long *)(param_1 + 0xf8) != 0) {
        lVar6 = UnityEngine_Component__get_gameObject(*(long *)(param_1 + 0xf8),0);
        if ((*(long *)(param_1 + 0x138) != 0) && (lVar6 != 0)) {
          UnityEngine_GameObject__SetActive(lVar6,1 < *(int *)(*(long *)(param_1 + 0x138) + 0x18),0)
          ;
          return;
        }
      }
    }
    goto LAB_04127954;
  }
  lVar6 = FUN_057e0998(lVar6,iVar10,DAT_091b13c8);
  if ((lVar6 == 0) || (lVar6 = UnityEngine_Component__get_gameObject(lVar6,0), lVar6 == 0))
  goto LAB_04127954;
  UnityEngine_GameObject__SetActive(lVar6,0,0);
  lVar6 = *(long *)(param_1 + 0x118);
  iVar10 = iVar10 + 1;
  if (lVar6 == 0) goto LAB_04127954;
  goto LAB_04127914;
}

