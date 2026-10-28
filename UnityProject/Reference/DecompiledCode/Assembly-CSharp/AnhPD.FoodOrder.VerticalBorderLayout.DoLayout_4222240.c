// rea decompile_all
// name: AnhPD.FoodOrder.VerticalBorderLayout$$DoLayout
// address: 0x4222240
// body: available
// range: 0x4222240-0x422268b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x42224d8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4222668 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x422266c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4222670 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4222674 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4222678 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x422267c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4222684 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4222688 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x04222680) */

void AnhPD_FoodOrder_VerticalBorderLayout__DoLayout(long param_1)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  long *plVar7;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  int iVar13;
  undefined4 uVar14;
  
  if ((DAT_09516d31 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_09185b10);
    FUN_03f5c2a4(&DAT_091b1080);
    FUN_03f5c2a4(&DAT_091b1070);
    FUN_03f5c2a4(&DAT_091b10a8);
    FUN_03f5c2a4(&DAT_091b10b0);
    FUN_03f5c2a4(&DAT_091affe0);
    FUN_03f5c2a4(&DAT_0917cea8);
    FUN_03f5c2a4(&DAT_0918c010);
    FUN_03f5c2a4(&DAT_091dbeb0);
    DAT_09516d31 = 1;
  }
  lVar3 = thunk_FUN_03f9944c(DAT_0917cea8);
  FUN_057e0400(lVar3,DAT_091b1070);
  lVar4 = UnityEngine_Component__get_transform(param_1,0);
  if (lVar4 != 0) {
    plVar5 = (long *)UnityEngine_Transform__GetEnumerator(lVar4,0);
joined_r0x04222340:
    do {
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar4 = *plVar5;
      uVar11 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == DAT_09185b10) {
            puVar6 = (undefined8 *)(lVar4 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_042223ac;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar6 = (undefined8 *)FUN_03f95da8(plVar5,DAT_09185b10,0);
LAB_042223ac:
      uVar11 = (*(code *)*puVar6)(plVar5,puVar6[1]);
      if ((uVar11 & 1) == 0) {
        plVar5 = (long *)thunk_FUN_03f99350(plVar5,DAT_09185a58);
        if (plVar5 == (long *)0x0) goto LAB_04222560;
        lVar4 = *plVar5;
        uVar11 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar11 == 0) goto LAB_04222538;
        piVar12 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        goto LAB_04222520;
      }
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar4 = *plVar5;
      uVar11 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == DAT_09185b10) {
            puVar6 = (undefined8 *)(lVar4 + (long)(*piVar12 + 1) * 0x10 + 0x138);
            goto LAB_04222414;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar6 = (undefined8 *)FUN_03f95da8(plVar5,DAT_09185b10,1);
LAB_04222414:
      plVar7 = (long *)(*(code *)*puVar6)(plVar5,puVar6[1]);
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      if ((*(byte *)(*plVar7 + 0x130) < *(byte *)(DAT_0918c010 + 0x130)) ||
         (*(long *)(*(long *)(*plVar7 + 200) + (ulong)*(byte *)(DAT_0918c010 + 0x130) * 8 + -8) !=
          DAT_0918c010)) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c8d0(plVar7);
      }
      lVar4 = UnityEngine_Component__get_gameObject(plVar7,0);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar11 = UnityEngine_GameObject__get_activeSelf(lVar4,0);
      lVar4 = DAT_091b1080;
    } while ((uVar11 & 1) == 0);
    if (lVar3 != 0) {
      lVar10 = *(long *)(lVar3 + 0x10);
      *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
      if (lVar10 != 0) {
        uVar2 = *(uint *)(lVar3 + 0x18);
        if (uVar2 < *(uint *)(lVar10 + 0x18)) {
          *(uint *)(lVar3 + 0x18) = uVar2 + 1;
          plVar8 = (long *)(lVar10 + (long)(int)uVar2 * 8 + 0x20);
          *plVar8 = (long)plVar7;
          thunk_FUN_03f5d7b8(plVar8,plVar7);
        }
        else {
          FUN_057e0c68(lVar3,plVar7,
                       *(undefined8 *)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
        }
        goto joined_r0x04222340;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  goto LAB_0422266c;
  while( true ) {
    uVar11 = uVar11 - 1;
    piVar12 = piVar12 + 4;
    if (uVar11 == 0) break;
LAB_04222520:
    if (*(long *)(piVar12 + -2) == DAT_09185a58) {
      puVar6 = (undefined8 *)(lVar4 + (long)*piVar12 * 0x10 + 0x138);
      goto LAB_04222554;
    }
  }
LAB_04222538:
  puVar6 = (undefined8 *)FUN_03f95da8(plVar5,DAT_09185a58,0);
LAB_04222554:
  (*(code *)*puVar6)(plVar5,puVar6[1]);
LAB_04222560:
  if ((lVar3 != 0) && (lVar4 = *(long *)(param_1 + 0x20), lVar4 != 0)) {
    iVar1 = *(int *)(lVar3 + 0x18);
    if (iVar1 <= (int)*(uint *)(lVar4 + 0x18)) {
      if (*(uint *)(lVar4 + 0x18) <= iVar1 - 1U) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      if (0 < iVar1) {
        lVar4 = *(long *)(lVar4 + (ulong)(iVar1 - 1U) * 8 + 0x20);
        iVar13 = 0;
        do {
          uVar9 = FUN_057e0998(lVar3,iVar13,DAT_091b10b0);
          if (lVar4 == 0) goto LAB_0422266c;
          uVar9 = DG_Tweening_ShortcutExtensions__DOScale
                            (*(undefined4 *)(lVar4 + 0x10),0x3e4ccccd,uVar9,0);
          FUN_04d95e8c(uVar9,0x1b,DAT_091dbeb0);
          lVar10 = FUN_057e0998(lVar3,iVar13,DAT_091b10b0);
          if ((*(long *)(lVar4 + 0x18) == 0) ||
             (uVar14 = FUN_05863308(*(long *)(lVar4 + 0x18),iVar13,DAT_091affe0), lVar10 == 0))
          goto LAB_0422266c;
          UnityEngine_Transform__set_localPosition(0,uVar14,0,lVar10,0);
          iVar13 = iVar13 + 1;
        } while (iVar1 != iVar13);
      }
    }
    return;
  }
LAB_0422266c:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

